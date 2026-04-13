/*
 * XREFs of ?GetLocalTilePropertiesForApp@ContentManagementService@ContentManagement@@AEAAJPEAUHSTRING__@@PEAPEAUICDSLocalTileProperties@CDSProperties@Shell@WindowsInternal@@@Z @ 0x18002CE88
 * Callers:
 *     ?SetWasAppUnpinnedFromTaskBar@ContentManagementService@ContentManagement@@UEAAJPEAUHSTRING__@@E@Z @ 0x18002D350 (-SetWasAppUnpinnedFromTaskBar@ContentManagementService@ContentManagement@@UEAAJPEAUHSTRING__@@E@.c)
 *     ?GetWasAppUnpinnedFromTaskBar@ContentManagementService@ContentManagement@@UEAAJPEAUHSTRING__@@PEAE@Z @ 0x18002D3F0 (-GetWasAppUnpinnedFromTaskBar@ContentManagementService@ContentManagement@@UEAAJPEAUHSTRING__@@PE.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003584 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18000482C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     __security_check_cookie @ 0x1800CA900 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CBD10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall ContentManagement::ContentManagementService::GetLocalTilePropertiesForApp(
        RTL_SRWLOCK *this,
        HSTRING a2,
        struct WindowsInternal::Shell::CDSProperties::ICDSLocalTileProperties **a3)
{
  PVOID v6; // rdi
  RTL_SRWLOCK *v7; // rsi
  RTL_SRWLOCK *v8; // r14
  PVOID Ptr; // rbx
  HRESULT v10; // eax
  HSTRING v11; // rbx
  PVOID v12; // rcx
  int ActivationFactory; // eax
  int v14; // ebx
  PVOID v15; // rbx
  PVOID v16; // rbx
  HRESULT v17; // eax
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  PVOID v21; // rbx
  PVOID v22; // rcx
  void *v23; // rbx
  __int64 v24; // rcx
  __int64 v25; // rbx
  __int64 (__fastcall *v26)(__int64, HSTRING *); // rsi
  int v27; // eax
  int v28; // eax
  __int64 v29; // rdx
  __int64 (__fastcall ***v30)(_QWORD, GUID *, struct WindowsInternal::Shell::CDSProperties::ICDSLocalTileProperties **); // rcx
  PVOID v31; // rcx
  __int64 v32; // rcx
  PVOID v34; // [rsp+38h] [rbp-39h] BYREF
  __int64 v35; // [rsp+40h] [rbp-31h] BYREF
  HSTRING v36; // [rsp+48h] [rbp-29h] BYREF
  __int64 (__fastcall ***v37)(_QWORD, GUID *, struct WindowsInternal::Shell::CDSProperties::ICDSLocalTileProperties **); // [rsp+50h] [rbp-21h] BYREF
  __int64 v38; // [rsp+58h] [rbp-19h] BYREF
  PVOID v39; // [rsp+60h] [rbp-11h]
  __int64 v40; // [rsp+68h] [rbp-9h]
  HSTRING_HEADER hstringHeader; // [rsp+70h] [rbp-1h] BYREF
  HSTRING string; // [rsp+88h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+5Fh]

  v40 = -2LL;
  *a3 = 0LL;
  v6 = 0LL;
  v39 = 0LL;
  v7 = this + 15;
  AcquireSRWLockShared(this + 15);
  v8 = this + 19;
  Ptr = this[19].Ptr;
  if ( Ptr )
  {
    (*(void (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 8LL))(this[19].Ptr);
    v6 = Ptr;
    v39 = Ptr;
  }
  if ( v7 )
    ReleaseSRWLockShared(v7);
  if ( !v6 )
  {
    AcquireSRWLockExclusive(v7);
    if ( !v8->Ptr )
    {
      string = 0LL;
      v10 = WindowsCreateStringReference(
              L"WindowsInternal.Shell.UnifiedTile.PackagedUnifiedTileIdentifier",
              0x3Fu,
              &hstringHeader,
              &string);
      if ( v10 < 0 )
        goto LABEL_60;
      v11 = string;
      v12 = v8->Ptr;
      if ( v8->Ptr )
      {
        v8->Ptr = 0LL;
        (*(void (__fastcall **)(PVOID))(*(_QWORD *)v12 + 16LL))(v12);
      }
      ActivationFactory = RoGetActivationFactory(v11, &GUID_ec3e7864_aaab_4367_9c63_94d289545500, &this[19]);
      v14 = ActivationFactory;
      if ( ActivationFactory < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x3A3,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
          (const char *)(unsigned int)ActivationFactory);
        if ( v7 )
          ReleaseSRWLockExclusive(v7);
        goto LABEL_56;
      }
    }
    v15 = v8->Ptr;
    if ( v8->Ptr )
    {
      (*(void (__fastcall **)(PVOID))(*(_QWORD *)v15 + 8LL))(v8->Ptr);
      v6 = v15;
      v39 = v15;
    }
    if ( v7 )
      ReleaseSRWLockExclusive(v7);
  }
  v38 = 0LL;
  v14 = (*(__int64 (__fastcall **)(PVOID, HSTRING, __int64 *))(*(_QWORD *)v6 + 48LL))(v6, a2, &v38);
  if ( v14 >= 0 )
  {
    v34 = 0LL;
    AcquireSRWLockShared(v7);
    v16 = this[20].Ptr;
    if ( v16 )
    {
      (*(void (__fastcall **)(PVOID))(*(_QWORD *)v16 + 8LL))(this[20].Ptr);
      v34 = v16;
    }
    if ( v7 )
      ReleaseSRWLockShared(v7);
    if ( v34 )
    {
LABEL_41:
      v36 = 0LL;
      v25 = v38;
      v26 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v38 + 56LL);
      WindowsDeleteString(0LL);
      v36 = 0LL;
      v27 = v26(v25, &v36);
      v14 = v27;
      if ( v27 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x3CB,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
          (const char *)(unsigned int)v27);
LABEL_51:
        WindowsDeleteString(v36);
        v36 = 0LL;
LABEL_52:
        v31 = v34;
        if ( v34 )
        {
          v34 = 0LL;
          (*(void (__fastcall **)(PVOID))(*(_QWORD *)v31 + 16LL))(v31);
        }
        goto LABEL_54;
      }
      v37 = 0LL;
      v28 = (*(__int64 (__fastcall **)(PVOID, HSTRING, _QWORD))(*(_QWORD *)v34 + 80LL))(v34, v36, &v37);
      v14 = v28;
      if ( v28 >= 0 )
      {
        v28 = (**v37)(v37, &GUID_f2456d27_5e13_42b8_bc25_00b4cc364e44, a3);
        v14 = v28;
        if ( v28 >= 0 )
        {
          v14 = 0;
LABEL_49:
          v30 = v37;
          if ( v37 )
          {
            v37 = 0LL;
            ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, struct WindowsInternal::Shell::CDSProperties::ICDSLocalTileProperties **)))(*v30)[2])(v30);
          }
          goto LABEL_51;
        }
        v29 = 975LL;
      }
      else
      {
        v29 = 974LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v29,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
        (const char *)(unsigned int)v28);
      goto LABEL_49;
    }
    v35 = 0LL;
    string = 0LL;
    v17 = WindowsCreateStringReference(
            L"WindowsInternal.Shell.CDSProperties.CDSTilePropertiesBatched",
            0x3Cu,
            &hstringHeader,
            &string);
    if ( v17 >= 0 )
    {
      v18 = RoGetActivationFactory(string, &GUID_3055f2cd_a89f_43f3_be60_867e2644b283, &v35);
      v14 = v18;
      if ( v18 < 0 )
      {
        v19 = 956LL;
        goto LABEL_28;
      }
      v18 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, PVOID *))(*(_QWORD *)v35 + 48LL))(v35, 0LL, 1LL, &v34);
      v14 = v18;
      if ( v18 < 0 )
      {
        v19 = 957LL;
LABEL_28:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v19,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
          (const char *)(unsigned int)v18);
        v20 = v35;
        if ( v35 )
        {
          v35 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
        }
        goto LABEL_52;
      }
      AcquireSRWLockExclusive(v7);
      v21 = this[20].Ptr;
      if ( v21 )
      {
        if ( v34 != v21 )
        {
          (*(void (__fastcall **)(PVOID))(*(_QWORD *)v21 + 8LL))(this[20].Ptr);
          v22 = v34;
          v34 = v21;
          goto LABEL_35;
        }
      }
      else
      {
        v23 = v34;
        if ( v34 )
        {
          (*(void (__fastcall **)(PVOID))(*(_QWORD *)v34 + 8LL))(v34);
          v22 = this[20].Ptr;
          this[20].Ptr = v23;
LABEL_35:
          if ( v22 )
            (*(void (__fastcall **)(PVOID))(*(_QWORD *)v22 + 16LL))(v22);
        }
      }
      if ( v7 )
        ReleaseSRWLockExclusive(v7);
      v24 = v35;
      if ( v35 )
      {
        v35 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
      }
      goto LABEL_41;
    }
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v17);
LABEL_60:
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v10);
    JUMPOUT(0x18002D347LL);
  }
LABEL_54:
  v32 = v38;
  if ( v38 )
  {
    v38 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
  }
LABEL_56:
  if ( v6 )
    (*(void (__fastcall **)(PVOID))(*(_QWORD *)v6 + 16LL))(v6);
  return (unsigned int)v14;
}
