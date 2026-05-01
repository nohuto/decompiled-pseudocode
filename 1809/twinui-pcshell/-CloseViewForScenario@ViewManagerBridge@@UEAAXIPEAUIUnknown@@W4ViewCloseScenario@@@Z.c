/*
 * XREFs of ?CloseViewForScenario@ViewManagerBridge@@UEAAXIPEAUIUnknown@@W4ViewCloseScenario@@@Z @ 0x180230120
 * Callers:
 *     _lambda_3084357f003fe3e9c8b7927dc2a76ed2_::operator() @ 0x180212480 (_lambda_3084357f003fe3e9c8b7927dc2a76ed2_--operator().c)
 *     _lambda_7d6b9a4e32c168b2e51ca46a812f2e25_::operator() @ 0x1802124E8 (_lambda_7d6b9a4e32c168b2e51ca46a812f2e25_--operator().c)
 *     _ViewEventDispatcher::ViewCreated_::_1_::catch$17 @ 0x18021C394 (_ViewEventDispatcher--ViewCreated_--_1_--catch$17.c)
 *     ?ViewNavigationRequested@ViewEventDispatcher@@QEAAXIIW4ViewActivationFlags@Navigation@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18021C878 (-ViewNavigationRequested@ViewEventDispatcher@@QEAAXIIW4ViewActivationFlags@Navigation@@PEAUIProp.c)
 *     _ViewEventDispatcher::ViewNavigationRequested_::_1_::catch$27 @ 0x18021D425 (_ViewEventDispatcher--ViewNavigationRequested_--_1_--catch$27.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180060730 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??$As@UIShellView@Server@Navigation@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIShellView@Server@Navigation@@@WRL@Microsoft@@@Details@12@@Z @ 0x18020EA6C (--$As@UIShellView@Server@Navigation@@@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$C.c)
 *     ??$CloseViewForScenario@AEAIAEAW4ViewCloseScenario@@@ViewManagerInteropTraceLogging@@SAXAEAIAEAW4ViewCloseScenario@@@Z @ 0x18022E0BC (--$CloseViewForScenario@AEAIAEAW4ViewCloseScenario@@@ViewManagerInteropTraceLogging@@SAXAEAIAEAW.c)
 *     MapScenarioToErrorCodeForView @ 0x180232278 (MapScenarioToErrorCodeForView.c)
 *     ?NavigateView@ViewManagerBridge@@UEAAXIW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180232490 (-NavigateView@ViewManagerBridge@@UEAAXIW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windo.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall ViewManagerBridge::CloseViewForScenario(
        __int64 a1,
        unsigned int a2,
        __int64 (__fastcall ***a3)(_QWORD, GUID *, __int64 *),
        unsigned int a4)
{
  __int64 v8; // rcx
  int v9; // eax
  unsigned int i; // edi
  __int64 v11; // rbx
  __int64 v12; // rcx
  int v13; // eax
  __int64 result; // rax
  const char *v15; // r9
  int v16; // [rsp+20h] [rbp-58h] BYREF
  __int64 v17; // [rsp+28h] [rbp-50h] BYREF
  __int64 v18; // [rsp+30h] [rbp-48h] BYREF
  __int64 v19[8]; // [rsp+38h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  unsigned int v21; // [rsp+88h] [rbp+10h] BYREF
  int v22; // [rsp+90h] [rbp+18h] BYREF
  unsigned int v23; // [rsp+98h] [rbp+20h] BYREF

  v23 = a4;
  v21 = a2;
  v19[1] = -2LL;
  ViewManagerInteropTraceLogging::CloseViewForScenario<unsigned int &,enum ViewCloseScenario &>(
    (int *)&v21,
    (int *)&v23);
  try
  {
    v17 = 0LL;
    if ( a3 )
    {
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v17);
      v13 = (**a3)(a3, &GUID_884eb994_3fdf_40ff_8800_aa1176f0f45e, &v17);
      if ( v13 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          190LL,
          (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
          (const char *)(unsigned int)v13);
    }
    else
    {
      v8 = *(_QWORD *)(a1 + 120);
      if ( v8 )
      {
        v22 = 0;
        v9 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v8 + 48LL))(v8, &v22);
        if ( v9 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            171LL,
            (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
            (const char *)(unsigned int)v9);
        for ( i = 0; (int)i < v22; ++i )
        {
          v18 = 0LL;
          v19[0] = 0LL;
          v11 = *(_QWORD *)(a1 + 120);
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v19);
          if ( (*(int (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v11 + 56LL))(v11, i, v19) >= 0
            && (int)Microsoft::WRL::ComPtr<IUnknown>::As<Navigation::Server::IShellView>(v19, &v18) >= 0
            && (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)v18 + 152LL))(v18, &v16) >= 0
            && v16 == a2 )
          {
            v12 = v17;
            v17 = v18;
            v18 = v12;
            Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v19);
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v18);
            break;
          }
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v19);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v18);
        }
      }
    }
    if ( !v17 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        193LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
        (const char *)0x80070490LL);
    if ( v17 )
      MapScenarioToErrorCodeForView(v17, a4);
    ViewManagerBridge::NavigateView(a1, a2, 0LL);
    result = Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v17);
  }
  catch ( ... )
  {
    return wil::details::in1diag3::Log_CaughtException(
             retaddr,
             (void *)0xC9,
             (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
             v15);
  }
  return result;
}
