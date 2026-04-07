/*
 * XREFs of ?IsFeatureEnabled@CDesktopManager@@SA_NW4DwmFeature@1@@Z @ 0x18000EF34
 * Callers:
 *     ?IsLivePreviewAllowed@CDesktopManager@@SA_NXZ @ 0x1800070C8 (-IsLivePreviewAllowed@CDesktopManager@@SA_NXZ.c)
 *     ?ShouldShowTransition@CTopLevelWindow3D@@AEAA_NW4WindowAnimationType@1@@Z @ 0x18001077C (-ShouldShowTransition@CTopLevelWindow3D@@AEAA_NW4WindowAnimationType@1@@Z.c)
 *     ?GetGlobalState@CWindowList@@AEAAJPEAUMILCMD_DWM_REDIRECTION_GETGLOBALSTATE@@@Z @ 0x18008A894 (-GetGlobalState@CWindowList@@AEAAJPEAUMILCMD_DWM_REDIRECTION_GETGLOBALSTATE@@@Z.c)
 * Callees:
 *     ?SLGetHelper@@YA_NPEBG@Z @ 0x180040840 (-SLGetHelper@@YA_NPEBG@Z.c)
 */

char __fastcall CDesktopManager::IsFeatureEnabled(int a1)
{
  __int64 v1; // rbx
  _BYTE *v3; // rdi
  const unsigned __int16 **v4; // rsi
  __int64 v5; // rbp

  v1 = a1;
  if ( !byte_1800D4E08 )
  {
    v3 = byte_1800D5040;
    v4 = (const unsigned __int16 **)off_1800B8250;
    v5 = 3LL;
    do
    {
      *v3++ = SLGetHelper(*v4++);
      --v5;
    }
    while ( v5 );
    byte_1800D4E08 = 1;
  }
  if ( (unsigned int)v1 >= 3 )
    return SLGetHelper(off_1800B8250[v1]);
  else
    return byte_1800D5040[v1];
}
