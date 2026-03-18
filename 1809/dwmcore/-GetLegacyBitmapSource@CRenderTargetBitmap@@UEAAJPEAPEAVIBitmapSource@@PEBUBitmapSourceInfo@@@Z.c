/*
 * XREFs of ?GetLegacyBitmapSource@CRenderTargetBitmap@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z @ 0x180180D80
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckSingleBitmapLuidAndDisplayId@CRenderTargetBitmap@@IEBAJU_LUID@@VDisplayId@@@Z @ 0x180094F6C (-CheckSingleBitmapLuidAndDisplayId@CRenderTargetBitmap@@IEBAJU_LUID@@VDisplayId@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRenderTargetBitmap::GetLegacyBitmapSource(
        CRenderTargetBitmap *this,
        struct IBitmapSource **a2,
        const struct BitmapSourceInfo *a3)
{
  unsigned int v3; // ebx
  int v6; // eax
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
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x10Eu);
  }
  return v3;
}
