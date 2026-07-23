/*
 * XREFs of EtwpCCSwapStart @ 0x140727F8C
 * Callers:
 *     EtwpUpdateGroupMasks @ 0x1407270E8 (EtwpUpdateGroupMasks.c)
 * Callees:
 *     KeGetPrcb @ 0x1400A6204 (KeGetPrcb.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpCCSwapStart(unsigned int a1)
{
  ULONG v1; // ebp
  __int64 v2; // rdi
  int v3; // eax
  ULONG v4; // esi
  __int64 v5; // rbx
  PVOID PoolWithTag; // rax
  ULONG i; // ebp
  __int64 v9; // rbx

  v1 = KeNumberProcessors_0;
  v2 = a1;
  v3 = CCSwapNumLoggersPerClockType[a1];
  if ( v3 || (v4 = 0, !(_DWORD)KeNumberProcessors_0) )
  {
LABEL_7:
    CCSwapNumLoggersPerClockType[v2] = v3 + 1;
    return 0LL;
  }
  while ( 1 )
  {
    v5 = *(_QWORD *)(KeGetPrcb(v4) + 24616);
    if ( *(_QWORD *)(v5 + 8 * v2 + 296) )
    {
      *(_BYTE *)(v2 + v5 + 288) = 0;
      goto LABEL_5;
    }
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x400uLL, 0x77734343u);
    *(_QWORD *)(v5 + 8 * v2 + 296) = PoolWithTag;
    if ( !PoolWithTag )
      break;
LABEL_5:
    ++v4;
    **(_DWORD **)(v5 + 8 * v2 + 296) = 0;
    if ( v4 >= v1 )
    {
      v3 = CCSwapNumLoggersPerClockType[v2];
      goto LABEL_7;
    }
  }
  for ( i = 0; i < v4; ++i )
  {
    v9 = *(_QWORD *)(KeGetPrcb(i) + 24616);
    ExFreePoolWithTag(*(PVOID *)(v9 + 8 * v2 + 296), 0);
    *(_QWORD *)(v9 + 8 * v2 + 296) = 0LL;
  }
  return 3221225495LL;
}
