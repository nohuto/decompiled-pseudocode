/*
 * XREFs of ?GetNewForegroundViewForDesktopSwitch@CVirtualDesktopForegroundPolicy@@UEAAJPEAUIVirtualDesktop@@PEAPEAUIApplicationView@@PEA_N@Z @ 0x180384750
 * Callers:
 *     ?DesktopChanged@CVirtualDesktopForegroundPolicy@@UEAAJPEAUIVirtualDesktop@@@Z @ 0x180384670 (-DesktopChanged@CVirtualDesktopForegroundPolicy@@UEAAJPEAUIVirtualDesktop@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006C60C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     _lambda_e972582bc05c59133761bdfc345eecc3_::operator() @ 0x1803843BC (_lambda_e972582bc05c59133761bdfc345eecc3_--operator().c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CVirtualDesktopForegroundPolicy::GetNewForegroundViewForDesktopSwitch(
        CVirtualDesktopForegroundPolicy *this,
        struct IVirtualDesktop *a2,
        struct IApplicationView **a3,
        bool *a4)
{
  unsigned int v7; // edi
  unsigned int v8; // ebx
  __int64 v9; // rbx
  int v10; // eax
  int v11; // ebx
  struct IApplicationView *v12; // rdx
  __int64 v14; // rbx
  int v15; // eax
  __int64 v16; // rdx
  unsigned int v17; // esi
  __int64 v18; // rbx
  int v19; // eax
  wil::details::in1diag3 *v20; // rcx
  __int64 v21; // rdx
  struct IApplicationView *v22; // rax
  __int64 v23; // [rsp+30h] [rbp-48h] BYREF
  __int64 v24[2]; // [rsp+38h] [rbp-40h] BYREF
  _QWORD v25[6]; // [rsp+48h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+30h]
  unsigned int v27; // [rsp+B0h] [rbp+38h] BYREF
  struct IVirtualDesktop *v28; // [rsp+B8h] [rbp+40h] BYREF
  struct IApplicationView *v29; // [rsp+C0h] [rbp+48h] BYREF
  struct IApplicationView *v30; // [rsp+C8h] [rbp+50h] BYREF

  v28 = a2;
  v24[1] = -2LL;
  v7 = 0;
  *a3 = 0LL;
  *a4 = 0;
  if ( !*((_QWORD *)this + 5) )
  {
    v8 = -2147417848;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x43,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopforegroundpolicy.cpp",
      (const char *)0x80010108LL);
    return v8;
  }
  if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 4) + 32LL))(*((_QWORD *)this + 4)) )
  {
    v29 = 0LL;
    v9 = *((_QWORD *)this + 5);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v29);
    v10 = (*(__int64 (__fastcall **)(__int64, struct IApplicationView **))(*(_QWORD *)v9 + 72LL))(v9, &v29);
    v11 = v10;
    if ( v10 == -2147023728 )
    {
LABEL_8:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v29);
      return v7;
    }
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x4C,
        (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopforegroundpolicy.cpp",
        (const char *)(unsigned int)v10);
      v7 = v11;
      goto LABEL_8;
    }
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v29);
    v12 = v29;
    *a3 = v29;
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD, struct IApplicationView *, struct IVirtualDesktop *))(**((_QWORD **)this + 3) + 24LL))(
           *((_QWORD *)this + 3),
           v12,
           v28) )
    {
      goto LABEL_8;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v29);
  }
  *a4 = 1;
  v23 = 0LL;
  v14 = *((_QWORD *)this + 5);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v23);
  v15 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v14 + 24LL))(v14, &v23);
  v8 = v15;
  if ( v15 < 0 )
  {
    v16 = 84LL;
LABEL_14:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v16,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopforegroundpolicy.cpp",
      (const char *)(unsigned int)v15);
    goto LABEL_26;
  }
  v15 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v23 + 24LL))(v23, &v27);
  v8 = v15;
  if ( v15 < 0 )
  {
    v16 = 87LL;
    goto LABEL_14;
  }
  v24[0] = 0LL;
  v30 = 0LL;
  v25[0] = this;
  v25[1] = &v28;
  v25[2] = v24;
  v25[3] = &v30;
  v17 = 0;
  if ( !v27 )
    goto LABEL_24;
  do
  {
    v29 = 0LL;
    v18 = v23;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v29);
    v19 = (*(__int64 (__fastcall **)(__int64, _QWORD, GUID *, struct IApplicationView **))(*(_QWORD *)v18 + 32LL))(
            v18,
            v17,
            &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513,
            &v29);
    v20 = retaddr;
    if ( v19 >= 0 )
    {
      v19 = lambda_e972582bc05c59133761bdfc345eecc3_::operator()((__int64)v25, (__int64)v29);
      v20 = retaddr;
      if ( v19 >= 0 )
        goto LABEL_21;
      v21 = 130LL;
    }
    else
    {
      v21 = 128LL;
    }
    wil::details::in1diag3::_Log_Hr(
      v20,
      v21,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopforegroundpolicy.cpp",
      (const char *)(unsigned int)v19);
LABEL_21:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v29);
    ++v17;
  }
  while ( v17 < v27 );
  if ( v30 )
  {
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v30);
    v22 = v30;
    goto LABEL_25;
  }
LABEL_24:
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v24);
  v22 = (struct IApplicationView *)v24[0];
LABEL_25:
  *a3 = v22;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v30);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v24);
  v8 = 0;
LABEL_26:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v23);
  return v8;
}
