/*
 * XREFs of ?Create@CColorKeyBitmap@@SAJPEAVIBitmapRealization@@AEBVCColorKey@@PEAPEAV1@@Z @ 0x180229D68
 * Callers:
 *     ?Initialize@CColorKeyBitmapRealization@@MEAAJPEAVIBitmapRealization@@AEBVCColorKey@@@Z @ 0x180226950 (-Initialize@CColorKeyBitmapRealization@@MEAAJPEAVIBitmapRealization@@AEBVCColorKey@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000EB00 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??0?$com_ptr_t@UIDXGIAdapter@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIDXGIAdapter@@@Z @ 0x1800EF06C (--0-$com_ptr_t@UIDXGIAdapter@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIDXGIAdapter@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ModuleFailFastForHRESULT @ 0x1801E0F18 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CColorKeyBitmap::Create(
        int (__fastcall ***a1)(struct IBitmapRealization *, GUID *, __int64 *),
        const struct CColorKey *a2,
        struct CColorKeyBitmap **a3)
{
  int (__fastcall **v3)(struct IBitmapRealization *, GUID *, __int64 *); // rax
  unsigned int v6; // edi
  __int64 v8; // rcx
  struct CColorKeyBitmap *v9; // rbx
  struct CColorKeyBitmap *v10; // rax
  const void *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v13; // [rsp+50h] [rbp+8h] BYREF
  __int64 v14; // [rsp+68h] [rbp+20h] BYREF

  v3 = *a1;
  v6 = 0;
  v13 = 0LL;
  if ( (*v3)((struct IBitmapRealization *)a1, &GUID_e3dc98f9_eabc_4e58_bacc_71f136bda5d3, &v13) >= 0 )
  {
    v10 = (struct CColorKeyBitmap *)HeapAlloc(WPF::g_processHeap, 0, 0x48uLL);
    v9 = v10;
    if ( !v10 )
      ModuleFailFastForHRESULT(-2147024882, retaddr);
    *((_DWORD *)v10 + 2) = 0;
    *(_QWORD *)v10 = &CColorKeyBitmap::`vftable'{for `CMILCOMBase'};
    *((_QWORD *)v10 + 2) = &CColorKeyBitmap::`vftable'{for `ID2DBitmapCacheSource'};
    wil::com_ptr_t<IDXGIAdapter,wil::err_returncode_policy>::com_ptr_t<IDXGIAdapter,wil::err_returncode_policy>(
      (_QWORD *)v10 + 3,
      (__int64)a1);
    *((_OWORD *)v9 + 2) = *(_OWORD *)a2;
    *((_OWORD *)v9 + 3) = *((_OWORD *)a2 + 1);
    *((_DWORD *)v9 + 16) = *((_DWORD *)a2 + 8);
    (*(void (__fastcall **)(struct CColorKeyBitmap *))(*(_QWORD *)v9 + 8LL))(v9);
  }
  else
  {
    v6 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, -2147024809, 0x1Fu);
    v9 = 0LL;
  }
  v14 = 0LL;
  *a3 = v9;
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(&v14);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(&v13);
  return v6;
}
