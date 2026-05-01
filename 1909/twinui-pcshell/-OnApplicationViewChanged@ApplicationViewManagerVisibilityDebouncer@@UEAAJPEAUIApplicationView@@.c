/*
 * XREFs of ?OnApplicationViewChanged@ApplicationViewManagerVisibilityDebouncer@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x180031F10
 * Callers:
 *     <none>
 * Callees:
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18003072C (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?GetCallbackArray@AgileRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z @ 0x180032690 (-GetCallbackArray@AgileRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180059100 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Int.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180065FF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007560C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memmove_0 @ 0x1800D3F03 (memmove_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??1?$ComPtr@U?$IVectorView@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@Collections@Foundation@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18011E190 (--1-$ComPtr@U-$IVectorView@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@Collectio.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@UApplicationViewManagerNotification@ApplicationViewManagerVisibilityDebouncer@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@UApplicationViewManagerNotification@ApplicationViewManagerVisibilityDebouncer@@@@V?$CSimpleArrayStandardCompareHelper@UApplicationViewManagerNotification@ApplicationViewManagerVisibilityDebouncer@@@@V?$CSimpleArrayStandardMergeHelper@UApplicationViewManagerNotification@ApplicationViewManagerVisibilityDebouncer@@@@@@QEAAJ_K0@Z @ 0x18013B3B8 (-_EnsureCapacity@-$CTSimpleArray@UApplicationViewManagerNotification@ApplicationViewManagerVisib.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCommonApplicationViewPositionImpl@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18016BCF0 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCom_ea_18016BCF0.c)
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCommonApplicationViewPositionImpl@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAKXZ @ 0x18016C074 (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCommonAp.c)
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_5f803f865b4b07caa2d72f9fc7ffab60_____lambda_5f803f865b4b07caa2d72f9fc7ffab60___ @ 0x180177128 (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_5f803f865b4b0.c)
 *     ??0ApplicationViewManagerNotification@ApplicationViewManagerVisibilityDebouncer@@QEAA@AEBU01@@Z @ 0x180177338 (--0ApplicationViewManagerNotification@ApplicationViewManagerVisibilityDebouncer@@QEAA@AEBU01@@Z.c)
 *     ?ClearCachedAppView@ApplicationViewManagerVisibilityDebouncer@@AEAAXPEAUIApplicationView@@@Z @ 0x180177934 (-ClearCachedAppView@ApplicationViewManagerVisibilityDebouncer@@AEAAXPEAUIApplicationView@@@Z.c)
 *     ?InternalRelease@?$ComPtr@VApplicationViewManagerVisibilityDebouncer@@@WRL@Microsoft@@IEAAKXZ @ 0x180177CDC (-InternalRelease@-$ComPtr@VApplicationViewManagerVisibilityDebouncer@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RemoveAt@?$CTSimpleArray@UApplicationViewManagerNotification@ApplicationViewManagerVisibilityDebouncer@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@UApplicationViewManagerNotification@ApplicationViewManagerVisibilityDebouncer@@@@V?$CSimpleArrayStandardCompareHelper@UApplicationViewManagerNotification@ApplicationViewManagerVisibilityDebouncer@@@@V?$CSimpleArrayStandardMergeHelper@UApplicationViewManagerNotification@ApplicationViewManagerVisibilityDebouncer@@@@@@QEAAJ_K@Z @ 0x180178198 (-RemoveAt@-$CTSimpleArray@UApplicationViewManagerNotification@ApplicationViewManagerVisibilityDe.c)
 */

