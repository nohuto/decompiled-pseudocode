/*
 * XREFs of KeClearUmsThreadKernelLock @ 0x140846518
 * Callers:
 *     PspGetSetContextInternal @ 0x140620940 (PspGetSetContextInternal.c)
 *     KiResumeUmsThread @ 0x14084691C (KiResumeUmsThread.c)
 *     PspRundownUmsThreadForApcDelivery @ 0x1408903AC (PspRundownUmsThreadForApcDelivery.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeClearUmsThreadKernelLock(__int64 a1)
{
  signed __int64 v1; // rax
  unsigned int v3; // [rsp+0h] [rbp-18h]
  signed __int64 v4; // [rsp+30h] [rbp+18h]

  v3 = 0;
  _m_prefetchw((const void *)(a1 + 1272));
  v1 = *(_QWORD *)(a1 + 1272);
  while ( (v1 & 3) != 0 )
  {
    v4 = v1;
    v1 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 1272), v1 - 1, v1);
    if ( v1 == v4 )
      return v3;
  }
  return (unsigned int)-1073741823;
}
