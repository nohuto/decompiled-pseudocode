/*
 * XREFs of ?GetSerialWorkQueue@CAudioSrv@@UEAAAEAVCSerialWorkQueue@@XZ @ 0x180048DB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct CSerialWorkQueue *__fastcall CAudioSrv::GetSerialWorkQueue(CAudioSrv *this)
{
  return (CAudioSrv *)((char *)this + 208);
}
