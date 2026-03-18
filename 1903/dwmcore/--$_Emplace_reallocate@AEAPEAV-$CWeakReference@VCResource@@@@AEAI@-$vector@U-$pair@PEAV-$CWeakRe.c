/*
 * XREFs of ??$_Emplace_reallocate@AEAPEAV?$CWeakReference@VCResource@@@@AEAI@?$vector@U?$pair@PEAV?$CWeakReference@VCResource@@@@I@std@@V?$allocator@U?$pair@PEAV?$CWeakReference@VCResource@@@@I@std@@@2@@std@@QEAAPEAU?$pair@PEAV?$CWeakReference@VCResource@@@@I@1@QEAU21@AEAPEAV?$CWeakReference@VCResource@@@@AEAI@Z @ 0x1801E71C0
 * Callers:
 *     ?RegisterIndirectTarget@CBaseExpression@@QEAAJPEAV?$CWeakReference@VCResource@@@@I@Z @ 0x1801E7EB0 (-RegisterIndirectTarget@CBaseExpression@@QEAAJPEAV-$CWeakReference@VCResource@@@@I@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180078318 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Change_array@?$vector@U?$ParticleKeyframe@Ufloat2@Numerics@Foundation@Windows@@@Particles@@V?$allocator@U?$ParticleKeyframe@Ufloat2@Numerics@Foundation@Windows@@@Particles@@@std@@@std@@AEAAXQEAU?$ParticleKeyframe@Ufloat2@Numerics@Foundation@Windows@@@Particles@@_K1@Z @ 0x18007D530 (-_Change_array@-$vector@U-$ParticleKeyframe@Ufloat2@Numerics@Foundation@Windows@@@Particles@@V-$.c)
 *     ?_Xlength_error@std@@YAXPEBD@Z @ 0x18015B1EC (-_Xlength_error@std@@YAXPEBD@Z.c)
 */

unsigned __int64 __fastcall std::vector<std::pair<CWeakReference<CResource> *,unsigned int>>::_Emplace_reallocate<CWeakReference<CResource> * &,unsigned int &>(
        __int64 a1,
        __int128 *a2,
        _QWORD *a3,
        _DWORD *a4)
{
  unsigned __int64 v5; // rsi
  __int64 v6; // rax
  __int128 *v8; // rbx
  unsigned __int64 v10; // r14
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rbp
  SIZE_T v14; // rcx
  _OWORD *v15; // rax
  unsigned __int64 v16; // rsi
  __int64 v17; // r10
  __int128 *v18; // rdx
  __int128 *v19; // rcx
  __int128 v20; // xmm0
  _OWORD *v21; // rax
  __int128 v22; // xmm0
  __int128 v24; // xmm0

  v5 = (unsigned __int64)a2 - *(_QWORD *)a1;
  v6 = (__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 4;
  v8 = a2;
  if ( v6 == 0xFFFFFFFFFFFFFFFLL )
    std::_Xlength_error((const char *)a1);
  v10 = v6 + 1;
  v11 = (__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 4;
  v12 = v11 >> 1;
  if ( v11 <= 0xFFFFFFFFFFFFFFFLL - (v11 >> 1) )
  {
    v13 = v12 + v11;
    if ( v12 + v11 < v10 )
      v13 = v6 + 1;
  }
  else
  {
    v13 = v6 + 1;
  }
  v14 = 16 * v13;
  if ( v13 > 0xFFFFFFFFFFFFFFFLL )
    v14 = -1LL;
  v15 = (_OWORD *)std::_Allocate<16,std::_Default_allocate_traits,0>(v14);
  v16 = v5 & 0xFFFFFFFFFFFFFFF0uLL;
  v17 = (__int64)v15;
  *(_QWORD *)((char *)v15 + v16) = *a3;
  *(_DWORD *)((char *)v15 + v16 + 8) = *a4;
  v18 = *(__int128 **)(a1 + 8);
  v19 = *(__int128 **)a1;
  if ( v8 == v18 )
  {
    while ( v19 != v18 )
    {
      v24 = *v19++;
      *v15++ = v24;
    }
  }
  else
  {
    if ( v19 != v8 )
    {
      do
      {
        v20 = *v19++;
        *v15++ = v20;
      }
      while ( v19 != v8 );
      v18 = *(__int128 **)(a1 + 8);
    }
    if ( v8 != v18 )
    {
      v21 = (_OWORD *)(v17 + v16 + 16);
      do
      {
        v22 = *v8++;
        *v21++ = v22;
      }
      while ( v8 != v18 );
    }
  }
  std::vector<Particles::ParticleKeyframe<Windows::Foundation::Numerics::float2>>::_Change_array(
    (__int64 *)a1,
    v17,
    v10,
    v13);
  return v16 + *(_QWORD *)a1;
}
