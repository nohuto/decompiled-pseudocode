/*
 * XREFs of sub_18011CF00 @ 0x18011CF00
 * Callers:
 *     sub_18011CC40 @ 0x18011CC40 (sub_18011CC40.c)
 * Callees:
 *     unknown_libname_113 @ 0x18000F724 (unknown_libname_113.c)
 *     sub_18011CDD8 @ 0x18011CDD8 (sub_18011CDD8.c)
 *     sub_18011D104 @ 0x18011D104 (sub_18011D104.c)
 *     sub_18011D188 @ 0x18011D188 (sub_18011D188.c)
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 *     _Mtx_lock @ 0x18012751A (_Mtx_lock.c)
 *     _Mtx_unlock @ 0x180127520 (_Mtx_unlock.c)
 *     ?_Throw_C_error@std@@YAXH@Z @ 0x180127526 (-_Throw_C_error@std@@YAXH@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_18011CF00(__int64 a1, _BYTE *a2, unsigned int a3)
{
  unsigned int v5; // ecx
  unsigned int v6; // eax
  int v7; // r8d
  struct _Mtx_internal_imp_t *v8; // rbx
  int v9; // eax
  __int64 *v10; // rax
  __int64 v11; // rcx
  int v12; // eax
  __int64 v14[2]; // [rsp+20h] [rbp-48h] BYREF
  __m128i si128; // [rsp+30h] [rbp-38h]
  __int64 v16; // [rsp+40h] [rbp-28h]
  struct _Mtx_internal_imp_t *v17; // [rsp+48h] [rbp-20h]
  __int64 v18; // [rsp+50h] [rbp-18h] BYREF

  v16 = -2LL;
  *(_QWORD *)(a1 + 16) = a2;
  *(_DWORD *)a1 = dword_18025F138;
  *(_DWORD *)(a1 + 4) = dword_18025F158;
  *(_DWORD *)(a1 + 8) = dword_18025F178;
  *(_DWORD *)(a1 + 12) = dword_18025F198;
  v5 = HIBYTE(a3) & 0xF;
  if ( !v5 )
    v5 = *(_DWORD *)a1;
  *(_DWORD *)a1 = v5;
  v6 = HIWORD(a3) & 0xF;
  if ( !v6 )
    v6 = *(_DWORD *)(a1 + 4);
  if ( v6 <= v5 )
    v5 = v6;
  *(_DWORD *)(a1 + 4) = v5;
  v7 = (a3 >> 8) & 0xF;
  if ( !v7 )
    v7 = *(_DWORD *)(a1 + 8);
  *(_DWORD *)(a1 + 8) = v7;
  *(_DWORD *)(a1 + 12) = 6;
  v8 = (struct _Mtx_internal_imp_t *)sub_18011D188();
  v17 = v8;
  v9 = Mtx_lock(v8);
  if ( v9 )
    std::_Throw_C_error(v9);
  si128 = _mm_load_si128(xmmword_180145F90);
  LOBYTE(v14[0]) = 0;
  unknown_libname_113(v14, a2);
  v10 = (__int64 *)sub_18011D104();
  sub_18011CDD8(v10, (__int64)&v18, (size_t *)v14);
  *(_QWORD *)(v18 + 64) = a1;
  if ( si128.m128i_i64[1] >= 0x10uLL )
  {
    v11 = v14[0];
    if ( (unsigned __int64)(si128.m128i_i64[1] + 1) >= 0x1000 )
    {
      v11 = *(_QWORD *)(v14[0] - 8);
      if ( (unsigned __int64)(v14[0] - v11 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v11, si128.m128i_i64[1] + 40);
        __debugbreak();
      }
    }
    j_j__o_free(v11);
  }
  v12 = Mtx_unlock(v8);
  if ( v12 )
    std::_Throw_C_error(v12);
  return a1;
}
