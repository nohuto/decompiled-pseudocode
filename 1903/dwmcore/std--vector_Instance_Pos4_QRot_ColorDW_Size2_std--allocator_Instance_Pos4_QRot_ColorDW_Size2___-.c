/*
 * XREFs of std::vector_Instance_Pos4_QRot_ColorDW_Size2_std::allocator_Instance_Pos4_QRot_ColorDW_Size2___::_Resize__lambda_8dfb7c59ebd300cc893a48a945ad3f00___ @ 0x18019C83C
 * Callers:
 *     ?ProcessSetMaxParticleInstances@CParticleEmitterVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PARTICLEEMITTERVISUAL_SETMAXPARTICLEINSTANCES@@@Z @ 0x1801A14D4 (-ProcessSetMaxParticleInstances@CParticleEmitterVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_P.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180078318 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     memset_0 @ 0x1800E7E5E (memset_0.c)
 *     memmove_0 @ 0x1800EC557 (memmove_0.c)
 *     ?_Xlength_error@std@@YAXPEBD@Z @ 0x18015B1EC (-_Xlength_error@std@@YAXPEBD@Z.c)
 *     ?_Change_array@?$vector@UInstance_Pos4_QRot_ColorDW_Size2@@V?$allocator@UInstance_Pos4_QRot_ColorDW_Size2@@@std@@@std@@AEAAXQEAUInstance_Pos4_QRot_ColorDW_Size2@@_K1@Z @ 0x1801A30E8 (-_Change_array@-$vector@UInstance_Pos4_QRot_ColorDW_Size2@@V-$allocator@UInstance_Pos4_QRot_Colo.c)
 */

__int64 __fastcall std::vector_Instance_Pos4_QRot_ColorDW_Size2_std::allocator_Instance_Pos4_QRot_ColorDW_Size2___::_Resize__lambda_8dfb7c59ebd300cc893a48a945ad3f00___(
        __int64 a1,
        unsigned __int64 a2)
{
  char *v2; // rdi
  __int64 v5; // rdx
  const char *v6; // rcx
  __int64 result; // rax
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdi
  SIZE_T v12; // rcx
  char *v13; // rbp
  unsigned __int64 v14; // rbx
  size_t v15; // rbx

  v2 = *(char **)(a1 + 8);
  v5 = (__int64)&v2[-*(_QWORD *)a1];
  v6 = (const char *)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1);
  result = (unsigned __int64)((unsigned __int128)((__int64)v6 * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 63;
  v8 = v5 / 48;
  v9 = (__int64)v6 / 48;
  if ( a2 <= (__int64)v6 / 48 )
  {
    if ( a2 <= v8 )
    {
      if ( a2 != v8 )
      {
        result = *(_QWORD *)a1 + 48 * a2;
        *(_QWORD *)(a1 + 8) = result;
      }
    }
    else
    {
      v14 = a2 - v8;
      if ( v14 )
      {
        v15 = 48 * v14;
        result = (__int64)memset_0(v2, 0, v15);
        v2 += v15;
      }
      *(_QWORD *)(a1 + 8) = v2;
    }
  }
  else
  {
    if ( a2 > 0x555555555555555LL )
      std::_Xlength_error(v6);
    v10 = v9 >> 1;
    if ( v9 <= 0x555555555555555LL - (v9 >> 1) )
    {
      v11 = v10 + v9;
      if ( v10 + v9 < a2 )
        v11 = a2;
    }
    else
    {
      v11 = a2;
    }
    v12 = 48 * v11;
    if ( v11 > 0x555555555555555LL )
      v12 = -1LL;
    v13 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(v12);
    if ( a2 != v8 )
      memset_0(&v13[48 * v8], 0, 48 * (a2 - v8));
    memmove_0(v13, *(const void **)a1, *(_QWORD *)(a1 + 8) - *(_QWORD *)a1);
    return std::vector<Instance_Pos4_QRot_ColorDW_Size2>::_Change_array(a1, v13, a2, v11);
  }
  return result;
}
