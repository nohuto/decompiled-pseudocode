/*
 * XREFs of ?GetPoints@MPCSixDofProcessor@@UEAA?AV?$vector@UPointData3D@@V?$allocator@UPointData3D@@@std@@@std@@PEAUMPCHolographicInputContext@@@Z @ 0x18012FF70
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18002C200 (__security_check_cookie.c)
 *     ??$emplace_back@AEBUPointData3D@@@?$vector@UPointData3D@@V?$allocator@UPointData3D@@@std@@@std@@QEAAAEAUPointData3D@@AEBU2@@Z @ 0x180080138 (--$emplace_back@AEBUPointData3D@@@-$vector@UPointData3D@@V-$allocator@UPointData3D@@@std@@@std@@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall MPCSixDofProcessor::GetPoints(__int64 a1, __int64 *a2)
{
  unsigned int v4; // ecx
  int v5; // eax
  __int128 v7; // [rsp+48h] [rbp-C0h] BYREF
  int v8; // [rsp+58h] [rbp-B0h]
  unsigned int v9; // [rsp+5Ch] [rbp-ACh]
  __int64 v10; // [rsp+60h] [rbp-A8h]
  int v11; // [rsp+68h] [rbp-A0h]
  int v12; // [rsp+6Ch] [rbp-9Ch]
  int v13; // [rsp+70h] [rbp-98h]
  int v14; // [rsp+74h] [rbp-94h]
  int v15; // [rsp+78h] [rbp-90h]
  __int64 v16; // [rsp+7Ch] [rbp-8Ch]
  __int64 v17; // [rsp+84h] [rbp-84h]
  int v18; // [rsp+8Ch] [rbp-7Ch]
  float v19; // [rsp+90h] [rbp-78h]
  char v20; // [rsp+94h] [rbp-74h]
  __int16 v21; // [rsp+95h] [rbp-73h]
  char v22; // [rsp+97h] [rbp-71h]
  __int128 v23; // [rsp+98h] [rbp-70h]
  __int128 v24; // [rsp+A8h] [rbp-60h]
  __int128 v25; // [rsp+B8h] [rbp-50h]
  __int128 v26; // [rsp+C8h] [rbp-40h]
  __int128 v27; // [rsp+D8h] [rbp-30h]
  __int128 v28; // [rsp+E8h] [rbp-20h]
  __int64 v29; // [rsp+F8h] [rbp-10h]

  *a2 = 0LL;
  a2[1] = 0LL;
  a2[2] = 0LL;
  v10 = 0LL;
  v11 = 0;
  v22 = 0;
  v29 = 0LL;
  HIDWORD(v7) = *(_DWORD *)(a1 + 5024);
  v8 = 5;
  *(_QWORD *)&v7 = *(_QWORD *)(a1 + 5128);
  DWORD2(v7) = *(_DWORD *)(a1 + 5136);
  if ( *(_BYTE *)(a1 + 5560) )
  {
    v9 = 32 * (*(_BYTE *)(a1 + 5028) & 1);
  }
  else
  {
    v4 = *(_DWORD *)(a1 + 5028);
    v9 = v4 & 0x54 | (4 * (v4 & 2)) | (32 * (v4 & 1)) | ((v4 & 8 | (v4 >> 1) & 0x10) >> 3);
  }
  v17 = *(_QWORD *)(a1 + 5116);
  v18 = *(_DWORD *)(a1 + 5124);
  v19 = FLOAT_1_0;
  v21 = 257;
  v12 = *(_DWORD *)(a1 + 5080);
  v13 = *(_DWORD *)(a1 + 5084);
  v14 = 0;
  v15 = *(_DWORD *)(a1 + 5064);
  v16 = *(unsigned int *)(a1 + 5068);
  if ( *(_BYTE *)(a1 + 5553) )
  {
    v20 = 1;
    v10 = *(_QWORD *)(a1 + 5104);
    v5 = *(_DWORD *)(a1 + 5112);
  }
  else
  {
    v20 = 0;
    v5 = 0;
    v10 = 0LL;
  }
  v11 = v5;
  v23 = *(_OWORD *)(a1 + 104);
  v24 = *(_OWORD *)(a1 + 120);
  v25 = *(_OWORD *)(a1 + 136);
  v26 = *(_OWORD *)(a1 + 152);
  v27 = *(_OWORD *)(a1 + 168);
  v28 = *(_OWORD *)(a1 + 184);
  std::vector<PointData3D>::emplace_back<PointData3D const &>(a2, &v7);
  return a2;
}
