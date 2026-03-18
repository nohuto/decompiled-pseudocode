/*
 * XREFs of ?GetLegacyBitmapSource@CRenderTargetBitmap@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z @ 0x1801AB640
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckSingleBitmapLuidAndDisplayId@CRenderTargetBitmap@@IEBAJU_LUID@@VDisplayId@@@Z @ 0x180057324 (-CheckSingleBitmapLuidAndDisplayId@CRenderTargetBitmap@@IEBAJU_LUID@@VDisplayId@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRenderTargetBitmap::GetLegacyBitmapSource(
        CRenderTargetBitmap *this,
        struct IBitmapSource **a2,
        const struct BitmapSourceInfo *a3)
{
  unsigned int v3; // ebx
  signed int v6; // eax
  __int64 v7; // rcx

  v3 = 0;
  *a2 = 0LL;
  if ( *((_QWORD *)this + 18)
    && (!*((_BYTE *)this + 160)
     || !a3
     || (int)CRenderTargetBitmap::CheckSingleBitmapLuidAndDisplayId(
               (__int64)this - 16,
               *(_QWORD *)a3,
               *((_DWORD *)a3 + 2)) >= 0) )
  {
    v6 = (*(__int64 (__fastcall **)(_QWORD, struct IBitmapSource **))(**((_QWORD **)this + 18) + 224LL))(
           *((_QWORD *)this + 18),
           a2);
    v3 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x10Bu, 0LL);
  }
  return v3;
}
