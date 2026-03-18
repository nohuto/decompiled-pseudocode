/*
 * XREFs of ?Create@CDxHandleYUVBitmapRealization@@SAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAVCDecodeBitmap@@PEAPEAVCBitmapRealization@@@Z @ 0x180262258
 * Callers:
 *     ?CreateNewRealization@CBindInfo@CGlobalCompositionSurfaceInfo@@AEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAPEAVCBitmapRealization@@@Z @ 0x180052908 (-CreateNewRealization@CBindInfo@CGlobalCompositionSurfaceInfo@@AEAAJAEBUCSM_BUFFER_ATTRIBUTES@@A.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18007AC58 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ??0CDxHandleYUVBitmapRealization@@IEAA@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAVCDecodeBitmap@@@Z @ 0x180262064 (--0CDxHandleYUVBitmapRealization@@IEAA@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAV.c)
 *     ?Initialize@CDxHandleYUVBitmapRealization@@IEAAJPEAV1@@Z @ 0x180262C48 (-Initialize@CDxHandleYUVBitmapRealization@@IEAAJPEAV1@@Z.c)
 */

__int64 __fastcall CDxHandleYUVBitmapRealization::Create(
        const struct CSM_BUFFER_ATTRIBUTES *a1,
        const struct CSM_REALIZATION_INFO *a2,
        struct CDecodeBitmap *a3,
        struct CBitmapRealization **a4)
{
  CDxHandleYUVBitmapRealization *v8; // rax
  __int64 v9; // rcx
  CDxHandleYUVBitmapRealization *v10; // rbx
  int v11; // edi
  signed int v12; // eax
  __int64 v13; // rcx

  *a4 = 0LL;
  v8 = (CDxHandleYUVBitmapRealization *)operator new(0x1B8uLL);
  if ( v8 )
    v10 = CDxHandleYUVBitmapRealization::CDxHandleYUVBitmapRealization(v8, a1, a2, a3);
  else
    v10 = 0LL;
  if ( v10 )
  {
    (*(void (__fastcall **)(CDxHandleYUVBitmapRealization *))(*(_QWORD *)v10 + 8LL))(v10);
    v12 = CDxHandleYUVBitmapRealization::Initialize(v10, 0LL);
    v11 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x1Fu, 0LL);
    }
    else
    {
      *a4 = v10;
      v10 = 0LL;
    }
    if ( v11 < 0 )
    {
      if ( !v10 )
        return (unsigned int)v11;
      *((_QWORD *)v10 + 35) = 0LL;
    }
    if ( v10 )
      (*(void (__fastcall **)(CDxHandleYUVBitmapRealization *))(*(_QWORD *)v10 + 16LL))(v10);
  }
  else
  {
    v11 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, 0x8007000E, 0x1Cu, 0LL);
  }
  return (unsigned int)v11;
}