// Hidden C++ exception states: #wind=14
__int64 __fastcall ApplicationViewManagerVisibilityDebouncer::OnApplicationViewChanged(
        __int64 a1,
        struct IUnknown *a2,
        unsigned int a3,
        ULONG (__stdcall *a4)(IObjectArray *This))
{
  unsigned int v5; // r15d
  struct IObjectArray *v6; // rdi
  __int64 v7; // rbx
  struct IObjectArray *v8; // r13
  void *v9; // rsi
  struct IObjectArrayVtbl *v10; // rdi
  __int64 v11; // r14
  __int64 v12; // r15
  __int64 v13; // rax
  __int64 v14; // rbx
  bool v15; // si
  char v16; // bl
  struct IObjectArray *v17; // rbx
  struct IUnknown *v18; // rbx
  ULONGLONG TickCount64; // r14
  int v20; // esi
  struct IObjectArrayVtbl *lpVtbl; // rdx
  char *v22; // rax
  struct IObjectArray *v23; // r13
  struct IObjectArray *v24; // rdi
  ULONGLONG v25; // r14
  struct IObjectArrayVtbl *v26; // rbx
  struct IApplicationView *QueryInterface; // r15
  unsigned int AddRef; // eax
  ULONG (__stdcall *Release)(IObjectArray *); // r12
  ULONGLONG GetCount; // rsi
  int v31; // eax
  __int64 v32; // rdx
  struct IObjectArray **v33; // rcx
  struct IObjectArray *v34; // rbx
  __int64 v35; // rcx
  int v36; // eax
  unsigned int v37; // esi
  __int64 v38; // rbx
  __int64 v39; // rcx
  struct IObjectArray *v40; // rbx
  __int64 v41; // rcx
  int v42; // eax
  __int64 v43; // rcx
  __int64 v44; // rcx
  struct IObjectArray *v45; // rcx
  struct IObjectArrayVtbl *v46; // rbx
  ULONG (__stdcall *v47)(IObjectArray *); // rcx
  HRESULT (__stdcall *v48)(IObjectArray *, const IID *const, void **); // rcx
  struct IObjectArrayVtbl *v49; // rax
  __int64 *v50; // rax
  __int64 v51; // rbx
  DWORD CurrentThreadId; // eax
  int v54; // [rsp+28h] [rbp-99h]
  int v55; // [rsp+28h] [rbp-99h]
  __int64 v56; // [rsp+38h] [rbp-89h] BYREF
  __int64 v57; // [rsp+40h] [rbp-81h] BYREF
  struct IObjectArray **v58; // [rsp+48h] [rbp-79h]
  __int64 v59; // [rsp+58h] [rbp-69h] BYREF
  struct IObjectArray *v60; // [rsp+60h] [rbp-61h] BYREF
  __int128 v61; // [rsp+68h] [rbp-59h] BYREF
  ULONG (__stdcall *v62)(IObjectArray *); // [rsp+78h] [rbp-49h] BYREF
  ULONGLONG v63; // [rsp+80h] [rbp-41h]
  struct IObjectArray *v64; // [rsp+88h] [rbp-39h] BYREF
  int v65; // [rsp+90h] [rbp-31h] BYREF
  __int64 v66; // [rsp+98h] [rbp-29h] BYREF
  struct IObjectArray *v67; // [rsp+A0h] [rbp-21h] BYREF
  int v68; // [rsp+A8h] [rbp-19h] BYREF
  __int64 v69; // [rsp+B0h] [rbp-11h]
  struct IObjectArray **v70; // [rsp+B8h] [rbp-9h]
  PSRWLOCK SRWLock; // [rsp+C8h] [rbp+7h]
  __int64 v72; // [rsp+D0h] [rbp+Fh]
  __int64 v73; // [rsp+D8h] [rbp+17h]
  wil::details::in1diag3 *retaddr; // [rsp+120h] [rbp+5Fh]
  struct IObjectArray *v75; // [rsp+128h] [rbp+67h] BYREF
  struct IUnknown *v76; // [rsp+130h] [rbp+6Fh]
  unsigned int v77; // [rsp+138h] [rbp+77h]

  v77 = a3;
  v76 = a2;
  v75 = (struct IObjectArray *)a1;
  v72 = -2LL;
  v5 = a3;
  v6 = (struct IObjectArray *)a1;
  v7 = a1 + 104;
  SRWLock = (PSRWLOCK)(a1 + 104);
  AcquireSRWLockExclusive((PSRWLOCK)(a1 + 104));
  v73 = v7;
  if ( !v5 )
  {
    v63 = 0LL;
    v61 = 0LL;
    v62 = 0LL;
    v8 = v6 + 8;
    v9 = 0LL;
    v60 = 0LL;
    v10 = 0LL;
    if ( v8[1].lpVtbl )
    {
      v11 = 0LL;
      while ( 1 )
      {
        v12 = ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification::ApplicationViewManagerNotification(
                (ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification *)&v68,
                (const struct ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification *)&v61);
        v59 = v12;
        v13 = ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification::ApplicationViewManagerNotification(
                (ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification *)&v56,
                (const struct ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification *)((char *)v8->lpVtbl + v11));
        v14 = v13;
        v66 = v13;
        v15 = *(_DWORD *)(v13 + 8) == 1 && (unsigned int)SHIsSameObject(*(struct IUnknown **)v13, v76);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v14 + 16);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v14);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v12 + 16);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v12);
        if ( v15 )
          break;
        v10 = (struct IObjectArrayVtbl *)((char *)v10 + 1);
        v11 += 32LL;
        if ( v10 >= v8[1].lpVtbl )
        {
          v9 = v60;
          goto LABEL_11;
        }
      }
      v9 = v10;
      v16 = 1;
    }
    else
    {
LABEL_11:
      v16 = 0;
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v62);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v61);
    if ( v16 )
    {
      CTSimpleArray<ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification,4294967294,CTPolicyCoTaskMem<ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification>,CSimpleArrayStandardCompareHelper<ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification>,CSimpleArrayStandardMergeHelper<ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification>>::RemoveAt(
        v8,
        v9);
      v17 = v75;
      if ( !v9 )
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v75[21]);
      goto LABEL_36;
    }
    v6 = v75;
    v5 = v77;
  }
  v18 = v76;
  *(_QWORD *)&v61 = v76;
  if ( v76 )
    ((void (__fastcall *)(struct IUnknown *))v76->lpVtbl->AddRef)(v76);
  DWORD2(v61) = v5;
  v62 = a4;
  if ( a4 )
    (*(void (__fastcall **)(ULONG (__stdcall *)(IObjectArray *)))(*(_QWORD *)a4 + 8LL))(a4);
  TickCount64 = GetTickCount64();
  v63 = TickCount64;
  v20 = 0;
  lpVtbl = v6[9].lpVtbl;
  if ( lpVtbl != v6[11].lpVtbl
    || (v20 = CTSimpleArray<ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification,4294967294,CTPolicyCoTaskMem<ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification>,CSimpleArrayStandardCompareHelper<ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification>,CSimpleArrayStandardMergeHelper<ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification>>::_EnsureCapacity(
                &v6[8],
                (char *)&lpVtbl->QueryInterface + 1),
        v20 >= 0) )
  {
    v22 = (char *)v6[8].lpVtbl + 32 * (__int64)v6[9].lpVtbl++;
    if ( v22 )
    {
      *(_QWORD *)v22 = 0LL;
      if ( v22 != (char *)&v61 )
      {
        *(_QWORD *)v22 = v18;
        v18 = 0LL;
      }
      *((_DWORD *)v22 + 2) = v5;
      *((_QWORD *)v22 + 2) = 0LL;
      if ( v22 + 16 != (char *)&v62 )
      {
        *((_QWORD *)v22 + 2) = a4;
        a4 = 0LL;
      }
      *((_QWORD *)v22 + 3) = TickCount64;
    }
  }
  if ( a4 )
    (*(void (__fastcall **)(ULONG (__stdcall *)(IObjectArray *)))(*(_QWORD *)a4 + 16LL))(a4);
  if ( v18 )
    ((void (__fastcall *)(struct IUnknown *))v18->lpVtbl->Release)(v18);
  if ( v20 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xEF,
      (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanagervisibilitydebouncer.cpp",
      (const char *)(unsigned int)v20,
      v54);
    goto LABEL_101;
  }
  v17 = v75;
