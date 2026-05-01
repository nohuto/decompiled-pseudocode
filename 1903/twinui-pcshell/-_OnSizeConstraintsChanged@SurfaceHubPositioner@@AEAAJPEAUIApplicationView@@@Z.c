/*
 * XREFs of ?_OnSizeConstraintsChanged@SurfaceHubPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x180399C88
 * Callers:
 *     ?OnApplicationViewChanged@SurfaceHubPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x180076260 (-OnApplicationViewChanged@SurfaceHubPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CH.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180063E40 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?ResizeView@SurfaceHubPositioner@@UEAAJPEAUIApplicationView@@UtagSIZE@@1@Z @ 0x1803993D0 (-ResizeView@SurfaceHubPositioner@@UEAAJPEAUIApplicationView@@UtagSIZE@@1@Z.c)
 *     ?_IsViewManaged@SurfaceHubPositioner@@AEAAJPEAUIApplicationView@@PEA_N@Z @ 0x180399BB8 (-_IsViewManaged@SurfaceHubPositioner@@AEAAJPEAUIApplicationView@@PEA_N@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall SurfaceHubPositioner::_OnSizeConstraintsChanged(
        SurfaceHubPositioner *this,
        struct IApplicationView *a2)
{
  int IsViewManaged; // eax
  unsigned int v5; // ebx
  __int64 (__fastcall *v7)(struct IApplicationView *, __int64 *); // rbx
  int v8; // eax
  __int64 v9; // rdx
  __int64 (__fastcall *v10)(struct IApplicationView *, GUID *, __int64 *); // rbx
  int v11; // eax
  __int64 v12; // rdx
  LONG v13; // edx
  LONG v14; // eax
  LONG v15; // r8d
  bool v16; // [rsp+30h] [rbp-50h] BYREF
  LONG v17; // [rsp+38h] [rbp-48h] BYREF
  LONG v18; // [rsp+3Ch] [rbp-44h]
  __int64 v19; // [rsp+40h] [rbp-40h] BYREF
  __int64 v20; // [rsp+48h] [rbp-38h] BYREF
  struct tagSIZE v21; // [rsp+50h] [rbp-30h]
  __int64 v22; // [rsp+58h] [rbp-28h]
  char v23[8]; // [rsp+60h] [rbp-20h] BYREF
  int v24; // [rsp+68h] [rbp-18h] BYREF
  int v25; // [rsp+6Ch] [rbp-14h]
  int v26; // [rsp+70h] [rbp-10h]
  int v27; // [rsp+74h] [rbp-Ch]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

  v22 = -2LL;
  IsViewManaged = SurfaceHubPositioner::_IsViewManaged(this, a2, &v16);
  v5 = IsViewManaged;
  if ( IsViewManaged >= 0 )
  {
    if ( !v16 )
      return 0LL;
    v20 = 0LL;
    v7 = *(__int64 (__fastcall **)(struct IApplicationView *, __int64 *))(*(_QWORD *)a2 + 80LL);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v20);
    v8 = v7(a2, &v20);
    v5 = v8;
    if ( v8 < 0 )
    {
      v9 = 604LL;
LABEL_9:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v9,
        (__int64)"pcshell\\twinui\\shellpositioners\\lib\\surfacehubpositioner.cpp",
        (const char *)(unsigned int)v8);
LABEL_25:
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v20);
      return v5;
    }
    v8 = (*(__int64 (__fastcall **)(struct IApplicationView *, __int64, LONG *, char *))(*(_QWORD *)a2 + 280LL))(
           a2,
           v20,
           &v17,
           v23);
    v5 = v8;
    if ( v8 < 0 )
    {
      v9 = 608LL;
      goto LABEL_9;
    }
    v19 = 0LL;
    v10 = *(__int64 (__fastcall **)(struct IApplicationView *, GUID *, __int64 *))(*(_QWORD *)a2 + 104LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19);
    v11 = v10(a2, &GUID_f9b8d4b3_64da_447c_b1ba_68861510eed6, &v19);
    v5 = v11;
    if ( v11 >= 0 )
    {
      v11 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v19 + 24LL))(v19, &v24);
      v5 = v11;
      if ( v11 >= 0 )
      {
        v13 = v27 - v25;
        v14 = v26 - v24;
        if ( v17 > v26 - v24 )
          v14 = v17;
        v21.cx = v14;
        v15 = v27 - v25;
        if ( v18 > v13 )
          v15 = v18;
        v21.cy = v15;
        if ( v14 == v26 - v24 && v15 == v13
          || (v11 = SurfaceHubPositioner::ResizeView((SurfaceHubPositioner *)((char *)this + 104), a2, v21, v21),
              v5 = v11,
              v11 >= 0) )
        {
          v5 = 0;
          goto LABEL_24;
        }
        v12 = 622LL;
      }
      else
      {
        v12 = 614LL;
      }
    }
    else
    {
      v12 = 611LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\surfacehubpositioner.cpp",
      (const char *)(unsigned int)v11);
LABEL_24:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19);
    goto LABEL_25;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x258,
    (__int64)"pcshell\\twinui\\shellpositioners\\lib\\surfacehubpositioner.cpp",
    (const char *)(unsigned int)IsViewManaged);
  return v5;
}
