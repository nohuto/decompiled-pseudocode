/*
 * XREFs of ?GetPoints@MPCHandProcessor@@UEAA?AV?$vector@UPointData3D@@V?$allocator@UPointData3D@@@std@@@std@@PEAUMPCHolographicInputContext@@@Z @ 0x180135290
 * Callers:
 *     <none>
 * Callees:
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x1800147E0 (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z @ 0x180014814 (-get@-$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z.c)
 *     memset_0 @ 0x18002C06E (memset_0.c)
 *     __security_check_cookie @ 0x18002C200 (__security_check_cookie.c)
 *     ??$_Range_construct_or_tidy@PEBUPointData3D@@@?$vector@UPointData3D@@V?$allocator@UPointData3D@@@std@@@std@@AEAAXPEBUPointData3D@@0Uforward_iterator_tag@1@@Z @ 0x180133C64 (--$_Range_construct_or_tidy@PEBUPointData3D@@@-$vector@UPointData3D@@V-$allocator@UPointData3D@@.c)
 *     ?MPCHandProcessor_PointDataChanged_@ISMTracing@@QEAAXII@Z @ 0x1801358BC (-MPCHandProcessor_PointDataChanged_@ISMTracing@@QEAAXII@Z.c)
 */

__int64 __fastcall MPCHandProcessor::GetPoints(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  char v5; // r9
  bool v6; // zf
  unsigned int v7; // edi
  __int128 v8; // xmm1
  unsigned int v9; // esi
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  int v14; // eax
  __int64 v15; // xmm0_8
  int v16; // eax
  __int64 v17; // xmm0_8
  __int64 v18; // rcx
  ISMTracing *v19; // rcx
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  __int64 v28; // rax
  __int128 v29; // xmm0
  __int128 v30; // xmm1
  __int128 v32; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v33; // [rsp+40h] [rbp-C0h]
  __int128 v34; // [rsp+50h] [rbp-B0h]
  __m256i v35; // [rsp+60h] [rbp-A0h]
  __int128 v36; // [rsp+80h] [rbp-80h]
  __int128 v37; // [rsp+90h] [rbp-70h]
  __int128 v38; // [rsp+A0h] [rbp-60h]
  __int128 v39; // [rsp+B0h] [rbp-50h]
  __int128 v40; // [rsp+C0h] [rbp-40h]
  __int128 v41; // [rsp+D0h] [rbp-30h]
  __int64 v42; // [rsp+E0h] [rbp-20h]
  _OWORD v43[3]; // [rsp+F0h] [rbp-10h] BYREF
  __m256i v44; // [rsp+120h] [rbp+20h]
  __int128 v45; // [rsp+140h] [rbp+40h]
  __int128 v46; // [rsp+150h] [rbp+50h]
  __int128 v47; // [rsp+160h] [rbp+60h]
  __int128 v48; // [rsp+170h] [rbp+70h]
  __int128 v49; // [rsp+180h] [rbp+80h]
  __int128 v50; // [rsp+190h] [rbp+90h]
  __int64 v51; // [rsp+1A0h] [rbp+A0h]
  _BYTE v52[8]; // [rsp+1A8h] [rbp+A8h] BYREF

  memset_0(&v32, 0, 0xB8uLL);
  v6 = *(_BYTE *)(a1 + 5604) == 0;
  v7 = *(_DWORD *)(a1 + 5460);
  v8 = *(_OWORD *)(a1 + 120);
  v9 = *(_DWORD *)(a1 + 5612);
  v36 = *(_OWORD *)(a1 + 104);
  v10 = *(_OWORD *)(a1 + 136);
  HIDWORD(v32) = v7;
  v37 = v8;
  v11 = *(_OWORD *)(a1 + 152);
  LODWORD(v33) = 6;
  v38 = v10;
  v12 = *(_OWORD *)(a1 + 168);
  DWORD1(v33) = v9;
  v39 = v11;
  v13 = *(_OWORD *)(a1 + 184);
  v40 = v12;
  v41 = v13;
  if ( v6 )
  {
    HIDWORD(v42) = 0;
  }
  else
  {
    v4 = *(unsigned int *)(a1 + 5596);
    v14 = 1;
    if ( (_DWORD)v4 == 2 )
    {
      HIDWORD(v42) = 5;
    }
    else
    {
      if ( (_DWORD)v4 == 1 )
        v14 = 3;
      HIDWORD(v42) = v14;
    }
    v15 = *(_QWORD *)(a1 + 8908);
    v35.m256i_i8[28] = *(_BYTE *)(a1 + 8904);
    v35.m256i_i8[30] = v35.m256i_i8[28];
    v16 = *(_DWORD *)(a1 + 8916);
    *((_QWORD *)&v33 + 1) = v15;
    v17 = *(_QWORD *)(a1 + 8920);
    LODWORD(v34) = v16;
    v35.m256i_i32[5] = *(_DWORD *)(a1 + 8928);
    *(__int64 *)((char *)&v35.m256i_i64[1] + 4) = v17;
  }
  if ( *(_DWORD *)(a1 + 8740) != v9 || *(_DWORD *)(a1 + 8732) != v7 )
  {
    if ( ISMTracing::IsEnabled(v4) )
    {
      wil::details::static_lazy<ISMTracing>::get(v18, lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
      ISMTracing::MPCHandProcessor_PointDataChanged_(v19, v7, v9);
    }
  }
  v20 = v33;
  *(_OWORD *)(a1 + 8720) = v32;
  v21 = v34;
  *(_OWORD *)(a1 + 8736) = v20;
  v22 = *(_OWORD *)v35.m256i_i8;
  *(_OWORD *)(a1 + 8752) = v21;
  v23 = *(_OWORD *)&v35.m256i_u64[2];
  *(_OWORD *)(a1 + 8768) = v22;
  v24 = v36;
  *(_OWORD *)(a1 + 8784) = v23;
  v25 = v37;
  *(_OWORD *)(a1 + 8800) = v24;
  *(_OWORD *)(a1 + 8816) = v25;
  *(_OWORD *)(a1 + 8832) = v38;
  v26 = v40;
  *(_OWORD *)(a1 + 8848) = v39;
  v27 = v41;
  v28 = v42;
  *(_OWORD *)(a1 + 8864) = v26;
  *(_OWORD *)(a1 + 8880) = v27;
  *(_QWORD *)(a1 + 8896) = v28;
  v29 = v32;
  *(_QWORD *)a2 = 0LL;
  v30 = v33;
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_QWORD *)(a2 + 16) = 0LL;
  v43[0] = v29;
  v43[1] = v30;
  v43[2] = v34;
  v44 = v35;
  v45 = v36;
  v46 = v37;
  v47 = v38;
  v48 = v39;
  v49 = v40;
  v50 = v41;
  v51 = v42;
  std::vector<PointData3D>::_Range_construct_or_tidy<PointData3D const *>((void **)a2, v43, (__int64)v52, v5);
  return a2;
}
