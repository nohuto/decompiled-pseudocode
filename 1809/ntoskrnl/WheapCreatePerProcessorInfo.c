/*
 * XREFs of WheapCreatePerProcessorInfo @ 0x1409AFD88
 * Callers:
 *     WheaInitialize @ 0x1409B0D68 (WheaInitialize.c)
 * Callees:
 *     KeGetPrcb @ 0x1400A6204 (KeGetPrcb.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 */

__int64 WheapCreatePerProcessorInfo()
{
  ULONG_PTR v0; // rbp
  SIZE_T v1; // rsi
  char *PoolWithTag; // rax
  ULONG v3; // ebx
  char *v4; // rdi
  __int64 Prcb; // rax

  v0 = (unsigned int)KeNumberProcessors_0;
  v1 = 24LL * (unsigned int)KeNumberProcessors_0;
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v1, 0x61656857u);
  v3 = 0;
  v4 = PoolWithTag;
  if ( !PoolWithTag )
  {
    LODWORD(WheapStatus) = WheapStatus + 1;
    HIDWORD(WheapStatus) |= 0x10u;
    KeBugCheckEx(0x122u, 2uLL, v0, 0LL, 0LL);
  }
  memset(PoolWithTag, 0, v1);
  if ( (_DWORD)v0 )
  {
    do
    {
      Prcb = KeGetPrcb(v3++);
      *(_QWORD *)(Prcb + 24608) = v4;
      v4 += 24;
    }
    while ( v3 < (unsigned int)v0 );
  }
  return 0LL;
}
