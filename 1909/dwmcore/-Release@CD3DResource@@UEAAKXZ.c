/*
 * XREFs of ?Release@CD3DResource@@UEAAKXZ @ 0x1800C7F20
 * Callers:
 *     ?Release@CD3DResource@@WBI@EAAKXZ @ 0x1800F0990 (-Release@CD3DResource@@WBI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned int __fastcall CD3DResource::Release(CD3DResource *this)
{
  return CMILPoolResource::Release(this);
}
