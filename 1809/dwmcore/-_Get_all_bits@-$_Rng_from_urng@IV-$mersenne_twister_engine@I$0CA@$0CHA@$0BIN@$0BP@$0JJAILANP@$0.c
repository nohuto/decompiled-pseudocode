/*
 * XREFs of ?_Get_all_bits@?$_Rng_from_urng@IV?$mersenne_twister_engine@I$0CA@$0CHA@$0BIN@$0BP@$0JJAILANP@$0L@$0PPPPPPPP@$06$0JNCMFGIA@$0P@$0OPMGAAAA@$0BC@$0GMAHIJGF@@std@@@std@@QEAAIXZ @ 0x1801C7D20
 * Callers:
 *     ?EmitParticles@CParticleEmitter@@IEAAJM@Z @ 0x1801C57D0 (-EmitParticles@CParticleEmitter@@IEAAJM@Z.c)
 * Callees:
 *     ??R?$mersenne_twister@I$0CA@$0CHA@$0BIN@$0BP@$0JJAILANP@$0L@$06$0JNCMFGIA@$0P@$0OPMGAAAA@$0BC@@std@@QEAAIXZ @ 0x1801C5224 (--R-$mersenne_twister@I$0CA@$0CHA@$0BIN@$0BP@$0JJAILANP@$0L@$06$0JNCMFGIA@$0P@$0OPMGAAAA@$0BC@@s.c)
 */

__int64 __fastcall std::_Rng_from_urng<unsigned int,std::mersenne_twister_engine<unsigned int,32,624,397,31,2567483615,11,4294967295,7,2636928640,15,4022730752,18,1812433253>>::_Get_all_bits(
        __int64 a1)
{
  __int64 v1; // rax
  unsigned int v2; // ebx
  unsigned __int64 i; // rsi
  int v5; // ebx
  unsigned int v6; // eax

  v1 = *(_QWORD *)(a1 + 8);
  v2 = 0;
  for ( i = 0LL; i < 0x20; i += v1 )
  {
    v5 = 2 * (v2 << (v1 - 1));
    do
      v6 = std::mersenne_twister<unsigned int,32,624,397,31,2567483615,11,7,2636928640,15,4022730752,18>::operator()(*(unsigned int **)a1);
    while ( v6 > *(_DWORD *)(a1 + 16) );
    v2 = v6 | v5;
    v1 = *(_QWORD *)(a1 + 8);
  }
  return v2;
}
