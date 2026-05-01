/*
 * XREFs of ?IsEqual@CAppLayout@@UEAAHPEAUIAppLayout@@W4APP_LAYOUT_COMPARE_FLAGS@@@Z @ 0x1803BB210
 * Callers:
 *     <none>
 * Callees:
 *     InlineIsEqualGUID @ 0x1800390B0 (InlineIsEqualGUID.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18003ACF8 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180060730 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockShared@Details@234@XZ @ 0x18007F754 (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockShared@Details@234@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??1CAutoSRWSharedLock@@QEAA@XZ @ 0x1800DE21C (--1CAutoSRWSharedLock@@QEAA@XZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_RTL_SRWLOCK@@@Z @ 0x1801F1F14 (-reset@-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockShared.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U?$ImplementsMarker@VFtmBase@WRL@Microsoft@@@Details@23@UIAppLayoutInternal@@U?$ChainInterfaces@UIAppLayoutBuilder@@UIAppLayout@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1803BA41C (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U-$ImplementsMarker@VF.c)
 */

__int64 __fastcall CAppLayout::IsEqual(__int64 a1, int (__fastcall ***a2)(_QWORD, GUID *, void **), char a3)
{
  unsigned int v4; // ebx
  void *v7; // r9
  int CanCastTo; // edi
  RTL_SRWLOCK **v9; // rbx
  RTL_SRWLOCK *v10; // rax
  RTL_SRWLOCK **v11; // rbx
  RTL_SRWLOCK **v12; // rcx
  RTL_SRWLOCK *v13; // rax
  RTL_SRWLOCK **v14; // rbx
  unsigned __int64 v15; // r14
  int v16; // eax
  __int64 v17; // rdi
  __int64 v18; // rcx
  int v19; // eax
  __int64 v20; // rbx
  int v21; // r15d
  __int64 v22; // rax
  __int64 v23; // rbx
  int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // rbx
  unsigned __int64 v27; // r14
  int v28; // eax
  unsigned __int64 i; // rdi
  __int64 v30; // rbx
  __int64 v31; // rcx
  struct IUnknown *v33; // [rsp+30h] [rbp-39h] BYREF
  __int64 v34; // [rsp+38h] [rbp-31h] BYREF
  void *v35; // [rsp+40h] [rbp-29h] BYREF
  __int64 v36; // [rsp+48h] [rbp-21h] BYREF
  void *v37; // [rsp+50h] [rbp-19h] BYREF
  RTL_SRWLOCK *v38; // [rsp+58h] [rbp-11h] BYREF
  RTL_SRWLOCK *v39; // [rsp+60h] [rbp-9h] BYREF
  struct IUnknown *v40; // [rsp+68h] [rbp-1h] BYREF
  RECT rc2; // [rsp+70h] [rbp+7h] BYREF
  int v42; // [rsp+80h] [rbp+17h]
  int v43; // [rsp+84h] [rbp+1Bh]
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]

  v34 = 0LL;
  v4 = 0;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v34);
  if ( (**a2)(a2, &GUID_1ef1ecfa_786a_4d06_b024_4a61c7049b29, (void **)&v34) >= 0 )
  {
    v39 = 0LL;
    v38 = 0LL;
    v35 = 0LL;
    v37 = 0LL;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v35);
    v35 = 0LL;
    if ( InlineIsEqualGUID(&GUID_00000000_0000_0000_c000_000000000046, &GUID_00000000_0000_0000_c000_000000000046) )
    {
      v35 = v7;
      (*(void (__fastcall **)(void *))(*(_QWORD *)v7 + 8LL))(v7);
      CanCastTo = 0;
    }
    else
    {
      CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IAppLayoutInternal,Microsoft::WRL::ChainInterfaces<IAppLayoutBuilder,IAppLayout,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>>::CanCastTo(
                    (Microsoft::WRL::FtmBase *)v7,
                    &GUID_00000000_0000_0000_c000_000000000046,
                    &v35);
      if ( CanCastTo >= 0 )
        (*(void (__fastcall **)(void *))(*(_QWORD *)v35 + 8LL))(v35);
    }
    if ( CanCastTo < 0 )
      goto LABEL_50;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v37);
    if ( (**a2)(a2, &GUID_00000000_0000_0000_c000_000000000046, &v37) < 0 )
      goto LABEL_50;
    if ( v37 > v35 )
    {
      v13 = (RTL_SRWLOCK *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v34 + 56LL))(v34);
      v14 = Microsoft::WRL::Wrappers::SRWLock::LockShared(v13, (RTL_SRWLOCK **)&v33);
      if ( &v38 != v14 )
      {
        wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,0,std::nullptr_t>>::reset(
          &v38,
          *v14);
        *v14 = 0LL;
      }
      CAutoSRWSharedLock::~CAutoSRWSharedLock((RTL_SRWLOCK **)&v33);
      v11 = Microsoft::WRL::Wrappers::SRWLock::LockShared((RTL_SRWLOCK *)(a1 + 16), (RTL_SRWLOCK **)&v33);
      if ( &v39 == v11 )
        goto LABEL_19;
      v12 = &v39;
    }
    else
    {
      v9 = Microsoft::WRL::Wrappers::SRWLock::LockShared((RTL_SRWLOCK *)(a1 + 16), (RTL_SRWLOCK **)&v33);
      if ( &v39 != v9 )
      {
        wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,0,std::nullptr_t>>::reset(
          &v39,
          *v9);
        *v9 = 0LL;
      }
      CAutoSRWSharedLock::~CAutoSRWSharedLock((RTL_SRWLOCK **)&v33);
      if ( v37 == v35 )
        goto LABEL_20;
      v10 = (RTL_SRWLOCK *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v34 + 56LL))(v34);
      v11 = Microsoft::WRL::Wrappers::SRWLock::LockShared(v10, (RTL_SRWLOCK **)&v33);
      if ( &v38 == v11 )
      {
LABEL_19:
        CAutoSRWSharedLock::~CAutoSRWSharedLock((RTL_SRWLOCK **)&v33);
LABEL_20:
        (*(void (__fastcall **)(__int64, RECT *))(*(_QWORD *)v34 + 24LL))(v34, &rc2);
        if ( (a3 & 1) != 0
          && (!EqualRect((const RECT *)(a1 + 24), &rc2) || *(_DWORD *)(a1 + 40) != v42 || *(_DWORD *)(a1 + 44) != v43) )
        {
          v4 = 0;
          goto LABEL_50;
        }
        v4 = 1;
        if ( (a3 & 4) == 0 )
        {
          if ( (a3 & 2) != 0 )
          {
            v27 = *(_QWORD *)(a1 + 72);
            v28 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v34 + 32LL))(v34);
            v4 = v27 == v28;
            if ( v27 == v28 )
            {
              for ( i = 0LL; i < v27; ++i )
              {
                if ( !v4 )
                  break;
                v30 = v34;
                v33 = 0LL;
                Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v33);
                if ( (*(int (__fastcall **)(__int64, _QWORD, GUID *, struct IUnknown **))(*(_QWORD *)v30 + 40LL))(
                       v30,
                       (unsigned int)i,
                       &GUID_ab0cda95_cad6_4882_a8c7_7c2905752b98,
                       &v33) >= 0 )
                {
                  v31 = *(_QWORD *)(*(_QWORD *)(a1 + 64) + 8 * i);
                  v4 = (*(__int64 (__fastcall **)(__int64, struct IUnknown *))(*(_QWORD *)v31 + 96LL))(v31, v33);
                }
                else
                {
                  v4 = 0;
                }
                Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v33);
              }
            }
          }
          goto LABEL_50;
        }
        v15 = *(_QWORD *)(a1 + 72);
        v16 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v34 + 32LL))(v34);
        v4 = v15 == v16;
        if ( v15 != v16 || (v17 = 0LL, !v15) )
        {
LABEL_50:
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v37);
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v35);
          CAutoSRWSharedLock::~CAutoSRWSharedLock(&v38);
          CAutoSRWSharedLock::~CAutoSRWSharedLock(&v39);
          goto LABEL_51;
        }
        while ( 1 )
        {
          if ( !v4 )
            goto LABEL_50;
          v18 = *(_QWORD *)(*(_QWORD *)(a1 + 64) + 8 * v17);
          v19 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v18 + 24LL))(v18);
          v20 = v34;
          v21 = v19;
          v36 = 0LL;
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v36);
          if ( (*(int (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(*(_QWORD *)v20 + 40LL))(
                 v20,
                 (unsigned int)v17,
                 &GUID_ab0cda95_cad6_4882_a8c7_7c2905752b98,
                 &v36) < 0
            || (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v36 + 24LL))(v36) != v21 )
          {
            v4 = 0;
            goto LABEL_40;
          }
          v4 = 1;
          if ( v21 == 1 )
            break;
LABEL_40:
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v36);
          if ( ++v17 >= v15 )
            goto LABEL_50;
        }
        v22 = *(_QWORD *)(a1 + 64);
        v33 = 0LL;
        v40 = 0LL;
        v23 = *(_QWORD *)(v22 + 8 * v17);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v33);
        v24 = (*(__int64 (__fastcall **)(__int64, GUID *, struct IUnknown **))(*(_QWORD *)v23 + 48LL))(
                v23,
                &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513,
                &v33);
        if ( v24 >= 0 )
        {
          v26 = v36;
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v40);
          v24 = (*(__int64 (__fastcall **)(__int64, GUID *, struct IUnknown **))(*(_QWORD *)v26 + 48LL))(
                  v26,
                  &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513,
                  &v40);
          if ( v24 >= 0 )
          {
            v4 = SHIsSameObject(v33, v40);
            goto LABEL_38;
          }
          v25 = 787LL;
        }
        else
        {
          v25 = 786LL;
        }
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          v25,
          (__int64)"pcshell\\twinui\\applayout\\lib\\applayout.cpp",
          (const char *)(unsigned int)v24);
        v4 = 0;
LABEL_38:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v40);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v33);
        goto LABEL_40;
      }
      v12 = &v38;
    }
    wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,0,std::nullptr_t>>::reset(
      v12,
      *v11);
    *v11 = 0LL;
    goto LABEL_19;
  }
LABEL_51:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v34);
  return v4;
}
