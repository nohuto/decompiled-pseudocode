/*
 * XREFs of ?GetLegacyBitmapSource@CDxHandleStereoBitmapRealization@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z @ 0x1802636B0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?UseLeftBitmap@CDxHandleStereoBitmapRealization@@IEBA_NW4StereoContext@@@Z @ 0x1802638EC (-UseLeftBitmap@CDxHandleStereoBitmapRealization@@IEBA_NW4StereoContext@@@Z.c)
 */

__int64 __fastcall CDxHandleStereoBitmapRealization::GetLegacyBitmapSource(
        CDxHandleStereoBitmapRealization *this,
        struct IBitmapSource **a2,
        const struct BitmapSourceInfo *a3)
{
  char *v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // r10
  _QWORD *v7; // r11
  unsigned int v8; // ebx
  signed int v9; // eax
  __int64 v10; // rcx

  v4 = (char *)this - 16;
  if ( a3 )
    v5 = *((unsigned int *)a3 + 3);
  else
    v5 = 0LL;
  if ( (unsigned __int8)CDxHandleStereoBitmapRealization::UseLeftBitmap(v4, v5) )
  {
    *v7 = 0LL;
    return 0;
  }
  else
  {
    v9 = (*(__int64 (__fastcall **)(char *, _QWORD *, __int64))(*((_QWORD *)this + 55) + 64LL))(
           (char *)this + 440,
           v7,
           v6);
    v8 = v9;
    if ( v9 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x8Du, 0LL);
  }
  return v8;
}
