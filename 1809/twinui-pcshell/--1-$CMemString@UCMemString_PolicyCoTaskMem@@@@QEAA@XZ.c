/*
 * XREFs of ??1?$CMemString@UCMemString_PolicyCoTaskMem@@@@QEAA@XZ @ 0x180033770
 * Callers:
 *     ?GetStateRegKey@CallerIdentity@@YAJPEAXPEBGKPEAPEAUHKEY__@@@Z @ 0x180029F00 (-GetStateRegKey@CallerIdentity@@YAJPEAXPEBGKPEAPEAUHKEY__@@@Z.c)
 *     ?GetProcessAppId@CallerIdentity@@YAJPEAXPEAPEAG@Z @ 0x18003DA00 (-GetProcessAppId@CallerIdentity@@YAJPEAXPEAPEAG@Z.c)
 *     _CSwitchController::_SwitchToApp_::_1_::dtor$0 @ 0x18032DC03 (_CSwitchController--_SwitchToApp_--_1_--dtor$0.c)
 *     ?EnsureCallingProcessIsShellExperience@CallerIdentity@@YAJXZ @ 0x1803A1720 (-EnsureCallingProcessIsShellExperience@CallerIdentity@@YAJXZ.c)
 *     ?VerifyWindowIsInSpecifiedApplication@CallerIdentity@@YAJPEAUHWND__@@PEBGPEAUIUnknown@@@Z @ 0x1803A2314 (-VerifyWindowIsInSpecifiedApplication@CallerIdentity@@YAJPEAUHWND__@@PEBGPEAUIUnknown@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CMemString<CMemString_PolicyCoTaskMem>::~CMemString<CMemString_PolicyCoTaskMem>(LPVOID *a1)
{
  CoTaskMemFree(*a1);
}
