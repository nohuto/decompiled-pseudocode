/*
 * XREFs of ?PresentFramedView@FrameWrapper@@UEAAJXZ @ 0x1801237F0
 * Callers:
 *     <none>
 * Callees:
 *     ??$As@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@@?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x180042738 (--$As@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@@-$ComPtr@UIViewWrapper@Vie.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?ReconcileFramedView@FrameWrapper@@AEAAJXZ @ 0x180123A74 (-ReconcileFramedView@FrameWrapper@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall FrameWrapper::PresentFramedView(FrameWrapper *this)
{
  _QWORD *v2; // rcx
  unsigned int v3; // ebx
  int v4; // eax
  __int64 v5; // rdx
  int v6; // eax
  __int64 v7; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  unsigned int v10; // [rsp+50h] [rbp+20h] BYREF
  __int64 v11; // [rsp+58h] [rbp+28h] BYREF
  __int64 v12; // [rsp+60h] [rbp+30h] BYREF

  v2 = (_QWORD *)((char *)this + 40);
  if ( *v2 )
  {
    v12 = 0LL;
    v4 = Microsoft::WRL::ComPtr<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>::As<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState>(
           v2,
           &v12);
    v3 = v4;
    if ( v4 < 0 )
    {
      v5 = 281LL;
LABEL_7:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v5,
        (__int64)"pcshell\\twinui\\appmanager\\lib\\framefactory.cpp",
        (const char *)(unsigned int)v4);
LABEL_17:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
      return v3;
    }
    v4 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v12 + 48LL))(v12, &v10);
    v3 = v4;
    if ( v4 < 0 )
    {
      v5 = 283LL;
      goto LABEL_7;
    }
    v11 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
    v6 = (*(__int64 (__fastcall **)(FrameWrapper *, __int64 *))(*(_QWORD *)this + 32LL))(this, &v11);
    v3 = v6;
    if ( v6 >= 0 )
    {
      v6 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v11 + 48LL))(v11, v10);
      v3 = v6;
      if ( v6 >= 0 )
      {
        *((_DWORD *)this + 12) |= 1u;
        FrameWrapper::ReconcileFramedView((FrameWrapper *)((char *)this - 32));
        v6 = (*(__int64 (__fastcall **)(FrameWrapper *))(*(_QWORD *)this + 96LL))(this);
        v3 = v6;
        if ( v6 >= 0 )
        {
          v3 = 0;
          goto LABEL_16;
        }
        v7 = 292LL;
      }
      else
      {
        v7 = 286LL;
      }
    }
    else
    {
      v7 = 285LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"pcshell\\twinui\\appmanager\\lib\\framefactory.cpp",
      (const char *)(unsigned int)v6);
LABEL_16:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
    goto LABEL_17;
  }
  v3 = -2147019873;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x116,
    (__int64)"pcshell\\twinui\\appmanager\\lib\\framefactory.cpp",
    (const char *)0x8007139FLL);
  return v3;
}
