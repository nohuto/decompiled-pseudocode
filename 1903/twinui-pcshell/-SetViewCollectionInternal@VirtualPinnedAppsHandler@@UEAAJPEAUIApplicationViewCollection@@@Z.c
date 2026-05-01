/*
 * XREFs of ?SetViewCollectionInternal@VirtualPinnedAppsHandler@@UEAAJPEAUIApplicationViewCollection@@@Z @ 0x1803F8690
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x18000E500 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006A5CC (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072ADC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008BCF4 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??0?$ObjectArrayAdapterImpl@UISwitchItemElement@@V?$ComPtr@UISwitchItemElement@@@WRL@Microsoft@@@details@@QEAA@PEAUIObjectArray@@@Z @ 0x18016FDFC (--0-$ObjectArrayAdapterImpl@UISwitchItemElement@@V-$ComPtr@UISwitchItemElement@@@WRL@Microsoft@@.c)
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapterImpl@UIApplicationView@@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@details@@AEAAXXZ @ 0x180170FE8 (-GetCurrentObject@Iterator@-$ObjectArrayAdapterImpl@UIApplicationView@@V-$ComPtr@UIApplicationVi.c)
 *     ?PinViewInternal@VirtualPinnedAppsHandler@@AEAAJPEAUIApplicationView@@_N@Z @ 0x1803F8210 (-PinViewInternal@VirtualPinnedAppsHandler@@AEAAJPEAUIApplicationView@@_N@Z.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall VirtualPinnedAppsHandler::SetViewCollectionInternal(
        VirtualPinnedAppsHandler *this,
        struct IApplicationViewCollection *a2)
{
  char *v3; // r14
  __int64 v4; // rdi
  __int64 (__fastcall *v5)(__int64, __int64 *); // rbx
  int v6; // eax
  __int64 v7; // rdi
  __int64 (__fastcall *v8)(__int64, __int64 *); // rbx
  int v9; // eax
  const char *v10; // r9
  __int64 result; // rax
  _QWORD *v12; // rdi
  _QWORD *v13; // rbx
  _QWORD *v14; // rdx
  int v15; // eax
  int v16; // eax
  wil::details::in1diag3 *v17; // rcx
  __int64 v18; // rdx
  struct IApplicationView *v19; // [rsp+20h] [rbp-98h] BYREF
  __int64 v20; // [rsp+28h] [rbp-90h] BYREF
  __int64 v21; // [rsp+30h] [rbp-88h] BYREF
  int v22; // [rsp+38h] [rbp-80h] BYREF
  __int64 v23; // [rsp+40h] [rbp-78h] BYREF
  int v24[2]; // [rsp+48h] [rbp-70h] BYREF
  __int64 *v25; // [rsp+50h] [rbp-68h]
  __int64 v26; // [rsp+58h] [rbp-60h] BYREF
  int v27; // [rsp+60h] [rbp-58h]
  __int64 v28; // [rsp+68h] [rbp-50h] BYREF
  __int64 v29; // [rsp+70h] [rbp-48h] BYREF
  __int64 *v30; // [rsp+78h] [rbp-40h]
  _QWORD *v31; // [rsp+80h] [rbp-38h]
  __int64 v32; // [rsp+88h] [rbp-30h]
  _QWORD *v33; // [rsp+90h] [rbp-28h]
  _QWORD *v34; // [rsp+98h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+0h]
  __int64 *v36; // [rsp+D0h] [rbp+18h] BYREF
  __int64 *v37; // [rsp+D8h] [rbp+20h] BYREF

  v32 = -2LL;
  try
  {
    v3 = (char *)this + 80;
    Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 10, (__int64)a2);
    v21 = 0LL;
    v4 = *((_QWORD *)this + 6);
    v5 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v4 + 224LL);
    v36 = &v21;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v21);
    v6 = v5(v4, &v21);
    if ( v6 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        245LL,
        (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppinnedapphandler.cpp",
        (const char *)(unsigned int)v6);
    if ( *(_QWORD *)v3 )
    {
      v20 = 0LL;
      v7 = *(_QWORD *)v3;
      v8 = *(__int64 (__fastcall **)(__int64, __int64 *))(**(_QWORD **)v3 + 24LL);
      v37 = &v20;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v20);
      v9 = v8(v7, &v20);
      if ( v9 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          253LL,
          (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppinnedapphandler.cpp",
          (const char *)(unsigned int)v9);
      details::ObjectArrayAdapterImpl<ISwitchItemElement,Microsoft::WRL::ComPtr<ISwitchItemElement>>::ObjectArrayAdapterImpl<ISwitchItemElement,Microsoft::WRL::ComPtr<ISwitchItemElement>>(
        (__int64)&v26,
        v20);
      LODWORD(v23) = 0;
      *(_QWORD *)v24 = 0LL;
      v25 = &v26;
      details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::Iterator::GetCurrentObject(&v23);
      LODWORD(v28) = v27;
      v29 = 0LL;
      v30 = &v26;
      details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::Iterator::GetCurrentObject(&v28);
      while ( (_DWORD)v23 != (_DWORD)v28 || v25 != v30 )
      {
        v19 = *(struct IApplicationView **)v24;
        Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v19);
        v12 = (_QWORD *)*((_QWORD *)this + 13);
        v33 = v12;
        v13 = (_QWORD *)*((_QWORD *)this + 12);
        v34 = v13;
        while ( 1 )
        {
          v31 = v13;
          if ( v13 == v12 )
            break;
          v14 = v13;
          if ( v13[3] >= 8uLL )
            v14 = (_QWORD *)*v13;
          v15 = (*(__int64 (__fastcall **)(struct IApplicationView *, _QWORD *, int *))(*(_QWORD *)v19 + 152LL))(
                  v19,
                  v14,
                  &v22);
          if ( v15 >= 0 )
          {
            if ( v22 )
            {
              if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, struct IApplicationView *, __int64 **))(**((_QWORD **)this + 8) + 120LL))(
                      *((_QWORD *)this + 8),
                      v19,
                      &v36)
                || !(_BYTE)v36 )
              {
                v16 = VirtualPinnedAppsHandler::PinViewInternal(this, v19, 1);
                v17 = retaddr;
                if ( v16 < 0 )
                {
                  v18 = 267LL;
LABEL_28:
                  wil::details::in1diag3::_Log_Hr(
                    v17,
                    (void *)v18,
                    (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppinnedapphandler.cpp",
                    (const char *)(unsigned int)v16);
                  goto LABEL_29;
                }
              }
              goto LABEL_29;
            }
          }
          else
          {
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x105,
              (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppinnedapphandler.cpp",
              (const char *)(unsigned int)v15);
          }
          v13 += 4;
        }
        if ( (*(unsigned __int8 (__fastcall **)(_QWORD, struct IApplicationView *, __int64 **))(**((_QWORD **)this + 8)
                                                                                              + 120LL))(
               *((_QWORD *)this + 8),
               v19,
               &v37) )
        {
          if ( (_BYTE)v37 )
          {
            v16 = (*(__int64 (__fastcall **)(VirtualPinnedAppsHandler *, struct IApplicationView *, __int64))(*(_QWORD *)this + 104LL))(
                    this,
                    v19,
                    v21);
            v17 = retaddr;
            if ( v16 < 0 )
            {
              v18 = 275LL;
              goto LABEL_28;
            }
          }
        }
LABEL_29:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v19);
        LODWORD(v23) = v23 + 1;
        details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::Iterator::GetCurrentObject(&v23);
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v29);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v24);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v26);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v20);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v21);
    result = 0LL;
  }
  catch ( ... )
  {
    LODWORD(v36) = wil::details::in1diag3::Return_CaughtException(
                     retaddr,
                     (void *)0x11B,
                     (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppinnedapphandler.cpp",
                     v10);
    return (unsigned int)v36;
  }
  return result;
}
