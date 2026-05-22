/*
 * XREFs of ?GetPoints@MPCGamepadProcessor@@UEAA?AV?$vector@UPointData3D@@V?$allocator@UPointData3D@@@std@@@std@@PEAUMPCHolographicInputContext@@@Z @ 0x1801377A0
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x18002C3EE (memset_0.c)
 *     __security_check_cookie @ 0x18002C580 (__security_check_cookie.c)
 *     ??$emplace_back@AEBUPointData3D@@@?$vector@UPointData3D@@V?$allocator@UPointData3D@@@std@@@std@@QEAAAEAUPointData3D@@AEBU2@@Z @ 0x180080378 (--$emplace_back@AEBUPointData3D@@@-$vector@UPointData3D@@V-$allocator@UPointData3D@@@std@@@std@@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall MPCGamepadProcessor::GetPoints(__int64 a1, __int64 *a2)
{
  __int128 v5; // [rsp+48h] [rbp-C0h] BYREF
  int v6; // [rsp+58h] [rbp-B0h]
  int v7; // [rsp+5Ch] [rbp-ACh]
  __int64 v8; // [rsp+60h] [rbp-A8h]
  int v9; // [rsp+68h] [rbp-A0h]
  __int128 v10; // [rsp+6Ch] [rbp-9Ch]
  __int64 v11; // [rsp+7Ch] [rbp-8Ch]
  __int16 v12; // [rsp+94h] [rbp-74h]
  __int128 v13; // [rsp+98h] [rbp-70h]
  __int128 v14; // [rsp+A8h] [rbp-60h]
  __int128 v15; // [rsp+B8h] [rbp-50h]
  __int128 v16; // [rsp+C8h] [rbp-40h]
  __int128 v17; // [rsp+D8h] [rbp-30h]
  __int128 v18; // [rsp+E8h] [rbp-20h]

  *a2 = 0LL;
  a2[1] = 0LL;
  a2[2] = 0LL;
  memset_0(&v5, 0, 0xB8uLL);
  HIDWORD(v5) = 1;
  v6 = 4;
  *(_QWORD *)&v5 = *(_QWORD *)(a1 + 7140);
  DWORD2(v5) = *(_DWORD *)(a1 + 7148);
  v7 = (16 * (*(_DWORD *)(a1 + 6656) & 1)) | (*(_DWORD *)(a1 + 6656) >> 2) & 0xF;
  v8 = 0LL;
  v9 = 0;
  v12 = 256;
  v10 = *(_OWORD *)(a1 + 7168);
  v11 = 0LL;
  v13 = *(_OWORD *)(a1 + 104);
  v14 = *(_OWORD *)(a1 + 120);
  v15 = *(_OWORD *)(a1 + 136);
  v16 = *(_OWORD *)(a1 + 152);
  v17 = *(_OWORD *)(a1 + 168);
  v18 = *(_OWORD *)(a1 + 184);
  std::vector<PointData3D>::emplace_back<PointData3D const &>(a2, &v5);
  return a2;
}
