/*
 * XREFs of MiCreateColorAnchors @ 0x14085E1C4
 * Callers:
 *     MiAllocateLargeZeroPages @ 0x14085DB40 (MiAllocateLargeZeroPages.c)
 * Callees:
 *     KeQueryNodeActiveAffinity @ 0x1400E3CC0 (KeQueryNodeActiveAffinity.c)
 *     MiGetClosestNodeWithProcessors @ 0x1402BB9D4 (MiGetClosestNodeWithProcessors.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall MiCreateColorAnchors(__int64 a1, unsigned int a2, int a3)
{
  unsigned int ClosestNodeWithProcessors; // eax
  USHORT v5; // ax
  unsigned int v6; // ebx
  __int64 v7; // rsi
  __int64 result; // rax
  _QWORD *v9; // rcx
  USHORT Count; // [rsp+40h] [rbp+18h] BYREF

  if ( a3 )
  {
    Count = 0;
    ClosestNodeWithProcessors = MiGetClosestNodeWithProcessors(a2);
    if ( ClosestNodeWithProcessors >= (unsigned __int16)KeNumberNodes
      || (KeQueryNodeActiveAffinity(ClosestNodeWithProcessors, 0LL, &Count), (v5 = Count) == 0) )
    {
      v5 = 2;
    }
    v6 = v5;
  }
  else
  {
    v6 = dword_14043B14C;
  }
  v7 = v6;
  result = (__int64)ExAllocatePoolWithTag(NonPagedPoolNx, 24LL * v6, 0x6C646D4Du);
  if ( result )
  {
    if ( v6 )
    {
      v9 = (_QWORD *)(result + 16);
      do
      {
        *(v9 - 1) = 0LL;
        *v9 = 0LL;
        v9 += 3;
        --v7;
      }
      while ( v7 );
    }
    *(_QWORD *)a1 = result;
    result = 1LL;
    *(_DWORD *)(a1 + 20) = 0;
    *(_DWORD *)(a1 + 16) = v6;
    *(_DWORD *)(a1 + 8) = 0;
  }
  return result;
}
