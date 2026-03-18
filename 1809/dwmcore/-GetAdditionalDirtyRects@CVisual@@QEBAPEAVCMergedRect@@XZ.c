/*
 * XREFs of ?GetAdditionalDirtyRects@CVisual@@QEBAPEAVCMergedRect@@XZ @ 0x1800A8F38
 * Callers:
 *     ?AddAdditionalDirtyRects@CVisual@@QEAAJPEBUMilRectF@@@Z @ 0x1800A9C8C (-AddAdditionalDirtyRects@CVisual@@QEAAJPEBUMilRectF@@@Z.c)
 *     ?GetAdditionalDirtyRects@CVisual@@IEAA_NPEA_KPEAIPEAPEBUMilRectF@@@Z @ 0x1801654A0 (-GetAdditionalDirtyRects@CVisual@@IEAA_NPEA_KPEAIPEAPEBUMilRectF@@@Z.c)
 * Callees:
 *     <none>
 */

struct CMergedRect *__fastcall CVisual::GetAdditionalDirtyRects(CVisual *this)
{
  _DWORD *v1; // r8
  __int64 v2; // rdx
  _BYTE *v3; // r9
  char *v4; // rcx
  unsigned int i; // eax

  v1 = (_DWORD *)*((_QWORD *)this + 28);
  if ( (*v1 & 0x20000000) == 0 )
    return 0LL;
  v2 = (unsigned int)v1[1];
  v3 = v1 + 2;
  v4 = 0LL;
  for ( i = 0; i < (unsigned int)v2; ++v3 )
  {
    if ( *v3 == 3 )
      break;
    ++i;
  }
  if ( i < (unsigned int)v2 )
    v4 = (char *)v1 + v2 + 8LL * i - (((_BYTE)v2 + 15) & 7) + 15;
  return *(struct CMergedRect **)v4;
}
