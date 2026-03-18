/*
 * XREFs of ?AddProjectedShadowCasterVisual@CComposition@@QEAAXPEAVCVisual@@@Z @ 0x18014AF08
 * Callers:
 *     ?SetVisual@CProjectedShadowCaster@@QEAAXPEAVCVisual@@@Z @ 0x1801AE160 (-SetVisual@CProjectedShadowCaster@@QEAAXPEAVCVisual@@@Z.c)
 * Callees:
 *     ??$_Emplace_reallocate@PEAVCVisual@@@?$vector@PEAVCVisual@@V?$allocator@PEAVCVisual@@@std@@@std@@QEAAPEAPEAVCVisual@@QEAPEAV2@$$QEAPEAV2@@Z @ 0x18014A84C (--$_Emplace_reallocate@PEAVCVisual@@@-$vector@PEAVCVisual@@V-$allocator@PEAVCVisual@@@std@@@std@.c)
 */

void __fastcall CComposition::AddProjectedShadowCasterVisual(CComposition *this, struct CVisual *a2)
{
  struct CVisual **v2; // r8
  __int64 *v4; // rcx
  struct CVisual **i; // rax
  _BYTE *v6; // rdx
  struct CVisual *v7; // [rsp+38h] [rbp+10h] BYREF

  v7 = a2;
  v2 = (struct CVisual **)*((_QWORD *)this + 133);
  v4 = (__int64 *)((char *)this + 1056);
  for ( i = (struct CVisual **)*v4; i != v2 && *i != a2; ++i )
    ;
  if ( i == v2 )
  {
    v6 = (_BYTE *)v4[1];
    if ( (_BYTE *)v4[2] == v6 )
    {
      std::vector<CVisual *>::_Emplace_reallocate<CVisual *>(v4, v6, &v7);
    }
    else
    {
      *(_QWORD *)v6 = a2;
      v4[1] += 8LL;
    }
  }
}
