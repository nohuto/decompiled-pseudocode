/*
 * XREFs of ?v_SetCloak@CWin32ApplicationView@@EEAAJW4APPLICATION_VIEW_CLOAK_TYPE@@H@Z @ 0x18004F9A0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x180034EE0 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$ChainInterfaces@UIAppTransitionTargetManager@@UITaggableTarget@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@VCWRLObjectWithSite@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18003E8F0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U-$ChainInterface.c)
 *     ?Get@?$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA?AV?$ComPtr@VCGlobals@ApplicationViewManagement@@@WRL@Microsoft@@XZ @ 0x18003E9AC (-Get@-$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA-AV-$ComPtr@VCGlobals@Applicatio.c)
 *     ?LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x18004FD9C (-LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLO.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x1800500AC (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     _lambda_ee3e0a0da20eb1cf2fabc213f82c029b_::operator() @ 0x180050458 (_lambda_ee3e0a0da20eb1cf2fabc213f82c029b_--operator().c)
 *     ?ValidateGatheredWindows@?$ToolWindowGathererTemplated@VAssociatedWindowWin32Calls@ApplicationViewManagement@@@ApplicationViewManagement@@QEAAJPEAUHWND__@@@Z @ 0x1800504C0 (-ValidateGatheredWindows@-$ToolWindowGathererTemplated@VAssociatedWindowWin32Calls@ApplicationVi.c)
 *     ?GetViewId@CWin32ApplicationView@@UEAAJPEAPEAG@Z @ 0x180056C40 (-GetViewId@CWin32ApplicationView@@UEAAJPEAPEAG@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180065FF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007560C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RemoveAll@?$CTSimpleArray@PEAUHWND__@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@PEAUHWND__@@@@V?$CSimpleArrayStandardCompareHelper@PEAUHWND__@@@@V?$CSimpleArrayStandardMergeHelper@PEAUHWND__@@@@@@QEAAXXZ @ 0x1800846AC (-RemoveAll@-$CTSimpleArray@PEAUHWND__@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@PEAUHWND__@@@@V-$CSimpleA.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1801339D8 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ??$CloakTypeChange@AEAV?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAW4APPLICATION_VIEW_CLOAK_TYPE@@@ApplicationViewTraceLogging@ApplicationViewManagement@@SAXAEAV?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAW4APPLICATION_VIEW_CLOAK_TYPE@@@Z @ 0x180178BA0 (--$CloakTypeChange@AEAV-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@.c)
 *     GlobalsUtility::CGlobals_ApplicationViewManagement::CGlobals_::Get__lambda_807778e6719fb664354e7e91ff2b2b86___ @ 0x180178CD0 (GlobalsUtility--CGlobals_ApplicationViewManagement--CGlobals_--Get__lambda_807778e6719fb664354e7.c)
 *     ?GatherWindows@?$ToolWindowGathererTemplated@VAssociatedWindowWin32Calls@ApplicationViewManagement@@@ApplicationViewManagement@@QEAAJPEAUHWND__@@@Z @ 0x180179CC0 (-GatherWindows@-$ToolWindowGathererTemplated@VAssociatedWindowWin32Calls@ApplicationViewManageme.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CWin32ApplicationView::v_SetCloak(__int64 a1, int a2, int a3)
{
  int v6; // edi
  unsigned int v7; // esi
  int v8; // r14d
  __int64 v9; // rbx
  volatile int *v10; // rdx
  _QWORD *v11; // r12
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 *v14; // rbx
  __int64 v15; // rdi
  __int64 v16; // rax
  int v17; // eax
  unsigned int v18; // ebx
  __int64 v19; // rax
  HWND v20; // rdi
  _QWORD *v21; // rdi
  __int64 v22; // rax
  __int64 v23; // r15
  unsigned __int64 v24; // rbx
  HWND v26; // rax
  int v27; // ebx
  int v28; // [rsp+20h] [rbp-40h]
  _QWORD v29[3]; // [rsp+30h] [rbp-30h] BYREF
  unsigned __int16 *v30; // [rsp+48h] [rbp-18h] BYREF
  __int64 v31; // [rsp+50h] [rbp-10h]
  __int64 v32; // [rsp+58h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+38h]
  __int64 *v34; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v35; // [rsp+B8h] [rbp+58h] BYREF

  v29[2] = -2LL;
  Microsoft::WRL::Wrappers::SRWLock::LockExclusive(&v34, a1 + 48);
  v6 = *(_DWORD *)(a1 + 264);
  v7 = 0;
  if ( a3 )
    v8 = a2 | v6;
  else
    v8 = v6 & ~a2;
  *(_DWORD *)(a1 + 264) = v8;
  v30 = 0LL;
  v31 = 0LL;
  v32 = 0LL;
  if ( v6 != v8 )
  {
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v30);
    v31 = -1LL;
    v32 = -1LL;
    if ( (int)CWin32ApplicationView::GetViewId((CWin32ApplicationView *)(a1 + 16), &v30) >= 0 )
    {
      v29[0] = &v30;
      v29[1] = a1;
      GlobalsUtility::CGlobals_ApplicationViewManagement::CGlobals_::Get__lambda_807778e6719fb664354e7e91ff2b2b86___(v29);
      ApplicationViewManagement::ApplicationViewTraceLogging::CloakTypeChange<Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>> &,enum APPLICATION_VIEW_CLOAK_TYPE &>(
        &v30,
        a1 + 264);
    }
  }
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v30);
  Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock((Microsoft::WRL::Wrappers::Details::SyncLockExclusive *)&v34);
  if ( (v8 != 0) == (v6 != 0) && v8 )
    return 0LL;
  v34 = 0LL;
  v29[0] = &v34;
  GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::Get(&v35);
  v9 = v35;
  if ( v35 )
  {
    lambda_ee3e0a0da20eb1cf2fabc213f82c029b_::operator()(v29, v35);
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::ChainInterfaces<IAppTransitionTargetManager,ITaggableTarget,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,CWRLObjectWithSite>::Release(
      v9,
      v10);
  }
  if ( v34 )
  {
    v11 = (_QWORD *)(a1 + 232);
    v12 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 216) + 24LL))(*(_QWORD *)(a1 + 216));
    v13 = a1 + 232;
    if ( v8 )
      ApplicationViewManagement::ToolWindowGathererTemplated<ApplicationViewManagement::AssociatedWindowWin32Calls>::GatherWindows(
        v13,
        v12);
    else
      ApplicationViewManagement::ToolWindowGathererTemplated<ApplicationViewManagement::AssociatedWindowWin32Calls>::ValidateGatheredWindows(
        v13,
        v12);
    v14 = v34;
    v15 = *v34;
    v16 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 216) + 24LL))(*(_QWORD *)(a1 + 216));
    v17 = (*(__int64 (__fastcall **)(__int64 *, __int64, bool, __int64))(v15 + 24))(v14, v16, v8 != 0, 1LL);
    v18 = v17;
    if ( v17 == -2147024809 )
    {
      if ( !v8 )
      {
        v26 = (HWND)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 216) + 24LL))(*(_QWORD *)(a1 + 216));
        if ( GetWindow(v26, 4u) )
        {
          if ( *(_QWORD *)(a1 + 240) )
            wil::details::in1diag3::Log_Hr(
              retaddr,
              (void *)0x144,
              (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\appview.cpp",
              (const char *)0x80070057LL,
              v28);
          goto LABEL_31;
        }
      }
    }
    else if ( v17 >= 0 )
    {
      v19 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 216) + 24LL))(*(_QWORD *)(a1 + 216));
      v20 = (HWND)GhostWindowFromHungWindow(v19);
      if ( v20 )
      {
        v27 = (*(__int64 (__fastcall **)(__int64 *, HWND, bool, _QWORD))(*v34 + 24))(v34, v20, v8 != 0, 0LL);
        if ( (v27 != -2147024809 || v8 || !GetWindow(v20, 4u)) && v27 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x15F,
            (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\appview.cpp",
            (const char *)(unsigned int)v27,
            v28);
      }
      v21 = (_QWORD *)*v11;
      v22 = *(_QWORD *)(a1 + 240);
      v23 = 0LL;
      v24 = (unsigned __int64)(8 * v22 + 7) >> 3;
      if ( *v11 > (unsigned __int64)(*v11 + 8 * v22) )
        v24 = 0LL;
      if ( v24 )
      {
        do
        {
          (*(void (__fastcall **)(__int64 *, _QWORD, bool, _QWORD))(*v34 + 24))(v34, *v21++, v8 != 0, 0LL);
          ++v23;
        }
        while ( v23 != v24 );
      }
      if ( !v8 )
        CTSimpleArray<HWND__ *,4294967294,CTPolicyCoTaskMem<HWND__ *>,CSimpleArrayStandardCompareHelper<HWND__ *>,CSimpleArrayStandardMergeHelper<HWND__ *>>::RemoveAll(v11);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v34);
      return 0LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x14A,
      (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\appview.cpp",
      (const char *)v18,
      v28);
    v7 = v18;
  }
  else
  {
    v7 = -2147024884;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x11C,
      (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\appview.cpp",
      (const char *)0x8007000CLL,
      v28);
  }
LABEL_31:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v34);
  return v7;
}
