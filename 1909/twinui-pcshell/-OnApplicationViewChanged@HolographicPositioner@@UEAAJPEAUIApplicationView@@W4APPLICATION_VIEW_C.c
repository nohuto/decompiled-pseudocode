/*
 * XREFs of ?OnApplicationViewChanged@HolographicPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x1800535C0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180018B50 (--1-$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?_OnUnmanagedWin32ViewAdded@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIWin32ApplicationView@@@Z @ 0x180053748 (-_OnUnmanagedWin32ViewAdded@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIWin32Applicat.c)
 *     ?_IsDisplayContextHolographic@HolographicPositioner@@AEAA_NXZ @ 0x1800537C4 (-_IsDisplayContextHolographic@HolographicPositioner@@AEAA_NXZ.c)
 *     ?_IsViewWin32Slate@HolographicPositioner@@CA_NPEAUIApplicationView@@@Z @ 0x180053AD8 (-_IsViewWin32Slate@HolographicPositioner@@CA_NPEAUIApplicationView@@@Z.c)
 *     ?IsHolographicWin32SlatesFeatureEnabled@@YA_NXZ @ 0x180053BE0 (-IsHolographicWin32SlatesFeatureEnabled@@YA_NXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180065FF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007560C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     _LogEventWithApplicationViewData_unsigned_short_const_(&)[10]_unsigned_int_ @ 0x18021C738 (_LogEventWithApplicationViewData_unsigned_short_const_(-)[10]_unsigned_int_.c)
 *     _LogEventWithApplicationViewData_unsigned_short_const_(&)[11]_unsigned_int_ @ 0x18021C800 (_LogEventWithApplicationViewData_unsigned_short_const_(-)[11]_unsigned_int_.c)
 *     _LogEventWithApplicationViewData_unsigned_short_const_(&)[12]_unsigned_int_ @ 0x18021C8C8 (_LogEventWithApplicationViewData_unsigned_short_const_(-)[12]_unsigned_int_.c)
 *     _LogEventWithApplicationViewData_unsigned_short_const_(&)[14]_unsigned_int_ @ 0x18021C990 (_LogEventWithApplicationViewData_unsigned_short_const_(-)[14]_unsigned_int_.c)
 *     ?_EvaluateTakingControlOfWin32Slate@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIWin32ApplicationView@@_N@Z @ 0x180222FC4 (-_EvaluateTakingControlOfWin32Slate@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIWin32.c)
 *     ?_GetApplicationViewUniqueIdForTracing@HolographicPositioner@@CAIPEAUIApplicationView@@@Z @ 0x180223518 (-_GetApplicationViewUniqueIdForTracing@HolographicPositioner@@CAIPEAUIApplicationView@@@Z.c)
 *     ?_HandleControlLostForView@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x180223818 (-_HandleControlLostForView@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?_OnManagedWin32AppFocusGained@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIWin32ApplicationView@@@Z @ 0x180224338 (-_OnManagedWin32AppFocusGained@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIWin32Appli.c)
 *     ?_RaiseViewFocusGained@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x180224B44 (-_RaiseViewFocusGained@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?_RaiseViewFocusLost@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x180224C28 (-_RaiseViewFocusLost@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?_RaiseViewRemoved@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x180224D0C (-_RaiseViewRemoved@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall HolographicPositioner::OnApplicationViewChanged(__int64 a1, struct IApplicationView *a2, int a3)
{
  BOOL v6; // r14d
  struct IWin32ApplicationView *v8; // rcx
  struct IWin32ApplicationView *v9; // rdi
  __int64 v10; // rax
  struct IWin32ApplicationView *v11; // rcx
  unsigned int v12; // ebx
  int v13; // eax
  __int64 *v14; // rcx
  int v15; // eax
  unsigned int v16; // edi
  struct IWin32ApplicationView *v17; // r8
  HolographicPositioner *v18; // rsi
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // r8
  int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // rdx
  __int64 v28; // r8
  int v29; // eax
  struct IWin32ApplicationView *v30[2]; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  struct IWin32ApplicationView *v32; // [rsp+50h] [rbp+20h] BYREF

  v30[1] = (struct IWin32ApplicationView *)-2LL;
  if ( !*(_DWORD *)(a1 + 72) )
    return 0LL;
  if ( !a2 )
  {
    v12 = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x434,
      (unsigned int)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
      (const char *)0x80070057LL,
      (int)v30[0]);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1AD,
      (unsigned int)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
      (const char *)0x80070057LL,
      (int)v30[0]);
    return v12;
  }
  v32 = 0LL;
  if ( (*(int (__fastcall **)(struct IApplicationView *, struct IWin32ApplicationView **))(*(_QWORD *)a2 + 264LL))(
         a2,
         &v32) < 0 )
  {
    v8 = v32;
    if ( v32 )
    {
      v32 = 0LL;
      (*(void (__fastcall **)(struct IWin32ApplicationView *))(*(_QWORD *)v8 + 16LL))(v8);
    }
    v6 = 0;
  }
  else
  {
    v6 = (*(__int64 (__fastcall **)(struct IWin32ApplicationView *))(*(_QWORD *)v32 + 24LL))(v32) == 4;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v32);
  }
  if ( !v6 )
  {
    if ( a3 )
    {
      if ( (unsigned int)(a3 - 7) > 1 )
        return 0LL;
      (**(void (__fastcall ***)(struct IApplicationView *, GUID *, struct IWin32ApplicationView **))a2)(
        a2,
        &GUID_f3527610_c76d_4316_ac8e_28651acf3df3,
        v30);
      v9 = v30[0];
      if ( !v30[0] )
        goto LABEL_13;
      if ( IsHolographicWin32SlatesFeatureEnabled()
        && HolographicPositioner::_IsDisplayContextHolographic((HolographicPositioner *)(a1 - 184))
        && (LODWORD(v32) = 6,
            (*(int (__fastcall **)(struct IApplicationView *, struct IWin32ApplicationView **))(*(_QWORD *)a2 + 400LL))(
              a2,
              &v32) >= 0)
        && !(_DWORD)v32
        && (v29 = HolographicPositioner::_EvaluateTakingControlOfWin32Slate(
                    (HolographicPositioner *)(a1 - 184),
                    a2,
                    v9,
                    0),
            v12 = v29,
            v29 < 0) )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x8A1,
          (unsigned int)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
          (const char *)(unsigned int)v29,
          (int)v30[0]);
      }
      else
      {
        v12 = 0;
      }
      if ( (v12 & 0x80000000) == 0 )
      {
        v9 = v30[0];
LABEL_13:
        if ( !v9 )
          return 0LL;
        v10 = *(_QWORD *)v9;
        v11 = v9;
LABEL_15:
        (*(void (__fastcall **)(struct IWin32ApplicationView *))(v10 + 16))(v11);
        return 0LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1F6,
        (unsigned int)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
        (const char *)v12,
        (int)v30[0]);
      v14 = (__int64 *)v30;
      goto LABEL_28;
    }
    (**(void (__fastcall ***)(struct IApplicationView *, GUID *, struct IWin32ApplicationView **))a2)(
      a2,
      &GUID_f3527610_c76d_4316_ac8e_28651acf3df3,
      &v32);
    v11 = v32;
    if ( v32 )
    {
      v13 = HolographicPositioner::_OnUnmanagedWin32ViewAdded((HolographicPositioner *)(a1 - 184), a2, v32);
      v12 = v13;
      if ( v13 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1ED,
          (unsigned int)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
          (const char *)(unsigned int)v13,
          (int)v30[0]);
        v14 = (__int64 *)&v32;
LABEL_28:
        wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>::~com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>(v14);
        return v12;
      }
      v11 = v32;
    }
    if ( !v11 )
      return 0LL;
    v10 = *(_QWORD *)v11;
    goto LABEL_15;
  }
  switch ( a3 )
  {
    case 0:
      LODWORD(v32) = HolographicPositioner::_GetApplicationViewUniqueIdForTracing(a2);
      LogEventWithApplicationViewData_unsigned_short_const_____10__unsigned_int_(a2, v27, v28, &v32);
      return 0LL;
    case 1:
      LODWORD(v32) = HolographicPositioner::_GetApplicationViewUniqueIdForTracing(a2);
      LogEventWithApplicationViewData_unsigned_short_const_____12__unsigned_int_(a2, v25, v26, &v32);
      return 0LL;
    case 2:
      LODWORD(v32) = HolographicPositioner::_GetApplicationViewUniqueIdForTracing(a2);
      LogEventWithApplicationViewData_unsigned_short_const_____14__unsigned_int_(a2, v23, v24, &v32);
      HolographicPositioner::_RaiseViewRemoved((HolographicPositioner *)(a1 - 184), a2);
      return 0LL;
    case 4:
      LODWORD(v32) = HolographicPositioner::_GetApplicationViewUniqueIdForTracing(a2);
      LogEventWithApplicationViewData_unsigned_short_const_____11__unsigned_int_(a2, v20, v21, &v32);
      if ( HolographicPositioner::_IsViewWin32Slate(a2) )
      {
        v22 = HolographicPositioner::_HandleControlLostForView((HolographicPositioner *)(a1 - 184), a2);
        if ( v22 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x1D6,
            (unsigned int)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
            (const char *)(unsigned int)v22,
            (int)v30[0]);
      }
      return 0LL;
  }
  if ( a3 <= 6 )
    return 0LL;
  if ( a3 > 8 )
  {
    if ( a3 == 9 )
      HolographicPositioner::_RaiseViewFocusLost((HolographicPositioner *)(a1 - 184), a2);
    return 0LL;
  }
  v15 = (*(__int64 (__fastcall **)(struct IApplicationView *, __int64))(*(_QWORD *)a2 + 96LL))(a2, 1LL);
  v16 = v15;
  if ( v15 >= 0 )
  {
    (**(void (__fastcall ***)(struct IApplicationView *, GUID *, struct IWin32ApplicationView **))a2)(
      a2,
      &GUID_f3527610_c76d_4316_ac8e_28651acf3df3,
      &v32);
    v18 = (HolographicPositioner *)(a1 - 184);
    if ( v32 )
    {
      v19 = HolographicPositioner::_OnManagedWin32AppFocusGained(v18, a2, v17);
      if ( v19 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x1BB,
          (unsigned int)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
          (const char *)(unsigned int)v19,
          (int)v30[0]);
    }
    wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>::~com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>((__int64 *)&v32);
    HolographicPositioner::_RaiseViewFocusGained(v18, a2);
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1B6,
    (unsigned int)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
    (const char *)(unsigned int)v15,
    (int)v30[0]);
  return v16;
}
