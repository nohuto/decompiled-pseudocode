/*
 * XREFs of ?OnApplicationViewChanged@ApplicationViewManagerVisibilityDebouncer@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x180028D90
 * Callers:
 *     <none>
 * Callees:
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18002758C (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?GetCallbackArray@AgileRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z @ 0x1800293E0 (-GetCallbackArray@AgileRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18005A170 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Int.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180063E40 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072ADC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memmove_0 @ 0x1800B0F63 (memmove_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@UApplicationViewManagerNotification@ApplicationViewManagerVisibilityDebouncer@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@UApplicationViewManagerNotification@ApplicationViewManagerVisibilityDebouncer@@@@V?$CSimpleArrayStandardCompareHelper@UApplicationViewManagerNotification@ApplicationViewManagerVisibilityDebouncer@@@@V?$CSimpleArrayStandardMergeHelper@UApplicationViewManagerNotification@ApplicationViewManagerVisibilityDebouncer@@@@@@QEAAJ_K0@Z @ 0x18011BF18 (-_EnsureCapacity@-$CTSimpleArray@UApplicationViewManagerNotification@ApplicationViewManagerVisib.c)
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_5f803f865b4b07caa2d72f9fc7ffab60_____lambda_5f803f865b4b07caa2d72f9fc7ffab60___ @ 0x180157EC8 (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_5f803f865b4b0.c)
 *     ??0ApplicationViewManagerNotification@ApplicationViewManagerVisibilityDebouncer@@QEAA@AEBU01@@Z @ 0x1801580D4 (--0ApplicationViewManagerNotification@ApplicationViewManagerVisibilityDebouncer@@QEAA@AEBU01@@Z.c)
 *     ?ClearCachedAppView@ApplicationViewManagerVisibilityDebouncer@@AEAAXPEAUIApplicationView@@@Z @ 0x1801586D4 (-ClearCachedAppView@ApplicationViewManagerVisibilityDebouncer@@AEAAXPEAUIApplicationView@@@Z.c)
 *     ?InternalRelease@?$ComPtr@VApplicationViewManagerVisibilityDebouncer@@@WRL@Microsoft@@IEAAKXZ @ 0x180158A7C (-InternalRelease@-$ComPtr@VApplicationViewManagerVisibilityDebouncer@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RemoveAt@?$CTSimpleArray@UApplicationViewManagerNotification@ApplicationViewManagerVisibilityDebouncer@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@UApplicationViewManagerNotification@ApplicationViewManagerVisibilityDebouncer@@@@V?$CSimpleArrayStandardCompareHelper@UApplicationViewManagerNotification@ApplicationViewManagerVisibilityDebouncer@@@@V?$CSimpleArrayStandardMergeHelper@UApplicationViewManagerNotification@ApplicationViewManagerVisibilityDebouncer@@@@@@QEAAJ_K@Z @ 0x180158F20 (-RemoveAt@-$CTSimpleArray@UApplicationViewManagerNotification@ApplicationViewManagerVisibilityDe.c)
 */

