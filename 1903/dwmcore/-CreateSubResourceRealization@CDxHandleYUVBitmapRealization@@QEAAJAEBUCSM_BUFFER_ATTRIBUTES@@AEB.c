/*
 * XREFs of ?CreateSubResourceRealization@CDxHandleYUVBitmapRealization@@QEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAVCDecodeBitmap@@PEAPEAVCBitmapRealization@@@Z @ 0x180263C10
 * Callers:
 *     ?CreateNewRealization@CBindInfo@CGlobalCompositionSurfaceInfo@@AEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAPEAVCBitmapRealization@@@Z @ 0x18003D8C4 (-CreateNewRealization@CBindInfo@CGlobalCompositionSurfaceInfo@@AEAAJAEBUCSM_BUFFER_ATTRIBUTES@@A.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1800881C4 (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ??0CDxHandleYUVBitmapRealization@@IEAA@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAVCDecodeBitmap@@@Z @ 0x180263924 (--0CDxHandleYUVBitmapRealization@@IEAA@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAV.c)
 *     ?Initialize@CDxHandleYUVBitmapRealization@@IEAAJPEAV1@@Z @ 0x180264508 (-Initialize@CDxHandleYUVBitmapRealization@@IEAAJPEAV1@@Z.c)
 */

__int64 __fastcall CDxHandleYUVBitmapRealization::CreateSubResourceRealization(
        CDxHandleYUVBitmapRealization *this,
        const struct CSM_BUFFER_ATTRIBUTES *a2,
        const struct CSM_REALIZATION_INFO *a3,
        struct CDecodeBitmap *a4,
        struct CBitmapRealization **a5)
{
  CDxHandleYUVBitmapRealization *v5; // rbx
  CDxHandleYUVBitmapRealization *v10; // rax
  __int64 v11; // rcx
  unsigned int v12; // edi
  signed int v13; // eax
  __int64 v14; // rcx

  v5 = 0LL;
  *a5 = 0LL;
  if ( *((_DWORD *)this + 74) || !*((_DWORD *)a3 + 6) )
  {
    v12 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, 0x80070057, 0x14Du, 0LL);
  }
  else
  {
    v10 = (CDxHandleYUVBitmapRealization *)operator new(0x1B8uLL);
    if ( v10 )
      v5 = CDxHandleYUVBitmapRealization::CDxHandleYUVBitmapRealization(v10, a2, a3, a4);
    if ( !v5 )
    {
      v12 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, 0x8007000E, 0x13Fu, 0LL);
      return v12;
    }
    (*(void (__fastcall **)(CDxHandleYUVBitmapRealization *))(*(_QWORD *)v5 + 8LL))(v5);
    v13 = CDxHandleYUVBitmapRealization::Initialize(v5, this);
    v12 = v13;
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x146u, 0LL);
    }
    else
    {
      *a5 = v5;
      v5 = 0LL;
    }
  }
  if ( (v12 & 0x80000000) != 0 )
  {
    if ( !v5 )
      return v12;
    *((_QWORD *)v5 + 35) = 0LL;
  }
  if ( v5 )
    (*(void (__fastcall **)(CDxHandleYUVBitmapRealization *))(*(_QWORD *)v5 + 16LL))(v5);
  return v12;
}
