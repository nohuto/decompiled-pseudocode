/*
 * XREFs of PpmPdcNotifyMediaBufferingUpdate @ 0x14087A788
 * Callers:
 *     PpmMediaBufferingWorker @ 0x14013EFA0 (PpmMediaBufferingWorker.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C5ED0 (_guard_dispatch_icall.c)
 */

__int64 (*PpmPdcNotifyMediaBufferingUpdate())(void)
{
  __int64 (*result)(void); // rax

  result = qword_14043FFB0;
  if ( qword_14043FFB0 )
    return (__int64 (*)(void))qword_14043FFB0();
  return result;
}
