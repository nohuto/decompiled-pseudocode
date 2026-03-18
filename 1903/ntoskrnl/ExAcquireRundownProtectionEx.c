/*
 * XREFs of ExAcquireRundownProtectionEx @ 0x140096AD0
 * Callers:
 *     ExReferenceCallBackBlock @ 0x14001CEA0 (ExReferenceCallBackBlock.c)
 *     PfSnReferenceProcessTrace @ 0x140094AA0 (PfSnReferenceProcessTrace.c)
 *     MiCompleteProtoPteFault @ 0x1400D04D0 (MiCompleteProtoPteFault.c)
 *     PfSnAddProcessTrace @ 0x14012E1A0 (PfSnAddProcessTrace.c)
 *     ExCompareExchangeCallBack @ 0x14018F34C (ExCompareExchangeCallBack.c)
 *     PspRundownProcess @ 0x1408C9CB8 (PspRundownProcess.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall ExAcquireRundownProtectionEx(PEX_RUNDOWN_REF RunRef, ULONG Count)
{
  unsigned __int64 v2; // rax
  __int64 v3; // rdx
  unsigned __int64 v4; // rtt

  _m_prefetchw(RunRef);
  v2 = RunRef->Count;
  if ( (RunRef->Count & 1) != 0 )
    return 0;
  v3 = 2 * Count;
  while ( 1 )
  {
    v4 = v2;
    v2 = _InterlockedCompareExchange64((volatile signed __int64 *)RunRef, v3 + v2, v2);
    if ( v4 == v2 )
      break;
    if ( (v2 & 1) != 0 )
      return 0;
  }
  return 1;
}
