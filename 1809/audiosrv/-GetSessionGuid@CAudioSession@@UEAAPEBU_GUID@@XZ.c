/*
 * XREFs of ?GetSessionGuid@CAudioSession@@UEAAPEBU_GUID@@XZ @ 0x1800430B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

const struct _GUID *__fastcall CAudioSession::GetSessionGuid(CAudioSession *this)
{
  return (const struct _GUID *)((char *)this + 720);
}
