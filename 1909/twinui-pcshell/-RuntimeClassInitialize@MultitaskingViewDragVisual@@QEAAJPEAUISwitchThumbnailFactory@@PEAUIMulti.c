/*
 * XREFs of ?RuntimeClassInitialize@MultitaskingViewDragVisual@@QEAAJPEAUISwitchThumbnailFactory@@PEAUIMultitaskingViewElement@@1AEBUCSize@Geometry@@N@Z @ 0x1803A4648
 * Callers:
 *     ??$MakeAndInitialize@VMultitaskingViewDragVisual@@V1@AEAPEAUISwitchThumbnailFactory@@AEAPEAUIMultitaskingViewElement@@AEAPEAU3@AEBUCSize@Geometry@@AEAN@Details@WRL@Microsoft@@YAJPEAPEAVMultitaskingViewDragVisual@@AEAPEAUISwitchThumbnailFactory@@AEAPEAUIMultitaskingViewElement@@2AEBUCSize@Geometry@@AEAN@Z @ 0x1803A4218 (--$MakeAndInitialize@VMultitaskingViewDragVisual@@V1@AEAPEAUISwitchThumbnailFactory@@AEAPEAUIMul.c)
 * Callees:
 *     ??4?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180014340 (--4-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x18001A930 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180065FF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180148704 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 */

__int64 __fastcall MultitaskingViewDragVisual::RuntimeClassInitialize(
        MultitaskingViewDragVisual *this,
        struct ISwitchThumbnailFactory *a2,
        struct IMultitaskingViewElement *a3,
        struct IMultitaskingViewElement *a4,
        const struct Geometry::CSize *a5,
        double a6)
{
  __int64 v10; // rbx
  unsigned int v11; // ebx
  _QWORD *v12; // rax
  int v13; // eax
  int *v14; // rax
  int v15; // r10d
  int v16; // r11d
  int v17; // r9d
  int v18; // r8d
  int v19; // edx
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rbx
  int v23; // eax
  __int128 v25; // [rsp+30h] [rbp-50h] BYREF
  __int64 v26; // [rsp+40h] [rbp-40h] BYREF
  int v27[2]; // [rsp+48h] [rbp-38h] BYREF
  int v28[2]; // [rsp+50h] [rbp-30h] BYREF
  int v29; // [rsp+58h] [rbp-28h] BYREF
  int v30; // [rsp+5Ch] [rbp-24h]
  int v31; // [rsp+60h] [rbp-20h]
  int v32; // [rsp+64h] [rbp-1Ch]
  __int64 v33; // [rsp+68h] [rbp-18h] BYREF
  int v34; // [rsp+70h] [rbp-10h]
  int v35; // [rsp+74h] [rbp-Ch]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+38h]

  v10 = *(_QWORD *)(*(__int64 (__fastcall **)(struct IMultitaskingViewElement *, __int128 *))(*(_QWORD *)a3 + 40LL))(
                     a3,
                     &v25);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v25);
  if ( v10 )
  {
    *(_QWORD *)v27 = 0LL;
    *(_QWORD *)&v25 = 0x100000001LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v27);
    v12 = (_QWORD *)(*(__int64 (__fastcall **)(struct IMultitaskingViewElement *, __int64 *))(*(_QWORD *)a3 + 40LL))(
                      a3,
                      &v33);
    v11 = (*(__int64 (__fastcall **)(struct ISwitchThumbnailFactory *, _QWORD, _QWORD, GUID *, int *))(*(_QWORD *)a2 + 112LL))(
            a2,
            *v12,
            v25,
            &GUID_47267895_a4f8_4012_9e98_087c619e7cfc,
            v27);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v33);
    if ( (v11 & 0x80000000) != 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3A,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\dragvisual.cpp",
        (const char *)v11);
LABEL_18:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v27);
      return v11;
    }
    v26 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v26);
    v13 = (**(__int64 (__fastcall ***)(struct IMultitaskingViewElement *, GUID *, __int64 *))a4)(
            a4,
            &GUID_f8242c35_7f82_4b56_b5c8_37345206289d,
            &v26);
    v11 = v13;
    if ( v13 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3D,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\dragvisual.cpp",
        (const char *)(unsigned int)v13);
LABEL_17:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v26);
      goto LABEL_18;
    }
    v14 = (int *)(*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v26 + 32LL))(v26, &v33);
    v15 = *((_DWORD *)a5 + 1);
    v16 = v14[3];
    v17 = v14[1];
    v18 = v14[2];
    v19 = *v14;
    LODWORD(v14) = *(_DWORD *)a5;
    *((_QWORD *)&v25 + 1) = 0LL;
    v29 = -(int)v14;
    v30 = -v15;
    v31 = v18 + -(int)v14 - v19;
    LODWORD(v25) = *(_DWORD *)a5 + v31;
    v32 = v16 + -v15 - v17;
    *(_QWORD *)((char *)&v25 + 4) = (unsigned int)(v32 + v15);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v25 + 1);
    v20 = (*(__int64 (__fastcall **)(struct ISwitchThumbnailFactory *, _QWORD, _QWORD, GUID *, char *))(*(_QWORD *)a2 + 112LL))(
            a2,
            *(_QWORD *)v27,
            v25,
            &GUID_47267895_a4f8_4012_9e98_087c619e7cfc,
            (char *)&v25 + 8);
    v11 = v20;
    if ( v20 >= 0 )
    {
      v20 = (*(__int64 (__fastcall **)(_QWORD, int *, _QWORD, _QWORD))(**((_QWORD **)&v25 + 1) + 24LL))(
              *((_QWORD *)&v25 + 1),
              &v29,
              0LL,
              0LL);
      v11 = v20;
      if ( v20 >= 0 )
      {
        *(_QWORD *)v28 = 0LL;
        v22 = v26;
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)v28);
        v33 = 0LL;
        v34 = v31 - v29;
        v35 = v32 - v30;
        v23 = (*(__int64 (__fastcall **)(__int64, struct ISwitchThumbnailFactory *, _QWORD, __int64 *, int *))(*(_QWORD *)v22 + 24LL))(
                v22,
                a2,
                *((_QWORD *)&v25 + 1),
                &v33,
                v28);
        v11 = v23;
        if ( v23 >= 0 )
        {
          *((_QWORD *)this + 6) = *(_QWORD *)a5;
          Microsoft::WRL::ComPtr<IApplicationView>::operator=((__int64 *)this + 3, (__int64 *)v27);
          Microsoft::WRL::ComPtr<IApplicationView>::operator=((__int64 *)this + 4, (__int64 *)&v25 + 1);
          LODWORD(v25) = v31 - v29;
          DWORD1(v25) = v32 - v30;
          *((_QWORD *)this + 7) = v25;
          Microsoft::WRL::ComPtr<IUnknown>::operator=((__int64 *)this + 5, (__int64 *)v28);
          *((double *)this + 10) = a6;
          Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 2, (__int64)a4);
          v11 = 0;
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x49,
            (__int64)"pcshell\\twinui\\multitaskingview\\lib\\dragvisual.cpp",
            (const char *)(unsigned int)v23);
        }
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)v28);
        goto LABEL_16;
      }
      v21 = 69LL;
    }
    else
    {
      v21 = 68LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v21,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\dragvisual.cpp",
      (const char *)(unsigned int)v20);
LABEL_16:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v25 + 1);
    goto LABEL_17;
  }
  v11 = -2147019873;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x37,
    (__int64)"pcshell\\twinui\\multitaskingview\\lib\\dragvisual.cpp",
    (const char *)0x8007139FLL);
  return v11;
}
