/*
 * XREFs of ?IsEqual@CAppLayout@@UEAAHPEAUIAppLayout@@W4APP_LAYOUT_COMPARE_FLAGS@@@Z @ 0x18041DC90
 * Callers:
 *     <none>
 * Callees:
 *     InlineIsEqualGUID @ 0x1800256A0 (InlineIsEqualGUID.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18002758C (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180063E40 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072ADC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockShared@Details@234@XZ @ 0x1800822E4 (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockShared@Details@234@XZ.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180100138 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@_ea_180100138.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U?$ImplementsMarker@VFtmBase@WRL@Microsoft@@@Details@23@UIAppLayoutInternal@@U?$ChainInterfaces@UIAppLayoutBuilder@@UIAppLayout@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18041CDB4 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U-$ImplementsMarker@VF.c)
 */

__int64 __fastcall CAppLayout::IsEqual(__int64 a1, int (__fastcall ***a2)(_QWORD, GUID *, void **), char a3)
{
  unsigned int v4; // ebx
  const struct _GUID *v7; // rdx
  void *v8; // r9
  int CanCastTo; // esi
  RTL_SRWLOCK **v10; // rcx
  RTL_SRWLOCK *v11; // rax
  RTL_SRWLOCK **v12; // rcx
  RTL_SRWLOCK *v13; // rax
  RTL_SRWLOCK **v14; // rcx
  unsigned __int64 v15; // r14
  __int64 v16; // rsi
  __int64 v17; // rcx
  int v18; // eax
  __int64 v19; // rbx
  int v20; // r15d
  __int64 v21; // rax
  __int64 v22; // rbx
  int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // rbx
  unsigned __int64 v26; // r14
  unsigned __int64 i; // rsi
  __int64 v28; // rbx
  __int64 v29; // rcx
  struct IUnknown *v31; // [rsp+30h] [rbp-49h] BYREF
  __int64 v32; // [rsp+38h] [rbp-41h] BYREF
  void *v33; // [rsp+40h] [rbp-39h] BYREF
  __int64 v34; // [rsp+48h] [rbp-31h] BYREF
  void *v35; // [rsp+50h] [rbp-29h] BYREF
  RTL_SRWLOCK *v36; // [rsp+58h] [rbp-21h] BYREF
  RTL_SRWLOCK *v37; // [rsp+60h] [rbp-19h] BYREF
  struct IUnknown *v38; // [rsp+68h] [rbp-11h] BYREF
  RECT rc2; // [rsp+70h] [rbp-9h] BYREF
  int v40; // [rsp+80h] [rbp+7h]
  int v41; // [rsp+84h] [rbp+Bh]
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]

  v32 = 0LL;
  v4 = 0;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v32);
  if ( (**a2)(a2, &GUID_1ef1ecfa_786a_4d06_b024_4a61c7049b29, (void **)&v32) >= 0 )
  {
    v37 = 0LL;
    v36 = 0LL;
    v33 = 0LL;
    v35 = 0LL;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v33);
    v33 = 0LL;
    if ( InlineIsEqualGUID(&GUID_00000000_0000_0000_c000_000000000046, &GUID_00000000_0000_0000_c000_000000000046) )
    {
      v33 = v8;
      (*(void (__fastcall **)(void *))(*(_QWORD *)v8 + 8LL))(v8);
      CanCastTo = 0;
    }
    else
    {
      CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IAppLayoutInternal,Microsoft::WRL::ChainInterfaces<IAppLayoutBuilder,IAppLayout,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>>::CanCastTo(
                    (Microsoft::WRL::FtmBase *)v8,
                    v7,
                    &v33);
      if ( CanCastTo >= 0 )
        (*(void (__fastcall **)(void *))(*(_QWORD *)v33 + 8LL))(v33);
    }
    if ( CanCastTo < 0 )
      goto LABEL_51;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v35);
    if ( (**a2)(a2, &GUID_00000000_0000_0000_c000_000000000046, &v35) < 0 )
      goto LABEL_51;
    if ( v35 > v33 )
    {
      v13 = (RTL_SRWLOCK *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v32 + 56LL))(v32);
      v14 = Microsoft::WRL::Wrappers::SRWLock::LockShared(v13, (RTL_SRWLOCK **)&v31);
      if ( &v36 != v14 )
      {
        v36 = *v14;
        *v14 = 0LL;
      }
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>((RTL_SRWLOCK **)&v31);
      v12 = Microsoft::WRL::Wrappers::SRWLock::LockShared((RTL_SRWLOCK *)(a1 + 16), (RTL_SRWLOCK **)&v31);
      if ( &v37 == v12 )
        goto LABEL_19;
      v37 = *v12;
    }
    else
    {
      v10 = Microsoft::WRL::Wrappers::SRWLock::LockShared((RTL_SRWLOCK *)(a1 + 16), (RTL_SRWLOCK **)&v31);
      if ( &v37 != v10 )
      {
        v37 = *v10;
        *v10 = 0LL;
      }
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>((RTL_SRWLOCK **)&v31);
      if ( v35 == v33 )
      {
LABEL_20:
        (*(void (__fastcall **)(__int64, RECT *))(*(_QWORD *)v32 + 24LL))(v32, &rc2);
        if ( (a3 & 1) != 0
          && (!EqualRect((const RECT *)(a1 + 24), &rc2) || *(_DWORD *)(a1 + 40) != v40 || *(_DWORD *)(a1 + 44) != v41) )
        {
          goto LABEL_51;
        }
        v4 = 1;
        if ( (a3 & 4) != 0 )
        {
          v15 = *(_QWORD *)(a1 + 72);
          if ( v15 == (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v32 + 32LL))(v32) )
          {
            v16 = 0LL;
            if ( v15 )
            {
              while ( 1 )
              {
                if ( !v4 )
                  goto LABEL_51;
                v17 = *(_QWORD *)(*(_QWORD *)(a1 + 64) + 8 * v16);
                v18 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v17 + 24LL))(v17);
                v19 = v32;
                v20 = v18;
                v34 = 0LL;
                Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v34);
                if ( (*(int (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(*(_QWORD *)v19 + 40LL))(
                       v19,
                       (unsigned int)v16,
                       &GUID_ab0cda95_cad6_4882_a8c7_7c2905752b98,
                       &v34) < 0
                  || (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v34 + 24LL))(v34) != v20 )
                {
                  v4 = 0;
                  goto LABEL_39;
                }
                v4 = 1;
                if ( v20 == 1 )
                  break;
LABEL_39:
                Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v34);
                if ( ++v16 >= v15 )
                  goto LABEL_51;
              }
              v21 = *(_QWORD *)(a1 + 64);
              v31 = 0LL;
              v38 = 0LL;
              v22 = *(_QWORD *)(v21 + 8 * v16);
              Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v31);
              v23 = (*(__int64 (__fastcall **)(__int64, GUID *, struct IUnknown **))(*(_QWORD *)v22 + 48LL))(
                      v22,
                      &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513,
                      &v31);
              if ( v23 >= 0 )
              {
                v25 = v34;
                Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v38);
                v23 = (*(__int64 (__fastcall **)(__int64, GUID *, struct IUnknown **))(*(_QWORD *)v25 + 48LL))(
                        v25,
                        &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513,
                        &v38);
                if ( v23 >= 0 )
                {
                  v4 = SHIsSameObject(v31, v38);
                  goto LABEL_37;
                }
                v24 = 787LL;
              }
              else
              {
                v24 = 786LL;
              }
              wil::details::in1diag3::_Log_Hr(
                retaddr,
                (void *)v24,
                (__int64)"pcshell\\twinui\\applayout\\lib\\applayout.cpp",
                (const char *)(unsigned int)v23);
              v4 = 0;
