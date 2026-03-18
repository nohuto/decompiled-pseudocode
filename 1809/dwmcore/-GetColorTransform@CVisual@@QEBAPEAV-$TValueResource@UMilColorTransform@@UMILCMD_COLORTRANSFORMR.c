/*
 * XREFs of ?GetColorTransform@CVisual@@QEBAPEAV?$TValueResource@UMilColorTransform@@UMILCMD_COLORTRANSFORMRESOURCE@@$0BH@@@XZ @ 0x180165558
 * Callers:
 *     ?PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCFilterEffect@@11PEA_N@Z @ 0x18003B380 (-PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSiz.c)
 *     ?ProcessSetColorTransform@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_SETCOLORTRANSFORM@@@Z @ 0x1801B781C (-ProcessSetColorTransform@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_SETCOLORTRANSFORM@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CVisual::GetColorTransform(__int64 a1)
{
  _DWORD *v1; // r8
  __int64 v3; // rdx
  _BYTE *v4; // r9
  char *v5; // rcx
  unsigned int i; // eax

  v1 = *(_DWORD **)(a1 + 224);
  if ( (*v1 & 0x1000000) == 0 )
    return 0LL;
  v3 = (unsigned int)v1[1];
  v4 = v1 + 2;
  v5 = 0LL;
  for ( i = 0; i < (unsigned int)v3; ++v4 )
  {
    if ( *v4 == 8 )
      break;
    ++i;
  }
  if ( i < (unsigned int)v3 )
    v5 = (char *)v1 + v3 + 8LL * i - (((_BYTE)v3 + 15) & 7) + 15;
  return *(_QWORD *)v5;
}
