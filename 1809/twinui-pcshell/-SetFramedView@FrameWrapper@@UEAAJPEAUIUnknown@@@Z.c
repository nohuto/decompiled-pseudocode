/*
 * XREFs of ?SetFramedView@FrameWrapper@@UEAAJPEAUIUnknown@@@Z @ 0x180123D90
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180060730 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180077188 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??$As@UINtUserViewWrapper@@@?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UINtUserViewWrapper@@@WRL@Microsoft@@@Details@12@@Z @ 0x180122F04 (--$As@UINtUserViewWrapper@@@-$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@W.c)
 *     ?ReconcileFramedView@FrameWrapper@@AEAAJXZ @ 0x180123A74 (-ReconcileFramedView@FrameWrapper@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall FrameWrapper::SetFramedView(FrameWrapper *this, struct IUnknown *a2)
{
  _QWORD *v4; // rsi
  int v5; // eax
  unsigned int LastError; // ebx
  int v7; // eax
  __int64 v8; // rdx
  const char *v9; // r9
  int v10; // eax
  __int64 v11; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+20h]
  unsigned int v14; // [rsp+60h] [rbp+28h] BYREF
  __int64 v15; // [rsp+68h] [rbp+30h] BYREF
  __int64 v16; // [rsp+70h] [rbp+38h] BYREF
  __int64 v17; // [rsp+78h] [rbp+40h] BYREF

  v4 = (_QWORD *)((char *)this + 40);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 5);
  v5 = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, _QWORD *))a2->lpVtbl->QueryInterface)(
         a2,
         &GUID_d6ecd9bf_13b0_4264_955c_6e96d28a37ae,
         v4);
  LastError = v5;
  if ( v5 >= 0 )
  {
    v15 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v15);
    v7 = (*(__int64 (__fastcall **)(FrameWrapper *, __int64 *))(*(_QWORD *)this + 32LL))(this, &v15);
    LastError = v7;
    if ( v7 < 0 )
    {
      v8 = 260LL;
LABEL_7:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v8,
        (__int64)"pcshell\\twinui\\appmanager\\lib\\framefactory.cpp",
        (const char *)(unsigned int)v7);
LABEL_17:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v15);
      return LastError;
    }
    v7 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v15 + 24LL))(v15, &v17);
    LastError = v7;
    if ( v7 < 0 )
    {
      v8 = 262LL;
      goto LABEL_7;
    }
    if ( !(unsigned int)GetWindowBand(v17, &v14) )
    {
      LastError = wil::details::in1diag3::Return_GetLastError(
                    retaddr,
                    (void *)0x108,
                    (__int64)"pcshell\\twinui\\appmanager\\lib\\framefactory.cpp",
                    v9);
      goto LABEL_17;
    }
    v16 = 0LL;
    v10 = Microsoft::WRL::ComPtr<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>::As<INtUserViewWrapper>(
            v4,
            &v16);
    LastError = v10;
    if ( v10 >= 0 )
    {
      v10 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v16 + 40LL))(v16, v14);
      LastError = v10;
      if ( v10 >= 0 )
      {
        FrameWrapper::ReconcileFramedView((FrameWrapper *)((char *)this - 32));
        LastError = 0;
        goto LABEL_16;
      }
      v11 = 267LL;
    }
    else
    {
      v11 = 266LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (__int64)"pcshell\\twinui\\appmanager\\lib\\framefactory.cpp",
      (const char *)(unsigned int)v10);
LABEL_16:
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v16);
    goto LABEL_17;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xFC,
    (__int64)"pcshell\\twinui\\appmanager\\lib\\framefactory.cpp",
    (const char *)(unsigned int)v5);
  return LastError;
}
