/*
 * XREFs of ?GetLocalTilePropertiesForApp@ContentManagementService@ContentManagement@@AEAAJPEAUHSTRING__@@PEAPEAUICDSLocalTileProperties@CDSProperties@Shell@WindowsInternal@@@Z @ 0x18002C4B4
 * Callers:
 *     ?SetWasAppUnpinnedFromTaskBar@ContentManagementService@ContentManagement@@UEAAJPEAUHSTRING__@@E@Z @ 0x18002C980 (-SetWasAppUnpinnedFromTaskBar@ContentManagementService@ContentManagement@@UEAAJPEAUHSTRING__@@E@.c)
 *     ?GetWasAppUnpinnedFromTaskBar@ContentManagementService@ContentManagement@@UEAAJPEAUHSTRING__@@PEAE@Z @ 0x18002CA20 (-GetWasAppUnpinnedFromTaskBar@ContentManagementService@ContentManagement@@UEAAJPEAUHSTRING__@@PE.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000366C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18000480C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     __security_check_cookie @ 0x1800C6A00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C7DF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall ContentManagement::ContentManagementService::GetLocalTilePropertiesForApp(
        RTL_SRWLOCK *this,
        HSTRING a2,
        struct WindowsInternal::Shell::CDSProperties::ICDSLocalTileProperties **a3)
{
  PVOID Ptr; // rdi
  RTL_SRWLOCK *v7; // rsi
  RTL_SRWLOCK *v8; // r14
  HRESULT v9; // eax
  HSTRING v10; // rbx
  PVOID v11; // rcx
  int ActivationFactory; // eax
  int v13; // ebx
  _QWORD *v14; // rbx
  HRESULT v15; // eax
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  _QWORD *v19; // r14
  __int64 *v20; // rcx
  __int64 v21; // rax
  void *v22; // rbx
  __int64 *v23; // r14
  __int64 v24; // rcx
  __int64 v25; // rbx
  int v26; // eax
  int v27; // eax
  __int64 v28; // rdx
  __int64 (__fastcall ***v29)(_QWORD, GUID *, struct WindowsInternal::Shell::CDSProperties::ICDSLocalTileProperties **); // rcx
  _QWORD *v30; // rcx
  __int64 v31; // rcx
  _QWORD *v33; // [rsp+38h] [rbp-39h] BYREF
  __int64 v34; // [rsp+40h] [rbp-31h] BYREF
  HSTRING v35; // [rsp+48h] [rbp-29h] BYREF
  __int64 (__fastcall ***v36)(_QWORD, GUID *, struct WindowsInternal::Shell::CDSProperties::ICDSLocalTileProperties **); // [rsp+50h] [rbp-21h] BYREF
  __int64 v37; // [rsp+58h] [rbp-19h] BYREF
  PVOID v38; // [rsp+60h] [rbp-11h]
  __int64 v39; // [rsp+68h] [rbp-9h]
  HSTRING_HEADER hstringHeader; // [rsp+70h] [rbp-1h] BYREF
  HSTRING string; // [rsp+88h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+5Fh]

  v39 = -2LL;
  *a3 = 0LL;
  Ptr = 0LL;
  v38 = 0LL;
  v7 = this + 15;
  AcquireSRWLockShared(this + 15);
  v8 = this + 19;
  if ( this[19].Ptr )
  {
    Ptr = v8->Ptr;
    (*(void (__fastcall **)(PVOID))(*(_QWORD *)v8->Ptr + 8LL))(v8->Ptr);
    v38 = Ptr;
  }
  if ( v7 )
    ReleaseSRWLockShared(v7);
  if ( !Ptr )
  {
    AcquireSRWLockExclusive(v7);
    if ( v8->Ptr )
      goto LABEL_14;
    string = 0LL;
    v9 = WindowsCreateStringReference(
           L"WindowsInternal.Shell.UnifiedTile.PackagedUnifiedTileIdentifier",
           0x3Fu,
           &hstringHeader,
           &string);
    if ( v9 < 0 )
      goto LABEL_61;
    v10 = string;
    v11 = v8->Ptr;
    if ( v8->Ptr )
    {
      v8->Ptr = 0LL;
      (*(void (__fastcall **)(PVOID))(*(_QWORD *)v11 + 16LL))(v11);
    }
    ActivationFactory = RoGetActivationFactory(v10, &GUID_ec3e7864_aaab_4367_9c63_94d289545500, &this[19]);
    v13 = ActivationFactory;
    if ( ActivationFactory < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3A3,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
        (const char *)(unsigned int)ActivationFactory);
      if ( v7 )
        ReleaseSRWLockExclusive(v7);
      goto LABEL_57;
    }
    if ( v8->Ptr )
    {
LABEL_14:
      Ptr = v8->Ptr;
      (*(void (__fastcall **)(PVOID))(*(_QWORD *)v8->Ptr + 8LL))(v8->Ptr);
      v38 = Ptr;
    }
    if ( v7 )
      ReleaseSRWLockExclusive(v7);
  }
  v37 = 0LL;
  v13 = (*(__int64 (__fastcall **)(PVOID, HSTRING, __int64 *))(*(_QWORD *)Ptr + 48LL))(Ptr, a2, &v37);
  if ( v13 >= 0 )
  {
    v33 = 0LL;
    AcquireSRWLockShared(v7);
    v14 = this[20].Ptr;
    if ( v14 )
    {
      (*(void (__fastcall **)(PVOID))(*v14 + 8LL))(this[20].Ptr);
      v33 = v14;
    }
    if ( v7 )
      ReleaseSRWLockShared(v7);
    if ( v33 )
    {
LABEL_42:
      v35 = 0LL;
      v25 = v37;
      WindowsDeleteString(0LL);
      v35 = 0LL;
      v26 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v25 + 56LL))(v25, &v35);
      v13 = v26;
      if ( v26 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x3CB,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
          (const char *)(unsigned int)v26);
LABEL_52:
        WindowsDeleteString(v35);
        v35 = 0LL;
LABEL_53:
        v30 = v33;
        if ( v33 )
        {
          v33 = 0LL;
          (*(void (__fastcall **)(_QWORD *))(*v30 + 16LL))(v30);
        }
        goto LABEL_55;
      }
      v36 = 0LL;
      v27 = (*(__int64 (__fastcall **)(_QWORD *, HSTRING, _QWORD))(*v33 + 80LL))(v33, v35, &v36);
      v13 = v27;
      if ( v27 >= 0 )
      {
        v27 = (**v36)(v36, &GUID_f2456d27_5e13_42b8_bc25_00b4cc364e44, a3);
        v13 = v27;
        if ( v27 >= 0 )
        {
          v13 = 0;
LABEL_50:
          v29 = v36;
          if ( v36 )
          {
            v36 = 0LL;
            ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, struct WindowsInternal::Shell::CDSProperties::ICDSLocalTileProperties **)))(*v29)[2])(v29);
          }
          goto LABEL_52;
        }
        v28 = 975LL;
      }
      else
      {
        v28 = 974LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v28,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
        (const char *)(unsigned int)v27);
      goto LABEL_50;
    }
    v34 = 0LL;
    string = 0LL;
    v15 = WindowsCreateStringReference(
            L"WindowsInternal.Shell.CDSProperties.CDSTilePropertiesBatched",
            0x3Cu,
            &hstringHeader,
            &string);
    if ( v15 >= 0 )
    {
      v16 = RoGetActivationFactory(string, &GUID_3055f2cd_a89f_43f3_be60_867e2644b283, &v34);
      v13 = v16;
      if ( v16 < 0 )
      {
        v17 = 956LL;
        goto LABEL_28;
      }
      v16 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD **))(*(_QWORD *)v34 + 48LL))(
              v34,
              0LL,
              1LL,
              &v33);
      v13 = v16;
      if ( v16 < 0 )
      {
        v17 = 957LL;
LABEL_28:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v17,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
          (const char *)(unsigned int)v16);
        v18 = v34;
        if ( v34 )
        {
          v34 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
        }
        goto LABEL_53;
      }
      AcquireSRWLockExclusive(v7);
      v19 = this[20].Ptr;
      if ( v19 )
      {
        if ( v33 == v19 )
          goto LABEL_38;
        (*(void (__fastcall **)(PVOID))(*v19 + 8LL))(this[20].Ptr);
        v20 = v33;
        v33 = v19;
        if ( !v20 )
          goto LABEL_38;
        v21 = *v20;
      }
      else
      {
        v22 = v33;
        if ( !v33 )
          goto LABEL_38;
        (*(void (__fastcall **)(_QWORD *))(*v33 + 8LL))(v33);
        v23 = (__int64 *)this[20].Ptr;
        this[20].Ptr = v22;
        if ( !v23 )
          goto LABEL_38;
        v21 = *v23;
        v20 = v23;
      }
      (*(void (__fastcall **)(__int64 *))(v21 + 16))(v20);
LABEL_38:
      if ( v7 )
        ReleaseSRWLockExclusive(v7);
      v24 = v34;
      if ( v34 )
      {
        v34 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
      }
      goto LABEL_42;
    }
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v15);
LABEL_61:
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v9);
    JUMPOUT(0x18002C979LL);
  }
LABEL_55:
  v31 = v37;
  if ( v37 )
  {
    v37 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
  }
LABEL_57:
  if ( Ptr )
    (*(void (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 16LL))(Ptr);
  return (unsigned int)v13;
}
