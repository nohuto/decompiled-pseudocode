/*
 * XREFs of ?GetPoints@MPCClickerProcessor@@UEAA?AV?$vector@UPointData3D@@V?$allocator@UPointData3D@@@std@@@std@@PEAUMPCHolographicInputContext@@@Z @ 0x180100080
 * Callers:
 *     <none>
 * Callees:
 *     ?push_back@?$vector@UPointData3D@@V?$allocator@UPointData3D@@@std@@@std@@QEAAXAEBUPointData3D@@@Z @ 0x18004356C (-push_back@-$vector@UPointData3D@@V-$allocator@UPointData3D@@@std@@@std@@QEAAXAEBUPointData3D@@@.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall MPCClickerProcessor::GetPoints(__int64 a1, _QWORD *a2)
{
  __int128 v4; // [rsp+38h] [rbp-79h] BYREF
  int v5; // [rsp+48h] [rbp-69h]
  int v6; // [rsp+4Ch] [rbp-65h]
  __int64 v7; // [rsp+50h] [rbp-61h]
  int v8; // [rsp+58h] [rbp-59h]
  float v9; // [rsp+5Ch] [rbp-55h]
  __int64 v10; // [rsp+60h] [rbp-51h]
  int v11; // [rsp+68h] [rbp-49h]
  __int64 v12; // [rsp+6Ch] [rbp-45h]
  int v13; // [rsp+74h] [rbp-3Dh]
  __int64 v14; // [rsp+78h] [rbp-39h]
  int v15; // [rsp+80h] [rbp-31h]
  __int16 v16; // [rsp+84h] [rbp-2Dh]
  char v17; // [rsp+86h] [rbp-2Bh]
  __int128 v18; // [rsp+88h] [rbp-29h]
  __int128 v19; // [rsp+98h] [rbp-19h]
  __int128 v20; // [rsp+A8h] [rbp-9h]
  __int128 v21; // [rsp+B8h] [rbp+7h]
  __int128 v22; // [rsp+C8h] [rbp+17h]
  __int128 v23; // [rsp+D8h] [rbp+27h]
  __int64 v24; // [rsp+F8h] [rbp+47h]

  v24 = -2LL;
  *a2 = 0LL;
  a2[1] = 0LL;
  a2[2] = 0LL;
  HIDWORD(v4) = 1;
  v5 = 2;
  *(_QWORD *)&v4 = *(_QWORD *)(a1 + 3772);
  DWORD2(v4) = *(_DWORD *)(a1 + 3780);
  v6 = *(_DWORD *)(a1 + 3740);
  v16 = 0;
  v7 = 0LL;
  v8 = 0;
  v9 = FLOAT_1_0;
  v10 = 0LL;
  v11 = 0;
  v17 = 1;
  v12 = *(_QWORD *)(a1 + 3796);
  v13 = *(_DWORD *)(a1 + 3804);
  v14 = 0LL;
  v15 = 0;
  v18 = *(_OWORD *)(a1 + 104);
  v19 = *(_OWORD *)(a1 + 120);
  v20 = *(_OWORD *)(a1 + 136);
  v21 = *(_OWORD *)(a1 + 152);
  v22 = *(_OWORD *)(a1 + 168);
  v23 = *(_OWORD *)(a1 + 184);
  std::vector<PointData3D>::push_back((__int64)a2, &v4);
  return a2;
}
