/*
 * XREFs of ?DDAExcludeVisualSetExclude@CComposition@@QEAAX_N@Z @ 0x18004AFC0
 * Callers:
 *     ?CalculateOcclusion@CDesktopRenderTarget@@UEAAJ_N@Z @ 0x180048F10 (-CalculateOcclusion@CDesktopRenderTarget@@UEAAJ_N@Z.c)
 *     ?Render@CHwndRenderTargetDDA@@UEAAJPEA_N@Z @ 0x180176620 (-Render@CHwndRenderTargetDDA@@UEAAJPEA_N@Z.c)
 * Callees:
 *     ?RemoveAtOrderNotPreserved@?$DynArray@PEAV?$CWeakReference@VCVisual@@@@$0A@@@QEAAJI@Z @ 0x18014BE44 (-RemoveAtOrderNotPreserved@-$DynArray@PEAV-$CWeakReference@VCVisual@@@@$0A@@@QEAAJI@Z.c)
 */

void __fastcall CComposition::DDAExcludeVisualSetExclude(CComposition *this, char a2)
{
  __int64 v2; // rbx
  _QWORD *v5; // rsi
  __int64 v6; // rdx

  v2 = 0LL;
  if ( *(_DWORD *)(*((_QWORD *)this + 8) + 100LL) && *((_DWORD *)this + 246) )
  {
    v5 = (_QWORD *)((char *)this + 960);
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
    while ( (unsigned int)v2 < *((_DWORD *)this + 246) );
  }
}
