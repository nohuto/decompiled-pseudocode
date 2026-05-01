/*
 * XREFs of _lambda_7d6b9a4e32c168b2e51ca46a812f2e25_::operator() @ 0x1802124E8
 * Callers:
 *     ?_PerformCrashRecovery@ViewEventDispatcher@@AEAAJXZ @ 0x18021FD5C (-_PerformCrashRecovery@ViewEventDispatcher@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x1800F6B54 (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V-$C.c)
 *     ??$As@UIShellView@Server@Navigation@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIShellView@Server@Navigation@@@WRL@Microsoft@@@Details@12@@Z @ 0x18020EA6C (--$As@UIShellView@Server@Navigation@@@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$C.c)
 *     ??$ViewRecovered@AEBKAEAHAEAK@ViewManagerInteropTraceLogging@@SAXAEBKAEAHAEAK@Z @ 0x1802103C0 (--$ViewRecovered@AEBKAEAHAEAK@ViewManagerInteropTraceLogging@@SAXAEBKAEAHAEAK@Z.c)
 *     ??0RecoveredViewInfo@@QEAA@AEBU0@@Z @ 0x180210DC4 (--0RecoveredViewInfo@@QEAA@AEBU0@@Z.c)
 *     ?CreateWrapperForRecoveredView@@YAJPEAUMsgString@@URecoveredViewInfo@@URecoveredWindowForViewWrapper@@PEAVViewEventDispatcher@@PEAPEAUIViewWrapperInternal@@@Z @ 0x180213D70 (-CreateWrapperForRecoveredView@@YAJPEAUMsgString@@URecoveredViewInfo@@URecoveredWindowForViewWra.c)
 *     ?CloseServerWindow@ViewManagerBridge@@UEAAJI@Z @ 0x1802300A0 (-CloseServerWindow@ViewManagerBridge@@UEAAJI@Z.c)
 *     ?CloseViewForScenario@ViewManagerBridge@@UEAAXIPEAUIUnknown@@W4ViewCloseScenario@@@Z @ 0x180230120 (-CloseViewForScenario@ViewManagerBridge@@UEAAXIPEAUIUnknown@@W4ViewCloseScenario@@@Z.c)
 *     ?GetAppUserModelIdForView@ViewManagerBridge@@UEAAJPEAUIUnknown@@PEAPEAUMsgString@@@Z @ 0x180230850 (-GetAppUserModelIdForView@ViewManagerBridge@@UEAAJPEAUIUnknown@@PEAPEAUMsgString@@@Z.c)
 *     ?GetShellWindowIdForView@ViewManagerBridge@@QEAAJPEAUIShellView@Server@Navigation@@PEAW4WindowType@4@PEAI@Z @ 0x180231030 (-GetShellWindowIdForView@ViewManagerBridge@@QEAAJPEAUIShellView@Server@Navigation@@PEAW4WindowTy.c)
 *     ?GetPropertyDirectlyFromWindow@LightweightPropertySet@@SAKPEAUHWND__@@PEBG@Z @ 0x18023C21C (-GetPropertyDirectlyFromWindow@LightweightPropertySet@@SAKPEAUHWND__@@PEBG@Z.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall lambda_7d6b9a4e32c168b2e51ca46a812f2e25_::operator()(RTL_SRWLOCK **a1)
{
  unsigned __int64 *v2; // r9
  RTL_SRWLOCK *v3; // r10
  RTL_SRWLOCK *v4; // r15
  char v5; // r14
  __int64 v6; // r13
  char v7; // r12
  unsigned __int64 v8; // rbx
  PVOID Ptr; // r8
  _DWORD *v10; // rcx
  int ShellWindowIdForView; // eax
  ViewManagerBridge *v12; // rcx
  int v13; // edi
  __int64 v14; // rdx
  int AppUserModelIdForView; // eax
  __int64 v16; // r15
  _QWORD *v17; // rcx
  RecoveredViewInfo *v18; // rbx
  int v19; // eax
  RTL_SRWLOCK *v20; // r12
  HWND v21; // rbx
  void *v22; // r8
  RTL_SRWLOCK *v23; // r15
  PVOID v24; // rdx
  HWND *v25; // rdx
  __int64 v26; // r15
  const unsigned __int16 *v27; // rdx
  unsigned int PropertyDirectlyFromWindow; // eax
  RecoveredViewInfo *v29; // rbx
  int v30; // eax
  RTL_SRWLOCK *v31; // r12
  HWND v32; // rbx
  void *v33; // r8
  RTL_SRWLOCK *v34; // r15
  PVOID v35; // rdx
  HWND *v36; // rdx
  RTL_SRWLOCK *v37; // rbx
  RTL_SRWLOCK *v38; // rsi
  unsigned int v39; // edx
  struct MsgString *v41; // [rsp+30h] [rbp-D0h] BYREF
  struct IShellView *v42; // [rsp+38h] [rbp-C8h] BYREF
  __int128 v43; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int64 v44; // [rsp+50h] [rbp-B0h]
  _QWORD v45[2]; // [rsp+60h] [rbp-A0h] BYREF
  RTL_SRWLOCK *v46; // [rsp+70h] [rbp-90h]
  RTL_SRWLOCK *v47; // [rsp+78h] [rbp-88h]
  struct MsgString **v48; // [rsp+80h] [rbp-80h]
  char v49; // [rsp+88h] [rbp-78h]
  __int64 v50; // [rsp+90h] [rbp-70h]
  __int128 v51; // [rsp+A0h] [rbp-60h] BYREF
  unsigned __int64 v52; // [rsp+B0h] [rbp-50h]
  __int128 v53; // [rsp+C0h] [rbp-40h]
  unsigned __int64 v54; // [rsp+D0h] [rbp-30h]
  char v55; // [rsp+D8h] [rbp-28h]
  __int128 v56; // [rsp+E0h] [rbp-20h]
  int *v57; // [rsp+F0h] [rbp-10h]
  char v58; // [rsp+F8h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+148h] [rbp+48h]
  int v60; // [rsp+150h] [rbp+50h] BYREF
  int v61; // [rsp+158h] [rbp+58h] BYREF
  int v62; // [rsp+160h] [rbp+60h] BYREF
  HWND hWnd; // [rsp+168h] [rbp+68h] BYREF

  v50 = -2LL;
  v2 = (unsigned __int64 *)a1[2];
  v3 = a1[1];
  v46 = v3;
  v4 = *a1;
  v47 = v4;
  *(_QWORD *)&v43 = v4;
  *((_QWORD *)&v43 + 1) = v3;
  v44 = *v2;
  v53 = v43;
  v54 = v44;
  v5 = 1;
  v55 = 1;
  v6 = 2 * v44;
  v62 = *((_DWORD *)v3->Ptr + 4 * v44 + 2);
  v61 = 0;
  v60 = 0;
  *(_QWORD *)&v43 = &v62;
  *((_QWORD *)&v43 + 1) = &v61;
  v44 = (unsigned __int64)&v60;
  v56 = v43;
  v57 = &v60;
  v58 = 1;
  if ( LODWORD(a1[3]->Ptr) )
    goto LABEL_48;
  v7 = 0;
  v8 = 0LL;
  Ptr = a1[4]->Ptr;
  if ( !Ptr )
  {
LABEL_6:
    v43 = 0uLL;
    v44 = 0LL;
    v42 = 0LL;
    ShellWindowIdForView = Microsoft::WRL::ComPtr<IUnknown>::As<Navigation::Server::IShellView>(
                             (_QWORD *)v3->Ptr + 2 * *v2,
                             (__int64 *)&v42);
    v13 = ShellWindowIdForView;
    if ( ShellWindowIdForView < 0 )
    {
      v14 = 3027LL;
LABEL_30:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v14,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
        (const char *)(unsigned int)ShellWindowIdForView);
LABEL_42:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v42);
      goto LABEL_49;
    }
    ShellWindowIdForView = ViewManagerBridge::GetShellWindowIdForView(v12, v42, 0LL, (unsigned int *)&hWnd);
    v13 = ShellWindowIdForView;
    if ( ShellWindowIdForView < 0 )
    {
      v14 = 3029LL;
      goto LABEL_30;
    }
    v26 = (unsigned int)hWnd;
    *(_QWORD *)&v43 = (unsigned int)hWnd;
    DWORD2(v43) = (unsigned int)GetPropW((HWND)(unsigned int)hWnd, L"Microsoft.Windows.WindowFactory.ViewId");
    if ( DWORD2(v43) )
    {
      PropertyDirectlyFromWindow = LightweightPropertySet::GetPropertyDirectlyFromWindow((HWND)(unsigned int)v26, v27);
      v44 = PropertyDirectlyFromWindow;
      if ( PropertyDirectlyFromWindow )
      {
        ShellWindowIdForView = ViewManagerBridge::GetAppUserModelIdForView(
                                 (ViewManagerBridge *)(*a1)[64].Ptr,
                                 *((struct IUnknown **)a1[1]->Ptr + 2 * (__int64)a1[2]->Ptr),
                                 &v41);
        v13 = ShellWindowIdForView;
        if ( ShellWindowIdForView < 0 )
        {
          v14 = 3040LL;
          goto LABEL_30;
        }
        v48 = &v41;
        v49 = 1;
        hWnd = 0LL;
        v51 = v43;
        v52 = v44;
        v29 = RecoveredViewInfo::RecoveredViewInfo(
                (RecoveredViewInfo *)v45,
                (const struct RecoveredViewInfo *)((char *)a1[1]->Ptr + 16 * (__int64)a1[2]->Ptr));
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&hWnd);
        v30 = CreateWrapperForRecoveredView(v41, v29, &v51, *a1, &hWnd);
        v13 = v30;
        if ( v30 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0xBE7,
            (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
            (const char *)(unsigned int)v30);
LABEL_41:
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&hWnd);
          MsgRelease(v41);
          goto LABEL_42;
        }
        v31 = *a1 + 37;
        AcquireSRWLockExclusive(v31);
        v45[0] = v31;
        v32 = hWnd;
        (*(void (__fastcall **)(HWND, __int64, __int64))(*(_QWORD *)hWnd + 752LL))(hWnd, v26, 1LL);
        v34 = *a1 + 50;
        v35 = (*a1)[51].Ptr;
        if ( v35 == (*a1)[53].Ptr )
        {
          v13 = CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
                  (__int64)&(*a1)[50],
                  (unsigned __int64)v35 + 1,
                  v33);
          if ( v13 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0xBEC,
              (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
              (const char *)(unsigned int)v13);
            if ( v31 )
              ReleaseSRWLockExclusive(v31);
            goto LABEL_41;
          }
        }
        v36 = (HWND *)((char *)v34->Ptr + 8 * (__int64)v34[1].Ptr++);
        if ( v36 )
        {
          *v36 = 0LL;
          if ( v36 != &hWnd )
          {
            *v36 = v32;
            hWnd = 0LL;
          }
        }
        if ( v31 )
          ReleaseSRWLockExclusive(v31);
        v60 = v43;
        v7 = 1;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&hWnd);
        MsgRelease(v41);
      }
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v42);
    if ( !v7 )
    {
LABEL_48:
      v13 = 0;
      goto LABEL_49;
    }
LABEL_47:
    ++LODWORD(a1[6]->Ptr);
    v61 = 1;
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
                            (ViewManagerBridge *)v4[64].Ptr,
                            *((struct IUnknown **)v3->Ptr + 2 * *v2),
                            &v41);
  v13 = AppUserModelIdForView;
  if ( AppUserModelIdForView >= 0 )
  {
    v48 = &v41;
    v49 = 1;
    hWnd = 0LL;
    v16 = 3 * v8;
    v42 = (struct IShellView *)(3 * v8);
    v17 = a1[5]->Ptr;
    v43 = *(_OWORD *)&v17[3 * v8];
    v44 = v17[3 * v8 + 2];
    v18 = RecoveredViewInfo::RecoveredViewInfo(
            (RecoveredViewInfo *)v45,
            (const struct RecoveredViewInfo *)((char *)a1[1]->Ptr + 16 * (__int64)a1[2]->Ptr));
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&hWnd);
    v19 = CreateWrapperForRecoveredView(v41, v18, &v43, *a1, &hWnd);
    v13 = v19;
    if ( v19 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xBBD,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
        (const char *)(unsigned int)v19);
LABEL_20:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&hWnd);
      MsgRelease(v41);
      goto LABEL_49;
    }
    v20 = *a1 + 37;
    AcquireSRWLockExclusive(v20);
    v45[0] = v20;
    v21 = hWnd;
    (*(void (__fastcall **)(HWND, _QWORD, __int64))(*(_QWORD *)hWnd + 752LL))(hWnd, *((_QWORD *)a1[5]->Ptr + v16), 1LL);
    v23 = *a1 + 50;
    v24 = (*a1)[51].Ptr;
    if ( v24 == (*a1)[53].Ptr )
    {
      v13 = CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
              (__int64)&(*a1)[50],
              (unsigned __int64)v24 + 1,
              v22);
      if ( v13 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xBC2,
          (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
          (const char *)(unsigned int)v13);
        if ( v20 )
          ReleaseSRWLockExclusive(v20);
        goto LABEL_20;
      }
    }
    v25 = (HWND *)((char *)v23->Ptr + 8 * (__int64)v23[1].Ptr++);
    if ( v25 )
    {
      *v25 = 0LL;
      if ( v25 != &hWnd )
      {
        *v25 = v21;
        hWnd = 0LL;
      }
    }
    if ( v20 )
      ReleaseSRWLockExclusive(v20);
    v60 = *((_DWORD *)a1[5]->Ptr + 2 * (_QWORD)v42);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&hWnd);
    MsgRelease(v41);
    goto LABEL_47;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xBB5,
    (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
    (const char *)(unsigned int)AppUserModelIdForView);
LABEL_49:
  ViewManagerInteropTraceLogging::ViewRecovered<unsigned long const &,int &,unsigned long &>(
    (__int64)&v62,
    (__int64)&v61,
    (__int64)&v60);
  if ( v5 )
  {
    v37 = v46;
    v38 = v47;
    ViewManagerBridge::CloseViewForScenario(
      v47[64].Ptr,
      *((unsigned int *)v46->Ptr + 2 * v6 + 2),
      *((_QWORD *)v46->Ptr + v6),
      2LL);
    v39 = *((_DWORD *)v37->Ptr + 2 * v6 + 3);
    if ( v39 )
      ViewManagerBridge::CloseServerWindow((ViewManagerBridge *)v38[64].Ptr, v39);
  }
  return (unsigned int)v13;
}
