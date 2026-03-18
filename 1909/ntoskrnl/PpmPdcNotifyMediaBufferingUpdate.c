/*
 * XREFs of PpmPdcNotifyMediaBufferingUpdate @ 0x1408B660C
 * Callers:
 *     PpmMediaBufferingWorker @ 0x140143720 (PpmMediaBufferingWorker.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 */

__int64 (*PpmPdcNotifyMediaBufferingUpdate())(void)
{
  __int64 (*result)(void); // rax

  result = qword_14046BB00;
  if ( qword_14046BB00 )
    return (__int64 (*)(void))qword_14046BB00();
  return result;
}