LABEL_36:
  v23 = v17 - 1;
  v75 = 0LL;
  AgileRegistrationList::GetCallbackArray((AgileRegistrationList *)&v17[14], &v75);
  v24 = v75;
  while ( v23[10].lpVtbl )
  {
    v25 = GetTickCount64();
    v26 = v23[9].lpVtbl;
    QueryInterface = (struct IApplicationView *)v26->QueryInterface;
    *(_QWORD *)&v61 = QueryInterface;
    if ( QueryInterface )
      (*(void (__fastcall **)(struct IApplicationView *))(*(_QWORD *)QueryInterface + 8LL))(QueryInterface);
    AddRef = (unsigned int)v26->AddRef;
    v77 = AddRef;
    DWORD2(v61) = AddRef;
    Release = v26->Release;
    v62 = Release;
    if ( Release )
    {
      (*(void (__fastcall **)(ULONG (__stdcall *)(IObjectArray *)))(*(_QWORD *)Release + 8LL))(Release);
      AddRef = v77;
    }
    GetCount = (ULONGLONG)v26->GetCount;
    v63 = GetCount;
    if ( AddRef == 1 )
    {
      if ( v25 < GetCount + 50 )
      {
        if ( !v23[22].lpVtbl )
        {
          v60 = v23;
          Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CCommonApplicationViewPositionImpl,Microsoft::WRL::FtmBase>::InternalAddRef(v23);
          v66 = (__int64)v23;
          v67 = v23;
          if ( v23 )
            Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CCommonApplicationViewPositionImpl,Microsoft::WRL::FtmBase>::AddRef(v23);
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v23[22]);
          v50 = (__int64 *)Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_5f803f865b4b07caa2d72f9fc7ffab60_____lambda_5f803f865b4b07caa2d72f9fc7ffab60___(
                             &v59,
                             &v66);
          v51 = *v50;
          *v50 = 0LL;
          if ( v59 )
          {
            v59 = 0LL;
            Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::IComPoolTask>::Release();
          }
          CurrentThreadId = GetCurrentThreadId();
          v20 = SHTaskPoolQueueTask(3LL, 0LL, CurrentThreadId);
          if ( v51 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v51 + 16LL))(v51);
          Microsoft::WRL::ComPtr<ApplicationViewManagerVisibilityDebouncer>::InternalRelease(&v67);
          if ( v20 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x128,
              (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanagervisibilitydebouncer.cpp",
              (const char *)(unsigned int)v20,
              v51);
            Microsoft::WRL::ComPtr<ApplicationViewManagerVisibilityDebouncer>::InternalRelease(&v60);
            Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v62);
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v61);
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVectorView<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>>::~ComPtr<Windows::Foundation::Collections::IVectorView<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>>(&v75);
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0xF1,
              (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanagervisibilitydebouncer.cpp",
              (const char *)(unsigned int)v20,
              v55);
            goto LABEL_101;
          }
          Microsoft::WRL::ComPtr<ApplicationViewManagerVisibilityDebouncer>::InternalRelease(&v60);
        }
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v62);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v61);
        break;
      }
      ApplicationViewManagerVisibilityDebouncer::ClearCachedAppView(
        (ApplicationViewManagerVisibilityDebouncer *)v23,
        QueryInterface);
    }
    v64 = v24;
    if ( v24 )
      ((void (__fastcall *)(struct IObjectArray *))v24->lpVtbl->AddRef)(v24);
    v65 = 0;
    v31 = ((__int64 (__fastcall *)(struct IObjectArray *, int *))v24->lpVtbl->GetCount)(v24, &v65);
    if ( v31 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x10,
        (unsigned int)"internal\\shell\\private\\inc\\objectarrayadapter.h",
        (const char *)(unsigned int)v31,
        v54);
    v32 = 0LL;
    LODWORD(v56) = 0;
    v57 = 0LL;
    v33 = &v64;
    v58 = &v64;
    if ( v65 )
    {
      while ( 1 )
      {
        v34 = *v33;
        v35 = v57;
        if ( v57 )
        {
          v57 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 16LL))(v35);
          v32 = (unsigned int)v56;
        }
        v36 = ((__int64 (__fastcall *)(struct IObjectArray *, __int64, GUID *, __int64 *))v34->lpVtbl->GetAt)(
                v34,
                v32,
                &GUID_727f9e97_76ee_497b_a942_b6371328485c,
                &v57);
        if ( v36 >= 0 )
          break;
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x35,
          (unsigned int)"internal\\shell\\private\\inc\\objectarrayadapter.h",
          (const char *)(unsigned int)v36,
          v54);
        v32 = (unsigned int)(v56 + 1);
        LODWORD(v56) = v32;
        v33 = v58;
        if ( (unsigned int)v32 >= *((_DWORD *)v58 + 2) )
          goto LABEL_56;
      }
      v33 = v58;
      LODWORD(v32) = v56;
    }
