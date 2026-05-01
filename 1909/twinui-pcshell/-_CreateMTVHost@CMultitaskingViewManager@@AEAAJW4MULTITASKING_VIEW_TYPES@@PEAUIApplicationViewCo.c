/*
 * XREFs of ?_CreateMTVHost@CMultitaskingViewManager@@AEAAJW4MULTITASKING_VIEW_TYPES@@PEAUIApplicationViewCollection@@AEBU_GUID@@PEAPEAX@Z @ 0x18036A49C
 * Callers:
 *     ?CreateMultitaskingView@CMultitaskingViewManager@@UEAAJW4MULTITASKING_VIEW_TYPES@@AEBU_GUID@@PEAPEAX@Z @ 0x180368EF0 (-CreateMultitaskingView@CMultitaskingViewManager@@UEAAJW4MULTITASKING_VIEW_TYPES@@AEBU_GUID@@PEA.c)
 *     ?CreateMultitaskingViewWithFilter@CMultitaskingViewManager@@UEAAJW4MULTITASKING_VIEW_TYPES@@PEAUIApplicationViewCollection@@AEBU_GUID@@PEAPEAX@Z @ 0x180368F90 (-CreateMultitaskingViewWithFilter@CMultitaskingViewManager@@UEAAJW4MULTITASKING_VIEW_TYPES@@PEAU.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18018F0AC (--0-$ActivityBase@VWindowManagementLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsP.c)
 *     ?Stop@?$ActivityBase@VWindowManagementLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18019195C (-Stop@-$ActivityBase@VWindowManagementLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0.c)
 *     ??1CreateMultitaskingViewHost@MultitaskingViewTelemetry@@QEAA@XZ @ 0x180368BC8 (--1CreateMultitaskingViewHost@MultitaskingViewTelemetry@@QEAA@XZ.c)
 *     ?GetMTVHostKind@@YA?AW4MultitaskingViewHostKind@@W4MULTITASKING_VIEW_TYPES@@@Z @ 0x180369204 (-GetMTVHostKind@@YA-AW4MultitaskingViewHostKind@@W4MULTITASKING_VIEW_TYPES@@@Z.c)
 *     ?StartActivity@CreateMultitaskingViewHost@MultitaskingViewTelemetry@@QEAAXW4MULTITASKING_VIEW_TYPES@@@Z @ 0x1803698E4 (-StartActivity@CreateMultitaskingViewHost@MultitaskingViewTelemetry@@QEAAXW4MULTITASKING_VIEW_TY.c)
 *     ?_CreateDCompMTVHost@CMultitaskingViewManager@@AEAAJW4MULTITASKING_VIEW_TYPES@@PEAUIApplicationViewCollection@@AEBU_GUID@@PEAPEAX@Z @ 0x180369F1C (-_CreateDCompMTVHost@CMultitaskingViewManager@@AEAAJW4MULTITASKING_VIEW_TYPES@@PEAUIApplicationV.c)
 *     ?_CreateXamlMTVHost@CMultitaskingViewManager@@AEAAJW4MULTITASKING_VIEW_TYPES@@PEAUIApplicationViewCollection@@AEBU_GUID@@PEAPEAX@Z @ 0x18036A5B8 (-_CreateXamlMTVHost@CMultitaskingViewManager@@AEAAJW4MULTITASKING_VIEW_TYPES@@PEAUIApplicationVi.c)
 *     ?_FindMTVHost@CMultitaskingViewManager@@AEAAJW4MULTITASKING_VIEW_TYPES@@W4FindMTVHostOptions@1@PEAPEAUIMultitaskingViewHost@@PEA_K@Z @ 0x18036AA50 (-_FindMTVHost@CMultitaskingViewManager@@AEAAJW4MULTITASKING_VIEW_TYPES@@W4FindMTVHostOptions@1@P.c)
 */

__int64 __fastcall CMultitaskingViewManager::_CreateMTVHost(
        __int64 *a1,
        unsigned int a2,
        __int64 (__fastcall ***a3)(_QWORD, GUID *, __int64 *),
        __int64 a4,
        _QWORD *a5)
{
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // r8
  const char *v12; // r9
  unsigned int v13; // ebx
  __int64 v14; // rdx
  unsigned int XamlMTVHost; // eax
  _QWORD v17[40]; // [rsp+30h] [rbp-178h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1A8h] [rbp+0h]

  *a5 = 0LL;
  wil::ActivityBase<WindowManagementLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v17,
    (__int64)"CreateMultitaskingViewHost");
  v17[0] = &MultitaskingViewTelemetry::CreateMultitaskingViewHost::`vftable';
  MultitaskingViewTelemetry::CreateMultitaskingViewHost::StartActivity((__int64)v17, a2);
  if ( a2 > 8 || (v9 = 278, !_bittest(&v9, a2)) )
  {
    v13 = -2147024809;
    v14 = 308LL;
    goto LABEL_10;
  }
  if ( (int)CMultitaskingViewManager::_FindMTVHost(a1, a2, 0LL, 0LL, 0LL) >= 0 )
  {
    v13 = -2147483635;
    v14 = 313LL;
LABEL_10:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewmanager.cpp",
      (const char *)v13);
    goto LABEL_11;
  }
  if ( (unsigned int)GetMTVHostKind(a2, v10, v11, v12) == 1 )
    XamlMTVHost = CMultitaskingViewManager::_CreateXamlMTVHost(a1, a2, a3, a4, a5);
  else
    XamlMTVHost = CMultitaskingViewManager::_CreateDCompMTVHost(a1, a2, a3, a4, a5);
  v13 = XamlMTVHost;
  wil::ActivityBase<WindowManagementLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v17);
LABEL_11:
  MultitaskingViewTelemetry::CreateMultitaskingViewHost::~CreateMultitaskingViewHost((MultitaskingViewTelemetry::CreateMultitaskingViewHost *)v17);
  return v13;
}
