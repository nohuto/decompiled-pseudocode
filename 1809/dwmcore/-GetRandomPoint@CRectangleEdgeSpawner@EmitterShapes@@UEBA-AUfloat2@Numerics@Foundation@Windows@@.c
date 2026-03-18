/*
 * XREFs of ?GetRandomPoint@CRectangleEdgeSpawner@EmitterShapes@@UEBA?AUfloat2@Numerics@Foundation@Windows@@AEAV?$mersenne_twister_engine@I$0CA@$0CHA@$0BIN@$0BP@$0JJAILANP@$0L@$0PPPPPPPP@$06$0JNCMFGIA@$0P@$0OPMGAAAA@$0BC@$0GMAHIJGF@@std@@M@Z @ 0x1801DCAD0
 * Callers:
 *     <none>
 * Callees:
 *     ??$generate_canonical@M$0?0V?$mersenne_twister_engine@I$0CA@$0CHA@$0BIN@$0BP@$0JJAILANP@$0L@$0PPPPPPPP@$06$0JNCMFGIA@$0P@$0OPMGAAAA@$0BC@$0GMAHIJGF@@std@@@std@@YAMAEAV?$mersenne_twister_engine@I$0CA@$0CHA@$0BIN@$0BP@$0JJAILANP@$0L@$0PPPPPPPP@$06$0JNCMFGIA@$0P@$0OPMGAAAA@$0BC@$0GMAHIJGF@@0@@Z @ 0x1801C4580 (--$generate_canonical@M$0-0V-$mersenne_twister_engine@I$0CA@$0CHA@$0BIN@$0BP@$0JJAILANP@$0L@$0PP.c)
 *     ?GetPoint@CLineSpawner@EmitterShapes@@QEBA?AUfloat2@Numerics@Foundation@Windows@@AEAV?$mersenne_twister_engine@I$0CA@$0CHA@$0BIN@$0BP@$0JJAILANP@$0L@$0PPPPPPPP@$06$0JNCMFGIA@$0P@$0OPMGAAAA@$0BC@$0GMAHIJGF@@std@@MM@Z @ 0x1801C6058 (-GetPoint@CLineSpawner@EmitterShapes@@QEBA-AUfloat2@Numerics@Foundation@Windows@@AEAV-$mersenne_.c)
 */

float *__fastcall EmitterShapes::CRectangleEdgeSpawner::GetRandomPoint(__int64 a1, float *a2, __int64 a3, float a4)
{
  float v5; // xmm6_4
  float v8; // xmm7_4
  float v10; // xmm0_4
  float v11; // xmm4_4
  float v12; // xmm3_4
  float v13; // xmm3_4
  __int64 v14; // rax
  float v15; // xmm0_4
  float v16; // xmm3_4
  float v17; // xmm1_4

  v5 = *(float *)(a1 + 140);
  v8 = *(float *)(a1 + 136);
  v10 = std::generate_canonical<float,-1,std::mersenne_twister_engine<unsigned int,32,624,397,31,2567483615,11,4294967295,7,2636928640,15,4022730752,18,1812433253>>(a3);
  v11 = *(float *)(a1 + 140);
  v12 = (float)(v10 * (float)((float)((float)(v8 + v8) + (float)(v5 + v5)) - 0.0)) + 0.0;
  if ( v11 <= v12 )
  {
    v15 = *(float *)(a1 + 136);
    if ( (float)(v15 + v11) <= v12 )
    {
      v17 = (float)(v15 + v15) + v11;
      if ( v17 > v12 )
      {
        v14 = 72LL;
        v13 = (float)(v12 - (float)(v15 + v11)) / v11;
        goto LABEL_9;
      }
      v16 = v12 - v17;
      v14 = 104LL;
    }
    else
    {
      v16 = v12 - v15;
      v14 = 40LL;
    }
    v13 = v16 / v15;
    goto LABEL_9;
  }
  v13 = v12 / v11;
  v14 = 8LL;
LABEL_9:
  EmitterShapes::CLineSpawner::GetPoint((float *)(v14 + a1), a2, a3, v13, a4);
  return a2;
}
