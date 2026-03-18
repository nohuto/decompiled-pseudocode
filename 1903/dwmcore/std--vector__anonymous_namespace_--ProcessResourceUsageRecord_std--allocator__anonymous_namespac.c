/*
 * XREFs of std::vector__anonymous_namespace_::ProcessResourceUsageRecord_std::allocator__anonymous_namespace_::ProcessResourceUsageRecord___::_Emplace_reallocate__anonymous_namespace_::ProcessResourceUsageRecord_const_&_ @ 0x1800CF9EC
 * Callers:
 *     _lambda_35c4e12550229a4699a78f989695a2d8_::operator() @ 0x1800C3CAC (_lambda_35c4e12550229a4699a78f989695a2d8_--operator().c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180078318 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     std::vector__anonymous_namespace_::ProcessResourceUsageRecord_std::allocator__anonymous_namespace_::ProcessResourceUsageRecord___::_Change_array @ 0x1800CFB74 (std--vector__anonymous_namespace_--ProcessResourceUsageRecord_std--allocator__anony_ea_1800CFB74.c)
 *     memmove_0 @ 0x1800EC557 (memmove_0.c)
 *     ?_Xlength_error@std@@YAXPEBD@Z @ 0x18015B1EC (-_Xlength_error@std@@YAXPEBD@Z.c)
 */

__int64 __fastcall std::vector__anonymous_namespace_::ProcessResourceUsageRecord_std::allocator__anonymous_namespace_::ProcessResourceUsageRecord___::_Emplace_reallocate__anonymous_namespace_::ProcessResourceUsageRecord_const___(
        const void **a1,
        _BYTE *a2,
        __int64 a3)
{
  signed __int64 v4; // r9
  signed __int64 v7; // rcx
  __int64 v8; // r14
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rbx
  SIZE_T v13; // rcx
  char *v14; // rdi
  char *v15; // rcx
  __int64 v16; // r14
  _BYTE *v17; // r8
  _BYTE *v18; // rdx
  size_t v19; // r8

  v4 = a2 - (_BYTE *)*a1;
  v7 = (_BYTE *)a1[1] - (_BYTE *)*a1;
  v8 = v4 / 104;
  if ( v7 / 104 == 0x276276276276276LL )
    std::_Xlength_error((const char *)v7);
  v9 = v7 / 104 + 1;
  v10 = ((_BYTE *)a1[2] - (_BYTE *)*a1) / 104;
  v11 = v10 >> 1;
  if ( v10 > 0x276276276276276LL - (v10 >> 1) )
  {
    v12 = v9;
  }
  else
  {
    v12 = v11 + v10;
    if ( v11 + v10 < v9 )
      v12 = v9;
  }
  v13 = 104 * v12;
  if ( v12 > 0x276276276276276LL )
    v13 = -1LL;
  v14 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(v13);
  v15 = v14;
  v16 = 104 * v8;
  *(_OWORD *)&v14[v16] = *(_OWORD *)a3;
  *(_OWORD *)&v14[v16 + 16] = *(_OWORD *)(a3 + 16);
  *(_OWORD *)&v14[v16 + 32] = *(_OWORD *)(a3 + 32);
  *(_OWORD *)&v14[v16 + 48] = *(_OWORD *)(a3 + 48);
  *(_OWORD *)&v14[v16 + 64] = *(_OWORD *)(a3 + 64);
  *(_OWORD *)&v14[v16 + 80] = *(_OWORD *)(a3 + 80);
  *(_QWORD *)&v14[v16 + 96] = *(_QWORD *)(a3 + 96);
  v17 = a1[1];
  v18 = *a1;
  if ( a2 == v17 )
  {
    v19 = v17 - v18;
  }
  else
  {
    memmove_0(v14, v18, a2 - (_BYTE *)*a1);
    v19 = (_BYTE *)a1[1] - a2;
    v18 = a2;
    v15 = &v14[v16 + 104];
  }
  memmove_0(v15, v18, v19);
  std::vector__anonymous_namespace_::ProcessResourceUsageRecord_std::allocator__anonymous_namespace_::ProcessResourceUsageRecord___::_Change_array(
    a1,
    v14,
    v9,
    v12);
  return (__int64)*a1 + v16;
}
