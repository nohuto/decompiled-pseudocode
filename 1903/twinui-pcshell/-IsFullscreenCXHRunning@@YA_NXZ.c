/*
 * XREFs of ?IsFullscreenCXHRunning@@YA_NXZ @ 0x1800909F8
 * Callers:
 *     ?UpdateFocusOnDismiss@CBaseTrayFlyoutExperienceManager@@AEAAJXZ @ 0x1800932C4 (-UpdateFocusOnDismiss@CBaseTrayFlyoutExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

char IsFullscreenCXHRunning(void)
{
  char v0; // bl
  bool v1; // zf
  unsigned int v3; // [rsp+50h] [rbp+8h] BYREF
  DWORD v4; // [rsp+58h] [rbp+10h] BYREF
  DWORD v5; // [rsp+60h] [rbp+18h] BYREF

  v5 = 4;
  v0 = 0;
  v4 = 0;
  if ( !RegGetValueW(
          HKEY_CURRENT_USER,
          L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\CloudExperienceHost\\Fullscreen",
          L"FullscreenCXHRunning",
          0x10000012u,
          &v4,
          &v3,
          &v5) )
  {
    if ( v4 == 4 )
    {
      v1 = v3 == 1;
      if ( v3 <= 1 )
        return v1;
    }
    else if ( v5 == 4 && (unsigned __int16)(v3 - 48) <= 1u )
    {
      return (_WORD)v3 == 49;
    }
  }
  return v0;
}