// Hidden C++ exception states: #wind=14
__int64 __fastcall ApplicationViewManagerVisibilityDebouncer::OnApplicationViewChanged(
        RTL_SRWLOCK *a1,
        struct IUnknown *a2,
        int a3,
        struct IUnknown *a4)
{
  RTL_SRWLOCK *v7; // r12
  struct IUnknown *v8; // rbx
  ULONGLONG TickCount64; // r12
  int v10; // r14d
  char *Ptr; // rdx
  struct IUnknown **v12; // rax
  RTL_SRWLOCK *v13; // rsi
  struct IObjectArray *v14; // rbx
  ULONGLONG v15; // r15
  struct IApplicationView **v16; // rdi
  struct IApplicationView *v17; // r14
  int v18; // eax
  struct IApplicationView *v19; // r13
  struct IApplicationView *v20; // rdi
  int v21; // eax
  __int64 v22; // rdx
  struct IObjectArray **v23; // rcx
  struct IObjectArray *v24; // rdi
  RTL_SRWLOCK *v25; // rcx
  int v26; // eax
  unsigned int v27; // r15d
  RTL_SRWLOCK *v28; // rdi
  RTL_SRWLOCK *v29; // rcx
  struct IObjectArray *v30; // rdi
  RTL_SRWLOCK *v31; // rcx
  int v32; // eax
  __int64 v33; // rcx
  RTL_SRWLOCK *v34; // rcx
  struct IObjectArray *v35; // rcx
  __int64 *v36; // rdi
  __int64 v37; // rcx
  __int64 v38; // rcx
  char *v39; // rax
  char *v41; // r14
  char *v42; // rbx
  char v43; // bl
  struct IObjectArray *v44; // rax
  bool v45; // zf
  int v46; // edi
  __int64 *v47; // rax
  __int64 v48; // rbx
  DWORD CurrentThreadId; // eax
  int v50; // [rsp+20h] [rbp-E0h]
  int v51; // [rsp+20h] [rbp-E0h]
  int v52; // [rsp+20h] [rbp-E0h]
  unsigned int v53; // [rsp+30h] [rbp-D0h]
  RTL_SRWLOCK *v54; // [rsp+38h] [rbp-C8h] BYREF
  struct IObjectArray **v55; // [rsp+40h] [rbp-C0h]
  RTL_SRWLOCK *v56; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v57; // [rsp+50h] [rbp-B0h] BYREF
  struct IObjectArray *v58; // [rsp+58h] [rbp-A8h] BYREF
  int v59; // [rsp+60h] [rbp-A0h] BYREF
  RTL_SRWLOCK *v60; // [rsp+68h] [rbp-98h]
  int v61; // [rsp+70h] [rbp-90h]
  __int64 v62; // [rsp+78h] [rbp-88h]
  struct IObjectArray **v63; // [rsp+80h] [rbp-80h]
  RTL_SRWLOCK *v64; // [rsp+88h] [rbp-78h] BYREF
  RTL_SRWLOCK *v65; // [rsp+90h] [rbp-70h] BYREF
  struct IUnknown *v66; // [rsp+98h] [rbp-68h] BYREF
  int v67; // [rsp+A0h] [rbp-60h]
  _QWORD v68[2]; // [rsp+A8h] [rbp-58h] BYREF
  struct IApplicationView *v69; // [rsp+B8h] [rbp-48h] BYREF
  int v70; // [rsp+C0h] [rbp-40h]
  _QWORD v71[2]; // [rsp+C8h] [rbp-38h] BYREF
  __int128 v72; // [rsp+D8h] [rbp-28h] BYREF
  _QWORD v73[4]; // [rsp+E8h] [rbp-18h] BYREF
  char v74[32]; // [rsp+108h] [rbp+8h] BYREF
  char v75[88]; // [rsp+128h] [rbp+28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+188h] [rbp+88h]
  struct IObjectArray *v77; // [rsp+190h] [rbp+90h] BYREF
  struct IUnknown *v78; // [rsp+198h] [rbp+98h]
  unsigned int v79; // [rsp+1A0h] [rbp+A0h]

