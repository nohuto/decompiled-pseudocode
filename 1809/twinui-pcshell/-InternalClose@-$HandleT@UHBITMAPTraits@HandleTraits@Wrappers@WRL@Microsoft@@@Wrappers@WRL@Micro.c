/*
 * XREFs of ?InternalClose@?$HandleT@UHBITMAPTraits@HandleTraits@Wrappers@WRL@Microsoft@@@Wrappers@WRL@Microsoft@@MEAA_NXZ @ 0x1803B4680
 * Callers:
 *     s_DrawThemeTextPPIAware @ 0x1803B4AE0 (s_DrawThemeTextPPIAware.c)
 * Callees:
 *     <none>
 */

bool __fastcall Microsoft::WRL::Wrappers::HandleT<Microsoft::WRL::Wrappers::HandleTraits::HBITMAPTraits>::InternalClose(
        __int64 a1)
{
  return DeleteObject(*(HGDIOBJ *)(a1 + 8));
}
