/*
 * XREFs of ?FindMagnifier@CComposition@@QEAAIPEAVCVisual@@@Z @ 0x180175D80
 * Callers:
 *     ?AddToMagnifierList@CComposition@@QEAAJPEAVCVisual@@@Z @ 0x180175958 (-AddToMagnifierList@CComposition@@QEAAJPEAVCVisual@@@Z.c)
 *     ?RemoveFromMagnifierList@CComposition@@QEAAXPEAVCVisual@@@Z @ 0x1801765BC (-RemoveFromMagnifierList@CComposition@@QEAAXPEAVCVisual@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CComposition::FindMagnifier(CComposition *this, struct CVisual *a2)
{
  unsigned int v2; // r9d
  __int64 result; // rax

  v2 = *((_DWORD *)this + 242);
  for ( result = 0LL; (unsigned int)result < v2; result = (unsigned int)(result + 1) )
  {
    if ( *(struct CVisual **)(*(_QWORD *)(*((_QWORD *)this + 118) + 8 * result) + 16LL) == a2 )
      break;
  }
  return result;
}