LABEL_56:
    v68 = v65;
    v69 = 0LL;
    v70 = &v64;
    v37 = v77;
LABEL_57:
    while ( (_DWORD)v32 != v68 || v33 != v70 )
    {
      v38 = v57;
      v66 = v57;
      if ( v57 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v57 + 8LL))(v57);
      (*(void (__fastcall **)(__int64, struct IApplicationView *, _QWORD, ULONG (__stdcall *)(IObjectArray *)))(*(_QWORD *)v38 + 24LL))(
        v38,
        QueryInterface,
        v37,
        Release);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v38 + 16LL))(v38);
      v32 = (unsigned int)(v56 + 1);
      LODWORD(v56) = v56 + 1;
      v39 = v57;
      if ( v57 )
      {
        v57 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v39 + 16LL))(v39);
        v32 = (unsigned int)v56;
      }
      while ( 1 )
      {
        v33 = v58;
        if ( (unsigned int)v32 >= *((_DWORD *)v58 + 2) )
          break;
        v40 = *v58;
        v41 = v57;
        if ( v57 )
        {
          v57 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v41 + 16LL))(v41);
          v32 = (unsigned int)v56;
        }
        v42 = ((__int64 (__fastcall *)(struct IObjectArray *, __int64, GUID *, __int64 *))v40->lpVtbl->GetAt)(
                v40,
                v32,
                &GUID_727f9e97_76ee_497b_a942_b6371328485c,
                &v57);
        if ( v42 >= 0 )
        {
          v33 = v58;
          LODWORD(v32) = v56;
          goto LABEL_57;
        }
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x35,
          (unsigned int)"internal\\shell\\private\\inc\\objectarrayadapter.h",
          (const char *)(unsigned int)v42,
          v54);
        v32 = (unsigned int)(v56 + 1);
        LODWORD(v56) = v56 + 1;
      }
    }
    v43 = v69;
    if ( v69 )
    {
      v69 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v43 + 16LL))(v43);
    }
    v44 = v57;
    if ( v57 )
    {
      v57 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v44 + 16LL))(v44);
    }
    v45 = v64;
    if ( v64 )
    {
      v64 = 0LL;
      ((void (__fastcall *)(struct IObjectArray *))v45->lpVtbl->Release)(v45);
    }
    if ( v23[10].lpVtbl )
    {
      v46 = v23[9].lpVtbl;
      v47 = v46->Release;
      if ( v47 )
      {
        v46->Release = 0LL;
        (*(void (__fastcall **)(ULONG (__stdcall *)(IObjectArray *)))(*(_QWORD *)v47 + 16LL))(v47);
      }
      v48 = v46->QueryInterface;
      if ( v46->QueryInterface )
      {
        v46->QueryInterface = 0LL;
        (*(void (__fastcall **)(HRESULT (__stdcall *)(IObjectArray *, const IID *const, void **)))(*(_QWORD *)v48 + 16LL))(v48);
      }
      v49 = v23[10].lpVtbl;
      if ( v49 != (struct IObjectArrayVtbl *)1 )
      {
        memmove_0(v23[9].lpVtbl, &v23[9].lpVtbl->GetAt, 32LL * ((_QWORD)v49 - 1));
        v49 = v23[10].lpVtbl;
      }
      v23[10].lpVtbl = (struct IObjectArrayVtbl *)((char *)v49 - 1);
    }
    if ( Release )
      (*(void (__fastcall **)(ULONG (__stdcall *)(IObjectArray *)))(*(_QWORD *)Release + 16LL))(Release);
    if ( QueryInterface )
      (*(void (__fastcall **)(struct IApplicationView *))(*(_QWORD *)QueryInterface + 16LL))(QueryInterface);
  }
  if ( v24 )
    ((void (__fastcall *)(struct IObjectArray *))v24->lpVtbl->Release)(v24);
  v20 = 0;
LABEL_101:
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  return (unsigned int)v20;
}
