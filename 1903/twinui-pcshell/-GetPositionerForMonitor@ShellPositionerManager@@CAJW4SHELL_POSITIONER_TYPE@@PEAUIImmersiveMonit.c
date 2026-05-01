/*
 * XREFs of ?GetPositionerForMonitor@ShellPositionerManager@@CAJW4SHELL_POSITIONER_TYPE@@PEAUIImmersiveMonitor@@AEBU_GUID@@PEAPEAX@Z @ 0x180048578
 * Callers:
 *     ?HandleFrameworkViewTypeChange@ShellPositionerManager@@AEAAJW4FRAMEWORK_VIEW_TYPE@@PEAUIApplicationView@@PEAUIImmersiveMonitor@@@Z @ 0x180046F80 (-HandleFrameworkViewTypeChange@ShellPositionerManager@@AEAAJW4FRAMEWORK_VIEW_TYPE@@PEAUIApplicat.c)
 *     ?GetPositionerForView@ShellPositionerManager@@UEAAJPEAUIApplicationView@@AEBU_GUID@@PEAPEAX@Z @ 0x18007DC70 (-GetPositionerForView@ShellPositionerManager@@UEAAJPEAUIApplicationView@@AEBU_GUID@@PEAPEAX@Z.c)
 *     _lambda_5c4dcf32e9336cd9917ef269905ba39d_::operator() @ 0x1803943E8 (_lambda_5c4dcf32e9336cd9917ef269905ba39d_--operator().c)
 *     ?PresentationRequested@ShellPositionerManager@@UEAAJPEAUIApplicationView@@PEAUIInspectable@@@Z @ 0x180395450 (-PresentationRequested@ShellPositionerManager@@UEAAJPEAUIApplicationView@@PEAUIInspectable@@@Z.c)
 *     ?SendControlLostToPositioner@ShellPositionerManager@@AEAAJPEAUIApplicationView@@PEAUIImmersiveMonitor@@W4SHELL_POSITIONER_TYPE@@2PEAPEAUIUnknown@@@Z @ 0x180395D40 (-SendControlLostToPositioner@ShellPositionerManager@@AEAAJPEAUIApplicationView@@PEAUIImmersiveMo.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ShellPositionerManager::GetPositionerForMonitor(int a1, IUnknown *a2, const IID *a3, void **a4)
{
  __int64 v7; // rbp
  HRESULT Service; // eax
  unsigned int v9; // ebx
  __int64 v11; // rdx
  int v12; // [rsp+20h] [rbp-28h]
  void *v13[3]; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v13[1] = (void *)-2LL;
  v7 = a1;
  v13[0] = 0LL;
  if ( IUnknown_QueryService(
         a2,
         &GUID_ddd1282a_db1a_46e0_8622_309920263baf,
         &GUID_ddd1282a_db1a_46e0_8622_309920263baf,
         v13) < 0 )
  {
    Service = IUnknown_QueryService(a2, &c_positionersSIDs + v7, a3, a4);
    v9 = Service;
    if ( Service >= 0 )
      goto LABEL_3;
    v11 = 1329LL;
LABEL_8:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
      (const char *)(unsigned int)Service,
      v12);
    goto LABEL_4;
  }
  Service = (*(__int64 (__fastcall **)(void *, _QWORD, const IID *, void **))(*(_QWORD *)v13[0] + 24LL))(
              v13[0],
              (unsigned int)v7,
              a3,
              a4);
  v9 = Service;
  if ( Service < 0 )
  {
    v11 = 1322LL;
    goto LABEL_8;
  }
LABEL_3:
  v9 = 0;
LABEL_4:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v13);
  return v9;
}
