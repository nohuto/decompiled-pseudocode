/*
 * XREFs of ?UpdatesReceived@CCompositionSurfaceBitmap@@UEBA_NXZ @ 0x1801925B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall CCompositionSurfaceBitmap::UpdatesReceived(CCompositionSurfaceBitmap *this)
{
  __int64 v1; // rax
  char v2; // dl

  v1 = *((_QWORD *)this + 4);
  v2 = 0;
  if ( v1 && (*(_BYTE *)(v1 + 328) || **(_DWORD **)(v1 + 336)) )
    return 1;
  return v2;
}
