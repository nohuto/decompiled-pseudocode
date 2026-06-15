/*
 * XREFs of ?GetSerialWorkQueue@CAudioSrv@@UEAAAEAVCSerialWorkQueue@@XZ @ 0x180049960
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct CSerialWorkQueue *__fastcall CAudioSrv::GetSerialWorkQueue(CAudioSrv *this)
{
  return (CAudioSrv *)((char *)this + 208);
}
