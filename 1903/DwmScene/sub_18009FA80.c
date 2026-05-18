/*
 * XREFs of sub_18009FA80 @ 0x18009FA80
 * Callers:
 *     sub_1800A240C @ 0x1800A240C (sub_1800A240C.c)
 * Callees:
 *     sub_18000F3F4 @ 0x18000F3F4 (sub_18000F3F4.c)
 *     sub_1800A7654 @ 0x1800A7654 (sub_1800A7654.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18009FA80(__int64 a1, __int64 a2, __int64 *a3, _QWORD *a4)
{
  __int64 v5; // rcx
  __int128 v7; // [rsp+28h] [rbp-48h] BYREF
  __int64 v8; // [rsp+38h] [rbp-38h] BYREF
  __int64 v9; // [rsp+40h] [rbp-30h]
  _QWORD v10[5]; // [rsp+48h] [rbp-28h] BYREF

  *(_DWORD *)(a1 + 8) = 1;
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)a1 = &std::_Ref_count_obj<Spectre::Engine::ShaderFamily>::`vftable';
  v7 = 0LL;
  v5 = a4[1];
  if ( v5 )
  {
    _InterlockedAdd((volatile signed __int32 *)(v5 + 8), 1u);
    v5 = a4[1];
  }
  *(_QWORD *)&v7 = *a4;
  *((_QWORD *)&v7 + 1) = v5;
  v8 = *a3;
  v9 = a3[1];
  *a3 = 0LL;
  a3[1] = 0LL;
  v10[2] = 0LL;
  v10[3] = 0LL;
  sub_18000F3F4(v10, a2);
  sub_1800A7654(a1 + 16, v10, &v8, &v7, -2LL, v7, *((_QWORD *)&v7 + 1), v8, v9);
  return a1;
}
