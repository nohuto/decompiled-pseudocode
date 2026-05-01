/*
 * XREFs of ?RequestShow@TabTipAdapter@KeyboardHosting@@AEAAJV?$ComPtr@U?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@Foundation@Windows@@@WRL@Microsoft@@W4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@W4CoreKeyboardModality@789UI@Windows@@@Z @ 0x1803247B8
 * Callers:
 *     ?ExecuteDeferredRequest@TabTipAdapter@KeyboardHosting@@AEAAJW4DeferredShowRequestExecutionReason@2@@Z @ 0x18031FCD4 (-ExecuteDeferredRequest@TabTipAdapter@KeyboardHosting@@AEAAJW4DeferredShowRequestExecutionReason.c)
 *     ?OnShellRequestedShow@TabTipAdapter@KeyboardHosting@@UEAAJII@Z @ 0x180323260 (-OnShellRequestedShow@TabTipAdapter@KeyboardHosting@@UEAAJII@Z.c)
 * Callees:
 *     ?SetOverrideMonitorSizeForSIP@TabTipAdapter@KeyboardHosting@@QEAAJXZ @ 0x18005B1F4 (-SetOverrideMonitorSizeForSIP@TabTipAdapter@KeyboardHosting@@QEAAJXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180063E40 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072ADC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_StabilizeInputAppActivation@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180313FF8 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_StabilizeInputAppActivation@@@wil@@C.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall KeyboardHosting::TabTipAdapter::RequestShow(__int64 a1, __int64 *a2, int a3, unsigned int a4)
{
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // r8
  wil::details::in1diag3 *v11; // rcx
  __int64 v12; // r9
  _BYTE *v13; // rcx
  bool v14; // dl
  int v15; // eax
  unsigned int v16; // ebx
  bool v18; // [rsp+20h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v8 = KeyboardHosting::TabTipAdapter::SetOverrideMonitorSizeForSIP((KeyboardHosting::TabTipAdapter *)a1);
  v11 = retaddr;
  if ( v8 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x605,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)v8);
  wil::Feature<__WilFeatureTraits_Feature_StabilizeInputAppActivation>::ReportUsageToService((__int64)v11, v9, v10);
  v13 = *(_BYTE **)(a1 + 96);
  v14 = v13[490] || v13[492];
  v18 = v14;
  LOBYTE(v12) = v13[488];
  v15 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, __int64, bool, int, int))(**(_QWORD **)(a1 + 24) + 448LL))(
          *(_QWORD *)(a1 + 24),
          *a2,
          a4,
          v12,
          v18,
          1,
          a3);
  v16 = v15;
  if ( v15 >= 0 )
    v16 = 0;
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x60F,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)v15);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(a2);
  return v16;
}