LABEL_37:
              Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v38);
              Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v31);
              goto LABEL_39;
            }
            goto LABEL_51;
          }
        }
        else
        {
          if ( (a3 & 2) == 0 )
          {
LABEL_51:
            Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v35);
            Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v33);
            wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v36);
            wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v37);
            goto LABEL_52;
          }
          v26 = *(_QWORD *)(a1 + 72);
          if ( v26 == (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v32 + 32LL))(v32) )
          {
            for ( i = 0LL; i < v26; ++i )
            {
              if ( !v4 )
                break;
              v28 = v32;
              v31 = 0LL;
              Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v31);
              if ( (*(int (__fastcall **)(__int64, _QWORD, GUID *, struct IUnknown **))(*(_QWORD *)v28 + 40LL))(
                     v28,
                     (unsigned int)i,
                     &GUID_ab0cda95_cad6_4882_a8c7_7c2905752b98,
                     &v31) >= 0 )
              {
                v29 = *(_QWORD *)(*(_QWORD *)(a1 + 64) + 8 * i);
                v4 = (*(__int64 (__fastcall **)(__int64, struct IUnknown *))(*(_QWORD *)v29 + 96LL))(v29, v31);
              }
              else
              {
                v4 = 0;
              }
              Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v31);
            }
            goto LABEL_51;
          }
        }
        v4 = 0;
        goto LABEL_51;
      }
      v11 = (RTL_SRWLOCK *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v32 + 56LL))(v32);
      v12 = Microsoft::WRL::Wrappers::SRWLock::LockShared(v11, (RTL_SRWLOCK **)&v31);
      if ( &v36 == v12 )
      {
LABEL_19:
        wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>((RTL_SRWLOCK **)&v31);
        goto LABEL_20;
      }
      v36 = *v12;
    }
    *v12 = 0LL;
    goto LABEL_19;
  }
LABEL_52:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v32);
  return v4;
}
