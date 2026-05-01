/*
 * XREFs of ?CheckAndPopulateContact@CQuickConnectExperienceManager@@AEAAJXZ @ 0x1801A0CDC
 * Callers:
 *     ?OnViewPropertiesChanging@CQuickConnectExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1801A2C70 (-OnViewPropertiesChanging@CQuickConnectExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@.c)
 *     ?PopulateDelayLoadedContactCard@CQuickConnectExperienceManager@@UEAAJU_GUID@@PEAUIContact@Contacts@ApplicationModel@Windows@@@Z @ 0x1801A3220 (-PopulateDelayLoadedContactCard@CQuickConnectExperienceManager@@UEAAJU_GUID@@PEAUIContact@Contac.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006A5CC (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_f8d696b2e2b9ef5ca7bb243e22227a17___::CTaskWrapper__lambda_f8d696b2e2b9ef5ca7bb243e22227a17_____lambda_f8d696b2e2b9ef5ca7bb243e22227a17___ @ 0x18019EE08 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_f8d696b2e2b9ef5ca7bb243e22227a17___--CTaskW.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_417362b0a1391b76000680eec230619f___ @ 0x18019FFD4 (Windows--Internal--ComTaskPool--QueueTask__lambda_417362b0a1391b76000680eec230619f___.c)
 *     _lambda_417362b0a1391b76000680eec230619f_::_lambda_417362b0a1391b76000680eec230619f_ @ 0x1801A010C (_lambda_417362b0a1391b76000680eec230619f_--_lambda_417362b0a1391b76000680eec230619f_.c)
 *     ??0?$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x1801A022C (--0-$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgRefle_ea_1801A022C.c)
 *     ??0?$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1801A02E0 (--0-$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgRefle_ea_1801A02E0.c)
 *     _lambda_417362b0a1391b76000680eec230619f_::__lambda_417362b0a1391b76000680eec230619f_ @ 0x1801A04D4 (_lambda_417362b0a1391b76000680eec230619f_--__lambda_417362b0a1391b76000680eec230619f_.c)
 *     _lambda_f8d696b2e2b9ef5ca7bb243e22227a17_::__lambda_f8d696b2e2b9ef5ca7bb243e22227a17_ @ 0x1801A0504 (_lambda_f8d696b2e2b9ef5ca7bb243e22227a17_--__lambda_f8d696b2e2b9ef5ca7bb243e22227a17_.c)
 *     ??1ExperienceManager_CheckAndPopulateContact@QuickConnectTelemetry@@QEAA@XZ @ 0x1801A0680 (--1ExperienceManager_CheckAndPopulateContact@QuickConnectTelemetry@@QEAA@XZ.c)
 *     ?CopyContactCardOptions@CQuickConnectExperienceManager@@AEAAJPEAUIContactCardOptions@Contacts@ApplicationModel@Windows@@PEAPEAU2345@@Z @ 0x1801A10B4 (-CopyContactCardOptions@CQuickConnectExperienceManager@@AEAAJPEAUIContactCardOptions@Contacts@Ap.c)
 *     ?Split@ExperienceManager_CheckAndPopulateContact@QuickConnectTelemetry@@QEAA?AV12@XZ @ 0x1801A3A38 (-Split@ExperienceManager_CheckAndPopulateContact@QuickConnectTelemetry@@QEAA-AV12@XZ.c)
 *     ?StartActivity@ExperienceManager_CheckAndPopulateContact@QuickConnectTelemetry@@QEAAXXZ @ 0x1801A3AC8 (-StartActivity@ExperienceManager_CheckAndPopulateContact@QuickConnectTelemetry@@QEAAXXZ.c)
 *     ?Stop@?$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1801A4380 (-Stop@-$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Pa.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CQuickConnectExperienceManager::CheckAndPopulateContact(CQuickConnectExperienceManager *this)
{
  __int64 v2; // rbx
  __int64 *v3; // r15
  __int64 v4; // rdi
  char v5; // r12
  CQuickConnectExperienceManager *v6; // rcx
  int v7; // eax
  int v8; // esi
  __int64 v9; // rbx
  void *v10; // rax
  __int64 *v11; // rcx
  struct Windows::ApplicationModel::Contacts::IContactCardOptions *v12; // rax
  __int64 v13; // rcx
  __int64 *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  struct Windows::ApplicationModel::Contacts::IContactCardOptions *v18; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v19; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v20[2]; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v21; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v22; // [rsp+60h] [rbp-A8h] BYREF
  struct Windows::ApplicationModel::Contacts::IContactCardOptions *v23; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v24; // [rsp+70h] [rbp-98h]
  void **v25; // [rsp+78h] [rbp-90h] BYREF
  _BYTE v26[320]; // [rsp+1B8h] [rbp+B0h] BYREF
  _QWORD v27[40]; // [rsp+2F8h] [rbp+1F0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+470h] [rbp+368h]

  v20[1] = -2LL;
  wil::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v27,
    (__int64)"ExperienceManager_CheckAndPopulateContact");
  v27[0] = &QuickConnectTelemetry::ExperienceManager_CheckAndPopulateContact::`vftable';
  QuickConnectTelemetry::ExperienceManager_CheckAndPopulateContact::StartActivity((QuickConnectTelemetry::ExperienceManager_CheckAndPopulateContact *)v27);
  v2 = *((_QWORD *)this + 38);
  if ( !v2 )
    goto LABEL_21;
  v3 = (__int64 *)((char *)this + 312);
  if ( !*((_QWORD *)this + 39) )
  {
LABEL_13:
    if ( *((_BYTE *)this + 348) )
    {
      v12 = (struct Windows::ApplicationModel::Contacts::IContactCardOptions *)*((_QWORD *)this + 44);
      if ( v12 )
      {
        v13 = *((_QWORD *)this + 38);
        v19 = v13;
        if ( v13 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
          v12 = (struct Windows::ApplicationModel::Contacts::IContactCardOptions *)*((_QWORD *)this + 44);
        }
        v18 = v12;
        Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v18);
        QuickConnectTelemetry::ExperienceManager_CheckAndPopulateContact::Split(v27, v26);
        v14 = lambda_417362b0a1391b76000680eec230619f_::_lambda_417362b0a1391b76000680eec230619f_(
                &v21,
                &v19,
                (__int64 *)&v18);
        v8 = Windows::Internal::ComTaskPool::QueueTask__lambda_417362b0a1391b76000680eec230619f___(
               v16,
               v15,
               (unsigned int)this,
               v14);
        lambda_417362b0a1391b76000680eec230619f_::__lambda_417362b0a1391b76000680eec230619f_(&v21);
        if ( v8 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x441,
            (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\quickconnectexperiencemanager.cpp",
            (const char *)(unsigned int)v8);
          QuickConnectTelemetry::ExperienceManager_CheckAndPopulateContact::~ExperienceManager_CheckAndPopulateContact((QuickConnectTelemetry::ExperienceManager_CheckAndPopulateContact *)v26);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v18);
          v11 = &v19;
          goto LABEL_19;
        }
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 44);
        QuickConnectTelemetry::ExperienceManager_CheckAndPopulateContact::~ExperienceManager_CheckAndPopulateContact((QuickConnectTelemetry::ExperienceManager_CheckAndPopulateContact *)v26);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v18);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19);
      }
    }
LABEL_21:
    wil::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v27);
    v8 = 0;
    goto LABEL_22;
  }
  v20[0] = *((_QWORD *)this + 38);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  v4 = *v3;
  v19 = *v3;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v19);
  v5 = *((_BYTE *)this + 348);
  v18 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v18);
  v7 = CQuickConnectExperienceManager::CopyContactCardOptions(
         v6,
         *((struct Windows::ApplicationModel::Contacts::IContactCardOptions **)this + 40),
         &v18);
  v8 = v7;
  if ( v7 >= 0 )
  {
    QuickConnectTelemetry::ExperienceManager_CheckAndPopulateContact::Split(v27, v26);
    v21 = v2;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
    v22 = v4;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v22);
    v23 = v18;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v23);
    LOBYTE(v24) = v5;
    wil::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>(
      (struct wil::details::IFailureCallback *)&v25,
      (__int64)v26);
    v25 = &QuickConnectTelemetry::ExperienceManager_CheckAndPopulateContact::`vftable';
    v9 = 0LL;
    v10 = operator new(0x168uLL, (const struct std::nothrow_t *)&std::nothrow);
    if ( v10 )
      v9 = Windows::Internal::ComTaskPool::CTaskWrapper__lambda_f8d696b2e2b9ef5ca7bb243e22227a17___::CTaskWrapper__lambda_f8d696b2e2b9ef5ca7bb243e22227a17_____lambda_f8d696b2e2b9ef5ca7bb243e22227a17___(
             (__int64)v10,
             (__int64)&v21);
    v8 = SHTaskPoolQueueTask(3LL, 2LL, (unsigned int)this, 0LL, v9, 0LL);
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    lambda_f8d696b2e2b9ef5ca7bb243e22227a17_::__lambda_f8d696b2e2b9ef5ca7bb243e22227a17_(&v21);
    if ( v8 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x424,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\quickconnectexperiencemanager.cpp",
        (const char *)(unsigned int)v8);
      QuickConnectTelemetry::ExperienceManager_CheckAndPopulateContact::~ExperienceManager_CheckAndPopulateContact((QuickConnectTelemetry::ExperienceManager_CheckAndPopulateContact *)v26);
      goto LABEL_11;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 39);
    QuickConnectTelemetry::ExperienceManager_CheckAndPopulateContact::~ExperienceManager_CheckAndPopulateContact((QuickConnectTelemetry::ExperienceManager_CheckAndPopulateContact *)v26);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v18);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v20);
    goto LABEL_13;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x410,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\quickconnectexperiencemanager.cpp",
    (const char *)(unsigned int)v7);
LABEL_11:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v18);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19);
  v11 = v20;
LABEL_19:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v11);
LABEL_22:
  QuickConnectTelemetry::ExperienceManager_CheckAndPopulateContact::~ExperienceManager_CheckAndPopulateContact((QuickConnectTelemetry::ExperienceManager_CheckAndPopulateContact *)v27);
  return (unsigned int)v8;
}
