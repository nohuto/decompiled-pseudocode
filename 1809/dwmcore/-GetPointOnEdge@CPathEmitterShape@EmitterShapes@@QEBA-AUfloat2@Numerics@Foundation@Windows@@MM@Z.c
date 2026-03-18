/*
 * XREFs of ?GetPointOnEdge@CPathEmitterShape@EmitterShapes@@QEBA?AUfloat2@Numerics@Foundation@Windows@@MM@Z @ 0x1801DC78C
 * Callers:
 *     ?GetRandomPoint@CPathSpawner@EmitterShapes@@UEBA?AUfloat2@Numerics@Foundation@Windows@@AEAV?$mersenne_twister_engine@I$0CA@$0CHA@$0BIN@$0BP@$0JJAILANP@$0L@$0PPPPPPPP@$06$0JNCMFGIA@$0P@$0OPMGAAAA@$0BC@$0GMAHIJGF@@std@@M@Z @ 0x1801C6350 (-GetRandomPoint@CPathSpawner@EmitterShapes@@UEBA-AUfloat2@Numerics@Foundation@Windows@@AEAV-$mer.c)
 * Callees:
 *     ?GetPointOnEdge@Figure@CPathEmitterShape@EmitterShapes@@QEBA?AUfloat2@Numerics@Foundation@Windows@@MM@Z @ 0x1801DC7E8 (-GetPointOnEdge@Figure@CPathEmitterShape@EmitterShapes@@QEBA-AUfloat2@Numerics@Foundation@Window.c)
 */

_DWORD *__fastcall EmitterShapes::CPathEmitterShape::GetPointOnEdge(__int64 a1, _DWORD *a2, float a3)
{
  float v3; // xmm2_4
  __int64 v5; // rax
  __int128 v6; // xmm1
  __int128 v7; // xmm0

  v3 = a3 * *(float *)(a1 + 24);
  v5 = *(_QWORD *)(a1 + 32);
  v6 = 0LL;
  while ( 1 )
  {
    if ( v5 == *(_QWORD *)(a1 + 40) )
    {
      *a2 = 0;
      a2[1] = 0;
      return a2;
    }
    v7 = v6;
    *(float *)&v7 = *(float *)&v6 + *(float *)(v5 + 48);
    if ( *(float *)&v7 >= v3 )
      break;
    v6 = v7;
    v5 += 56LL;
  }
  EmitterShapes::CPathEmitterShape::Figure::GetPointOnEdge(v5, a2);
  return a2;
}
