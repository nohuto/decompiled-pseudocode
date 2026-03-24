/*
 * XREFs of ExAcquireRundownProtectionEx @ 0x1400D78C0
 * Callers:
 *     MiCompleteProtoPteFault @ 0x14004A4B0 (MiCompleteProtoPteFault.c)
 *     ExReferenceCallBackBlock @ 0x140088AF0 (ExReferenceCallBackBlock.c)
 *     PfSnReferenceProcessTrace @ 0x1400D4AB0 (PfSnReferenceProcessTrace.c)
 *     PfSnAddProcessTrace @ 0x1400E2268 (PfSnAddProcessTrace.c)
 *     ExCompareExchangeCallBack @ 0x14018667C (ExCompareExchangeCallBack.c)
 *     PspRundownProcess @ 0x14088B7C8 (PspRundownProcess.c)
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
