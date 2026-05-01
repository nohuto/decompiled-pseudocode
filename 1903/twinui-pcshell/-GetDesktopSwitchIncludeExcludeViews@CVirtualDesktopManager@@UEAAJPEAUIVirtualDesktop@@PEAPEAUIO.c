/*
 * XREFs of ?GetDesktopSwitchIncludeExcludeViews@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@PEAPEAUIObjectArray@@1@Z @ 0x1803EBB60
 * Callers:
 *     <none>
 * Callees:
 *     ?CreateInstance@CEnumerableObjectCollection@@SAJHAEBU_GUID@@PEAPEAX@Z @ 0x180026898 (-CreateInstance@CEnumerableObjectCollection@@SAJHAEBU_GUID@@PEAPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006A5CC (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??0?$ObjectArrayAdapterImpl@UISwitchItemElement@@V?$ComPtr@UISwitchItemElement@@@WRL@Microsoft@@@details@@QEAA@PEAUIObjectArray@@@Z @ 0x18016FDFC (--0-$ObjectArrayAdapterImpl@UISwitchItemElement@@V-$ComPtr@UISwitchItemElement@@@WRL@Microsoft@@.c)
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapterImpl@UIApplicationView@@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@details@@AEAAXXZ @ 0x180170FE8 (-GetCurrentObject@Iterator@-$ObjectArrayAdapterImpl@UIApplicationView@@V-$ComPtr@UIApplicationVi.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall CVirtualDesktopManager::GetDesktopSwitchIncludeExcludeViews(
        CVirtualDesktopManager *this,
        struct IVirtualDesktop *a2,
        struct IObjectArray **a3,
        struct IObjectArray **a4)
{
  unsigned int v7; // edi
  const struct _GUID *v8; // rdx
  __int64 v9; // rcx
  int v10; // eax
  const struct _GUID *v11; // rdx
  __int64 v12; // rcx
  int v13; // eax
  __int64 v14; // rdi
  __int64 (__fastcall *v15)(__int64, struct IVirtualDesktop *, __int64 *, char *); // rbx
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rdi
  __int64 (__fastcall *v19)(__int64, __int64 *); // rbx
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rbx
  char v23; // r15
  char v24; // si
  int v25; // eax
  int v26; // eax
  __int64 v27; // rdx
  void *v29; // [rsp+38h] [rbp-69h] BYREF
  void *v30; // [rsp+40h] [rbp-61h] BYREF
  __int64 v31; // [rsp+48h] [rbp-59h] BYREF
  __int64 v32; // [rsp+50h] [rbp-51h] BYREF
  __int64 v33; // [rsp+58h] [rbp-49h] BYREF
  __int64 v34; // [rsp+60h] [rbp-41h] BYREF
  __int64 v35; // [rsp+68h] [rbp-39h] BYREF
  __int64 *v36; // [rsp+70h] [rbp-31h]
  ULONGLONG TickCount64; // [rsp+78h] [rbp-29h] BYREF
  PSRWLOCK SRWLock; // [rsp+80h] [rbp-21h] BYREF
  __int64 v39; // [rsp+88h] [rbp-19h] BYREF
  int v40; // [rsp+90h] [rbp-11h]
  __int64 v41; // [rsp+98h] [rbp-9h] BYREF
  __int64 v42; // [rsp+A0h] [rbp-1h] BYREF
  __int64 *v43; // [rsp+A8h] [rbp+7h]
  _QWORD v44[9]; // [rsp+B0h] [rbp+Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+100h] [rbp+5Fh]
  char v46; // [rsp+108h] [rbp+67h] BYREF
  struct IObjectArray **v47; // [rsp+118h] [rbp+77h]

  v47 = a3;
  v44[1] = -2LL;
  (*(void (__fastcall **)(_QWORD, PSRWLOCK *))(**((_QWORD **)this + 16) + 24LL))(*((_QWORD *)this + 16), &SRWLock);
  if ( !*((_QWORD *)this + 10) )
  {
    v7 = -2147417848;
    goto LABEL_36;
  }
  v30 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v30);
  v10 = CEnumerableObjectCollection::CreateInstance(v9, v8, &v30);
  v7 = v10;
  if ( v10 >= 0 )
  {
    v29 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v29);
    v13 = CEnumerableObjectCollection::CreateInstance(v12, v11, &v29);
    v7 = v13;
    if ( v13 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x14C,
        (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
        (const char *)(unsigned int)v13);
LABEL_34:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v29);
      goto LABEL_35;
    }
    v32 = 0LL;
    v14 = *((_QWORD *)this + 13);
    v15 = *(__int64 (__fastcall **)(__int64, struct IVirtualDesktop *, __int64 *, char *))(*(_QWORD *)v14 + 40LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v32);
    v16 = v15(v14, a2, &v32, &v46);
    v7 = v16;
    if ( v16 < 0 )
    {
      v17 = 336LL;
LABEL_13:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v17,
        (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
        (const char *)(unsigned int)v16);
LABEL_33:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v32);
      goto LABEL_34;
    }
    TickCount64 = GetTickCount64();
    if ( v46 )
    {
      if ( v32 )
      {
        v16 = (*(__int64 (__fastcall **)(__int64, ULONGLONG *))(*(_QWORD *)v32 + 184LL))(v32, &TickCount64);
        v7 = v16;
        if ( v16 < 0 )
        {
          v17 = 341LL;
          goto LABEL_13;
        }
      }
    }
    v31 = 0LL;
    v18 = *((_QWORD *)this + 10);
    v19 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v18 + 24LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v31);
    v20 = v19(v18, &v31);
    v7 = v20;
    if ( v20 >= 0 )
    {
      details::ObjectArrayAdapterImpl<ISwitchItemElement,Microsoft::WRL::ComPtr<ISwitchItemElement>>::ObjectArrayAdapterImpl<ISwitchItemElement,Microsoft::WRL::ComPtr<ISwitchItemElement>>(
        (__int64)&v39,
        v31);
      LODWORD(v34) = 0;
      v35 = 0LL;
      v36 = &v39;
      details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::Iterator::GetCurrentObject(&v34);
      LODWORD(v41) = v40;
      v42 = 0LL;
      v43 = &v39;
      details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::Iterator::GetCurrentObject(&v41);
      while ( (_DWORD)v34 != (_DWORD)v41 || v36 != v43 )
      {
        v22 = v35;
        v33 = v35;
        Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v33);
        v23 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(**((_QWORD **)this + 11) + 24LL))(
                *((_QWORD *)this + 11),
                v22,
                *((_QWORD *)this + 17));
        v24 = (*(__int64 (__fastcall **)(_QWORD, __int64, struct IVirtualDesktop *))(**((_QWORD **)this + 11) + 24LL))(
                *((_QWORD *)this + 11),
                v22,
                a2);
        if ( v46 )
        {
          v25 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v22 + 184LL))(v22, v44);
          v7 = v25;
          if ( v25 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x163,
              (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
              (const char *)(unsigned int)v25);
            goto LABEL_31;
          }
          if ( v44[0] > TickCount64 )
            v24 = 0;
        }
        if ( v23 != v24 )
        {
          if ( v24 )
          {
            v26 = (*(__int64 (__fastcall **)(void *, __int64))(*(_QWORD *)v30 + 40LL))(v30, v22);
            v7 = v26;
            if ( v26 < 0 )
            {
              v27 = 375LL;
              goto LABEL_30;
            }
          }
          else
          {
            v26 = (*(__int64 (__fastcall **)(void *, __int64))(*(_QWORD *)v29 + 40LL))(v29, v22);
            v7 = v26;
            if ( v26 < 0 )
            {
              v27 = 379LL;
LABEL_30:
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)v27,
                (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
                (const char *)(unsigned int)v26);
LABEL_31:
              Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v33);
              Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v42);
              Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v35);
              Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v39);
              goto LABEL_32;
            }
          }
        }
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v33);
        LODWORD(v34) = v34 + 1;
        details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::Iterator::GetCurrentObject(&v34);
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v42);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v35);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v39);
      v20 = (**(__int64 (__fastcall ***)(void *, GUID *, struct IObjectArray **))v30)(
              v30,
              &GUID_92ca9dcd_5622_4bba_a805_5e9f541bd8c9,
              v47);
      v7 = v20;
      if ( v20 >= 0 )
      {
        v20 = (**(__int64 (__fastcall ***)(void *, GUID *, struct IObjectArray **))v29)(
                v29,
                &GUID_92ca9dcd_5622_4bba_a805_5e9f541bd8c9,
                a4);
        v7 = v20;
        if ( v20 >= 0 )
        {
          v7 = 0;
          goto LABEL_32;
        }
        v21 = 385LL;
      }
      else
      {
        v21 = 384LL;
      }
    }
    else
    {
      v21 = 345LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v21,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
      (const char *)(unsigned int)v20);
LABEL_32:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v31);
    goto LABEL_33;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x149,
    (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
    (const char *)(unsigned int)v10);
LABEL_35:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v30);
LABEL_36:
  if ( SRWLock )
  {
    ReleaseSRWLockShared(SRWLock);
    SRWLock = 0LL;
  }
  return v7;
}
