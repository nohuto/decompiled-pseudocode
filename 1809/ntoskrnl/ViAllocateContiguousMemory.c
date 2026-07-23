/*
 * XREFs of ViAllocateContiguousMemory @ 0x14092D590
 * Callers:
 *     ViHookDmaAdapter @ 0x14092EF30 (ViHookDmaAdapter.c)
 * Callees:
 *     RtlClearAllBits @ 0x14000FA60 (RtlClearAllBits.c)
 *     RtlSetBits @ 0x140076D70 (RtlSetBits.c)
 *     MmAllocateContiguousNodeMemory @ 0x1400E6500 (MmAllocateContiguousNodeMemory.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall ViAllocateContiguousMemory(__int64 a1)
{
  int v2; // eax
  __int64 v3; // rdi
  __int64 result; // rax
  ULONG v5; // ebp
  __int64 v6; // r14
  __int64 v7; // [rsp+50h] [rbp+8h]

  HIDWORD(v7) = 0;
  v2 = 0xFFFF;
  if ( *(_BYTE *)(a1 + 203) )
  {
    v3 = -1LL;
  }
  else
  {
    if ( *(_BYTE *)(a1 + 200) )
    {
      LODWORD(v7) = -1;
    }
    else
    {
      if ( *(_DWORD *)(a1 + 212) == 1 )
        v2 = 0xFFFFFF;
      LODWORD(v7) = v2;
    }
    v3 = v7;
  }
  *(_DWORD *)(a1 + 296) = 32;
  *(_QWORD *)(a1 + 304) = a1 + 288;
  RtlClearAllBits((PRTL_BITMAP)(a1 + 296));
  result = (__int64)ExAllocatePoolWithTag(NonPagedPoolNx, 0x100uLL, 0x566C6148u);
  *(_QWORD *)(a1 + 264) = result;
  if ( result )
  {
    v5 = 0;
    v6 = 0LL;
    do
    {
      *(_QWORD *)(v6 + *(_QWORD *)(a1 + 264)) = MmAllocateContiguousNodeMemory(12288, 0LL, v3, 0, 4u, 0x80000000);
      if ( *(_QWORD *)(v6 + *(_QWORD *)(a1 + 264)) )
      {
        result = 272LL;
      }
      else
      {
        RtlSetBits((PRTL_BITMAP)(a1 + 296), v5, 1u);
        result = 276LL;
      }
      _InterlockedIncrement((volatile signed __int32 *)(result + a1));
      ++v5;
      v6 += 8LL;
    }
    while ( v5 < 0x20 );
  }
  return result;
}
