/*
 * XREFs of ?EnsureNoInvalidIntermediates@CProjectedShadowCaster@@QEAAXXZ @ 0x1801F0F7C
 * Callers:
 *     ?UpdateShadowIntermediates@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z @ 0x1801F0BA8 (-UpdateShadowIntermediates@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?InvalidateMaskContent@CProjectedShadowCaster@@QEAAXXZ @ 0x180004130 (-InvalidateMaskContent@CProjectedShadowCaster@@QEAAXXZ.c)
 *     ?IsValid@CRenderTargetImageSource@@QEBA_NXZ @ 0x18000FFE0 (-IsValid@CRenderTargetImageSource@@QEBA_NXZ.c)
 */

void __fastcall CProjectedShadowCaster::EnsureNoInvalidIntermediates(CProjectedShadowCaster *this)
{
  _QWORD *j; // rbx
  CRenderTargetImageSource *v3; // rcx
  __int64 **v4; // rax
  __int64 i; // rax
  __int64 *v6; // rcx

  j = (_QWORD *)**((_QWORD **)this + 9);
  while ( j != *((_QWORD **)this + 9) )
  {
    v3 = (CRenderTargetImageSource *)j[10];
    if ( v3 && !CRenderTargetImageSource::IsValid(v3) )
    {
      CProjectedShadowCaster::InvalidateMaskContent(this);
      return;
    }
    v4 = (__int64 **)j[2];
    if ( *((_BYTE *)v4 + 25) )
    {
      for ( i = j[1]; !*(_BYTE *)(i + 25) && j == *(_QWORD **)(i + 16); i = *(_QWORD *)(i + 8) )
        j = (_QWORD *)i;
      j = (_QWORD *)i;
    }
    else
    {
      v6 = *v4;
      for ( j = (_QWORD *)j[2]; !*((_BYTE *)v6 + 25); v6 = (__int64 *)*v6 )
        j = v6;
    }
  }
}
