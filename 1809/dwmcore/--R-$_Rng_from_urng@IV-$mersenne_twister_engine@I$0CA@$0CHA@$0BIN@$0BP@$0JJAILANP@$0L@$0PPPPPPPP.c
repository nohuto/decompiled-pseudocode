/*
 * XREFs of ??R?$_Rng_from_urng@IV?$mersenne_twister_engine@I$0CA@$0CHA@$0BIN@$0BP@$0JJAILANP@$0L@$0PPPPPPPP@$06$0JNCMFGIA@$0P@$0OPMGAAAA@$0BC@$0GMAHIJGF@@std@@@std@@QEAAII@Z @ 0x1801C5184
 * Callers:
 *     ?EmitParticles@CParticleEmitter@@IEAAJM@Z @ 0x1801C57D0 (-EmitParticles@CParticleEmitter@@IEAAJM@Z.c)
 * Callees:
 *     ??R?$mersenne_twister@I$0CA@$0CHA@$0BIN@$0BP@$0JJAILANP@$0L@$06$0JNCMFGIA@$0P@$0OPMGAAAA@$0BC@@std@@QEAAIXZ @ 0x1801C5224 (--R-$mersenne_twister@I$0CA@$0CHA@$0BIN@$0BP@$0JJAILANP@$0L@$06$0JNCMFGIA@$0P@$0OPMGAAAA@$0BC@@s.c)
 */

__int64 __fastcall std::_Rng_from_urng<unsigned int,std::mersenne_twister_engine<unsigned int,32,624,397,31,2567483615,11,4294967295,7,2636928640,15,4022730752,18,1812433253>>::operator()(
        __int64 a1,
        unsigned int a2)
{
  unsigned int v3; // ebp
  unsigned int v5; // ebx
  unsigned int v6; // edi
  __int64 v7; // rdx
  int v8; // ebx
  unsigned int v9; // eax

  v3 = a2 - 1;
  do
  {
    v5 = 0;
    v6 = 0;
    if ( v3 )
    {
      v7 = *(_QWORD *)(a1 + 8);
      do
      {
        v8 = 2 * (v5 << (v7 - 1));
        do
          std::mersenne_twister<unsigned int,32,624,397,31,2567483615,11,7,2636928640,15,4022730752,18>::operator()(*(_QWORD *)a1);
        while ( v9 > *(_DWORD *)(a1 + 16) );
        v7 = *(_QWORD *)(a1 + 8);
        v5 = v9 | v8;
        v6 = *(_DWORD *)(a1 + 16) | (2 * (v6 << (v7 - 1)));
      }
      while ( v6 < v3 );
    }
  }
  while ( v5 / a2 >= v6 / a2 && v6 % a2 != v3 );
  return v5 % a2;
}
