/*
 * XREFs of ?Create@CDxHandleStereoBitmapRealization@@SAHAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAPEAVCBitmapRealization@@@Z @ 0x180228090
 * Callers:
 *     ?CreateNewRealization@CBindInfo@CCompositionSurfaceInfo@@AEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAPEAVCBitmapRealization@@@Z @ 0x180097B18 (-CreateNewRealization@CBindInfo@CCompositionSurfaceInfo@@AEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM.c)
 * Callees:
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x18005A790 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 *     ?Release@CGdiSpriteBitmap@@UEAAKXZ @ 0x18005A8F0 (-Release@CGdiSpriteBitmap@@UEAAKXZ.c)
 *     ?Initialize@CDxHandleBitmapRealization@@IEAAJXZ @ 0x18009809C (-Initialize@CDxHandleBitmapRealization@@IEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1801E0F18 (ModuleFailFastForHRESULT.c)
 *     ??0CDxHandleStereoBitmapRealization@@IEAA@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@@Z @ 0x180227E84 (--0CDxHandleStereoBitmapRealization@@IEAA@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@@.c)
 */

__int64 __fastcall CDxHandleStereoBitmapRealization::Create(
        const struct CSM_BUFFER_ATTRIBUTES *a1,
        const struct CSM_REALIZATION_INFO *a2,
        struct CBitmapRealization **a3)
{
  CDxHandleStereoBitmapRealization *v6; // rax
  CMILCOMBase *v7; // rax
  __int64 v8; // rcx
  CDxHandleBitmapRealization *v9; // rbx
  int v10; // edi
  int v11; // eax
  __int64 v12; // rcx
  const void *retaddr; // [rsp+38h] [rbp+0h]

  *a3 = 0LL;
  v6 = (CDxHandleStereoBitmapRealization *)HeapAlloc(WPF::g_processHeap, 0, 0x210uLL);
  if ( !v6 )
    ModuleFailFastForHRESULT(-2147024882, retaddr);
  v7 = CDxHandleStereoBitmapRealization::CDxHandleStereoBitmapRealization(v6, a1, a2);
  v9 = v7;
  if ( v7 )
  {
    CMILCOMBase::InternalAddRef(v7);
    v11 = CDxHandleBitmapRealization::Initialize(v9);
    v10 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x1Du);
    }
    else
    {
      *a3 = v9;
      v9 = 0LL;
    }
    if ( v10 < 0 )
    {
      if ( !v9 )
        return (unsigned int)v10;
      *((_QWORD *)v9 + 35) = 0LL;
    }
    if ( v9 )
      CGdiSpriteBitmap::Release(v9);
  }
  else
  {
    v10 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, -2147024882, 0x1Au);
  }
  return (unsigned int)v10;
}
