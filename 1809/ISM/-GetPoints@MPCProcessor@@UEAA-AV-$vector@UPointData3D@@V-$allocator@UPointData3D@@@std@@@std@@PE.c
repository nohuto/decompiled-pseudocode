/*
 * XREFs of ?GetPoints@MPCProcessor@@UEAA?AV?$vector@UPointData3D@@V?$allocator@UPointData3D@@@std@@@std@@PEAUMPCHolographicInputContext@@@Z @ 0x1800F6660
 * Callers:
 *     <none>
 * Callees:
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x18003FCE0 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ?push_back@?$vector@UPointData3D@@V?$allocator@UPointData3D@@@std@@@std@@QEAAXAEBUPointData3D@@@Z @ 0x18004356C (-push_back@-$vector@UPointData3D@@V-$allocator@UPointData3D@@@std@@@std@@QEAAXAEBUPointData3D@@@.c)
 *     memcpy_0 @ 0x18012DB5F (memcpy_0.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall MPCProcessor::GetPoints(__int64 a1, _QWORD *a2, float *a3)
{
  __int64 *v6; // rdi
  __int64 *v7; // rbx
  __m128 v8; // xmm6
  __m128 v9; // xmm5
  __m128 v10; // xmm7
  __m128 v11; // xmm8
  float v12; // xmm11_4
  __m128 v13; // xmm9
  float v14; // xmm4_4
  __m128 v15; // xmm3
  __m128 v16; // xmm2
  __int64 **v17; // rax
  __int64 *j; // rcx
  __int64 *i; // rax
  struct MPCHolographicInputManager *Instance; // rax
  struct MPCHolographicInputManager *v21; // rax
  __m128 v22; // xmm7
  __m128 v23; // xmm6
  unsigned int v24; // ebx
  __int64 v26; // [rsp+28h] [rbp-E0h]
  __int64 v27; // [rsp+28h] [rbp-E0h]
  float v28; // [rsp+30h] [rbp-D8h]
  float v29; // [rsp+30h] [rbp-D8h]
  __int128 v30; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v31; // [rsp+58h] [rbp-B0h]
  __int64 v32; // [rsp+60h] [rbp-A8h]
  __int64 v33; // [rsp+68h] [rbp-A0h]
  __int64 v34; // [rsp+70h] [rbp-98h]
  int v35; // [rsp+78h] [rbp-90h]
  __int64 v36; // [rsp+7Ch] [rbp-8Ch]
  __int64 v37; // [rsp+84h] [rbp-84h]
  __int64 v38; // [rsp+8Ch] [rbp-7Ch]
  __int16 v39; // [rsp+94h] [rbp-74h]
  char v40; // [rsp+96h] [rbp-72h]
  __int128 v41; // [rsp+98h] [rbp-70h]
  __int128 v42; // [rsp+A8h] [rbp-60h]
  __int128 v43; // [rsp+B8h] [rbp-50h]
  __int128 v44; // [rsp+C8h] [rbp-40h]
  __int128 v45; // [rsp+D8h] [rbp-30h]
  __int128 v46; // [rsp+E8h] [rbp-20h]
  float v47; // [rsp+110h] [rbp+8h]
  __int64 v48; // [rsp+118h] [rbp+10h]
  _BYTE v49[1344]; // [rsp+128h] [rbp+20h] BYREF
  float v50; // [rsp+668h] [rbp+560h]
  float v51; // [rsp+66Ch] [rbp+564h]
  float v52; // [rsp+670h] [rbp+568h]
  float v53; // [rsp+678h] [rbp+570h]
  float v54; // [rsp+67Ch] [rbp+574h]
  float v55; // [rsp+680h] [rbp+578h]
  float v56; // [rsp+688h] [rbp+580h]
  float v57; // [rsp+68Ch] [rbp+584h]
  float v58; // [rsp+690h] [rbp+588h]
  float v59; // [rsp+698h] [rbp+590h]
  float v60; // [rsp+69Ch] [rbp+594h]
  float v61; // [rsp+6A0h] [rbp+598h]

  v48 = -2LL;
  *a2 = 0LL;
  a2[1] = 0LL;
  a2[2] = 0LL;
  v6 = *(__int64 **)(a1 + 3736);
  v7 = (__int64 *)*v6;
  while ( v7 != v6 )
  {
    v26 = v7[148];
    v28 = *((float *)v7 + 298);
    v8 = *(__m128 *)(v7 + 173);
    v9 = *(__m128 *)(v7 + 175);
    v10 = *(__m128 *)(v7 + 177);
    v11 = *(__m128 *)(v7 + 179);
    v12 = (float)((float)((float)(*((float *)&v26 + 1) * v9.m128_f32[0]) + (float)(*(float *)&v26 * v8.m128_f32[0]))
                + (float)(v28 * v10.m128_f32[0]))
        + v11.m128_f32[0];
    v13 = (__m128)HIDWORD(v26);
    v13.m128_f32[0] = (float)((float)((float)(*((float *)&v26 + 1) * _mm_shuffle_ps(v9, v9, 85).m128_f32[0])
                                    + (float)(*(float *)&v26 * _mm_shuffle_ps(v8, v8, 85).m128_f32[0]))
                            + (float)(v28 * _mm_shuffle_ps(v10, v10, 85).m128_f32[0]))
                    + _mm_shuffle_ps(v11, v11, 85).m128_f32[0];
    v9.m128_f32[0] = _mm_shuffle_ps(v9, v9, 170).m128_f32[0];
    v8.m128_f32[0] = _mm_shuffle_ps(v8, v8, 170).m128_f32[0];
    v14 = v28 * _mm_shuffle_ps(v10, v10, 170).m128_f32[0];
    v11.m128_f32[0] = _mm_shuffle_ps(v11, v11, 170).m128_f32[0];
    v15 = v13;
    v15.m128_f32[0] = (float)((float)((float)(v13.m128_f32[0] * a3[4]) + (float)(v12 * *a3))
                            + (float)((float)((float)((float)((float)(*((float *)&v26 + 1) * v9.m128_f32[0])
                                                            + (float)(*(float *)&v26 * v8.m128_f32[0]))
                                                    + v14)
                                            + v11.m128_f32[0])
                                    * a3[8]))
                    + a3[12];
    v16 = v13;
    v16.m128_f32[0] = (float)((float)((float)(v13.m128_f32[0] * a3[5]) + (float)(v12 * a3[1]))
                            + (float)((float)((float)((float)((float)(*((float *)&v26 + 1) * v9.m128_f32[0])
                                                            + (float)(*(float *)&v26 * v8.m128_f32[0]))
                                                    + v14)
                                            + v11.m128_f32[0])
                                    * a3[9]))
                    + a3[13];
    v47 = (float)((float)((float)(v12 * a3[2]) + (float)(v13.m128_f32[0] * a3[6]))
                + (float)((float)((float)((float)((float)(*((float *)&v26 + 1) * v9.m128_f32[0])
                                                + (float)(*(float *)&v26 * v8.m128_f32[0]))
                                        + v14)
                                + v11.m128_f32[0])
                        * a3[10]))
        + a3[14];
    HIDWORD(v30) = *((_DWORD *)v7 + 310);
    LODWORD(v31) = 6;
    *(_QWORD *)&v30 = _mm_unpacklo_ps(v15, v16).m128_u64[0];
    *((float *)&v30 + 2) = v47;
    HIDWORD(v31) = *((_DWORD *)v7 + 311) == 1;
    v39 = 0;
    v32 = 0LL;
    v33 = 0x3F80000000000000LL;
    v34 = 0LL;
    v35 = 0;
    v40 = 0;
    v36 = 0LL;
    v37 = 0LL;
    v38 = 0LL;
    v41 = *(_OWORD *)(a1 + 104);
    v42 = *(_OWORD *)(a1 + 120);
    v43 = *(_OWORD *)(a1 + 136);
    v44 = *(_OWORD *)(a1 + 152);
    v45 = *(_OWORD *)(a1 + 168);
    v46 = *(_OWORD *)(a1 + 184);
    std::vector<PointData3D>::push_back((__int64)a2, &v30);
    if ( !*((_BYTE *)v7 + 25) )
    {
      v17 = (__int64 **)v7[2];
      if ( *((_BYTE *)v17 + 25) )
      {
        for ( i = (__int64 *)v7[1]; !*((_BYTE *)i + 25) && v7 == (__int64 *)i[2]; i = (__int64 *)i[1] )
          v7 = i;
        v7 = i;
      }
      else
      {
        v7 = (__int64 *)v7[2];
        for ( j = *v17; !*((_BYTE *)j + 25); j = (__int64 *)*j )
          v7 = j;
      }
    }
  }
  if ( *(_BYTE *)(a1 + 3753) )
  {
    Instance = MPCHolographicInputManager::GetInstance();
    memcpy_0(v49, Instance, 0x710uLL);
    v21 = MPCHolographicInputManager::GetInstance();
    v27 = *((_QWORD *)v21 + 22);
    v29 = *((float *)v21 + 46);
    v22 = (__m128)LODWORD(v53);
    v22.m128_f32[0] = (float)((float)((float)(v53 * *((float *)&v27 + 1)) + (float)(v50 * *(float *)&v27))
                            + (float)(v56 * v29))
                    + v59;
    v23 = (__m128)LODWORD(v51);
    v23.m128_f32[0] = (float)((float)((float)(v51 * *(float *)&v27) + (float)(v54 * *((float *)&v27 + 1)))
                            + (float)(v57 * v29))
                    + v60;
    v47 = (float)((float)((float)(v52 * *(float *)&v27) + (float)(v55 * *((float *)&v27 + 1))) + (float)(v58 * v29))
        + v61;
    HIDWORD(v30) = 3;
    v31 = 0x100000007LL;
    v23.m128_u64[0] = _mm_unpacklo_ps(v22, v23).m128_u64[0];
    *(_QWORD *)&v30 = v23.m128_u64[0];
    *(float *)&v24 = v47;
    *((float *)&v30 + 2) = v47;
    v39 = 0;
    v32 = 0LL;
    v33 = 0x3F80000000000000LL;
    v34 = 0LL;
    v35 = 0;
    v40 = 0;
    v36 = 0LL;
    v37 = 0LL;
    v38 = 0LL;
    v41 = *(_OWORD *)(a1 + 104);
    v42 = *(_OWORD *)(a1 + 120);
    v43 = *(_OWORD *)(a1 + 136);
    v44 = *(_OWORD *)(a1 + 152);
    v45 = *(_OWORD *)(a1 + 168);
    v46 = *(_OWORD *)(a1 + 184);
    std::vector<PointData3D>::push_back((__int64)a2, &v30);
    v31 = 7LL;
    *(_QWORD *)&v30 = v23.m128_u64[0];
    *((_QWORD *)&v30 + 1) = v24 | 0x300000000LL;
    v39 = 0;
    v32 = 0LL;
    v33 = 0x3F80000000000000LL;
    v34 = 0LL;
    v35 = 0;
    v40 = 0;
    v36 = 0LL;
    v37 = 0LL;
    v38 = 0LL;
    v41 = *(_OWORD *)(a1 + 104);
    v42 = *(_OWORD *)(a1 + 120);
    v43 = *(_OWORD *)(a1 + 136);
    v44 = *(_OWORD *)(a1 + 152);
    v45 = *(_OWORD *)(a1 + 168);
    v46 = *(_OWORD *)(a1 + 184);
    std::vector<PointData3D>::push_back((__int64)a2, &v30);
    *(_BYTE *)(a1 + 3753) = 0;
  }
  return a2;
}
