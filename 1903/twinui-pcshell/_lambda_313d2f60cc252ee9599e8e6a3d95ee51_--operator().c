/*
 * XREFs of _lambda_313d2f60cc252ee9599e8e6a3d95ee51_::operator() @ 0x1802694F4
 * Callers:
 *     ?_PerformCrashRecovery@ViewEventDispatcher@@AEAAJXZ @ 0x180275350 (-_PerformCrashRecovery@ViewEventDispatcher@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x18011BE3C (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V-$C.c)
 *     ??$As@UIShellView@Server@Navigation@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIShellView@Server@Navigation@@@WRL@Microsoft@@@Details@12@@Z @ 0x18026625C (--$As@UIShellView@Server@Navigation@@@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$C.c)
 *     ??$ViewRecovered@AEBKAEAHAEAK@ViewManagerInteropTraceLogging@@SAXAEBKAEAHAEAK@Z @ 0x180267C18 (--$ViewRecovered@AEBKAEAHAEAK@ViewManagerInteropTraceLogging@@SAXAEBKAEAHAEAK@Z.c)
 *     ??0RecoveredViewInfo@@QEAA@AEBU0@@Z @ 0x1802683B0 (--0RecoveredViewInfo@@QEAA@AEBU0@@Z.c)
 *     ?CreateWrapperForRecoveredView@@YAJPEAUMsgString@@URecoveredViewInfo@@URecoveredWindowForViewWrapper@@PEAVViewEventDispatcher@@PEAPEAUIViewWrapperInternal@@@Z @ 0x18026AF20 (-CreateWrapperForRecoveredView@@YAJPEAUMsgString@@URecoveredViewInfo@@URecoveredWindowForViewWra.c)
 *     ?CloseServerWindow@ViewManagerBridge@@UEAAJI@Z @ 0x1802853A0 (-CloseServerWindow@ViewManagerBridge@@UEAAJI@Z.c)
 *     ?CloseViewForScenario@ViewManagerBridge@@UEAAXIPEAUIUnknown@@W4ViewCloseScenario@@@Z @ 0x180285420 (-CloseViewForScenario@ViewManagerBridge@@UEAAXIPEAUIUnknown@@W4ViewCloseScenario@@@Z.c)
 *     ?GetAppUserModelIdForView@ViewManagerBridge@@UEAAJPEAUIUnknown@@PEAPEAUMsgString@@@Z @ 0x180285B90 (-GetAppUserModelIdForView@ViewManagerBridge@@UEAAJPEAUIUnknown@@PEAPEAUMsgString@@@Z.c)
 *     ?GetShellWindowIdForView@ViewManagerBridge@@QEAAJPEAUIShellView@Server@Navigation@@PEAW4WindowType@4@PEAI@Z @ 0x1802863C0 (-GetShellWindowIdForView@ViewManagerBridge@@QEAAJPEAUIShellView@Server@Navigation@@PEAW4WindowTy.c)
 *     ?GetPropertyDirectlyFromWindow@LightweightPropertySet@@SAKPEAUHWND__@@PEBG@Z @ 0x180292488 (-GetPropertyDirectlyFromWindow@LightweightPropertySet@@SAKPEAUHWND__@@PEBG@Z.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall lambda_313d2f60cc252ee9599e8e6a3d95ee51_::operator()(RTL_SRWLOCK **a1)
{
  unsigned __int64 *v2; // r9
  RTL_SRWLOCK *v3; // r13
  RTL_SRWLOCK *v4; // rbx
  char v5; // si
  __int64 v6; // r12
  char v7; // r15
  unsigned __int64 v8; // r14
  PVOID Ptr; // r8
  _DWORD *v10; // rcx
  int ShellWindowIdForView; // eax
  ViewManagerBridge *v12; // rcx
  int v13; // ebx
  __int64 v14; // rdx
  int AppUserModelIdForView; // eax
  RTL_SRWLOCK *v16; // rax
  struct IShellView *v17; // r14
  _QWORD *v18; // rcx
  RecoveredViewInfo *v19; // rbx
  int v20; // eax
  RTL_SRWLOCK *v21; // r15
  void *v22; // r8
  RTL_SRWLOCK *v23; // r14
  PVOID v24; // rdx
  HWND *v25; // rdx
  __int64 v26; // r14
  const unsigned __int16 *v27; // rdx
  unsigned int PropertyDirectlyFromWindow; // eax
  RecoveredViewInfo *v29; // rbx
  int v30; // eax
  RTL_SRWLOCK *v31; // r15
  void *v32; // r8
  RTL_SRWLOCK *v33; // r14
  PVOID v34; // rdx
  HWND *v35; // rdx
  RTL_SRWLOCK *v36; // rdi
  unsigned int v37; // edx
  struct MsgString *v39; // [rsp+30h] [rbp-A9h] BYREF
  struct IShellView *v40; // [rsp+38h] [rbp-A1h] BYREF
  __int128 v41; // [rsp+40h] [rbp-99h] BYREF
  unsigned __int64 v42; // [rsp+50h] [rbp-89h]
  _QWORD v43[2]; // [rsp+60h] [rbp-79h] BYREF
  RTL_SRWLOCK *v44; // [rsp+70h] [rbp-69h]
  struct MsgString **v45; // [rsp+78h] [rbp-61h]
  char v46; // [rsp+80h] [rbp-59h]
  __int64 v47; // [rsp+88h] [rbp-51h]
  __int128 v48; // [rsp+90h] [rbp-49h] BYREF
  unsigned __int64 v49; // [rsp+A0h] [rbp-39h]
  __int128 v50; // [rsp+B0h] [rbp-29h]
  unsigned __int64 v51; // [rsp+C0h] [rbp-19h]
  char v52; // [rsp+C8h] [rbp-11h]
  __int128 v53; // [rsp+D0h] [rbp-9h]
  int *v54; // [rsp+E0h] [rbp+7h]
  char v55; // [rsp+E8h] [rbp+Fh]
  wil::details::in1diag3 *retaddr; // [rsp+138h] [rbp+5Fh]
  int v57; // [rsp+140h] [rbp+67h] BYREF
  int v58; // [rsp+148h] [rbp+6Fh] BYREF
  int v59; // [rsp+150h] [rbp+77h] BYREF
  HWND hWnd; // [rsp+158h] [rbp+7Fh] BYREF

  v47 = -2LL;
  v2 = (unsigned __int64 *)a1[2];
  v3 = a1[1];
  v4 = *a1;
  v44 = v4;
  *(_QWORD *)&v41 = v4;
  *((_QWORD *)&v41 + 1) = v3;
  v42 = *v2;
  v50 = v41;
  v51 = v42;
  v5 = 1;
  v52 = 1;
  v6 = 2 * v42;
  v59 = *((_DWORD *)v3->Ptr + 4 * v42 + 2);
  v58 = 0;
  v57 = 0;
  *(_QWORD *)&v41 = &v59;
  *((_QWORD *)&v41 + 1) = &v58;
  v42 = (unsigned __int64)&v57;
  v53 = v41;
  v54 = &v57;
  v55 = 1;
  if ( LODWORD(a1[3]->Ptr) )
    goto LABEL_48;
  v7 = 0;
  v8 = 0LL;
  Ptr = a1[4]->Ptr;
  if ( !Ptr )
  {
LABEL_6:
    *(_QWORD *)&v41 = 0LL;
    HIDWORD(v41) = 0;
    v40 = 0LL;
    ShellWindowIdForView = Microsoft::WRL::ComPtr<IUnknown>::As<Navigation::Server::IShellView>(
                             (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))v3->Ptr + 2 * *v2,
                             (__int64 *)&v40);
    v13 = ShellWindowIdForView;
    if ( ShellWindowIdForView < 0 )
    {
      v14 = 2719LL;
LABEL_30:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v14,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
        (const char *)(unsigned int)ShellWindowIdForView);
LABEL_42:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v40);
      goto LABEL_49;
    }
    ShellWindowIdForView = ViewManagerBridge::GetShellWindowIdForView(v12, v40, 0LL, (unsigned int *)&hWnd);
    v13 = ShellWindowIdForView;
    if ( ShellWindowIdForView < 0 )
    {
      v14 = 2721LL;
      goto LABEL_30;
    }
    v26 = (unsigned int)hWnd;
    *(_QWORD *)&v41 = (unsigned int)hWnd;
    DWORD2(v41) = (unsigned int)GetPropW((HWND)(unsigned int)hWnd, L"Microsoft.Windows.WindowFactory.ViewId");
    if ( DWORD2(v41) )
    {
      PropertyDirectlyFromWindow = LightweightPropertySet::GetPropertyDirectlyFromWindow((HWND)(unsigned int)v26, v27);
      v42 = PropertyDirectlyFromWindow;
      if ( PropertyDirectlyFromWindow )
      {
        ShellWindowIdForView = ViewManagerBridge::GetAppUserModelIdForView(
                                 (ViewManagerBridge *)(*a1)[62].Ptr,
                                 *((struct IUnknown **)a1[1]->Ptr + 2 * (__int64)a1[2]->Ptr),
                                 &v39);
        v13 = ShellWindowIdForView;
        if ( ShellWindowIdForView < 0 )
        {
          v14 = 2732LL;
          goto LABEL_30;
        }
        v45 = &v39;
        v46 = 1;
        hWnd = 0LL;
        v48 = v41;
        v49 = v42;
        v29 = RecoveredViewInfo::RecoveredViewInfo(
                (RecoveredViewInfo *)v43,
                (const struct RecoveredViewInfo *)((char *)a1[1]->Ptr + 16 * (__int64)a1[2]->Ptr));
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&hWnd);
        v30 = CreateWrapperForRecoveredView(v39, v29, &v48, *a1, &hWnd);
        v13 = v30;
        if ( v30 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0xAB3,
            (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
            (const char *)(unsigned int)v30);
LABEL_41:
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&hWnd);
          MsgRelease(v39);
          goto LABEL_42;
        }
        v31 = *a1 + 35;
        AcquireSRWLockExclusive(v31);
        v43[0] = v31;
        (*(void (__fastcall **)(HWND, __int64, __int64))(*(_QWORD *)hWnd + 760LL))(hWnd, v26, 1LL);
        v33 = *a1 + 48;
        v34 = (*a1)[49].Ptr;
        if ( v34 == (*a1)[51].Ptr )
        {
          v13 = CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
                  (__int64)&(*a1)[48],
                  (unsigned __int64)v34 + 1,
                  v32);
          if ( v13 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0xAB8,
              (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
              (const char *)(unsigned int)v13);
            if ( v31 )
              ReleaseSRWLockExclusive(v31);
            goto LABEL_41;
          }
        }
        v35 = (HWND *)((char *)v33->Ptr + 8 * (__int64)v33[1].Ptr++);
        if ( v35 )
        {
          *v35 = 0LL;
          if ( v35 != &hWnd )
          {
            *v35 = hWnd;
            hWnd = 0LL;
          }
        }
        if ( v31 )
          ReleaseSRWLockExclusive(v31);
        v57 = v41;
        v7 = 1;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&hWnd);
        MsgRelease(v39);
      }
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v40);
    if ( !v7 )
    {
LABEL_48:
      v13 = 0;
      goto LABEL_49;
    }
LABEL_47:
    ++LODWORD(a1[6]->Ptr);
    v58 = 1;
    v5 = 0;
    goto LABEL_48;
  }
  v10 = (char *)a1[5]->Ptr + 8;
  while ( *v10 != *((_DWORD *)v3->Ptr + 4 * *v2 + 2) )
  {
    ++v8;
    v10 += 6;
    if ( v8 >= (unsigned __int64)Ptr )
      goto LABEL_6;
  }
  AppUserModelIdForView = ViewManagerBridge::GetAppUserModelIdForView(
                            (ViewManagerBridge *)v4[62].Ptr,
                            *((struct IUnknown **)v3->Ptr + 2 * *v2),
                            &v39);
  v13 = AppUserModelIdForView;
  if ( AppUserModelIdForView >= 0 )
  {
    v45 = &v39;
    v46 = 1;
    hWnd = 0LL;
    v16 = a1[5];
    v17 = (struct IShellView *)(3 * v8);
    v40 = v17;
    v18 = v16->Ptr;
    v41 = *(_OWORD *)((char *)v16->Ptr + 8 * (_QWORD)v17);
    v42 = v18[(_QWORD)v17 + 2];
    v19 = RecoveredViewInfo::RecoveredViewInfo(
            (RecoveredViewInfo *)v43,
            (const struct RecoveredViewInfo *)((char *)a1[1]->Ptr + 16 * (__int64)a1[2]->Ptr));
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&hWnd);
    v20 = CreateWrapperForRecoveredView(v39, v19, &v41, *a1, &hWnd);
    v13 = v20;
    if ( v20 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xA89,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
        (const char *)(unsigned int)v20);
LABEL_20:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&hWnd);
      MsgRelease(v39);
      goto LABEL_49;
    }
    v21 = *a1 + 35;
    AcquireSRWLockExclusive(v21);
    v43[0] = v21;
    (*(void (__fastcall **)(HWND, _QWORD, __int64))(*(_QWORD *)hWnd + 760LL))(
      hWnd,
      *((_QWORD *)a1[5]->Ptr + (_QWORD)v17),
      1LL);
    v23 = *a1 + 48;
    v24 = (*a1)[49].Ptr;
    if ( v24 == (*a1)[51].Ptr )
    {
      v13 = CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
              (__int64)&(*a1)[48],
              (unsigned __int64)v24 + 1,
              v22);
      if ( v13 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xA8E,
          (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
          (const char *)(unsigned int)v13);
        if ( v21 )
          ReleaseSRWLockExclusive(v21);
        goto LABEL_20;
      }
    }
    v25 = (HWND *)((char *)v23->Ptr + 8 * (__int64)v23[1].Ptr++);
    if ( v25 )
    {
      *v25 = 0LL;
      if ( v25 != &hWnd )
      {
        *v25 = hWnd;
        hWnd = 0LL;
      }
    }
    if ( v21 )
      ReleaseSRWLockExclusive(v21);
    v57 = *((_DWORD *)a1[5]->Ptr + 2 * (_QWORD)v40);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&hWnd);
    MsgRelease(v39);
    goto LABEL_47;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xA81,
    (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
    (const char *)(unsigned int)AppUserModelIdForView);
LABEL_49:
  ViewManagerInteropTraceLogging::ViewRecovered<unsigned long const &,int &,unsigned long &>(
    (__int64)&v59,
    (__int64)&v58,
    (__int64)&v57);
  if ( v5 )
  {
    v36 = v44;
    ViewManagerBridge::CloseViewForScenario(
      v44[62].Ptr,
      *((unsigned int *)v3->Ptr + 2 * v6 + 2),
      *((_QWORD *)v3->Ptr + v6),
      2LL);
    v37 = *((_DWORD *)v3->Ptr + 2 * v6 + 3);
    if ( v37 )
      ViewManagerBridge::CloseServerWindow((ViewManagerBridge *)v36[62].Ptr, v37);
  }
  return (unsigned int)v13;
}
