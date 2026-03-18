/*
 * XREFs of ?MagnifierSetExclude@CComposition@@QEAAX_N@Z @ 0x180176030
 * Callers:
 *     ?Render@COffScreenRenderTarget@@UEAAJPEA_N@Z @ 0x1801996B0 (-Render@COffScreenRenderTarget@@UEAAJPEA_N@Z.c)
 * Callees:
 *     ?RemoveAtOrderNotPreserved@?$DynArray@PEAV?$CWeakReference@VCVisual@@@@$0A@@@QEAAJI@Z @ 0x180176494 (-RemoveAtOrderNotPreserved@-$DynArray@PEAV-$CWeakReference@VCVisual@@@@$0A@@@QEAAJI@Z.c)
 */

void __fastcall CComposition::MagnifierSetExclude(CComposition *this, char a2)
{
  __int64 v2; // rbx
  _QWORD *v5; // rsi
  __int64 v6; // rcx

  v2 = 0LL;
  if ( *((_DWORD *)this + 242) )
  {
    v5 = (_QWORD *)((char *)this + 944);
    do
    {
      v6 = *(_QWORD *)(*(_QWORD *)(*v5 + 8 * v2) + 16LL);
      if ( v6 )
      {
        *(_BYTE *)(v6 + 94) &= ~8u;
        *(_BYTE *)(v6 + 94) |= 8 * a2;
        v2 = (unsigned int)(v2 + 1);
      }
      else
      {
        DynArray<CWeakReference<CVisual> *,0>::RemoveAtOrderNotPreserved(v5, (unsigned int)v2);
      }
    }
    while ( (unsigned int)v2 < *((_DWORD *)this + 242) );
  }
}
