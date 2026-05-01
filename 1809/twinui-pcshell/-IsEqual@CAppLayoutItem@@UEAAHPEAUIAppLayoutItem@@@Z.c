/*
 * XREFs of ?IsEqual@CAppLayoutItem@@UEAAHPEAUIAppLayoutItem@@@Z @ 0x1803BD580
 * Callers:
 *     <none>
 * Callees:
 *     ?AreAppViewDataEqual@ImmersiveApplicationLayout@@YA_NPEBUAPPLICATION_VIEW_DATA@@0@Z @ 0x180015C08 (-AreAppViewDataEqual@ImmersiveApplicationLayout@@YA_NPEBUAPPLICATION_VIEW_DATA@@0@Z.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18003ACF8 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180060730 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockShared@Details@234@XZ @ 0x18007F754 (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockShared@Details@234@XZ.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??1CAutoSRWSharedLock@@QEAA@XZ @ 0x1800DE21C (--1CAutoSRWSharedLock@@QEAA@XZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_RTL_SRWLOCK@@@Z @ 0x1801F1F14 (-reset@-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockShared.c)
 */

__int64 __fastcall CAppLayoutItem::IsEqual(CAppLayoutItem *this, struct IAppLayoutItem *a2)
{
  unsigned int v3; // edi
  RTL_SRWLOCK **v5; // rbx
  RTL_SRWLOCK *v6; // rax
  RTL_SRWLOCK **v7; // rbx
  RTL_SRWLOCK **v8; // rcx
  RTL_SRWLOCK *v9; // rax
  RTL_SRWLOCK **v10; // rbx
  __int64 v11; // rbx
  const struct APPLICATION_VIEW_DATA *v12; // r8
  __int64 v14; // [rsp+20h] [rbp-39h] BYREF
  RTL_SRWLOCK *v15; // [rsp+28h] [rbp-31h] BYREF
  RTL_SRWLOCK *v16; // [rsp+30h] [rbp-29h] BYREF
  unsigned __int64 v17; // [rsp+38h] [rbp-21h] BYREF
  unsigned __int64 v18; // [rsp+40h] [rbp-19h] BYREF
  RECT rc2; // [rsp+48h] [rbp-11h] BYREF
  _BYTE v20[48]; // [rsp+58h] [rbp-1h] BYREF

  v14 = 0LL;
  v3 = 0;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
  if ( (**(int (__fastcall ***)(struct IAppLayoutItem *, GUID *, __int64 *))a2)(
         a2,
         &GUID_972224dc_7815_4df5_9adc_96bd3e7902fd,
         &v14) >= 0 )
  {
    v18 = 0LL;
    v17 = 0LL;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v18);
    if ( (**((int (__fastcall ***)(char *, GUID *, unsigned __int64 *))this - 1))(
           (char *)this - 8,
           &GUID_00000000_0000_0000_c000_000000000046,
           &v18) < 0
      || (Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v17),
          (**(int (__fastcall ***)(struct IAppLayoutItem *, GUID *, unsigned __int64 *))a2)(
            a2,
            &GUID_00000000_0000_0000_c000_000000000046,
            &v17) < 0) )
    {
LABEL_26:
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v17);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v18);
      goto LABEL_27;
    }
    v16 = 0LL;
    v15 = 0LL;
    if ( v17 > v18 )
    {
      v9 = (RTL_SRWLOCK *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v14 + 56LL))(v14);
      v10 = Microsoft::WRL::Wrappers::SRWLock::LockShared(v9, (RTL_SRWLOCK **)&rc2);
      if ( &v15 != v10 )
      {
        wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,0,std::nullptr_t>>::reset(
          &v15,
          *v10);
        *v10 = 0LL;
      }
      CAutoSRWSharedLock::~CAutoSRWSharedLock((RTL_SRWLOCK **)&rc2);
      v7 = Microsoft::WRL::Wrappers::SRWLock::LockShared((RTL_SRWLOCK *)this + 3, (RTL_SRWLOCK **)&rc2);
      if ( &v16 == v7 )
        goto LABEL_15;
      v8 = &v16;
    }
    else
    {
      v5 = Microsoft::WRL::Wrappers::SRWLock::LockShared((RTL_SRWLOCK *)this + 3, (RTL_SRWLOCK **)&rc2);
      if ( &v16 != v5 )
      {
        wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,0,std::nullptr_t>>::reset(
          &v16,
          *v5);
        *v5 = 0LL;
      }
      CAutoSRWSharedLock::~CAutoSRWSharedLock((RTL_SRWLOCK **)&rc2);
      if ( v18 == v17 )
        goto LABEL_16;
      v6 = (RTL_SRWLOCK *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v14 + 56LL))(v14);
      v7 = Microsoft::WRL::Wrappers::SRWLock::LockShared(v6, (RTL_SRWLOCK **)&rc2);
      if ( &v15 == v7 )
      {
LABEL_15:
        CAutoSRWSharedLock::~CAutoSRWSharedLock((RTL_SRWLOCK **)&rc2);
LABEL_16:
        if ( *((_DWORD *)this + 8) == (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v14 + 24LL))(v14)
          && *((_DWORD *)this + 4) == (*(unsigned int (__fastcall **)(struct IAppLayoutItem *))(*(_QWORD *)a2 + 32LL))(a2) )
        {
          v3 = 1;
          if ( *((_DWORD *)this + 8) != 1 )
            goto LABEL_22;
          v11 = v14;
          *(_QWORD *)&rc2.left = 0LL;
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&rc2.left);
          if ( (*(int (__fastcall **)(__int64, GUID *, RECT *))(*(_QWORD *)v11 + 32LL))(
                 v11,
                 &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513,
                 &rc2) >= 0 )
            v3 = SHIsSameObject(*(struct IUnknown **)&rc2.left, *((struct IUnknown **)this + 5));
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&rc2.left);
          if ( v3 )
          {
LABEL_22:
            *(_QWORD *)&rc2.left = 0LL;
            *(_QWORD *)&rc2.right = 0LL;
            (*(void (__fastcall **)(__int64, _QWORD, RECT *))(*(_QWORD *)v14 + 40LL))(v14, 0LL, &rc2);
            v3 = EqualRect((const RECT *)this + 3, &rc2);
            if ( v3 )
            {
              *(_QWORD *)&rc2.left = 0LL;
              *(_QWORD *)&rc2.right = 0LL;
              (*(void (__fastcall **)(__int64, __int64, RECT *))(*(_QWORD *)v14 + 40LL))(v14, 1LL, &rc2);
              v3 = EqualRect((const RECT *)this + 4, &rc2);
              if ( v3 )
              {
                (*(void (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v14 + 48LL))(v14, v20);
                v3 = ImmersiveApplicationLayout::AreAppViewDataEqual(
                       (CAppLayoutItem *)((char *)this + 80),
                       (const struct APPLICATION_VIEW_DATA *)v20,
                       v12);
              }
            }
          }
        }
        CAutoSRWSharedLock::~CAutoSRWSharedLock(&v15);
        CAutoSRWSharedLock::~CAutoSRWSharedLock(&v16);
        goto LABEL_26;
      }
      v8 = &v15;
    }
    wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,0,std::nullptr_t>>::reset(
      v8,
      *v7);
    *v7 = 0LL;
    goto LABEL_15;
  }
LABEL_27:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
  return v3;
}
