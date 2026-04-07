/*
 * XREFs of ?GetThumbnailVisual@CDCompThumbnailData@@UEAAPEAVCVisual@@XZ @ 0x180006F30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct CVisual *__fastcall CDCompThumbnailData::GetThumbnailVisual(CDCompThumbnailData *this)
{
  int v1; // eax
  __int64 v2; // rdx

  v1 = *((_DWORD *)this + 30);
  v2 = 0LL;
  if ( !v1 )
    return (struct CVisual *)*((_QWORD *)this + 12);
  if ( (unsigned int)(v1 - 1) <= 1 )
    return (struct CVisual *)*((_QWORD *)this + 14);
  return (struct CVisual *)v2;
}
