/*
 * XREFs of ?GetPoints@MPCSixDofProcessor@@UEAA?AV?$vector@UPointData3D@@V?$allocator@UPointData3D@@@std@@@std@@PEAUMPCHolographicInputContext@@@Z @ 0x1800F1CF0
 * Callers:
 *     <none>
 * Callees:
 *     ?push_back@?$vector@UPointData3D@@V?$allocator@UPointData3D@@@std@@@std@@QEAAXAEBUPointData3D@@@Z @ 0x18004356C (-push_back@-$vector@UPointData3D@@V-$allocator@UPointData3D@@@std@@@std@@QEAAXAEBUPointData3D@@@.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall MPCSixDofProcessor::GetPoints(__int64 a1, _QWORD *a2)
{
  unsigned int v3; // r9d
  int v4; // eax
  __int128 v6; // [rsp+38h] [rbp-79h] BYREF
  int v7; // [rsp+48h] [rbp-69h]
  unsigned int v8; // [rsp+4Ch] [rbp-65h]
  __int64 v9; // [rsp+50h] [rbp-61h]
  int v10; // [rsp+58h] [rbp-59h]
  int v11; // [rsp+5Ch] [rbp-55h]
  __int64 v12; // [rsp+60h] [rbp-51h]
  int v13; // [rsp+68h] [rbp-49h]
  int v14; // [rsp+6Ch] [rbp-45h]
  int v15; // [rsp+70h] [rbp-41h]
  int v16; // [rsp+74h] [rbp-3Dh]
  int v17; // [rsp+78h] [rbp-39h]
  int v18; // [rsp+7Ch] [rbp-35h]
  int v19; // [rsp+80h] [rbp-31h]
  char v20; // [rsp+84h] [rbp-2Dh]
  char v21; // [rsp+85h] [rbp-2Ch]
  char v22; // [rsp+86h] [rbp-2Bh]
  __int128 v23; // [rsp+88h] [rbp-29h]
  __int128 v24; // [rsp+98h] [rbp-19h]
  __int128 v25; // [rsp+A8h] [rbp-9h]
  __int128 v26; // [rsp+B8h] [rbp+7h]
  __int128 v27; // [rsp+C8h] [rbp+17h]
  __int128 v28; // [rsp+D8h] [rbp+27h]
  __int64 v29; // [rsp+F8h] [rbp+47h]

  v29 = -2LL;
  *a2 = 0LL;
  a2[1] = 0LL;
  a2[2] = 0LL;
  HIDWORD(v6) = *(_DWORD *)(a1 + 4144);
  v7 = 5;
  *(_QWORD *)&v6 = *(_QWORD *)(a1 + 4248);
  DWORD2(v6) = *(_DWORD *)(a1 + 4256);
  if ( *(_BYTE *)(a1 + 4688) )
  {
    v8 = 32 * (*(_DWORD *)(a1 + 4148) & 1);
  }
  else
  {
    v3 = *(_DWORD *)(a1 + 4148);
    v8 = v3 & 0x54 | (4 * (v3 & 2 | (8 * (v3 & 1)))) | ((v3 & 8 | (v3 >> 1) & 0x10) >> 3);
  }
  v20 = 1;
  v9 = *(_QWORD *)(a1 + 4236);
  v10 = *(_DWORD *)(a1 + 4244);
  v11 = 0;
  v22 = 1;
  v14 = *(_DWORD *)(a1 + 4200);
  v15 = *(_DWORD *)(a1 + 4204);
  v16 = 0;
  v17 = *(_DWORD *)(a1 + 4184);
  v18 = *(_DWORD *)(a1 + 4188);
  v19 = 0;
  if ( *(_BYTE *)(a1 + 4680) )
  {
    v21 = 1;
    v12 = *(_QWORD *)(a1 + 4224);
    v4 = *(_DWORD *)(a1 + 4232);
  }
  else
  {
    v21 = 0;
    v4 = 0;
    v12 = 0LL;
  }
  v13 = v4;
  v23 = *(_OWORD *)(a1 + 104);
  v24 = *(_OWORD *)(a1 + 120);
  v25 = *(_OWORD *)(a1 + 136);
  v26 = *(_OWORD *)(a1 + 152);
  v27 = *(_OWORD *)(a1 + 168);
  v28 = *(_OWORD *)(a1 + 184);
  std::vector<PointData3D>::push_back((__int64)a2, &v6);
  return a2;
}
