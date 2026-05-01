/*
 * XREFs of ?GetDesktopSwitchIncludeExcludeViews@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@PEAPEAUIObjectArray@@1@Z @ 0x1803860E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006C60C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?CreateInstance@CEnumerableObjectCollection@@SAJHAEBU_GUID@@PEAPEAX@Z @ 0x1800ED150 (-CreateInstance@CEnumerableObjectCollection@@SAJHAEBU_GUID@@PEAPEAX@Z.c)
 *     ??0?$ObjectArrayAdapterImpl@UISwitchItemElement@@V?$ComPtr@UISwitchItemElement@@@WRL@Microsoft@@@details@@QEAA@PEAUIObjectArray@@@Z @ 0x18014439C (--0-$ObjectArrayAdapterImpl@UISwitchItemElement@@V-$ComPtr@UISwitchItemElement@@@WRL@Microsoft@@.c)
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapterImpl@UIApplicationView@@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@details@@AEAAXXZ @ 0x180145570 (-GetCurrentObject@Iterator@-$ObjectArrayAdapterImpl@UIApplicationView@@V-$ComPtr@UIApplicationVi.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall CVirtualDesktopManager::GetDesktopSwitchIncludeExcludeViews(
        CVirtualDesktopManager *this,
        struct IVirtualDesktop *a2,
        struct IObjectArray **a3,
        struct IObjectArray **a4)
{
  const struct _GUID *v7; // rdx
  __int64 v8; // rcx
  int v9; // eax
  unsigned int v10; // edi
  const struct _GUID *v11; // rdx
  __int64 v12; // rcx
  int v13; // eax
  __int64 v14; // rbx
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rbx
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rbx
  char v21; // r15
  char v22; // si
  int v23; // eax
  int v24; // eax
  __int64 v25; // rdx
  void *v27; // [rsp+38h] [rbp-69h] BYREF
  void *v28; // [rsp+40h] [rbp-61h] BYREF
  __int64 v29; // [rsp+48h] [rbp-59h] BYREF
  __int64 v30; // [rsp+50h] [rbp-51h] BYREF
  __int64 v31; // [rsp+58h] [rbp-49h] BYREF
  __int64 v32; // [rsp+60h] [rbp-41h] BYREF
  __int64 v33; // [rsp+68h] [rbp-39h] BYREF
  __int64 *v34; // [rsp+70h] [rbp-31h]
  ULONGLONG TickCount64; // [rsp+78h] [rbp-29h] BYREF
  PSRWLOCK SRWLock; // [rsp+80h] [rbp-21h] BYREF
  __int64 v37; // [rsp+88h] [rbp-19h] BYREF
  int v38; // [rsp+90h] [rbp-11h]
  __int64 v39; // [rsp+98h] [rbp-9h] BYREF
  __int64 v40; // [rsp+A0h] [rbp-1h] BYREF
  __int64 *v41; // [rsp+A8h] [rbp+7h]
  _QWORD v42[9]; // [rsp+B0h] [rbp+Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+100h] [rbp+5Fh]
  char v44; // [rsp+108h] [rbp+67h] BYREF
  struct IObjectArray **v45; // [rsp+118h] [rbp+77h]

  v45 = a3;
  v42[1] = -2LL;
  (*(void (__fastcall **)(_QWORD, PSRWLOCK *))(**((_QWORD **)this + 16) + 24LL))(*((_QWORD *)this + 16), &SRWLock);
  v28 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v28);
  v9 = CEnumerableObjectCollection::CreateInstance(v8, v7, &v28);
  v10 = v9;
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x147,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
      (const char *)(unsigned int)v9);
    goto LABEL_33;
  }
  v27 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v27);
  v13 = CEnumerableObjectCollection::CreateInstance(v12, v11, &v27);
  v10 = v13;
  if ( v13 >= 0 )
  {
    v30 = 0LL;
    v14 = *((_QWORD *)this + 13);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v30);
    v15 = (*(__int64 (__fastcall **)(__int64, struct IVirtualDesktop *, __int64 *, char *))(*(_QWORD *)v14 + 40LL))(
            v14,
            a2,
            &v30,
            &v44);
    v10 = v15;
    if ( v15 < 0 )
    {
      v16 = 334LL;
LABEL_11:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v16,
        (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
        (const char *)(unsigned int)v15);
LABEL_31:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v30);
      goto LABEL_32;
    }
    TickCount64 = GetTickCount64();
    if ( v44 )
    {
      if ( v30 )
      {
        v15 = (*(__int64 (__fastcall **)(__int64, ULONGLONG *))(*(_QWORD *)v30 + 184LL))(v30, &TickCount64);
        v10 = v15;
        if ( v15 < 0 )
        {
          v16 = 339LL;
          goto LABEL_11;
        }
      }
    }
    v29 = 0LL;
    v17 = *((_QWORD *)this + 10);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v29);
    v18 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v17 + 24LL))(v17, &v29);
    v10 = v18;
    if ( v18 >= 0 )
    {
      details::ObjectArrayAdapterImpl<ISwitchItemElement,Microsoft::WRL::ComPtr<ISwitchItemElement>>::ObjectArrayAdapterImpl<ISwitchItemElement,Microsoft::WRL::ComPtr<ISwitchItemElement>>(
        (__int64)&v37,
        v29);
      LODWORD(v32) = 0;
      v33 = 0LL;
      v34 = &v37;
      details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::Iterator::GetCurrentObject(&v32);
      LODWORD(v39) = v38;
      v40 = 0LL;
      v41 = &v37;
      details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::Iterator::GetCurrentObject(&v39);
      while ( (_DWORD)v32 != (_DWORD)v39 || v34 != v41 )
      {
        v20 = v33;
        v31 = v33;
        Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v31);
        v21 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(**((_QWORD **)this + 11) + 24LL))(
                *((_QWORD *)this + 11),
                v20,
                *((_QWORD *)this + 17));
        v22 = (*(__int64 (__fastcall **)(_QWORD, __int64, struct IVirtualDesktop *))(**((_QWORD **)this + 11) + 24LL))(
                *((_QWORD *)this + 11),
                v20,
                a2);
        if ( v44 )
        {
          v23 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v20 + 184LL))(v20, v42);
          v10 = v23;
          if ( v23 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x161,
              (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
              (const char *)(unsigned int)v23);
            goto LABEL_29;
          }
          if ( v42[0] > TickCount64 )
            v22 = 0;
        }
        if ( v21 != v22 )
        {
          if ( v22 )
          {
            v24 = (*(__int64 (__fastcall **)(void *, __int64))(*(_QWORD *)v28 + 40LL))(v28, v20);
            v10 = v24;
            if ( v24 < 0 )
            {
              v25 = 373LL;
              goto LABEL_28;
            }
          }
          else
          {
            v24 = (*(__int64 (__fastcall **)(void *, __int64))(*(_QWORD *)v27 + 40LL))(v27, v20);
            v10 = v24;
            if ( v24 < 0 )
            {
              v25 = 377LL;
LABEL_28:
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)v25,
                (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
                (const char *)(unsigned int)v24);
LABEL_29:
              Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v31);
              Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v40);
              Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v33);
              Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v37);
              goto LABEL_30;
            }
          }
        }
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v31);
        LODWORD(v32) = v32 + 1;
        details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::Iterator::GetCurrentObject(&v32);
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v40);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v33);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v37);
      v18 = (**(__int64 (__fastcall ***)(void *, GUID *, struct IObjectArray **))v28)(
              v28,
              &GUID_92ca9dcd_5622_4bba_a805_5e9f541bd8c9,
              v45);
      v10 = v18;
      if ( v18 >= 0 )
      {
        v18 = (**(__int64 (__fastcall ***)(void *, GUID *, struct IObjectArray **))v27)(
                v27,
                &GUID_92ca9dcd_5622_4bba_a805_5e9f541bd8c9,
                a4);
        v10 = v18;
        if ( v18 >= 0 )
        {
          v10 = 0;
          goto LABEL_30;
        }
        v19 = 383LL;
      }
      else
      {
        v19 = 382LL;
      }
    }
    else
    {
      v19 = 343LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v19,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
      (const char *)(unsigned int)v18);
LABEL_30:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v29);
    goto LABEL_31;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x14A,
    (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
    (const char *)(unsigned int)v13);
LABEL_32:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v27);
LABEL_33:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v28);
  if ( SRWLock )
  {
    ReleaseSRWLockShared(SRWLock);
    SRWLock = 0LL;
  }
  return v10;
}
