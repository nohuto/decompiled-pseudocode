/*
 * XREFs of sub_180018FC0 @ 0x180018FC0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000F008 @ 0x18000F008 (sub_18000F008.c)
 *     sub_180015FC4 @ 0x180015FC4 (sub_180015FC4.c)
 *     sub_180017350 @ 0x180017350 (sub_180017350.c)
 *     sub_18001765C @ 0x18001765C (sub_18001765C.c)
 *     sub_180017848 @ 0x180017848 (sub_180017848.c)
 *     sub_180017DE8 @ 0x180017DE8 (sub_180017DE8.c)
 *     sub_180017F3C @ 0x180017F3C (sub_180017F3C.c)
 *     sub_180018D28 @ 0x180018D28 (sub_180018D28.c)
 *     sub_18001B66C @ 0x18001B66C (sub_18001B66C.c)
 *     sub_1800631C0 @ 0x1800631C0 (sub_1800631C0.c)
 *     sub_180063668 @ 0x180063668 (sub_180063668.c)
 *     sub_180077600 @ 0x180077600 (sub_180077600.c)
 *     sub_1800864E0 @ 0x1800864E0 (sub_1800864E0.c)
 *     sub_1800AEDCC @ 0x1800AEDCC (sub_1800AEDCC.c)
 *     sub_1800B1004 @ 0x1800B1004 (sub_1800B1004.c)
 *     sub_1800B10EC @ 0x1800B10EC (sub_1800B10EC.c)
 *     sub_1800B1238 @ 0x1800B1238 (sub_1800B1238.c)
 *     sub_1800B1258 @ 0x1800B1258 (sub_1800B1258.c)
 *     sub_1800B3944 @ 0x1800B3944 (sub_1800B3944.c)
 *     sub_1800B4214 @ 0x1800B4214 (sub_1800B4214.c)
 *     sub_1800B42F0 @ 0x1800B42F0 (sub_1800B42F0.c)
 *     sub_1800B8A0C @ 0x1800B8A0C (sub_1800B8A0C.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=12
__int64 __fastcall sub_180018FC0(__int64 a1, __int64 a2, __int64 a3, unsigned __int8 a4)
{
  volatile signed __int32 *v6; // r14
  __int64 v7; // rdi
  __int64 v8; // r15
  unsigned int v9; // r12d
  __int64 v10; // rax
  volatile signed __int32 *v11; // rbx
  __int64 v12; // rbx
  float v13; // xmm6_4
  float v14; // xmm6_4
  float v15; // xmm7_4
  __int64 *v16; // rax
  volatile signed __int32 *v17; // r15
  __int64 v18; // rcx
  float v19; // xmm1_4
  volatile signed __int32 *v20; // r12
  __int64 v21; // rbx
  _DWORD *v22; // rax
  volatile signed __int32 *v23; // rbx
  float v24; // xmm3_4
  int v25; // xmm2_4
  float v26; // xmm1_4
  __int64 v27; // r8
  __int64 v28; // rdx
  signed __int32 v29; // eax
  __int64 v30; // rdx
  __int128 v31; // xmm3
  __int128 v32; // xmm2
  __int128 v33; // xmm0
  __int64 v34; // rcx
  volatile signed __int32 *v35; // rbx
  __int64 result; // rax
  __int64 v38; // [rsp+30h] [rbp-388h]
  __int64 v39; // [rsp+30h] [rbp-388h]
  __int128 v40; // [rsp+30h] [rbp-388h]
  __int64 v41; // [rsp+30h] [rbp-388h]
  __int128 v42; // [rsp+40h] [rbp-378h]
  unsigned int v43; // [rsp+50h] [rbp-368h]
  __int128 v44; // [rsp+68h] [rbp-350h] BYREF
  __int64 v45; // [rsp+78h] [rbp-340h]
  __int64 v46; // [rsp+80h] [rbp-338h]
  volatile signed __int32 *v47; // [rsp+88h] [rbp-330h]
  __m256i v48; // [rsp+90h] [rbp-328h] BYREF
  __m256i v49; // [rsp+B0h] [rbp-308h]
  int v50; // [rsp+D0h] [rbp-2E8h] BYREF
  __int64 v51; // [rsp+D4h] [rbp-2E4h]
  __int64 v52; // [rsp+DCh] [rbp-2DCh]
  int v53; // [rsp+E4h] [rbp-2D4h]
  __int64 v54; // [rsp+E8h] [rbp-2D0h]
  __int64 v55; // [rsp+F0h] [rbp-2C8h]
  int v56; // [rsp+F8h] [rbp-2C0h]
  int v57; // [rsp+FCh] [rbp-2BCh]
  float v58; // [rsp+100h] [rbp-2B8h]
  int v59; // [rsp+104h] [rbp-2B4h]
  float v60; // [rsp+108h] [rbp-2B0h]
  int v61; // [rsp+10Ch] [rbp-2ACh]
  float v62; // [rsp+110h] [rbp-2A8h] BYREF
  __int64 v63; // [rsp+114h] [rbp-2A4h]
  __int64 v64; // [rsp+11Ch] [rbp-29Ch]
  float v65; // [rsp+124h] [rbp-294h]
  __int64 v66; // [rsp+128h] [rbp-290h]
  __int64 v67; // [rsp+130h] [rbp-288h]
  int v68; // [rsp+138h] [rbp-280h]
  int v69; // [rsp+13Ch] [rbp-27Ch]
  float v70; // [rsp+140h] [rbp-278h]
  float v71; // [rsp+144h] [rbp-274h]
  int v72; // [rsp+148h] [rbp-270h]
  int v73; // [rsp+14Ch] [rbp-26Ch]
  __int64 v74; // [rsp+150h] [rbp-268h]
  int v75; // [rsp+158h] [rbp-260h] BYREF
  __int128 v76; // [rsp+160h] [rbp-258h] BYREF
  __int64 v77; // [rsp+170h] [rbp-248h]
  volatile signed __int32 *v78; // [rsp+178h] [rbp-240h]
  __int64 v79; // [rsp+180h] [rbp-238h]
  volatile signed __int32 *v80; // [rsp+188h] [rbp-230h]
  __int128 v81; // [rsp+190h] [rbp-228h] BYREF
  __int128 v82; // [rsp+1A0h] [rbp-218h] BYREF
  _OWORD v83[4]; // [rsp+1B0h] [rbp-208h] BYREF
  _OWORD v84[4]; // [rsp+1F0h] [rbp-1C8h] BYREF
  _BYTE v85[64]; // [rsp+230h] [rbp-188h] BYREF
  __int64 v86; // [rsp+270h] [rbp-148h] BYREF
  volatile signed __int32 *v87; // [rsp+278h] [rbp-140h]
  unsigned __int64 v88; // [rsp+280h] [rbp-138h] BYREF
  unsigned __int64 v89; // [rsp+288h] [rbp-130h] BYREF
  __int64 v90; // [rsp+290h] [rbp-128h] BYREF
  __int64 v91; // [rsp+298h] [rbp-120h] BYREF
  volatile signed __int32 *v92; // [rsp+2A0h] [rbp-118h]
  __int64 v93; // [rsp+2A8h] [rbp-110h] BYREF
  __int64 v94; // [rsp+2B0h] [rbp-108h]
  __int64 v95; // [rsp+2B8h] [rbp-100h] BYREF
  __int64 v96; // [rsp+2C0h] [rbp-F8h]
  _OWORD v97[4]; // [rsp+2D0h] [rbp-E8h] BYREF
  _OWORD v98[4]; // [rsp+310h] [rbp-A8h] BYREF

  v74 = -2LL;
  v45 = a3;
  v90 = 0LL;
  try
  {
    sub_180017350(&v90);
    v6 = *(volatile signed __int32 **)(a2 + 24);
    if ( v6 )
    {
      _InterlockedIncrement(v6 + 2);
      v6 = *(volatile signed __int32 **)(a2 + 24);
    }
    v7 = *(_QWORD *)(a2 + 16);
    v8 = v7;
    v86 = 0LL;
    v87 = 0LL;
    v44 = 0LL;
    if ( v6 )
    {
      _InterlockedIncrement(v6 + 2);
      v8 = v7;
    }
    *(_QWORD *)&v44 = v8;
    *((_QWORD *)&v44 + 1) = v6;
    sub_180077600(*(_QWORD *)(a1 + 40), &v86, 0LL, &v44);
    v9 = *(_DWORD *)(a1 + 140) - *(_DWORD *)(a1 + 132);
    v43 = *(_DWORD *)(a1 + 136) - *(_DWORD *)(a1 + 128);
    v38 = *(_QWORD *)(a1 + 64);
    v10 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 120) + 32LL))(*(_QWORD *)(a1 + 120));
    sub_18000F008(v38, v10, v43, v9);
    v93 = 0LL;
    v94 = 0LL;
    sub_1800631C0(v7 + 16, &v93);
    v91 = 0LL;
    v92 = 0LL;
    sub_180015FC4(v8, &v91);
    sub_1800B8A0C(v91, a2 + 48);
    v11 = v92;
    if ( v92 )
    {
      if ( _InterlockedExchangeAdd(v92 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v11)(v11);
        if ( _InterlockedExchangeAdd(v11 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 8LL))(v11);
      }
      v8 = v7;
    }
    if ( (_BYTE)v94 )
      sub_180063668(v93);
    v95 = 0LL;
    v96 = 0LL;
    sub_1800631C0(v8 + 16, &v95);
    v12 = *(_QWORD *)(a1 + 64);
    v13 = (float)(*(int (__fastcall **)(__int64))(*(_QWORD *)v12 + 88LL))(v12);
    *(float *)&v88 = (float)(*(int (__fastcall **)(__int64))(*(_QWORD *)v12 + 80LL))(v12);
    *((float *)&v88 + 1) = v13;
    v39 = *(_QWORD *)(a1 + 144);
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 64) + 280LL))(*(_QWORD *)(a1 + 64)) )
    {
      *(_BYTE *)(v86 + 465) |= 1u;
      *(_OWORD *)(v86 + 296) = xmmword_18026B280;
      v14 = *(float *)&v39 - (float)*(int *)(a1 + 128);
      v15 = *((float *)&v39 + 1) - (float)*(int *)(a1 + 132);
      sub_1800B1258(v86, qword_18026B290, v88, 1LL);
      *(_QWORD *)&v40 = 0LL;
      DWORD2(v40) = *(_DWORD *)(a1 + 136) - *(_DWORD *)(a1 + 128);
      HIDWORD(v40) = *(_DWORD *)(a1 + 140) - *(_DWORD *)(a1 + 132);
      v76 = v40;
      sub_1800B10EC(v86, &v76);
      v46 = 0LL;
      v47 = 0LL;
      v16 = (__int64 *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 64) + 152LL))(*(_QWORD *)(a1 + 64));
      v17 = (volatile signed __int32 *)v16[1];
      if ( v17 )
      {
        _InterlockedIncrement(v17 + 2);
        v17 = (volatile signed __int32 *)v16[1];
      }
      v18 = *v16;
      v41 = v18;
      v46 = *v16;
      v47 = v17;
      *(_DWORD *)(v18 + 448) = 8 * (a4 ^ 1);
      v19 = (float)*(int *)(a1 + 132);
      *(float *)&v89 = (float)*(int *)(a1 + 128);
      *((float *)&v89 + 1) = v19;
      v20 = *(volatile signed __int32 **)(v18 + 280);
      if ( v20 )
      {
        _InterlockedIncrement(v20 + 2);
        v20 = *(volatile signed __int32 **)(v18 + 280);
      }
      v77 = *(_QWORD *)(v18 + 272);
      v21 = v77;
      v78 = v20;
      v22 = sub_180017F3C(&v75, &v89, &v88);
      sub_1800B1258(v21, v89, *(_QWORD *)v22, 1LL);
      if ( v20 )
      {
        if ( !_InterlockedDecrement(v20 + 2) )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v20)(v20);
          if ( !_InterlockedDecrement(v20 + 3) )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v20 + 8LL))(v20);
        }
      }
      v81 = *(_OWORD *)(a1 + 128);
      v23 = *(volatile signed __int32 **)(v41 + 280);
      if ( v23 )
      {
        _InterlockedIncrement(v23 + 2);
        v23 = *(volatile signed __int32 **)(v41 + 280);
      }
      v79 = *(_QWORD *)(v41 + 272);
      v80 = v23;
      sub_1800B10EC(v79, &v81);
      if ( v23 )
      {
        if ( _InterlockedExchangeAdd(v23 + 2, 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v23)(v23);
          if ( _InterlockedExchangeAdd(v23 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v23 + 8LL))(v23);
        }
      }
      if ( v17 )
      {
        if ( _InterlockedExchangeAdd(v17 + 2, 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v17)(v17);
          if ( _InterlockedExchangeAdd(v17 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 8LL))(v17);
        }
      }
    }
    else
    {
      if ( a4 )
        *(_BYTE *)(v86 + 465) |= 1u;
      else
        *(_BYTE *)(v86 + 465) &= ~1u;
      *(_OWORD *)(v86 + 296) = xmmword_18026B280;
      v82 = *(_OWORD *)(a1 + 128);
      sub_1800B10EC(v86, &v82);
      v15 = *((float *)&v39 + 1);
      v14 = *(float *)&v39;
    }
    v24 = -*(float *)(a1 + 152);
    v25 = *(_DWORD *)(a1 + 148);
    v26 = -*(float *)(a1 + 144);
    v50 = 1065353216;
    v51 = 0LL;
    v52 = 0LL;
    v53 = -1082130432;
    v54 = 0LL;
    v55 = 0LL;
    v56 = 1065353216;
    v57 = 0;
    v58 = v26;
    v59 = v25;
    v60 = v24;
    v61 = 1065353216;
    sub_18001765C(v84, v45);
    sub_180017DE8((__int64)v98, v84, &v50);
    v27 = v86;
    v42 = 0LL;
    v28 = *(_QWORD *)(v86 + 64);
    if ( v28 )
    {
      while ( 1 )
      {
        v29 = *(_DWORD *)(v28 + 8);
        if ( !v29 )
          break;
        if ( v29 == _InterlockedCompareExchange((volatile signed __int32 *)(v28 + 8), v29 + 1, v29) )
        {
          v42 = *(_OWORD *)(v27 + 56);
          break;
        }
      }
    }
    v30 = sub_180018D28(v98, (__int64)v85);
    sub_1800864E0(v42, v30);
    if ( *((_QWORD *)&v42 + 1) )
    {
      if ( !_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v42 + 1) + 8LL)) )
      {
        (***((void (__fastcall ****)(_QWORD))&v42 + 1))(*((_QWORD *)&v42 + 1));
        if ( !_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v42 + 1) + 12LL)) )
          (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v42 + 1) + 8LL))(*((_QWORD *)&v42 + 1));
      }
    }
    v62 = 2.0 / *(float *)&v88;
    v63 = 0LL;
    v64 = 0LL;
    v65 = 2.0 / *((float *)&v88 + 1);
    v66 = 0LL;
    v67 = 0LL;
    v68 = 1065353216;
    v69 = 0;
    v70 = (float)((float)(2.0 / *(float *)&v88) * v14) - 1.0;
    v71 = 1.0 - (float)((float)(2.0 / *((float *)&v88 + 1)) * v15);
    v72 = 0;
    v73 = 1065353216;
    v48.m256i_i32[0] = 1065353216;
    *(__int64 *)((char *)&v48.m256i_i64[1] + 4) = 0LL;
    v48.m256i_i32[5] = 1065353216;
    v49.m256i_i32[2] = 1065353216;
    *(__int64 *)((char *)&v49.m256i_i64[1] + 4) = 0LL;
    v49.m256i_i32[7] = 1065353216;
    v31 = *(unsigned int *)(a1 + 160);
    v32 = *(unsigned int *)(a1 + 156);
    v33 = 0x40000000u;
    *(double *)&v33 = sub_18001B66C();
    *(_OWORD *)v48.m256i_i8 = v33;
    *(_OWORD *)&v48.m256i_u64[2] = 0x40000000u;
    *(_OWORD *)v49.m256i_i8 = v32;
    *(_OWORD *)&v49.m256i_u64[2] = v31;
    sub_180017DE8((__int64)v97, &v48, &v62);
    v34 = v86;
    if ( *(_DWORD *)(v86 + 316) != 5 )
    {
      *(_DWORD *)(v86 + 316) = 5;
      sub_1800B1004(v34, 2LL);
      v34 = v86;
    }
    v83[0] = v97[0];
    v83[1] = v97[1];
    v83[2] = v97[2];
    v83[3] = v97[3];
    sub_1800B1238(v34, 1LL, 2LL, v83);
    sub_1800AEDCC(v86);
    if ( (_BYTE)v96 )
      sub_180063668(v95);
    sub_1800B3944(*(_QWORD *)(a1 + 48), &v86);
    sub_1800B42F0(*(_QWORD *)(a1 + 48));
    sub_1800B4214(*(_QWORD *)(a1 + 48), &v86);
    v35 = v87;
    if ( v87 )
    {
      if ( _InterlockedExchangeAdd(v87 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v35)(v35);
        if ( _InterlockedExchangeAdd(v35 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v35 + 8LL))(v35);
      }
    }
    if ( v6 )
    {
      if ( _InterlockedExchangeAdd(v6 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v6)(v6);
        if ( _InterlockedExchangeAdd(v6 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 8LL))(v6);
      }
    }
    sub_180017848(&v90);
    result = 0LL;
  }
  catch ( ... )
  {
    return 2147500037LL;
  }
  return result;
}
