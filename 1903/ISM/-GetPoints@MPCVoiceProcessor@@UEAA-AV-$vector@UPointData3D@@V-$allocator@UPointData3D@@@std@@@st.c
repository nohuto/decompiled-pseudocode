/*
 * XREFs of ?GetPoints@MPCVoiceProcessor@@UEAA?AV?$vector@UPointData3D@@V?$allocator@UPointData3D@@@std@@@std@@PEAUMPCHolographicInputContext@@@Z @ 0x180036910
 * Callers:
 *     <none>
 * Callees:
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x180021840 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x18002C580 (__security_check_cookie.c)
 *     memcpy_0 @ 0x180037D6F (memcpy_0.c)
 *     ??$emplace_back@AEBUPointData3D@@@?$vector@UPointData3D@@V?$allocator@UPointData3D@@@std@@@std@@QEAAAEAUPointData3D@@AEBU2@@Z @ 0x180080378 (--$emplace_back@AEBUPointData3D@@@-$vector@UPointData3D@@V-$allocator@UPointData3D@@@std@@@std@@.c)
 *     ?transform@Numerics@Foundation@Windows@@YA?AUfloat3@123@AEBU4123@AEBUfloat4x4@123@@Z @ 0x180084CA4 (-transform@Numerics@Foundation@Windows@@YA-AUfloat3@123@AEBU4123@AEBUfloat4x4@123@@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall MPCVoiceProcessor::GetPoints(__int64 a1, _QWORD *a2)
{
  struct MPCHolographicInputManager *Instance; // rax
  struct MPCHolographicInputManager *v5; // rax
  __int64 v7; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v8; // [rsp+38h] [rbp-D0h]
  __int64 v9; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v10; // [rsp+48h] [rbp-C0h]
  __int64 v11; // [rsp+50h] [rbp-B8h]
  _QWORD *v12; // [rsp+58h] [rbp-B0h]
  _OWORD v13[4]; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v14; // [rsp+A8h] [rbp-60h] BYREF
  int v15; // [rsp+B0h] [rbp-58h]
  int v16; // [rsp+B4h] [rbp-54h]
  int v17; // [rsp+B8h] [rbp-50h]
  int v18; // [rsp+BCh] [rbp-4Ch]
  __int64 v19; // [rsp+C0h] [rbp-48h]
  int v20; // [rsp+C8h] [rbp-40h]
  __int64 v21; // [rsp+CCh] [rbp-3Ch]
  __int64 v22; // [rsp+D4h] [rbp-34h]
  __int64 v23; // [rsp+DCh] [rbp-2Ch]
  __int16 v24; // [rsp+F4h] [rbp-14h]
  __int128 v25; // [rsp+F8h] [rbp-10h]
  __int128 v26; // [rsp+108h] [rbp+0h]
  __int128 v27; // [rsp+118h] [rbp+10h]
  __int128 v28; // [rsp+128h] [rbp+20h]
  __int128 v29; // [rsp+138h] [rbp+30h]
  __int128 v30; // [rsp+148h] [rbp+40h]
  __int128 v31; // [rsp+460h] [rbp+358h]
  __int128 v32; // [rsp+470h] [rbp+368h]
  __int128 v33; // [rsp+480h] [rbp+378h]
  __int128 v34; // [rsp+490h] [rbp+388h]

  v11 = -2LL;
  v12 = a2;
  *a2 = 0LL;
  a2[1] = 0LL;
  a2[2] = 0LL;
  if ( *(_BYTE *)(a1 + 4608) )
  {
    Instance = MPCHolographicInputManager::GetInstance();
    memcpy_0(&v14, Instance, 0x8F0uLL);
    v13[0] = v31;
    v13[1] = v32;
    v13[2] = v33;
    v13[3] = v34;
    v5 = MPCHolographicInputManager::GetInstance();
    v7 = *((_QWORD *)v5 + 28);
    LODWORD(v8) = *((_DWORD *)v5 + 58);
    Windows::Foundation::Numerics::transform(&v9, &v7, v13);
    v16 = 3;
    v17 = 7;
    v14 = v9;
    v15 = v10;
    v18 = 1;
    v19 = 0LL;
    v20 = 0;
    v24 = 0;
    v21 = 0LL;
    v22 = 0LL;
    v23 = 0LL;
    v25 = *(_OWORD *)(a1 + 104);
    v26 = *(_OWORD *)(a1 + 120);
    v27 = *(_OWORD *)(a1 + 136);
    v28 = *(_OWORD *)(a1 + 152);
    v29 = *(_OWORD *)(a1 + 168);
    v30 = *(_OWORD *)(a1 + 184);
    std::vector<PointData3D>::emplace_back<PointData3D const &>(a2, &v14);
    v18 = 0;
    std::vector<PointData3D>::emplace_back<PointData3D const &>(a2, &v14);
    *(_BYTE *)(a1 + 4608) = 0;
  }
  return a2;
}
