/*
 * XREFs of ?v_SetCloak@CWin32ApplicationView@@EEAAJW4APPLICATION_VIEW_CLOAK_TYPE@@H@Z @ 0x18004D3E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Get@?$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA?AV?$ComPtr@VCGlobals@ApplicationViewManagement@@@WRL@Microsoft@@XZ @ 0x18001A7A8 (-Get@-$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA-AV-$ComPtr@VCGlobals@Applicatio.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18001C8D0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@@Deta.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18002B9E0 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x18004D924 (-LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLO.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x18004DC78 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     _lambda_ee3e0a0da20eb1cf2fabc213f82c029b_::operator() @ 0x18004E0B8 (_lambda_ee3e0a0da20eb1cf2fabc213f82c029b_--operator().c)
 *     ?ValidateGatheredWindows@?$ToolWindowGathererTemplated@VAssociatedWindowWin32Calls@ApplicationViewManagement@@@ApplicationViewManagement@@QEAAJPEAUHWND__@@@Z @ 0x18004E120 (-ValidateGatheredWindows@-$ToolWindowGathererTemplated@VAssociatedWindowWin32Calls@ApplicationVi.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180063E40 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetViewId@CWin32ApplicationView@@UEAAJPEAPEAG@Z @ 0x18006E700 (-GetViewId@CWin32ApplicationView@@UEAAJPEAPEAG@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072ADC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RemoveAll@?$CTSimpleArray@PEAUHWND__@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@PEAUHWND__@@@@V?$CSimpleArrayStandardCompareHelper@PEAUHWND__@@@@V?$CSimpleArrayStandardMergeHelper@PEAUHWND__@@@@@@QEAAXXZ @ 0x180081A2C (-RemoveAll@-$CTSimpleArray@PEAUHWND__@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@PEAUHWND__@@@@V-$CSimpleA.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180114568 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ??$CloakTypeChange@AEAV?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAW4APPLICATION_VIEW_CLOAK_TYPE@@@ApplicationViewTraceLogging@ApplicationViewManagement@@SAXAEAV?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAW4APPLICATION_VIEW_CLOAK_TYPE@@@Z @ 0x180159900 (--$CloakTypeChange@AEAV-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@.c)
 *     GlobalsUtility::CGlobals_ApplicationViewManagement::CGlobals_::Get__lambda_807778e6719fb664354e7e91ff2b2b86___ @ 0x180159A30 (GlobalsUtility--CGlobals_ApplicationViewManagement--CGlobals_--Get__lambda_807778e6719fb664354e7.c)
 *     ?GatherWindows@?$ToolWindowGathererTemplated@VAssociatedWindowWin32Calls@ApplicationViewManagement@@@ApplicationViewManagement@@QEAAJPEAUHWND__@@@Z @ 0x18015AA28 (-GatherWindows@-$ToolWindowGathererTemplated@VAssociatedWindowWin32Calls@ApplicationViewManageme.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CWin32ApplicationView::v_SetCloak(__int64 a1, int a2, int a3)
{
  int v6; // edi
  unsigned int v7; // esi
  int v8; // r14d
  volatile signed __int32 *v9; // rbx
  _QWORD *v10; // r12
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 *v13; // rbx
  __int64 v14; // rdi
  __int64 v15; // rax
  int v16; // eax
  unsigned int v17; // ebx
  __int64 v18; // rax
  HWND v19; // rdi
  _QWORD *v20; // rdi
  __int64 v21; // rax
  __int64 v22; // r15
  unsigned __int64 v23; // rbx
  HWND v25; // rax
  int v26; // ebx
  int v27; // [rsp+20h] [rbp-40h]
  _QWORD v28[3]; // [rsp+30h] [rbp-30h] BYREF
  unsigned __int16 *v29; // [rsp+48h] [rbp-18h] BYREF
  __int64 v30; // [rsp+50h] [rbp-10h]
  __int64 v31; // [rsp+58h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+38h]
  __int64 *v33; // [rsp+A0h] [rbp+40h] BYREF
  volatile signed __int32 *v34; // [rsp+B8h] [rbp+58h] BYREF

  v28[2] = -2LL;
  Microsoft::WRL::Wrappers::SRWLock::LockExclusive(&v33, a1 + 48);
  v6 = *(_DWORD *)(a1 + 264);
  v7 = 0;
  if ( a3 )
    v8 = a2 | v6;
  else
    v8 = v6 & ~a2;
  *(_DWORD *)(a1 + 264) = v8;
  v29 = 0LL;
  v30 = 0LL;
  v31 = 0LL;
  if ( v6 != v8 )
  {
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v29);
    v30 = -1LL;
    v31 = -1LL;
    if ( (int)CWin32ApplicationView::GetViewId((CWin32ApplicationView *)(a1 + 16), &v29) >= 0 )
    {
      v28[0] = &v29;
      v28[1] = a1;
      GlobalsUtility::CGlobals_ApplicationViewManagement::CGlobals_::Get__lambda_807778e6719fb664354e7e91ff2b2b86___(v28);
      ApplicationViewManagement::ApplicationViewTraceLogging::CloakTypeChange<Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>> &,enum APPLICATION_VIEW_CLOAK_TYPE &>(
        &v29,
        a1 + 264);
    }
  }
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v29);
  Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock((Microsoft::WRL::Wrappers::Details::SyncLockExclusive *)&v33);
  if ( (v8 != 0) == (v6 != 0) && v8 )
    return 0LL;
  v33 = 0LL;
  v28[0] = &v33;
  GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::Get((__int64 *)&v34);
  v9 = v34;
  if ( v34 )
  {
    lambda_ee3e0a0da20eb1cf2fabc213f82c029b_::operator()(v28, v34);
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::FtmBase>::Release(v9);
  }
  if ( v33 )
  {
    v10 = (_QWORD *)(a1 + 232);
    v11 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 216) + 24LL))(*(_QWORD *)(a1 + 216));
    v12 = a1 + 232;
    if ( v8 )
      ApplicationViewManagement::ToolWindowGathererTemplated<ApplicationViewManagement::AssociatedWindowWin32Calls>::GatherWindows(
        v12,
        v11);
    else
      ApplicationViewManagement::ToolWindowGathererTemplated<ApplicationViewManagement::AssociatedWindowWin32Calls>::ValidateGatheredWindows(
        v12,
        v11);
    v13 = v33;
    v14 = *v33;
    v15 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 216) + 24LL))(*(_QWORD *)(a1 + 216));
    v16 = (*(__int64 (__fastcall **)(__int64 *, __int64, bool, __int64))(v14 + 24))(v13, v15, v8 != 0, 1LL);
    v17 = v16;
    if ( v16 == -2147024809 )
    {
      if ( !v8 )
      {
        v25 = (HWND)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 216) + 24LL))(*(_QWORD *)(a1 + 216));
        if ( GetWindow(v25, 4u) )
        {
          if ( *(_QWORD *)(a1 + 240) )
            wil::details::in1diag3::Log_Hr(
              retaddr,
              (void *)0x144,
              (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\appview.cpp",
              (const char *)0x80070057LL,
              v27);
          goto LABEL_31;
        }
      }
    }
    else if ( v16 >= 0 )
    {
      v18 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 216) + 24LL))(*(_QWORD *)(a1 + 216));
      v19 = (HWND)GhostWindowFromHungWindow(v18);
      if ( v19 )
      {
        v26 = (*(__int64 (__fastcall **)(__int64 *, HWND, bool, _QWORD))(*v33 + 24))(v33, v19, v8 != 0, 0LL);
        if ( (v26 != -2147024809 || v8 || !GetWindow(v19, 4u)) && v26 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x15F,
            (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\appview.cpp",
            (const char *)(unsigned int)v26,
            v27);
      }
      v20 = (_QWORD *)*v10;
      v21 = *(_QWORD *)(a1 + 240);
      v22 = 0LL;
      v23 = (unsigned __int64)(8 * v21 + 7) >> 3;
      if ( *v10 > (unsigned __int64)(*v10 + 8 * v21) )
        v23 = 0LL;
      if ( v23 )
      {
        do
        {
          (*(void (__fastcall **)(__int64 *, _QWORD, bool, _QWORD))(*v33 + 24))(v33, *v20++, v8 != 0, 0LL);
          ++v22;
        }
        while ( v22 != v23 );
      }
      if ( !v8 )
        CTSimpleArray<HWND__ *,4294967294,CTPolicyCoTaskMem<HWND__ *>,CSimpleArrayStandardCompareHelper<HWND__ *>,CSimpleArrayStandardMergeHelper<HWND__ *>>::RemoveAll(v10);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v33);
      return 0LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x14A,
      (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\appview.cpp",
      (const char *)v17,
      v27);
    v7 = v17;
  }
  else
  {
    v7 = -2147024884;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x11C,
      (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\appview.cpp",
      (const char *)0x8007000CLL,
      v27);
  }
LABEL_31:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v33);
  return v7;
}
