/*
 * XREFs of ?GetPoints@MPCClickerProcessor@@UEAA?AV?$vector@UPointData3D@@V?$allocator@UPointData3D@@@std@@@std@@PEAUMPCHolographicInputContext@@@Z @ 0x18013FA30
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x18002C06E (memset_0.c)
 *     __security_check_cookie @ 0x18002C200 (__security_check_cookie.c)
 *     ??$emplace_back@AEBUPointData3D@@@?$vector@UPointData3D@@V?$allocator@UPointData3D@@@std@@@std@@QEAAAEAUPointData3D@@AEBU2@@Z @ 0x180080138 (--$emplace_back@AEBUPointData3D@@@-$vector@UPointData3D@@V-$allocator@UPointData3D@@@std@@@std@@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall MPCClickerProcessor::GetPoints(__int64 a1, __int64 *a2)
{
  __int128 v5; // [rsp+48h] [rbp-C0h] BYREF
  int v6; // [rsp+58h] [rbp-B0h]
  int v7; // [rsp+5Ch] [rbp-ACh]
  __int64 v8; // [rsp+60h] [rbp-A8h]
  int v9; // [rsp+68h] [rbp-A0h]
  __int64 v10; // [rsp+6Ch] [rbp-9Ch]
  int v11; // [rsp+74h] [rbp-94h]
  __int64 v12; // [rsp+78h] [rbp-90h]
  int v13; // [rsp+80h] [rbp-88h]
  __int16 v14; // [rsp+94h] [rbp-74h]
  __int128 v15; // [rsp+98h] [rbp-70h]
  __int128 v16; // [rsp+A8h] [rbp-60h]
  __int128 v17; // [rsp+B8h] [rbp-50h]
  __int128 v18; // [rsp+C8h] [rbp-40h]
  __int128 v19; // [rsp+D8h] [rbp-30h]
  __int128 v20; // [rsp+E8h] [rbp-20h]

  *a2 = 0LL;
  a2[1] = 0LL;
  a2[2] = 0LL;
  memset_0(&v5, 0, 0xB8uLL);
  HIDWORD(v5) = *(_DWORD *)(a1 + 4612);
  v6 = 2;
  *(_QWORD *)&v5 = *(_QWORD *)(a1 + 4648);
  DWORD2(v5) = *(_DWORD *)(a1 + 4656);
  v7 = *(_DWORD *)(a1 + 4616);
  v8 = 0LL;
  v9 = 0;
  v14 = 256;
  v10 = *(_QWORD *)(a1 + 4672);
  v11 = *(_DWORD *)(a1 + 4680);
  v12 = 0LL;
  v13 = 0;
  v15 = *(_OWORD *)(a1 + 104);
  v16 = *(_OWORD *)(a1 + 120);
  v17 = *(_OWORD *)(a1 + 136);
  v18 = *(_OWORD *)(a1 + 152);
  v19 = *(_OWORD *)(a1 + 168);
  v20 = *(_OWORD *)(a1 + 184);
  std::vector<PointData3D>::emplace_back<PointData3D const &>(a2, &v5);
  return a2;
}
