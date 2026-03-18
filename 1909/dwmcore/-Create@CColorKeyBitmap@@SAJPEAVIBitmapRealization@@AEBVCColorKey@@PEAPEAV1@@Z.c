/*
 * XREFs of ?Create@CColorKeyBitmap@@SAJPEAVIBitmapRealization@@AEBVCColorKey@@PEAPEAV1@@Z @ 0x180256388
 * Callers:
 *     ?Initialize@CColorKeyBitmapRealization@@MEAAJPEAVIBitmapRealization@@AEBVCColorKey@@@Z @ 0x180255490 (-Initialize@CColorKeyBitmapRealization@@MEAAJPEAVIBitmapRealization@@AEBVCColorKey@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002DE70 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18007AC58 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ??0?$com_ptr_t@UIDXGIAdapter@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIDXGIAdapter@@@Z @ 0x18015A4B4 (--0-$com_ptr_t@UIDXGIAdapter@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIDXGIAdapter@@@Z.c)
 */

__int64 __fastcall CColorKeyBitmap::Create(
        int (__fastcall ***a1)(struct IBitmapRealization *, GUID *, __int64 *),
        const struct CColorKey *a2,
        struct CColorKeyBitmap **a3)
{
  int (__fastcall **v3)(struct IBitmapRealization *, GUID *, __int64 *); // rax
  unsigned int v6; // edi
  __int64 v8; // rcx
  struct CColorKeyBitmap *v9; // rax
  __int64 v10; // rcx
  struct CColorKeyBitmap *v11; // rbx
  __int64 v13; // [rsp+50h] [rbp+8h] BYREF
  __int64 v14; // [rsp+60h] [rbp+18h] BYREF

  v3 = *a1;
  v6 = 0;
  v13 = 0LL;
  if ( (*v3)((struct IBitmapRealization *)a1, &GUID_e3dc98f9_eabc_4e58_bacc_71f136bda5d3, &v13) < 0 )
  {
    v6 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, 0x80070057, 0x1Du, 0LL);
LABEL_9:
    v11 = 0LL;
    goto LABEL_10;
  }
  v9 = (struct CColorKeyBitmap *)operator new(0x48uLL);
  v11 = v9;
  if ( v9 )
  {
    *((_DWORD *)v9 + 2) = 0;
    *(_QWORD *)v9 = &CColorKeyBitmap::`vftable'{for `CMILCOMBase'};
    *((_QWORD *)v9 + 2) = &CColorKeyBitmap::`vftable'{for `ID2DBitmapCacheSource'};
    wil::com_ptr_t<IDXGIAdapter,wil::err_returncode_policy>::com_ptr_t<IDXGIAdapter,wil::err_returncode_policy>(
      (_QWORD *)v9 + 3,
      (__int64)a1);
    *((_OWORD *)v11 + 2) = *(_OWORD *)a2;
    *((_OWORD *)v11 + 3) = *((_OWORD *)a2 + 1);
    *((_DWORD *)v11 + 16) = *((_DWORD *)a2 + 8);
  }
  else
  {
    v11 = 0LL;
  }
  if ( !v11 )
  {
    v6 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, 0x8007000E, 0x22u, 0LL);
    goto LABEL_9;
  }
  (*(void (__fastcall **)(struct CColorKeyBitmap *))(*(_QWORD *)v11 + 8LL))(v11);
LABEL_10:
  v14 = 0LL;
  *a3 = v11;
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(&v14);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(&v13);
  return v6;
}
