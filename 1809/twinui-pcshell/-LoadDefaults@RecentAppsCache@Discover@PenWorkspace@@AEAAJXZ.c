/*
 * XREFs of ?LoadDefaults@RecentAppsCache@Discover@PenWorkspace@@AEAAJXZ @ 0x18019A50C
 * Callers:
 *     ?ProcessQueueThreadProc@RecentAppsCache@Discover@PenWorkspace@@AEAAKXZ @ 0x1800DD46C (-ProcessQueueThreadProc@RecentAppsCache@Discover@PenWorkspace@@AEAAKXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     ??0?$ActivityBase@VPenWorkspaceBrokerLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180198CB0 (--0-$ActivityBase@VPenWorkspaceBrokerLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsPro.c)
 *     ??1OfficeInstalled@PenWorkspaceBrokerTelemetry@@QEAA@XZ @ 0x180198FC8 (--1OfficeInstalled@PenWorkspaceBrokerTelemetry@@QEAA@XZ.c)
 *     _anonymous_namespace_::GetCurTime @ 0x18019995C (_anonymous_namespace_--GetCurTime.c)
 *     ?LoadOEMApps@RecentAppsCache@Discover@PenWorkspace@@AEAAJU_FILETIME@@PEAH@Z @ 0x18019AC90 (-LoadOEMApps@RecentAppsCache@Discover@PenWorkspace@@AEAAJU_FILETIME@@PEAH@Z.c)
 *     ?PrependDefaultApp@RecentAppsCache@Discover@PenWorkspace@@AEAAJPEBGAEAU_FILETIME@@@Z @ 0x18019B480 (-PrependDefaultApp@RecentAppsCache@Discover@PenWorkspace@@AEAAJPEBGAEAU_FILETIME@@@Z.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_WindowsInkWorkspaceImprovements@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x18019B7A4 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_WindowsInkWorkspaceImprovements@@@wi.c)
 *     ?StartActivity@OfficeInstalled@PenWorkspaceBrokerTelemetry@@QEAAXXZ @ 0x18019C3DC (-StartActivity@OfficeInstalled@PenWorkspaceBrokerTelemetry@@QEAAXXZ.c)
 *     ?Stop@OfficeInstalled@PenWorkspaceBrokerTelemetry@@QEAAX_N@Z @ 0x18019C508 (-Stop@OfficeInstalled@PenWorkspaceBrokerTelemetry@@QEAAX_N@Z.c)
 */

__int64 __fastcall PenWorkspace::Discover::RecentAppsCache::LoadDefaults(PenWorkspace::Discover::RecentAppsCache *this)
{
  __int64 v2; // rdi
  int v3; // esi
  bool v4; // bl
  void *ppv; // [rsp+38h] [rbp-D0h] BYREF
  struct _FILETIME FileTime; // [rsp+40h] [rbp-C8h] BYREF
  _QWORD v8[40]; // [rsp+48h] [rbp-C0h] BYREF
  unsigned __int16 *v9; // [rsp+188h] [rbp+80h]
  const wchar_t *v10; // [rsp+190h] [rbp+88h]
  const wchar_t *v11; // [rsp+198h] [rbp+90h]
  const wchar_t *v12; // [rsp+1A0h] [rbp+98h]
  const wchar_t *v13; // [rsp+1A8h] [rbp+A0h]
  const WCHAR *v14; // [rsp+1B0h] [rbp+A8h]

  anonymous_namespace_::GetCurTime(&FileTime);
  v2 = 0LL;
  LODWORD(ppv) = 0;
  PenWorkspace::Discover::RecentAppsCache::LoadOEMApps(this, FileTime, (int *)&ppv);
  v3 = 6 - (_DWORD)ppv;
  wil::Feature<__WilFeatureTraits_Feature_WindowsInkWorkspaceImprovements>::ReportUsageToService();
  wil::ActivityBase<PenWorkspaceBrokerLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<PenWorkspaceBrokerLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>((struct wil::details::IFailureCallback *)v8);
  v8[0] = &PenWorkspaceBrokerTelemetry::OfficeInstalled::`vftable';
  PenWorkspaceBrokerTelemetry::OfficeInstalled::StartActivity((PenWorkspaceBrokerTelemetry::OfficeInstalled *)v8);
  ppv = 0LL;
  v4 = SHCreateItemInKnownFolder(
         &FOLDERID_AppsFolder,
         0x4000u,
         L"Microsoft.Office.WINWORD.EXE.15",
         &GUID_43826d1e_e718_42ee_bc55_a1e261c37bfe,
         &ppv) >= 0;
  PenWorkspaceBrokerTelemetry::OfficeInstalled::Stop((PenWorkspaceBrokerTelemetry::OfficeInstalled *)v8, v4);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppv);
  PenWorkspaceBrokerTelemetry::OfficeInstalled::~OfficeInstalled((PenWorkspaceBrokerTelemetry::OfficeInstalled *)v8);
  v9 = L"Microsoft.WindowsMaps_8wekyb3d8bbwe!App";
  if ( v4 )
  {
    v11 = L"Microsoft.Office.WINWORD.EXE.15";
    v10 = L"Microsoft.Office.POWERPNT.EXE.15";
  }
  else
  {
    v10 = L"Microsoft.MSPaint_8wekyb3d8bbwe!Microsoft.MSPaint";
    v11 = L"Microsoft.Windows.Photos_8wekyb3d8bbwe!App";
  }
  v12 = L"Microsoft.Office.OneNote_8wekyb3d8bbwe!microsoft.onenoteim";
  v13 = L"Microsoft.WindowsCommunicationsApps_8wekyb3d8bbwe!Microsoft.WindowsLive.Mail";
  v14 = L"Microsoft.MicrosoftEdge_8wekyb3d8bbwe!MicrosoftEdge";
  if ( v3 > 0 )
  {
    do
      PenWorkspace::Discover::RecentAppsCache::PrependDefaultApp(this, (&v9)[v2++], &FileTime);
    while ( v2 < v3 );
  }
  return 0LL;
}
