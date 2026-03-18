/*
 * XREFs of ?GetMoveRects@CDwmMetaRegion@@QEAAPEAUtagRECT@@PEAI@Z @ 0x180180690
 * Callers:
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@PEBVCShape@@PEAU_MARGINS@@H_N55PEAU_D3DCOLORVALUE@@@Z @ 0x1800AF8B0 (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@.c)
 * Callees:
 *     ?HrgnToRgnData@@YAJPEAUHRGN__@@PEAPEAU_RGNDATA@@PEAI@Z @ 0x1800A5298 (-HrgnToRgnData@@YAJPEAUHRGN__@@PEAPEAU_RGNDATA@@PEAI@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

struct tagRECT *__fastcall CDwmMetaRegion::GetMoveRects(CDwmMetaRegion *this, unsigned int *a2, unsigned int *a3)
{
  char *v3; // rbx
  void **v4; // rdi
  int v7; // eax
  __int64 v8; // rcx
  _DWORD *v9; // rax
  unsigned int v10; // ecx

  v3 = 0LL;
  v4 = (void **)((char *)this + 32);
  *a2 = 0;
  if ( *((_QWORD *)this + 4) )
  {
    WPF::ProcessHeapImpl::Free(*v4);
    *v4 = 0LL;
  }
  v7 = HrgnToRgnData(*((HRGN *)this + 3), (struct _RGNDATA **)v4, a3);
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x20Bu);
  }
  else
  {
    v9 = *v4;
    if ( *v4 )
    {
      v10 = v9[2];
      if ( v10 )
      {
        v3 = (char *)(v9 + 8);
        *a2 = v10;
      }
    }
  }
  return (struct tagRECT *)v3;
}
