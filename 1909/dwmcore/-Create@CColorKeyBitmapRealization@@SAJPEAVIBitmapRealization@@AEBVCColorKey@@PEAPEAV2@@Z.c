/*
 * XREFs of ?Create@CColorKeyBitmapRealization@@SAJPEAVIBitmapRealization@@AEBVCColorKey@@PEAPEAV2@@Z @ 0x180255174
 * Callers:
 *     ?CreateSectionBitmap@CGdiSpriteBitmap@@AEAAJPEAXII@Z @ 0x1800CD764 (-CreateSectionBitmap@CGdiSpriteBitmap@@AEAAJPEAXII@Z.c)
 *     ?CreateSectionBitmapSubRects@CGdiSpriteBitmap@@AEAAJII@Z @ 0x180212DD8 (-CreateSectionBitmapSubRects@CGdiSpriteBitmap@@AEAAJII@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002DE70 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18007AC58 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CColorKeyBitmapRealization::Create(
        struct IBitmapRealization *a1,
        const struct CColorKey *a2,
        struct IBitmapRealization **a3)
{
  _DWORD *v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rbx
  char *v9; // rax
  signed int v10; // eax
  __int64 v11; // rcx
  unsigned int v12; // edi
  __int64 v14; // [rsp+60h] [rbp+18h] BYREF
  __int64 v15; // [rsp+68h] [rbp+20h] BYREF

  v15 = 0LL;
  *a3 = 0LL;
  v6 = operator new(0xA0uLL);
  v8 = (__int64)v6;
  if ( v6 )
  {
    v6[2] = 0;
    *((_QWORD *)v6 + 4) = 0LL;
    *((_QWORD *)v6 + 5) = 0LL;
    *((_QWORD *)v6 + 6) = 0LL;
    *((_QWORD *)v6 + 7) = 0LL;
    *((_QWORD *)v6 + 8) = 0LL;
    *((_QWORD *)v6 + 9) = 0LL;
    v6[20] = 0;
    v9 = (char *)(v6 + 32);
    *(_QWORD *)(v8 + 96) = v9;
    *(_QWORD *)(v8 + 104) = v9;
    *(_DWORD *)(v8 + 112) = 2;
    *(_QWORD *)(v8 + 116) = 2LL;
    *(_QWORD *)v8 = &CColorKeyBitmapRealization::`vftable'{for `CMILCOMBase'};
    *(_QWORD *)(v8 + 16) = &CSectionBitmapSubRectRealization::`vftable'{for `ID2DBitmapCache'};
    *(_QWORD *)(v8 + 24) = &CColorKeyBitmapRealization::`vftable'{for `IDeviceResourceNotify'};
    *(_QWORD *)(v8 + 88) = &CColorKeyBitmapRealization::`vftable'{for `CDeviceResource'};
    *(_QWORD *)(v8 + 144) = &CColorKeyBitmapRealization::`vftable'{for `IBitmapRealization'};
    *(_QWORD *)(v8 + 152) = 0LL;
  }
  else
  {
    v8 = 0LL;
  }
  v14 = v8;
  if ( v8 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
    v10 = (*(__int64 (__fastcall **)(__int64, struct IBitmapRealization *, const struct CColorKey *))(*(_QWORD *)v8 + 40LL))(
            v8,
            a1,
            a2);
    v12 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x1Eu, 0LL);
    }
    else
    {
      v14 = 0LL;
      *a3 = (struct IBitmapRealization *)(v8 + 144);
    }
  }
  else
  {
    v12 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, 0x8007000E, 0x1Cu, 0LL);
  }
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(&v14);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(&v15);
  return v12;
}
