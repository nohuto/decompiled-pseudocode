/*
 * XREFs of ?MovePrevious@VisualCollectionIterator@@QEAA_NXZ @ 0x1800045F4
 * Callers:
 *     ?DoHitTest@UdwmBottomVisual@@UEAA_NAEBUtagPOINT@@PEAPEAVCVisual@@PEAI@Z @ 0x180004440 (-DoHitTest@UdwmBottomVisual@@UEAA_NAEBUtagPOINT@@PEAPEAVCVisual@@PEAI@Z.c)
 *     ?DoHitTest@CVisual@@UEAA_NAEBUtagPOINT@@PEAPEAV1@PEAI@Z @ 0x180004500 (-DoHitTest@CVisual@@UEAA_NAEBUtagPOINT@@PEAPEAV1@PEAI@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall VisualCollectionIterator::MovePrevious(VisualCollectionIterator *this)
{
  __int64 v1; // rax
  int v2; // edx
  char v3; // al

  if ( *((_BYTE *)this + 12) )
  {
    v3 = *((_BYTE *)this + 13);
    if ( !v3 )
      --*((_DWORD *)this + 2);
  }
  else
  {
    v1 = *(_QWORD *)this;
    *((_BYTE *)this + 12) = 1;
    v2 = *(_DWORD *)(v1 + 40);
    v3 = *((_BYTE *)this + 13);
    *((_DWORD *)this + 2) = v2 - 1;
  }
  if ( *((_DWORD *)this + 2) == -1 )
  {
    *((_BYTE *)this + 13) = 1;
    v3 = 1;
  }
  return v3 == 0;
}
