/*
 * XREFs of ?Create@CDxHandleStereoBitmapRealization@@SAHAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAPEAVCBitmapRealization@@@Z @ 0x180263298
 * Callers:
 *     ?CreateNewRealization@CBindInfo@CGlobalCompositionSurfaceInfo@@AEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAPEAVCBitmapRealization@@@Z @ 0x18003D8C4 (-CreateNewRealization@CBindInfo@CGlobalCompositionSurfaceInfo@@AEAAJAEBUCSM_BUFFER_ATTRIBUTES@@A.c)
 * Callees:
 *     ?Initialize@CDxHandleBitmapRealization@@IEAAJXZ @ 0x18003DAC4 (-Initialize@CDxHandleBitmapRealization@@IEAAJXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1800881C4 (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x1800BD110 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 *     ?Release@CGdiSpriteBitmap@@UEAAKXZ @ 0x1800BD580 (-Release@CGdiSpriteBitmap@@UEAAKXZ.c)
 *     ??0CDxHandleStereoBitmapRealization@@IEAA@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@@Z @ 0x18026308C (--0CDxHandleStereoBitmapRealization@@IEAA@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@@.c)
 */

__int64 __fastcall CDxHandleStereoBitmapRealization::Create(
        const struct CSM_BUFFER_ATTRIBUTES *a1,
        const struct CSM_REALIZATION_INFO *a2,
        struct CBitmapRealization **a3)
{
  CDxHandleStereoBitmapRealization *v6; // rax
  __int64 v7; // rcx
  CDxHandleStereoBitmapRealization *v8; // rbx
  int v9; // edi
  signed int v10; // eax
  __int64 v11; // rcx

  *a3 = 0LL;
  v6 = (CDxHandleStereoBitmapRealization *)operator new(0x210uLL);
  if ( v6 )
    v8 = CDxHandleStereoBitmapRealization::CDxHandleStereoBitmapRealization(v6, a1, a2);
  else
    v8 = 0LL;
  if ( v8 )
  {
    CMILCOMBase::InternalAddRef(v8);
    v10 = CDxHandleBitmapRealization::Initialize(v8);
    v9 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x1Au, 0LL);
    }
    else
    {
      *a3 = v8;
      v8 = 0LL;
    }
    if ( v9 < 0 )
    {
      if ( !v8 )
        return (unsigned int)v9;
      *((_QWORD *)v8 + 35) = 0LL;
    }
    if ( v8 )
      CGdiSpriteBitmap::Release(v8);
  }
  else
  {
    v9 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, 0x8007000E, 0x17u, 0LL);
  }
  return (unsigned int)v9;
}
