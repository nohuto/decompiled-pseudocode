/*
 * XREFs of ??0APPLICATION_FRAME_CHROME_CHANGE_DATA@@QEAA@AEBU0@@Z @ 0x18012C834
 * Callers:
 *     _lambda_6c7f1af74cf45db94091666f28e782cd_::operator() @ 0x18005A590 (_lambda_6c7f1af74cf45db94091666f28e782cd_--operator().c)
 *     ?SetAppChromePolicy@CFrameApplicationPresentation@@UEAAJW4APP_CHROME_CONFIGURATION_POLICY@@@Z @ 0x18007E560 (-SetAppChromePolicy@CFrameApplicationPresentation@@UEAAJW4APP_CHROME_CONFIGURATION_POLICY@@@Z.c)
 *     ?GetAppChromeData@@YA?AV?$optional@UAPPLICATION_FRAME_CHROME_CHANGE_DATA@@@std@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18008FB80 (-GetAppChromeData@@YA-AV-$optional@UAPPLICATION_FRAME_CHROME_CHANGE_DATA@@@std@@PEAUIViewWrapper.c)
 *     ?_HandleUniversalFrameChangeRequest@CApplicationManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18013CCB4 (-_HandleUniversalFrameChangeRequest@CApplicationManager@@AEAAJPEAUIViewWrapper@ViewManagerIntero.c)
 *     ?SetAppChromeOptions@CFrameApplicationPresentation@@UEAAJUAPPLICATION_FRAME_CHROME_CHANGE_DATA@@@Z @ 0x180170720 (-SetAppChromeOptions@CFrameApplicationPresentation@@UEAAJUAPPLICATION_FRAME_CHROME_CHANGE_DATA@@.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

APPLICATION_FRAME_CHROME_CHANGE_DATA *__fastcall APPLICATION_FRAME_CHROME_CHANGE_DATA::APPLICATION_FRAME_CHROME_CHANGE_DATA(
        APPLICATION_FRAME_CHROME_CHANGE_DATA *this,
        const struct APPLICATION_FRAME_CHROME_CHANGE_DATA *a2)
{
  __int64 v4; // rcx

  *(_DWORD *)this = *(_DWORD *)a2;
  *((_DWORD *)this + 1) = *((_DWORD *)a2 + 1);
  v4 = *((_QWORD *)a2 + 1);
  *((_QWORD *)this + 1) = v4;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  *((_OWORD *)this + 1) = *((_OWORD *)a2 + 1);
  *((_BYTE *)this + 32) = *((_BYTE *)a2 + 32);
  *((_BYTE *)this + 33) = *((_BYTE *)a2 + 33);
  return this;
}
