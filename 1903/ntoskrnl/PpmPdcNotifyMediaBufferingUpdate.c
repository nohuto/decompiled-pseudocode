/*
 * XREFs of PpmPdcNotifyMediaBufferingUpdate @ 0x1408B6D3C
 * Callers:
 *     PpmMediaBufferingWorker @ 0x1401431E0 (PpmMediaBufferingWorker.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 */

__int64 (*PpmPdcNotifyMediaBufferingUpdate())(void)
{
  __int64 (*result)(void); // rax

  result = qword_14046BDC0;
  if ( qword_14046BDC0 )
    return (__int64 (*)(void))qword_14046BDC0();
  return result;
}
