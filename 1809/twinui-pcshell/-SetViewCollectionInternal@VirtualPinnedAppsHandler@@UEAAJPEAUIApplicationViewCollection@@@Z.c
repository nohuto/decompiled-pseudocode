/*
 * XREFs of ?SetViewCollectionInternal@VirtualPinnedAppsHandler@@UEAAJPEAUIApplicationViewCollection@@@Z @ 0x180392740
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x18001C76C (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006C60C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800891F8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??0?$ObjectArrayAdapterImpl@UISwitchItemElement@@V?$ComPtr@UISwitchItemElement@@@WRL@Microsoft@@@details@@QEAA@PEAUIObjectArray@@@Z @ 0x18014439C (--0-$ObjectArrayAdapterImpl@UISwitchItemElement@@V-$ComPtr@UISwitchItemElement@@@WRL@Microsoft@@.c)
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapterImpl@UIApplicationView@@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@details@@AEAAXXZ @ 0x180145570 (-GetCurrentObject@Iterator@-$ObjectArrayAdapterImpl@UIApplicationView@@V-$ComPtr@UIApplicationVi.c)
 *     ?PinViewInternal@VirtualPinnedAppsHandler@@AEAAJPEAUIApplicationView@@_N@Z @ 0x18039231C (-PinViewInternal@VirtualPinnedAppsHandler@@AEAAJPEAUIApplicationView@@_N@Z.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall VirtualPinnedAppsHandler::SetViewCollectionInternal(
        VirtualPinnedAppsHandler *this,
        struct IApplicationViewCollection *a2)
{
  __int64 *v3; // rsi
  __int64 v4; // rbx
  int v5; // eax
  __int64 v6; // rbx
  int v7; // eax
  const char *v8; // r9
  __int64 result; // rax
  _QWORD *v10; // rsi
  _QWORD *v11; // rbx
  _QWORD *v12; // rdx
  int v13; // eax
  int v14; // eax
  wil::details::in1diag3 *v15; // rcx
  __int64 v16; // rdx
  struct IApplicationView *v17; // [rsp+20h] [rbp-88h] BYREF
  __int64 v18; // [rsp+28h] [rbp-80h] BYREF
  __int64 v19; // [rsp+30h] [rbp-78h] BYREF
  int v20; // [rsp+38h] [rbp-70h] BYREF
  __int64 v21; // [rsp+40h] [rbp-68h] BYREF
  int v22[2]; // [rsp+48h] [rbp-60h] BYREF
  __int64 *v23; // [rsp+50h] [rbp-58h]
  __int64 v24; // [rsp+58h] [rbp-50h] BYREF
  int v25; // [rsp+60h] [rbp-48h]
  __int64 v26; // [rsp+68h] [rbp-40h] BYREF
  __int64 v27; // [rsp+70h] [rbp-38h] BYREF
  __int64 *v28; // [rsp+78h] [rbp-30h]
  _QWORD *v29; // [rsp+80h] [rbp-28h]
  __int64 v30; // [rsp+88h] [rbp-20h]
  _QWORD *v31; // [rsp+90h] [rbp-18h]
  _QWORD *v32; // [rsp+98h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]
  int v34; // [rsp+C0h] [rbp+18h] BYREF
  char v35; // [rsp+C8h] [rbp+20h] BYREF

  v30 = -2LL;
  try
  {
    v3 = (__int64 *)((char *)this + 80);
    Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 10, (__int64)a2);
    v19 = 0LL;
    v4 = *((_QWORD *)this + 6);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19);
    v5 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v4 + 224LL))(v4, &v19);
    if ( v5 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        245LL,
        (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppinnedapphandler.cpp",
        (const char *)(unsigned int)v5);
    if ( *v3 )
    {
      v18 = 0LL;
      v6 = *v3;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v18);
      v7 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v6 + 24LL))(v6, &v18);
      if ( v7 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          253LL,
          (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppinnedapphandler.cpp",
          (const char *)(unsigned int)v7);
      details::ObjectArrayAdapterImpl<ISwitchItemElement,Microsoft::WRL::ComPtr<ISwitchItemElement>>::ObjectArrayAdapterImpl<ISwitchItemElement,Microsoft::WRL::ComPtr<ISwitchItemElement>>(
        (__int64)&v24,
        v18);
      LODWORD(v21) = 0;
      *(_QWORD *)v22 = 0LL;
      v23 = &v24;
      details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::Iterator::GetCurrentObject(&v21);
      LODWORD(v26) = v25;
      v27 = 0LL;
      v28 = &v24;
      details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::Iterator::GetCurrentObject(&v26);
      while ( (_DWORD)v21 != (_DWORD)v26 || v23 != v28 )
      {
        v17 = *(struct IApplicationView **)v22;
        Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v17);
        v10 = (_QWORD *)*((_QWORD *)this + 13);
        v31 = v10;
        v11 = (_QWORD *)*((_QWORD *)this + 12);
        v32 = v11;
        while ( 1 )
        {
          v29 = v11;
          if ( v11 == v10 )
            break;
          v12 = v11;
          if ( v11[3] >= 8uLL )
            v12 = (_QWORD *)*v11;
          v13 = (*(__int64 (__fastcall **)(struct IApplicationView *, _QWORD *, int *))(*(_QWORD *)v17 + 152LL))(
                  v17,
                  v12,
                  &v20);
          if ( v13 >= 0 )
          {
            if ( v20 )
            {
              if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, struct IApplicationView *, int *))(**((_QWORD **)this + 8)
                                                                                                + 120LL))(
                      *((_QWORD *)this + 8),
                      v17,
                      &v34)
                || !(_BYTE)v34 )
              {
                v14 = VirtualPinnedAppsHandler::PinViewInternal(this, v17, 1);
                v15 = retaddr;
                if ( v14 < 0 )
                {
                  v16 = 267LL;
LABEL_28:
                  wil::details::in1diag3::_Log_Hr(
                    v15,
                    v16,
                    (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppinnedapphandler.cpp",
                    (const char *)(unsigned int)v14);
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
              261LL,
              (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppinnedapphandler.cpp",
              (const char *)(unsigned int)v13);
          }
          v11 += 4;
        }
        if ( (*(unsigned __int8 (__fastcall **)(_QWORD, struct IApplicationView *, char *))(**((_QWORD **)this + 8)
                                                                                          + 120LL))(
               *((_QWORD *)this + 8),
               v17,
               &v35) )
        {
          if ( v35 )
          {
            v14 = (*(__int64 (__fastcall **)(VirtualPinnedAppsHandler *, struct IApplicationView *, __int64))(*(_QWORD *)this + 104LL))(
                    this,
                    v17,
                    v19);
            v15 = retaddr;
            if ( v14 < 0 )
            {
              v16 = 275LL;
              goto LABEL_28;
            }
          }
        }
LABEL_29:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v17);
        LODWORD(v21) = v21 + 1;
        details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::Iterator::GetCurrentObject(&v21);
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v27);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v22);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v24);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v18);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x11B,
                           (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppinnedapphandler.cpp",
                           v8);
  }
  return result;
}
