/*
 * XREFs of ?InternalRelease@?$ComPtr@VTabletModeCoverWindow@@@WRL@Microsoft@@IEAAKXZ @ 0x1803C9170
 * Callers:
 *     ?CoverWindow_CreateInstance@@YAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x1803C8564 (-CoverWindow_CreateInstance@@YAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z.c)
 *     ?s_WndProcBase@?$CWRLImpWndProc@VTabletModeCoverWindow@@@@KA_JPEAUHWND__@@I_K_J@Z @ 0x1803C97B0 (-s_WndProcBase@-$CWRLImpWndProc@VTabletModeCoverWindow@@@@KA_JPEAUHWND__@@I_K_J@Z.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCWRLObjectWithGITSite@@VFtmBase@23@UITabletModeCoverWindow@@UITabletModeChrome@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1803C92E0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCWR_ea_1803C92E0.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<TabletModeCoverWindow>::InternalRelease(__int64 *a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *a1;
  result = 0LL;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CWRLObjectWithGITSite,Microsoft::WRL::FtmBase,ITabletModeCoverWindow,ITabletModeChrome>::Release(v1);
  }
  return result;
}
