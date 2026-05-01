/*
 * XREFs of ??0CImmersiveShellComponentWithGITSite@@QEAA@XZ @ 0x1800E54F8
 * Callers:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VCImmersiveShellComponentWithGITSite@@UIPrivilegedOperationsConsumer@@UIRemoteLauncherForegroundHandler@@VFtmBase@23@@WRL@Microsoft@@QEAA@XZ @ 0x18018D4A8 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VCImmersiveShellComponent_ea_18018D4A8.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VCImmersiveShellComponentWithGITSite@@UIAppLayoutCacheInternal@@UIAppLayoutCache@@VFtmBase@23@@WRL@Microsoft@@QEAA@XZ @ 0x180352A90 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VCImmersiveShellComponent_ea_180352A90.c)
 * Callees:
 *     <none>
 */

CImmersiveShellComponentWithGITSite *__fastcall CImmersiveShellComponentWithGITSite::CImmersiveShellComponentWithGITSite(
        CImmersiveShellComponentWithGITSite *this)
{
  *((_QWORD *)this + 2) = 0LL;
  *((_DWORD *)this + 6) = 0;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *(_QWORD *)this = &CImmersiveShellComponentWithGITSite::`vftable';
  *((_QWORD *)this + 5) = &CImmersiveShellComponentWithGITSite::`vftable'{for `IImmersiveShellComponent'};
  *((_QWORD *)this + 6) = &CImmersiveShellComponentWithSite::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IServiceProvider>'};
  return this;
}
