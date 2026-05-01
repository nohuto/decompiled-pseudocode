/*
 * XREFs of ?InternalRelease@?$ComPtr@VVirtualDesktopThumbnailWindowFilter@@@WRL@Microsoft@@IEAAKXZ @ 0x1802EC06C
 * Callers:
 *     ??$MakeAndInitialize@VVirtualDesktopThumbnailWindowFilter@@V1@AEAPEAUIVirtualDesktopManagerInternal@@AEAPEAUITabletModeController@@AEAPEAUIVirtualDesktopNotificationService@@@Details@WRL@Microsoft@@YAJPEAPEAVVirtualDesktopThumbnailWindowFilter@@AEAPEAUIVirtualDesktopManagerInternal@@AEAPEAUITabletModeController@@AEAPEAUIVirtualDesktopNotificationService@@@Z @ 0x1802EB984 (--$MakeAndInitialize@VVirtualDesktopThumbnailWindowFilter@@V1@AEAPEAUIVirtualDesktopManagerInter.c)
 *     ?VirtualDesktopThumbnailWindowFilter_CreateInstance@@YAJPEAUIVirtualDesktopManagerInternal@@PEAUITabletModeController@@PEAUIVirtualDesktopNotificationService@@AEBU_GUID@@PEAPEAX@Z @ 0x1802EC490 (-VirtualDesktopThumbnailWindowFilter_CreateInstance@@YAJPEAUIVirtualDesktopManagerInternal@@PEAU.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIImmersiveShellComponent@@UIClassFactory@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801960B0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIIm_ea_1801960B0.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<VirtualDesktopThumbnailWindowFilter>::InternalRelease(volatile int **a1)
{
  volatile int *v1; // rdx
  __int64 result; // rax

  v1 = *a1;
  result = 0LL;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IImmersiveShellComponent,IClassFactory>::Release(
             (__int64)v1,
             v1);
  }
  return result;
}