  v78 = a2;
  v73[2] = -2LL;
  v7 = a1 + 13;
  v60 = a1 + 13;
  AcquireSRWLockExclusive(a1 + 13);
  v73[3] = v7;
  if ( a3 )
    goto LABEL_2;
  v73[1] = 0LL;
  v72 = 0LL;
  v73[0] = 0LL;
  v41 = 0LL;
  v42 = 0LL;
  if ( a1[9].Ptr )
  {
    v56 = 0LL;
    while ( 1 )
    {
      v57 = ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification::ApplicationViewManagerNotification(
              (ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification *)v74,
              (const struct ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification *)&v72);
      v44 = (struct IObjectArray *)ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification::ApplicationViewManagerNotification(
                                     (ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification *)v75,
                                     (const struct ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification *)((char *)a1[8].Ptr + (unsigned __int64)v56));
      v77 = v44;
      if ( LODWORD(v44[1].lpVtbl) != 1
        || (v45 = (unsigned int)SHIsSameObject((struct IUnknown *)v44->lpVtbl, v78) == 0, v44 = v77,
                                                                                          LOBYTE(v79) = 1,
                                                                                          v45) )
      {
        LOBYTE(v79) = 0;
      }
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v44[2]);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v77);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v57 + 16);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v57);
      if ( (_BYTE)v79 )
        break;
      ++v42;
      v56 += 4;
      if ( v42 >= a1[9].Ptr )
        goto LABEL_72;
    }
    v41 = v42;
    v43 = 1;
  }
  else
  {
LABEL_72:
    v43 = 0;
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v73);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v72);
  if ( !v43 )
  {
LABEL_2:
    v8 = v78;
    v66 = v78;
    if ( v78 )
      ((void (__fastcall *)(struct IUnknown *))v78->lpVtbl->AddRef)(v78);
    v67 = a3;
    v68[0] = a4;
    if ( a4 )
      ((void (__fastcall *)(struct IUnknown *))a4->lpVtbl->AddRef)(a4);
    TickCount64 = GetTickCount64();
    v68[1] = TickCount64;
    v10 = 0;
    Ptr = (char *)a1[9].Ptr;
    if ( Ptr != a1[11].Ptr
      || (v10 = CTSimpleArray<ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification,4294967294,CTPolicyCoTaskMem<ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification>,CSimpleArrayStandardCompareHelper<ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification>,CSimpleArrayStandardMergeHelper<ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification>>::_EnsureCapacity(
                  &a1[8],
                  Ptr + 1),
          v10 >= 0) )
    {
      v12 = (struct IUnknown **)((char *)a1[8].Ptr + 32 * (__int64)a1[9].Ptr++);
      if ( v12 )
      {
        *v12 = 0LL;
        if ( v12 != &v66 )
        {
          *v12 = v8;
          v8 = 0LL;
          v66 = 0LL;
        }
        *((_DWORD *)v12 + 2) = a3;
        v12[2] = 0LL;
        if ( v12 + 2 != v68 )
        {
          v12[2] = a4;
          a4 = 0LL;
          v68[0] = 0LL;
        }
        v12[3] = (struct IUnknown *)TickCount64;
      }
    }
    if ( a4 )
      ((void (__fastcall *)(struct IUnknown *))a4->lpVtbl->Release)(a4);
    if ( v8 )
      ((void (__fastcall *)(struct IUnknown *))v8->lpVtbl->Release)(v8);
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xEF,
        (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanagervisibilitydebouncer.cpp",
        (const char *)(unsigned int)v10,
        v50);
      v7 = v60;
      goto LABEL_68;
    }
    v7 = a1 + 13;
  }
  else
  {
    CTSimpleArray<ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification,4294967294,CTPolicyCoTaskMem<ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification>,CSimpleArrayStandardCompareHelper<ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification>,CSimpleArrayStandardMergeHelper<ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification>>::RemoveAt(
      &a1[8],
      v41);
    if ( !v41 )
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&a1[21]);
  }
  v13 = a1 - 1;
  v77 = 0LL;
  AgileRegistrationList::GetCallbackArray((AgileRegistrationList *)&a1[14], &v77);
  v14 = v77;
  if ( !a1[9].Ptr )
    goto LABEL_65;
  while ( 1 )
  {
    v15 = GetTickCount64();
    v16 = (struct IApplicationView **)v13[9].Ptr;
    v17 = *v16;
    v69 = v17;
    if ( v17 )
      (*(void (__fastcall **)(struct IApplicationView *))(*(_QWORD *)v17 + 8LL))(v17);
    v18 = *((_DWORD *)v16 + 2);
    v79 = v18;
    v70 = v18;
    v19 = v16[2];
    v71[0] = v19;
    if ( v19 )
    {
      (*(void (__fastcall **)(struct IApplicationView *))(*(_QWORD *)v19 + 8LL))(v19);
      v18 = v79;
    }
    v20 = v16[3];
    v71[1] = v20;
    if ( v18 != 1 )
      goto LABEL_25;
    if ( v15 < (unsigned __int64)v20 + 50 )
      break;
    ApplicationViewManagerVisibilityDebouncer::ClearCachedAppView((ApplicationViewManagerVisibilityDebouncer *)v13, v17);
LABEL_25:
    v58 = v14;
    if ( v14 )
      ((void (__fastcall *)(struct IObjectArray *))v14->lpVtbl->AddRef)(v14);
    v59 = 0;
    v21 = ((__int64 (__fastcall *)(struct IObjectArray *, int *))v14->lpVtbl->GetCount)(v14, &v59);
    if ( v21 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x10,
        (unsigned int)"internal\\shell\\private\\inc\\objectarrayadapter.h",
        (const char *)(unsigned int)v21,
        v50);
    v22 = 0LL;
    v53 = 0;
    v54 = 0LL;
    v23 = &v58;
    v55 = &v58;
    if ( v59 )
    {
      while ( 1 )
      {
        v24 = *v23;
        v25 = v54;
        if ( v54 )
        {
          v54 = 0LL;
          (*((void (__fastcall **)(RTL_SRWLOCK *))v25->Ptr + 2))(v25);
          v22 = v53;
        }
        v26 = ((__int64 (__fastcall *)(struct IObjectArray *, __int64, GUID *, RTL_SRWLOCK **))v24->lpVtbl->GetAt)(
                v24,
                v22,
                &GUID_727f9e97_76ee_497b_a942_b6371328485c,
                &v54);
        if ( v26 >= 0 )
          break;
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x35,
          (unsigned int)"internal\\shell\\private\\inc\\objectarrayadapter.h",
          (const char *)(unsigned int)v26,
          v50);
        v22 = v53 + 1;
        v53 = v22;
        v23 = v55;
        if ( (unsigned int)v22 >= *((_DWORD *)v55 + 2) )
          goto LABEL_34;
      }
      v23 = v55;
      LODWORD(v22) = v53;
    }
