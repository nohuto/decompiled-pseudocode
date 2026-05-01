/*
 * XREFs of ?_HasDesktopSwitchCompleted@PerSessionState@@YA_NXZ @ 0x1802F7E40
 * Callers:
 *     ?HasLoginCompleted@PerSessionState@@YA_NXZ @ 0x1802F7C68 (-HasLoginCompleted@PerSessionState@@YA_NXZ.c)
 * Callees:
 *     ?IsCurrentThreadOnInputDesktop@PerSessionState@@YA_NXZ @ 0x1802F7CA8 (-IsCurrentThreadOnInputDesktop@PerSessionState@@YA_NXZ.c)
 *     PerSessionState::_CreateSessionKey @ 0x1802F7D4C (PerSessionState--_CreateSessionKey.c)
 *     PerSessionState::_DoesSessionKeyExist @ 0x1802F7DCC (PerSessionState--_DoesSessionKeyExist.c)
 */

char __fastcall PerSessionState::_HasDesktopSwitchCompleted(PerSessionState *this)
{
  char result; // al
  PerSessionState *v2; // rcx
  HKEY v3; // rcx

  result = byte_18059B31C;
  if ( !byte_18059B31C )
  {
    if ( PerSessionState::_DoesSessionKeyExist(L"DesktopSwitchCompleted") )
    {
LABEL_3:
      result = 1;
      byte_18059B31C = 1;
      return result;
    }
    if ( PerSessionState::IsCurrentThreadOnInputDesktop(v2) )
    {
      PerSessionState::_CreateSessionKey(v3);
      goto LABEL_3;
    }
    return byte_18059B31C;
  }
  return result;
}
