/*
 * XREFs of LdrpInitialize @ 0x180078708
 * Callers:
 *     LdrInitializeThunk @ 0x1800786E0 (LdrInitializeThunk.c)
 * Callees:
 *     _LdrpInitialize @ 0x18007875C (_LdrpInitialize.c)
 *     InitSecurityCookie @ 0x1800D24DC (InitSecurityCookie.c)
 */

struct _TEB *__fastcall LdrpInitialize(__int64 a1, __int64 a2)
{
  struct _TEB *result; // rax

  if ( !SecurityCookieInitialized )
    InitSecurityCookie();
  result = NtCurrentTeb();
  if ( (result->SameTebFlags & 0x4000) == 0 )
    return (struct _TEB *)LdrpInitialize(a1, a2);
  return result;
}
