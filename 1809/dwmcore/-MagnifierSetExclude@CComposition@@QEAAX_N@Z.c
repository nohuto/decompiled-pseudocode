/*
 * XREFs of ?MagnifierSetExclude@CComposition@@QEAAX_N@Z @ 0x18014B614
 * Callers:
 *     ?Render@COffScreenRenderTarget@@UEAAJPEA_N@Z @ 0x18001C3C0 (-Render@COffScreenRenderTarget@@UEAAJPEA_N@Z.c)
 * Callees:
 *     ?RemoveAtOrderNotPreserved@?$DynArray@PEAV?$CWeakReference@VCVisual@@@@$0A@@@QEAAJI@Z @ 0x18014BE44 (-RemoveAtOrderNotPreserved@-$DynArray@PEAV-$CWeakReference@VCVisual@@@@$0A@@@QEAAJI@Z.c)
 */

void __fastcall CComposition::MagnifierSetExclude(CComposition *this, char a2)
{
  __int64 v2; // rbx
  _QWORD *v5; // rsi
  __int64 v6; // rcx

  v2 = 0LL;
  if ( *((_DWORD *)this + 238) )
  {
    v5 = (_QWORD *)((char *)this + 928);
    do
    {
      v6 = *(_QWORD *)(*(_QWORD *)(*v5 + 8 * v2) + 16LL);
      if ( v6 )
      {
        *(_BYTE *)(v6 + 94) &= ~0x10u;
        *(_BYTE *)(v6 + 94) |= 16 * a2;
        v2 = (unsigned int)(v2 + 1);
      }
      else
      {
        DynArray<CWeakReference<CVisual> *,0>::RemoveAtOrderNotPreserved(v5, (unsigned int)v2);
      }
    }
    while ( (unsigned int)v2 < *((_DWORD *)this + 238) );
  }
}
