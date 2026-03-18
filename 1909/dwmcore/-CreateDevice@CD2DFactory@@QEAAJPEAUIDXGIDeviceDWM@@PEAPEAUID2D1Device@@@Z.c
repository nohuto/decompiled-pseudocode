/*
 * XREFs of ?CreateDevice@CD2DFactory@@QEAAJPEAUIDXGIDeviceDWM@@PEAPEAUID2D1Device@@@Z @ 0x18002DD98
 * Callers:
 *     ?InitializeD2D@CD2DContext@@IEAAJPEAUIDXGIDeviceDWM@@@Z @ 0x18002DAD0 (-InitializeD2D@CD2DContext@@IEAAJPEAUIDXGIDeviceDWM@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002DE70 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD2DFactory::CreateDevice(
        CD2DFactory *this,
        __int64 (__fastcall ***a2)(struct IDXGIDeviceDWM *, GUID *, __int64 *),
        struct ID2D1Device **a3)
{
  __int64 (__fastcall **v3)(struct IDXGIDeviceDWM *, GUID *, __int64 *); // rax
  int v6; // eax
  unsigned int v7; // ecx
  unsigned int v8; // ebx
  __int64 v9; // rbx
  __int64 (__fastcall *v10)(__int64, __int64, __int64, __int64 *); // rdi
  int v11; // eax
  unsigned int v12; // ecx
  int v13; // eax
  unsigned int v14; // ecx
  __int64 v16; // [rsp+48h] [rbp+10h] BYREF
  __int64 v17; // [rsp+58h] [rbp+20h] BYREF

  v3 = *a2;
  v16 = 0LL;
  v17 = 0LL;
  v6 = (*v3)((struct IDXGIDeviceDWM *)a2, &GUID_54ec77fa_1377_44e6_8c32_88fd5f44c84c, &v17);
  v8 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0xFDu, 0LL);
  }
  else
  {
    v9 = *((_QWORD *)this + 4);
    v10 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64 *))(*(_QWORD *)v9 + 120LL);
    if ( v16 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
    v11 = v10(v9, 4LL, v17, &v16);
    v8 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x102u, 0LL);
    }
    else
    {
      v13 = (**(__int64 (__fastcall ***)(__int64, GUID *, struct ID2D1Device **))v16)(
              v16,
              &GUID_47dd575d_ac05_4cdd_8049_9b02cd16f44c,
              a3);
      v8 = v13;
      if ( v13 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x104u, 0LL);
    }
  }
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(&v16);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(&v17);
  return v8;
}
