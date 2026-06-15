/*
 * XREFs of ?GetUserSid@CProcess@@UEAAPEBGXZ @ 0x18001A1A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

const unsigned __int16 *__fastcall CProcess::GetUserSid(CProcess *this)
{
  return (const unsigned __int16 *)*((_QWORD *)this + 25);
}
