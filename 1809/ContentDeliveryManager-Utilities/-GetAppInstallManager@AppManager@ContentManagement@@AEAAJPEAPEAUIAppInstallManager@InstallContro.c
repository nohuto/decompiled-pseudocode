/*
 * XREFs of ?GetAppInstallManager@AppManager@ContentManagement@@AEAAJPEAPEAUIAppInstallManager@InstallControl@Preview@Store@ApplicationModel@Windows@@@Z @ 0x18005689C
 * Callers:
 *     ?IsStoreBlockedByPolicy@AppManager@ContentManagement@@UEAAJPEAE@Z @ 0x180053F60 (-IsStoreBlockedByPolicy@AppManager@ContentManagement@@UEAAJPEAE@Z.c)
 *     ?IsAppAllowedToInstall@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@PEAE@Z @ 0x180054180 (-IsAppAllowedToInstall@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@PEAE@Z.c)
 *     ?GetIsApplicable@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@0PEAE@Z @ 0x180054470 (-GetIsApplicable@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@0PEAE@Z.c)
 *     ?MoveAppInstallToFrontOfQueue@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@0@Z @ 0x180054700 (-MoveAppInstallToFrontOfQueue@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@0@Z.c)
 *     ?StartBatchInstalls@AppManager@ContentManagement@@UEAAJPEAU?$IVector@PEAVAppInstallInfoRecord@ContentManagement@@@Collections@Foundation@Windows@@PEAPEAU?$IVectorView@PEAVAppInstallInfoRecord@ContentManagement@@@456@@Z @ 0x180054960 (-StartBatchInstalls@AppManager@ContentManagement@@UEAAJPEAU-$IVector@PEAVAppInstallInfoRecord@Co.c)
 *     _lambda_0f2a19371a6bcb5c3bb872f6cc85e02d_::operator() @ 0x180055614 (_lambda_0f2a19371a6bcb5c3bb872f6cc85e02d_--operator().c)
 *     ?GetEntitlementInternal@AppManager@ContentManagement@@AEAAJPEAUHSTRING__@@000E0@Z @ 0x180055BD8 (-GetEntitlementInternal@AppManager@ContentManagement@@AEAAJPEAUHSTRING__@@000E0@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000366C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18000480C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     __security_check_cookie @ 0x1800C6A00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C7DF0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ContentManagement::AppManager::GetAppInstallManager(
        RTL_SRWLOCK *this,
        struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager **a2)
{
  RTL_SRWLOCK *v2; // rdi
  RTL_SRWLOCK *v3; // rsi
  struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *Ptr; // rbx
  HRESULT v6; // eax
  int v7; // ebx
  __int64 (__fastcall ***v8)(_QWORD, GUID *, RTL_SRWLOCK *); // rcx
  PVOID v9; // r8
  int v10; // eax
  unsigned __int64 v11; // r9
  __int64 v12; // rdx
  __int64 (__fastcall ***v13)(_QWORD, GUID *, _QWORD *); // rcx
  struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *v14; // rcx
  __int64 (__fastcall ***v16)(_QWORD, GUID *, _QWORD *); // rcx
  __int64 (__fastcall ***v17)(_QWORD, GUID *, RTL_SRWLOCK *); // [rsp+20h] [rbp-40h] BYREF
  __int64 (__fastcall ***v18)(_QWORD, GUID *, _QWORD *); // [rsp+28h] [rbp-38h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+30h] [rbp-30h] BYREF
  HSTRING string; // [rsp+48h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]

  *a2 = 0LL;
  v2 = this + 11;
  v3 = this + 9;
  AcquireSRWLockShared(this + 11);
  Ptr = (struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *)v3->Ptr;
  if ( v2 )
    ReleaseSRWLockShared(v2);
  if ( !Ptr )
  {
    AcquireSRWLockExclusive(v2);
    if ( !v3->Ptr )
    {
      v17 = 0LL;
      string = 0LL;
      v6 = WindowsCreateStringReference(
             L"Windows.ApplicationModel.Store.Preview.InstallControl.AppInstallManager",
             0x47u,
             &hstringHeader,
             &string);
      if ( v6 < 0 )
      {
        Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v6);
        JUMPOUT(0x180056AC3LL);
      }
      v17 = 0LL;
      v7 = RoActivateInstance(string, &v18);
      if ( v7 < 0
        || (*(_QWORD *)&GUID_9353e170_8441_4b45_bd72_7c2fa925beee.Data1 != *(_QWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data1
         || *(_QWORD *)GUID_9353e170_8441_4b45_bd72_7c2fa925beee.Data4 != *(_QWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4
          ? (v7 = (**v18)(v18, &GUID_9353e170_8441_4b45_bd72_7c2fa925beee, &v17),
             ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v18)[2])(v18),
             v8 = v17)
          : (v8 = (__int64 (__fastcall ***)(_QWORD, GUID *, RTL_SRWLOCK *))v18,
             v17 = (__int64 (__fastcall ***)(_QWORD, GUID *, RTL_SRWLOCK *))v18),
            v7 < 0) )
      {
        v11 = (unsigned int)v7;
        v12 = 499LL;
        goto LABEL_24;
      }
      v9 = v3->Ptr;
      if ( v3->Ptr )
      {
        v3->Ptr = 0LL;
        (*(void (__fastcall **)(PVOID))(*(_QWORD *)v9 + 16LL))(v9);
        v8 = v17;
      }
      v10 = (**v8)(v8, &GUID_9353e170_8441_4b45_bd72_7c2fa925beee, v3);
      v7 = v10;
      if ( v10 < 0 )
      {
        v11 = (unsigned int)v10;
        v12 = 500LL;
LABEL_24:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v12,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
          (const char *)v11);
        v16 = (__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *))v17;
        if ( v17 )
        {
          v17 = 0LL;
          ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v16)[2])(v16);
        }
        if ( v2 )
          ReleaseSRWLockExclusive(v2);
        return (unsigned int)v7;
      }
      v13 = (__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *))v17;
      if ( v17 )
      {
        v17 = 0LL;
        ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v13)[2])(v13);
      }
    }
    if ( v2 )
      ReleaseSRWLockExclusive(v2);
  }
  v14 = (struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *)v3->Ptr;
  if ( v3->Ptr )
  {
    (*(void (__fastcall **)(struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *))(*(_QWORD *)v14 + 8LL))(v14);
    v14 = (struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *)v3->Ptr;
  }
  *a2 = v14;
  return 0LL;
}
