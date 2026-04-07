/*
 * XREFs of ?SetETWAnimation@CTouchPressHoldVisual@@AEAAXW4TPHANIM@1@@Z @ 0x1800ACAC0
 * Callers:
 *     ?StartAbort@CTouchPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x1800ACB24 (-StartAbort@CTouchPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z.c)
 *     ?StartHold@CTouchPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x1800ACCCC (-StartHold@CTouchPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z.c)
 *     ?StartRightTap@CTouchPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x1800ACE58 (-StartRightTap@CTouchPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z.c)
 *     ?Stop@CTouchPressHoldVisual@@UEAAXXZ @ 0x1800ACF70 (-Stop@CTouchPressHoldVisual@@UEAAXXZ.c)
 *     ?UpdateTransition@CTouchPressHoldVisual@@MEAAJXZ @ 0x1800AD6A0 (-UpdateTransition@CTouchPressHoldVisual@@MEAAJXZ.c)
 * Callees:
 *     McTemplateU0d @ 0x1800779F8 (McTemplateU0d.c)
 */

__int64 __fastcall CTouchPressHoldVisual::SetETWAnimation(__int64 a1, int a2)
{
  int v2; // r8d
  __int64 result; // rax
  __int64 v6; // rcx

  v2 = *(_DWORD *)(a1 + 296);
  if ( a2 != v2 )
  {
    result = (unsigned int)Microsoft_Windows_Dwm_UdwmEnableBits;
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    {
      McTemplateU0d(a1, (int)&UdwmTouchPressHoldVisual_Stop, v2);
      result = (unsigned int)Microsoft_Windows_Dwm_UdwmEnableBits;
      if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
        result = McTemplateU0d(v6, (int)&UdwmTouchPressHoldVisual_Start, a2);
    }
  }
  *(_DWORD *)(a1 + 296) = a2;
  return result;
}
