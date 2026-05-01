/*
 * XREFs of ?OnViewCreated@TouchKeyboardExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@UEventRegistrationToken@@@Z @ 0x1802B8B98
 * Callers:
 *     ?OnViewEvent@TouchKeyboardExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@3456@@Z @ 0x1802B8D70 (-OnViewEvent@TouchKeyboardExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Inte.c)
 * Callees:
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18003ACF8 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1Iterator@?$ObjectArrayAdapterImpl@UIImmersiveApplicationInternal@@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@details@@QEAA@XZ @ 0x18008CCAC (--1Iterator@-$ObjectArrayAdapterImpl@UIImmersiveApplicationInternal@@V-$ComPtr@UIImmersiveApplic.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_a6e83045e007bd3aeabbed1653bdb15e___ @ 0x18009227C (Windows--Internal--ComTaskPool--QueueTask__lambda_a6e83045e007bd3aeabbed1653bdb15e___.c)
 *     _lambda_a6e83045e007bd3aeabbed1653bdb15e_::_lambda_a6e83045e007bd3aeabbed1653bdb15e_ @ 0x180092518 (_lambda_a6e83045e007bd3aeabbed1653bdb15e_--_lambda_a6e83045e007bd3aeabbed1653bdb15e_.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??1WeakRef@WRL@Microsoft@@QEAA@XZ @ 0x1800DD820 (--1WeakRef@WRL@Microsoft@@QEAA@XZ.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1800EFCD4 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ??B?$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ @ 0x180124984 (--B-$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ.c)
 *     ??$AsWeak@VTouchKeyboardExperienceManager@@@WRL@Microsoft@@YAJPEAVTouchKeyboardExperienceManager@@PEAVWeakRef@01@@Z @ 0x1802B366C (--$AsWeak@VTouchKeyboardExperienceManager@@@WRL@Microsoft@@YAJPEAVTouchKeyboardExperienceManager.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TouchKeyboardExperienceManager::OnViewCreated(
        TouchKeyboardExperienceManager *this,
        struct IUnknown *a2,
        struct EventRegistrationToken a3)
{
  RTL_SRWLOCK *v5; // r15
  struct IUnknown ***v6; // rbx
  struct IUnknown ***v7; // rdi
  struct IUnknown ***v8; // rdi
  struct IUnknown ***v9; // r12
  ULONG (__stdcall *AddRef)(IUnknown *); // rax
  int v11; // eax
  __int64 v12; // rdx
  __int64 *v13; // rax
  int v14; // eax
  int v15; // edi
  unsigned __int64 v16; // r9
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 *v22[2]; // [rsp+30h] [rbp-30h] BYREF
  _BYTE v23[32]; // [rsp+40h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+38h]
  int v25; // [rsp+A0h] [rbp+40h] BYREF
  struct IUnknown *v26; // [rsp+A8h] [rbp+48h] BYREF
  __int64 value; // [rsp+B0h] [rbp+50h] BYREF
  __int64 v28; // [rsp+B8h] [rbp+58h] BYREF

  value = a3.value;
  v26 = a2;
  v22[1] = (__int64 *)-2LL;
  v5 = (RTL_SRWLOCK *)((char *)this + 448);
  AcquireSRWLockShared((PSRWLOCK)this + 56);
  value = (__int64)v5;
  v6 = (struct IUnknown ***)*((_QWORD *)this + 57);
  v7 = (struct IUnknown ***)*((_QWORD *)this + 58);
  while ( v6 != v7 && !(unsigned int)SHIsSameObject(**v6, a2) )
    v6 += 2;
  v8 = (struct IUnknown ***)*((_QWORD *)this + 58);
  LOBYTE(value) = v6 != v8;
  v9 = (struct IUnknown ***)*((_QWORD *)this + 57);
  LOBYTE(v25) = v9 == v8;
  if ( v5 )
    ReleaseSRWLockShared(v5);
  if ( v6 != v8 )
  {
    wil::details::in1diag3::Log_Hr(
      retaddr,
      2141LL,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)0x8000000DLL);
    return 0LL;
  }
  AddRef = a2->lpVtbl[16].AddRef;
  if ( v9 == v8 )
  {
    v11 = ((__int64 (__fastcall *)(struct IUnknown *, __int64))AddRef)(a2, 3LL);
    if ( v11 < 0 )
    {
      v12 = 2039LL;
LABEL_13:
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        v12,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v11);
    }
  }
  else
  {
    v11 = ((__int64 (__fastcall *)(struct IUnknown *, __int64))AddRef)(a2, 1LL);
    if ( v11 < 0 )
    {
      v12 = 2043LL;
      goto LABEL_13;
    }
  }
  v28 = 0LL;
  v22[0] = &v28;
  v13 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::WeakRef>::operator Microsoft::WRL::WeakRef *(v22);
  v14 = Microsoft::WRL::AsWeak<TouchKeyboardExperienceManager>((__int64)this, v13);
  v15 = v14;
  if ( v14 < 0 )
  {
    v16 = (unsigned int)v14;
    v17 = 2047LL;
LABEL_18:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v17,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)v16);
    Microsoft::WRL::WeakRef::~WeakRef(&v28);
    return (unsigned int)v15;
  }
  v22[0] = (__int64 *)this;
  v18 = lambda_a6e83045e007bd3aeabbed1653bdb15e_::_lambda_a6e83045e007bd3aeabbed1653bdb15e_(
          (__int64)v23,
          &v26,
          &v28,
          v22,
          &v25,
          &value);
  v15 = Windows::Internal::ComTaskPool::QueueTask__lambda_a6e83045e007bd3aeabbed1653bdb15e___(
          v20,
          v19,
          *((_DWORD *)this + 200),
          v18);
  details::ObjectArrayAdapterImpl<IImmersiveApplicationInternal,Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>::Iterator::~Iterator((__int64)v23);
  if ( v15 < 0 )
  {
    v16 = (unsigned int)v15;
    v17 = 2135LL;
    goto LABEL_18;
  }
  Microsoft::WRL::WeakRef::~WeakRef(&v28);
  return 0LL;
}
