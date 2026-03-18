/*
 * XREFs of ??$move@V?$move_iterator@PEAUTextureStageInfo@@@std@@V?$checked_array_iterator@PEAUTextureStageInfo@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUTextureStageInfo@@@stdext@@V?$move_iterator@PEAUTextureStageInfo@@@0@0V12@@Z @ 0x18005A6E8
 * Callers:
 *     ?clear_region@?$vector_facade@UTextureStageInfo@@V?$buffer_impl@UTextureStageInfo@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1800EECF4 (-clear_region@-$vector_facade@UTextureStageInfo@@V-$buffer_impl@UTextureStageInfo@@$01$00Vlibera.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::move<std::move_iterator<TextureStageInfo *>,stdext::checked_array_iterator<TextureStageInfo *>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int128 *a4)
{
  __int128 v4; // xmm2
  __int64 v5; // r9
  __int64 result; // rax

  v4 = *a4;
  v5 = *(_QWORD *)a4 + 56LL * *((_QWORD *)a4 + 2);
  while ( a2 != a3 )
  {
    *(_OWORD *)v5 = *(_OWORD *)a2;
    *(_OWORD *)(v5 + 16) = *(_OWORD *)(a2 + 16);
    *(_OWORD *)(v5 + 32) = *(_OWORD *)(a2 + 32);
    *(_QWORD *)(v5 + 48) = *(_QWORD *)(a2 + 48);
    v5 += 56LL;
    a2 += 56LL;
  }
  *(_OWORD *)a1 = v4;
  result = a1;
  *(_QWORD *)(a1 + 16) = (v5 - (__int64)v4) / 56;
  return result;
}
