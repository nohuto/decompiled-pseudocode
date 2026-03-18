/*
 * XREFs of LockExchangeW32Thread @ 0x1C00614C8
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C004A500 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     ExchangeW32ThreadLock @ 0x1C0061508 (ExchangeW32ThreadLock.c)
 */

__int64 __fastcall LockExchangeW32Thread(__int64 a1, __int64 a2)
{
  if ( a1 )
  {
    ObfReferenceObject(*(PVOID *)a1);
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 8));
  }
  return ExchangeW32ThreadLock(a1, a2);
}
