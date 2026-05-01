/*
 * XREFs of ?_HasDesktopSwitchCompleted@PerSessionState@@YA_NXZ @ 0x1803172D0
 * Callers:
 *     ?HasLoginCompleted@PerSessionState@@YA_NXZ @ 0x1803170F8 (-HasLoginCompleted@PerSessionState@@YA_NXZ.c)
 * Callees:
 *     ?IsCurrentThreadOnInputDesktop@PerSessionState@@YA_NXZ @ 0x180317138 (-IsCurrentThreadOnInputDesktop@PerSessionState@@YA_NXZ.c)
 *     PerSessionState::_CreateSessionKey @ 0x1803171DC (PerSessionState--_CreateSessionKey.c)
 *     PerSessionState::_DoesSessionKeyExist @ 0x18031725C (PerSessionState--_DoesSessionKeyExist.c)
 */

char __fastcall PerSessionState::_HasDesktopSwitchCompleted(PerSessionState *this)
{
  char result; // al
  PerSessionState *v2; // rcx
  HKEY v3; // rcx

  result = byte_1805C37FD;
  if ( !byte_1805C37FD )
  {
    if ( PerSessionState::_DoesSessionKeyExist(L"DesktopSwitchCompleted") )
    {
LABEL_3:
      result = 1;
      byte_1805C37FD = 1;
      return result;
    }
    if ( PerSessionState::IsCurrentThreadOnInputDesktop(v2) )
    {
      PerSessionState::_CreateSessionKey(v3);
      goto LABEL_3;
    }
    return byte_1805C37FD;
  }
  return result;
}
