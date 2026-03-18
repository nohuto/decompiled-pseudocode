/*
 * XREFs of ?NotifyRenderedRect@CHwCompSwapChainTarget@@UEAAJPEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x1802400D0
 * Callers:
 *     ?NotifyRenderedRect@CHwCompSwapChainTarget@@WNA@EAAJPEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x1800ED7C0 (-NotifyRenderedRect@CHwCompSwapChainTarget@@WNA@EAAJPEBV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL.c)
 * Callees:
 *     ??0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z @ 0x18003D3C0 (--0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z.c)
 *     ?IntersectUnsafe@?$TMilRect@HUtagRECT@@U_CMilRectL_@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x1800444E8 (-IntersectUnsafe@-$TMilRect@HUtagRECT@@U_CMilRectL_@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?IsEmpty@?$TMilRect@HUtagRECT@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ @ 0x180079B34 (-IsEmpty@-$TMilRect@HUtagRECT@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x1800B74F4 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?Union@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x1800B7904 (-Union@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?Subtract@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x1800B7DAC (-Subtract@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 */

__int64 __fastcall CHwCompSwapChainTarget::NotifyRenderedRect(__int64 a1, _DWORD *a2)
{
  LONG v2; // eax
  unsigned int v3; // ebx
  signed int v5; // eax
  __int64 v6; // rcx
  signed int v7; // eax
  __int64 v8; // rcx
  signed int v9; // eax
  __int64 v10; // rcx
  struct tagRECT v12; // [rsp+30h] [rbp-19h] BYREF
  void *v13[10]; // [rsp+40h] [rbp-9h] BYREF

  v2 = *(_DWORD *)(a1 + 8);
  v3 = 0;
  v12.left = 0;
  v12.top = 0;
  v12.right = v2;
  v12.bottom = *(_DWORD *)(a1 + 12);
  if ( a2 )
    TMilRect<int,tagRECT,RectUniqueness::_CMilRectL_>::IntersectUnsafe(&v12, a2);
  if ( !TMilRect<int,tagRECT,RectUniqueness::_CMilRectL_>::IsEmpty(&v12) )
  {
    FastRegion::CRegion::CRegion((FastRegion::CRegion *)v13, &v12);
    v5 = FastRegion::CRegion::Union((void **)(a1 + 240), (const struct FastRegion::Internal::CRgnData **)v13);
    v3 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0xBCu, 0LL);
    }
    else
    {
      v7 = FastRegion::CRegion::Subtract(
             (const struct FastRegion::Internal::CRgnData **)(a1 + 312),
             (const struct FastRegion::Internal::CRgnData **)v13);
      v3 = v7;
      if ( v7 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0xC0u, 0LL);
      }
      else
      {
        v9 = FastRegion::CRegion::Subtract(
               (const struct FastRegion::Internal::CRgnData **)(a1 + 384),
               (const struct FastRegion::Internal::CRgnData **)v13);
        v3 = v9;
        if ( v9 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0xC1u, 0LL);
      }
    }
    FastRegion::CRegion::FreeMemory(v13);
  }
  return v3;
}
