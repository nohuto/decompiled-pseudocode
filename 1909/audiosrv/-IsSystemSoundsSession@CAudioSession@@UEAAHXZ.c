/*
 * XREFs of ?IsSystemSoundsSession@CAudioSession@@UEAAHXZ @ 0x180049B00
 * Callers:
 *     ?IsSystemSoundsSession@CAudioSession@@WBI@EAAHXZ @ 0x18006CA70 (-IsSystemSoundsSession@CAudioSession@@WBI@EAAHXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CAudioSession::IsSystemSoundsSession(CAudioSession *this)
{
  return *((unsigned __int8 *)this + 302);
}
