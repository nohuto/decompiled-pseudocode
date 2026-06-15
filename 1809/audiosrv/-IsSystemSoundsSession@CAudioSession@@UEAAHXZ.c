/*
 * XREFs of ?IsSystemSoundsSession@CAudioSession@@UEAAHXZ @ 0x180043100
 * Callers:
 *     ?IsSystemSoundsSession@CAudioSession@@WBI@EAAHXZ @ 0x1800689A0 (-IsSystemSoundsSession@CAudioSession@@WBI@EAAHXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CAudioSession::IsSystemSoundsSession(CAudioSession *this)
{
  return *((unsigned __int8 *)this + 302);
}
