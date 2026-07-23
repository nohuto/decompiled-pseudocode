/*
 * XREFs of PpmPdcNotifyMediaBufferingUpdate @ 0x14087B9E8
 * Callers:
 *     PpmMediaBufferingWorker @ 0x14013F0A0 (PpmMediaBufferingWorker.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 */

__int64 (*PpmPdcNotifyMediaBufferingUpdate())(void)
{
  __int64 (*result)(void); // rax

  result = qword_140441070;
  if ( qword_140441070 )
    return (__int64 (*)(void))qword_140441070();
  return result;
}
