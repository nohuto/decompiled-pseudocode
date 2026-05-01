/*
 * XREFs of ?_OnSizeConstraintsChanged@SurfaceHubPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1803395D4
 * Callers:
 *     ?OnApplicationViewChanged@SurfaceHubPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x1800731C0 (-OnApplicationViewChanged@SurfaceHubPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CH.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?ResizeView@SurfaceHubPositioner@@UEAAJPEAUIApplicationView@@UtagSIZE@@1@Z @ 0x180338D50 (-ResizeView@SurfaceHubPositioner@@UEAAJPEAUIApplicationView@@UtagSIZE@@1@Z.c)
 *     ?_IsViewManaged@SurfaceHubPositioner@@AEAAJPEAUIApplicationView@@PEA_N@Z @ 0x180339510 (-_IsViewManaged@SurfaceHubPositioner@@AEAAJPEAUIApplicationView@@PEA_N@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall SurfaceHubPositioner::_OnSizeConstraintsChanged(
        SurfaceHubPositioner *this,
        struct IApplicationView *a2)
{
  int IsViewManaged; // eax
  unsigned int v5; // ebx
  int v7; // eax
  __int64 v8; // rdx
  int v9; // eax
  __int64 v10; // rdx
  LONG v11; // edx
  LONG v12; // eax
  LONG v13; // r8d
  bool v14; // [rsp+30h] [rbp-50h] BYREF
  LONG v15; // [rsp+38h] [rbp-48h] BYREF
  LONG v16; // [rsp+3Ch] [rbp-44h]
  __int64 v17; // [rsp+40h] [rbp-40h] BYREF
  __int64 v18; // [rsp+48h] [rbp-38h] BYREF
  struct tagSIZE v19; // [rsp+50h] [rbp-30h]
  __int64 v20; // [rsp+58h] [rbp-28h]
  char v21[8]; // [rsp+60h] [rbp-20h] BYREF
  int v22; // [rsp+68h] [rbp-18h] BYREF
  int v23; // [rsp+6Ch] [rbp-14h]
  int v24; // [rsp+70h] [rbp-10h]
  int v25; // [rsp+74h] [rbp-Ch]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

  v20 = -2LL;
  IsViewManaged = SurfaceHubPositioner::_IsViewManaged(this, a2, &v14);
  v5 = IsViewManaged;
  if ( IsViewManaged >= 0 )
  {
    if ( !v14 )
      return 0LL;
    v18 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v18);
    v7 = (*(__int64 (__fastcall **)(struct IApplicationView *, __int64 *))(*(_QWORD *)a2 + 80LL))(a2, &v18);
    v5 = v7;
    if ( v7 < 0 )
    {
      v8 = 594LL;
LABEL_9:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v8,
        (__int64)"pcshell\\twinui\\shellpositioners\\lib\\surfacehubpositioner.cpp",
        (const char *)(unsigned int)v7);
LABEL_25:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v18);
      return v5;
    }
    v7 = (*(__int64 (__fastcall **)(struct IApplicationView *, __int64, LONG *, char *))(*(_QWORD *)a2 + 280LL))(
           a2,
           v18,
           &v15,
           v21);
    v5 = v7;
    if ( v7 < 0 )
    {
      v8 = 598LL;
      goto LABEL_9;
    }
    v17 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v17);
    v9 = (*(__int64 (__fastcall **)(struct IApplicationView *, GUID *, __int64 *))(*(_QWORD *)a2 + 104LL))(
           a2,
           &GUID_f9b8d4b3_64da_447c_b1ba_68861510eed6,
           &v17);
    v5 = v9;
    if ( v9 >= 0 )
    {
      v9 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v17 + 24LL))(v17, &v22);
      v5 = v9;
      if ( v9 >= 0 )
      {
        v11 = v25 - v23;
        v12 = v24 - v22;
        if ( v15 > v24 - v22 )
          v12 = v15;
        v19.cx = v12;
        v13 = v25 - v23;
        if ( v16 > v11 )
          v13 = v16;
        v19.cy = v13;
        if ( v12 == v24 - v22 && v13 == v11
          || (v9 = SurfaceHubPositioner::ResizeView((SurfaceHubPositioner *)((char *)this + 104), a2, v19, v19),
              v5 = v9,
              v9 >= 0) )
        {
          v5 = 0;
          goto LABEL_24;
        }
        v10 = 612LL;
      }
      else
      {
        v10 = 604LL;
      }
    }
    else
    {
      v10 = 601LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\surfacehubpositioner.cpp",
      (const char *)(unsigned int)v9);
LABEL_24:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v17);
    goto LABEL_25;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x24E,
    (__int64)"pcshell\\twinui\\shellpositioners\\lib\\surfacehubpositioner.cpp",
    (const char *)(unsigned int)IsViewManaged);
  return v5;
}
