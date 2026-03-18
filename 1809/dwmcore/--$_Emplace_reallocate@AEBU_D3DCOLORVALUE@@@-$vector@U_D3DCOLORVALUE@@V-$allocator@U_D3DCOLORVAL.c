/*
 * XREFs of ??$_Emplace_reallocate@AEBU_D3DCOLORVALUE@@@?$vector@U_D3DCOLORVALUE@@V?$allocator@U_D3DCOLORVALUE@@@std@@@std@@QEAAPEAU_D3DCOLORVALUE@@QEAU2@AEBU2@@Z @ 0x18022255C
 * Callers:
 *     ??$GetGradientColorData@VCLinearGradientLegacyMilBrush@@@CGradientLegacyMilBrush@@KAJPEAVCLinearGradientLegacyMilBrush@@PEAVCGradientColorData@@@Z @ 0x1801C2A50 (--$GetGradientColorData@VCLinearGradientLegacyMilBrush@@@CGradientLegacyMilBrush@@KAJPEAVCLinear.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800C766C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     memmove_0 @ 0x1800F0087 (memmove_0.c)
 *     ?_Change_array@?$vector@U?$ParticleKeyframe@Ufloat3@Numerics@Foundation@Windows@@@Particles@@V?$allocator@U?$ParticleKeyframe@Ufloat3@Numerics@Foundation@Windows@@@Particles@@@std@@@std@@AEAAXQEAU?$ParticleKeyframe@Ufloat3@Numerics@Foundation@Windows@@@Particles@@_K1@Z @ 0x1801B2218 (-_Change_array@-$vector@U-$ParticleKeyframe@Ufloat3@Numerics@Foundation@Windows@@@Particles@@V-$.c)
 *     ModuleFailFastForHRESULT @ 0x1801E0F18 (ModuleFailFastForHRESULT.c)
 */

unsigned __int64 __fastcall std::vector<_D3DCOLORVALUE>::_Emplace_reallocate<_D3DCOLORVALUE const &>(
        const void **a1,
        _BYTE *a2,
        _OWORD *a3)
{
  signed __int64 v4; // rsi
  __int64 v5; // rax
  unsigned __int64 v8; // rbp
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rbx
  SIZE_T v12; // rcx
  char *v13; // rax
  unsigned __int64 v14; // rsi
  __int64 v15; // r14
  void *v16; // rcx
  _BYTE *v17; // r8
  _BYTE *v18; // rdx
  size_t v19; // r8
  const void *retaddr; // [rsp+38h] [rbp+0h]

  v4 = a2 - (_BYTE *)*a1;
  v5 = ((_BYTE *)a1[1] - (_BYTE *)*a1) >> 4;
  if ( v5 == 0xFFFFFFFFFFFFFFFLL )
    ModuleFailFastForHRESULT(-2147483637, retaddr);
  v8 = v5 + 1;
  v9 = ((_BYTE *)a1[2] - (_BYTE *)*a1) >> 4;
  v10 = v9 >> 1;
  if ( v9 <= 0xFFFFFFFFFFFFFFFLL - (v9 >> 1) )
  {
    v11 = v10 + v9;
    if ( v10 + v9 < v8 )
      v11 = v5 + 1;
  }
  else
  {
    v11 = v5 + 1;
  }
  v12 = 16 * v11;
  if ( v11 > 0xFFFFFFFFFFFFFFFLL )
    v12 = -1LL;
  v13 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(v12);
  v14 = v4 & 0xFFFFFFFFFFFFFFF0uLL;
  v15 = (__int64)v13;
  v16 = v13;
  *(_OWORD *)&v13[v14] = *a3;
  v17 = a1[1];
  v18 = *a1;
  if ( a2 == v17 )
  {
    v19 = v17 - v18;
  }
  else
  {
    memmove_0(v13, v18, a2 - (_BYTE *)*a1);
    v19 = (_BYTE *)a1[1] - a2;
    v18 = a2;
    v16 = (void *)(v15 + v14 + 16);
  }
  memmove_0(v16, v18, v19);
  std::vector<Particles::ParticleKeyframe<Windows::Foundation::Numerics::float3>>::_Change_array(
    (__int64)a1,
    v15,
    v8,
    v11);
  return (unsigned __int64)*a1 + v14;
}
