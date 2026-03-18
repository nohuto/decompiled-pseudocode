/*
 * XREFs of PpmPdcNotifyMediaBufferingUpdate @ 0x14087A7A8
 * Callers:
 *     PpmMediaBufferingWorker @ 0x14013EF80 (PpmMediaBufferingWorker.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C5EB0 (_guard_dispatch_icall.c)
 */

__int64 (*PpmPdcNotifyMediaBufferingUpdate())(void)
{
  __int64 (*result)(void); // rax

  result = qword_14043FFB0;
  if ( qword_14043FFB0 )
    return (__int64 (*)(void))qword_14043FFB0();
  return result;
}