LABEL_34:
    v61 = v59;
    v62 = 0LL;
    v63 = &v58;
    v27 = v79;
LABEL_35:
    while ( (_DWORD)v22 != v61 || v23 != v63 )
    {
      v28 = v54;
      v60 = v54;
      if ( v54 )
        (*((void (__fastcall **)(RTL_SRWLOCK *))v54->Ptr + 1))(v54);
      (*((void (__fastcall **)(RTL_SRWLOCK *, struct IApplicationView *, _QWORD, struct IApplicationView *))v28->Ptr + 3))(
        v28,
        v17,
        v27,
        v19);
      (*((void (__fastcall **)(RTL_SRWLOCK *))v28->Ptr + 2))(v28);
      v22 = ++v53;
      v29 = v54;
      if ( v54 )
      {
        v54 = 0LL;
        (*((void (__fastcall **)(RTL_SRWLOCK *))v29->Ptr + 2))(v29);
        v22 = v53;
      }
      v23 = v55;
      if ( (unsigned int)v22 < *((_DWORD *)v55 + 2) )
      {
        while ( 1 )
        {
          v30 = *v23;
          v31 = v54;
          if ( v54 )
          {
            v54 = 0LL;
            (*((void (__fastcall **)(RTL_SRWLOCK *))v31->Ptr + 2))(v31);
            v22 = v53;
          }
          v32 = ((__int64 (__fastcall *)(struct IObjectArray *, __int64, GUID *, RTL_SRWLOCK **))v30->lpVtbl->GetAt)(
                  v30,
                  v22,
                  &GUID_727f9e97_76ee_497b_a942_b6371328485c,
                  &v54);
          if ( v32 >= 0 )
            break;
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x35,
            (unsigned int)"internal\\shell\\private\\inc\\objectarrayadapter.h",
            (const char *)(unsigned int)v32,
            v50);
          v22 = v53 + 1;
          v53 = v22;
          v23 = v55;
          if ( (unsigned int)v22 >= *((_DWORD *)v55 + 2) )
            goto LABEL_35;
        }
        v23 = v55;
        LODWORD(v22) = v53;
      }
    }
    v33 = v62;
    if ( v62 )
    {
      v62 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
    }
    v34 = v54;
    if ( v54 )
    {
      v54 = 0LL;
      (*((void (__fastcall **)(RTL_SRWLOCK *))v34->Ptr + 2))(v34);
    }
    v35 = v58;
    if ( v58 )
    {
      v58 = 0LL;
      ((void (__fastcall *)(struct IObjectArray *))v35->lpVtbl->Release)(v35);
    }
    if ( v13[10].Ptr )
    {
      v36 = (__int64 *)v13[9].Ptr;
      v37 = v36[2];
      if ( v37 )
      {
        v36[2] = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v37 + 16LL))(v37);
      }
      v38 = *v36;
      if ( *v36 )
      {
        *v36 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v38 + 16LL))(v38);
      }
      v39 = (char *)v13[10].Ptr;
      if ( v39 != (char *)1 )
      {
        memmove_0(v13[9].Ptr, (char *)v13[9].Ptr + 32, 32LL * (_QWORD)(v39 - 1));
        v39 = (char *)v13[10].Ptr;
      }
      v13[10].Ptr = v39 - 1;
    }
    if ( v19 )
      (*(void (__fastcall **)(struct IApplicationView *))(*(_QWORD *)v19 + 16LL))(v19);
    if ( v17 )
      (*(void (__fastcall **)(struct IApplicationView *))(*(_QWORD *)v17 + 16LL))(v17);
    if ( !v13[10].Ptr )
      goto LABEL_65;
  }
  if ( !v13[22].Ptr )
  {
    v46 = (_DWORD)v20 - v15;
    v56 = v13;
    _InterlockedIncrement((volatile signed __int32 *)&v13[8].Ptr + 1);
    v64 = v13;
    v65 = v13;
    if ( v13 )
      _InterlockedIncrement((volatile signed __int32 *)&v13[8].Ptr + 1);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v13[22]);
    v47 = (__int64 *)Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_5f803f865b4b07caa2d72f9fc7ffab60_____lambda_5f803f865b4b07caa2d72f9fc7ffab60___(
                       &v57,
                       &v64);
    v48 = *v47;
    *v47 = 0LL;
    if ( v57 )
    {
      v57 = 0LL;
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::IComPoolTask>::Release();
    }
    CurrentThreadId = GetCurrentThreadId();
    v10 = SHTaskPoolQueueTask(3LL, 0LL, CurrentThreadId, (unsigned int)(v46 + 50), v48, &v13[22]);
    if ( v48 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v48 + 16LL))(v48);
    Microsoft::WRL::ComPtr<ApplicationViewManagerVisibilityDebouncer>::InternalRelease(&v65);
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x128,
        (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanagervisibilitydebouncer.cpp",
        (const char *)(unsigned int)v10,
        v51);
      Microsoft::WRL::ComPtr<ApplicationViewManagerVisibilityDebouncer>::InternalRelease(&v56);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v71);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v69);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v77);
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xF1,
        (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanagervisibilitydebouncer.cpp",
        (const char *)(unsigned int)v10,
        v52);
      goto LABEL_68;
    }
    Microsoft::WRL::ComPtr<ApplicationViewManagerVisibilityDebouncer>::InternalRelease(&v56);
    v14 = v77;
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v71);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v69);
LABEL_65:
  if ( v14 )
    ((void (__fastcall *)(struct IObjectArray *))v14->lpVtbl->Release)(v14);
  v10 = 0;
LABEL_68:
  if ( v7 )
    ReleaseSRWLockExclusive(v7);
  return (unsigned int)v10;
}
