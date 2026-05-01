/*
 * XREFs of ?PresentFramedView@FrameWrapper@@UEAAJXZ @ 0x18016C1C0
 * Callers:
 *     <none>
 * Callees:
 *     ??$As@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@@?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800394C0 (--$As@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@@-$ComPtr@UIViewWrapper@Vie.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?ReconcileFramedView@FrameWrapper@@AEAAJXZ @ 0x18016C454 (-ReconcileFramedView@FrameWrapper@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall FrameWrapper::PresentFramedView(FrameWrapper *this)
{
  __int64 (__fastcall ****v2)(_QWORD, GUID *, __int64 *); // rcx
  unsigned int v3; // ebx
  int v4; // eax
  __int64 v5; // rdx
  __int64 (__fastcall *v6)(FrameWrapper *, __int64 *); // rbx
  int v7; // eax
  __int64 v8; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  unsigned int v11; // [rsp+50h] [rbp+20h] BYREF
  __int64 v12; // [rsp+58h] [rbp+28h] BYREF
  __int64 v13; // [rsp+60h] [rbp+30h] BYREF

  v2 = (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))((char *)this + 40);
  if ( *v2 )
  {
    v13 = 0LL;
    v4 = Microsoft::WRL::ComPtr<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>::As<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState>(
           v2,
           &v13);
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
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v13);
      return v3;
    }
    v4 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v13 + 48LL))(v13, &v11);
    v3 = v4;
    if ( v4 < 0 )
    {
      v5 = 283LL;
      goto LABEL_7;
    }
    v12 = 0LL;
    v6 = *(__int64 (__fastcall **)(FrameWrapper *, __int64 *))(*(_QWORD *)this + 32LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
    v7 = v6(this, &v12);
    v3 = v7;
    if ( v7 >= 0 )
    {
      v7 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v12 + 48LL))(v12, v11);
      v3 = v7;
      if ( v7 >= 0 )
      {
        *((_DWORD *)this + 12) |= 1u;
        FrameWrapper::ReconcileFramedView((FrameWrapper *)((char *)this - 32));
        v7 = (*(__int64 (__fastcall **)(FrameWrapper *))(*(_QWORD *)this + 96LL))(this);
        v3 = v7;
        if ( v7 >= 0 )
        {
          v3 = 0;
          goto LABEL_16;
        }
        v8 = 292LL;
      }
      else
      {
        v8 = 286LL;
      }
    }
    else
    {
      v8 = 285LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"pcshell\\twinui\\appmanager\\lib\\framefactory.cpp",
      (const char *)(unsigned int)v7);
LABEL_16:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
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
