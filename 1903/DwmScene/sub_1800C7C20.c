/*
 * XREFs of sub_1800C7C20 @ 0x1800C7C20
 * Callers:
 *     sub_1800BE470 @ 0x1800BE470 (sub_1800BE470.c)
 *     sub_1800C3080 @ 0x1800C3080 (sub_1800C3080.c)
 * Callees:
 *     sub_180012630 @ 0x180012630 (sub_180012630.c)
 *     sub_18007797C @ 0x18007797C (sub_18007797C.c)
 *     sub_1800820A4 @ 0x1800820A4 (sub_1800820A4.c)
 *     sub_18008633C @ 0x18008633C (sub_18008633C.c)
 *     sub_180087340 @ 0x180087340 (sub_180087340.c)
 *     sub_180087414 @ 0x180087414 (sub_180087414.c)
 *     sub_180087DA0 @ 0x180087DA0 (sub_180087DA0.c)
 *     sub_18008E1D4 @ 0x18008E1D4 (sub_18008E1D4.c)
 *     sub_1800C1DD4 @ 0x1800C1DD4 (sub_1800C1DD4.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall sub_1800C7C20(_BYTE *a1, __int64 *a2, char a3)
{
  __int64 v6; // rbx
  unsigned __int64 v7; // rax
  double v8; // xmm10_8
  __int64 v9; // r8
  char v10; // al
  char v11; // r12
  double v12; // xmm0_8
  unsigned int v13; // xmm6_4
  double v14; // xmm0_8
  unsigned int v15; // xmm8_4
  double v16; // xmm0_8
  int v17; // xmm9_4
  double v18; // xmm0_8
  unsigned int v19; // xmm11_4
  double v20; // xmm0_8
  unsigned int v21; // xmm12_4
  double v22; // xmm0_8
  unsigned int v23; // xmm13_4
  _DWORD *v24; // rbx
  float v25; // xmm6_4
  volatile signed __int32 *v26; // rbx
  unsigned __int64 v27; // rcx
  __int64 v28; // rbx
  unsigned __int64 v29; // rax
  __m128 v30; // xmm0
  _DWORD *v31; // rax
  signed __int64 v32; // r14
  __int64 v33; // rcx
  volatile signed __int32 *v34; // rbx
  __int64 v36; // [rsp+20h] [rbp-E0h] BYREF
  volatile signed __int32 *v37; // [rsp+28h] [rbp-D8h]
  unsigned __int64 v38; // [rsp+30h] [rbp-D0h]
  unsigned int v39; // [rsp+38h] [rbp-C8h]
  __int64 v40; // [rsp+40h] [rbp-C0h] BYREF
  volatile signed __int32 *v41; // [rsp+48h] [rbp-B8h]
  __int64 v42; // [rsp+50h] [rbp-B0h]
  int v43; // [rsp+58h] [rbp-A8h]
  unsigned __int64 v44; // [rsp+60h] [rbp-A0h] BYREF
  int v45; // [rsp+68h] [rbp-98h]
  __int64 v46; // [rsp+70h] [rbp-90h]
  __m128 v47; // [rsp+80h] [rbp-80h] BYREF
  int v48[4]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v49; // [rsp+A0h] [rbp-60h] BYREF
  int v50; // [rsp+A8h] [rbp-58h]
  unsigned __int64 v51; // [rsp+B0h] [rbp-50h] BYREF
  int v52; // [rsp+B8h] [rbp-48h]
  _DWORD v53[4]; // [rsp+C0h] [rbp-40h] BYREF
  __m128 v54; // [rsp+D0h] [rbp-30h]

  v46 = -2LL;
  v6 = sub_18007797C((__int64)a1, *(_DWORD *)(*a2 + 112));
  LOBYTE(v7) = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v6 + 64LL))(v6, &unk_180259178, 0LL);
  if ( !(_BYTE)v7 )
    return v7;
  v8 = (*(double (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v6 + 88LL))(v6, &qword_180259158);
  LOBYTE(v9) = 1;
  (*(void (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)v6 + 64LL))(v6, &unk_180259198, v9);
  v11 = v10;
  v12 = (*(double (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v6 + 88LL))(v6, &qword_1802591B8);
  v13 = LODWORD(v12);
  v14 = (*(double (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v6 + 88LL))(v6, &qword_1802591D8);
  v15 = LODWORD(v14);
  v16 = (*(double (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v6 + 88LL))(v6, &qword_1802591F8);
  v17 = LODWORD(v16);
  v18 = (*(double (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v6 + 88LL))(v6, &qword_180259218);
  v19 = LODWORD(v18);
  v20 = (*(double (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v6 + 88LL))(v6, &qword_180259238);
  v21 = LODWORD(v20);
  v22 = (*(double (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v6 + 88LL))(v6, &qword_180259258);
  v23 = LODWORD(v22);
  (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v6 + 88LL))(v6, &qword_180259278);
  v36 = 0LL;
  v37 = 0LL;
  sub_1800C1DD4((__int64)a1, &v36, a2);
  v24 = (_DWORD *)v36;
  LOBYTE(v7) = v36 != 0;
  if ( !v36 )
    goto LABEL_25;
  if ( !a3 )
  {
    if ( !a1[1467] )
      goto LABEL_17;
    v24 = (_DWORD *)v36;
  }
  v51 = __PAIR64__(v15, v13);
  v52 = v17;
  v49 = qword_18026B298;
  v25 = *((float *)&qword_18026B298 + 1);
  v50 = dword_18026B2A0;
  if ( v11 )
  {
    v40 = 0LL;
    v41 = 0LL;
    sub_180012630((__int64)v24, &v40);
    if ( v40 )
      *((float *)&v49 + 1) = v25 + *(float *)(v40 + 104);
    if ( v41 )
    {
      if ( _InterlockedExchangeAdd(v41 + 2, 0xFFFFFFFF) == 1 )
      {
        v26 = v41;
        (**(void (__fastcall ***)(volatile signed __int32 *))v41)(v41);
        if ( _InterlockedExchangeAdd(v26 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v41 + 8LL))(v41);
      }
      v24 = (_DWORD *)v36;
    }
  }
  sub_1800820A4(v53, (unsigned __int64 *)&v49, &v51);
  sub_180087414((__int64)v24);
  v24[36] = v53[0];
  v24[37] = v53[1];
  v24[38] = v53[2];
  v27 = _InterlockedIncrement64(&qword_180258748);
  v28 = v36;
  *(_QWORD *)(v36 + 208) = v27;
  v29 = *(_QWORD *)(v28 + 216);
  if ( v27 >= v29 )
    v29 = v27;
  *(_QWORD *)(v28 + 216) = v29;
  if ( a3 )
  {
LABEL_19:
    v38 = __PAIR64__(v21, v19);
    v39 = v23;
    v30 = _mm_movelh_ps((__m128)__PAIR64__(v21, v19), (__m128)v23);
    sub_180087DA0(*(double *)v30.m128_u64);
    v54 = v30;
    v47 = v30;
    sub_18008633C(v28, &v47);
    if ( a3 )
    {
LABEL_22:
      sub_180087340(v28);
      v44 = *(_QWORD *)(v28 + 172);
      v45 = *(_DWORD *)(v28 + 180);
      v31 = sub_18008E1D4(v48, v8, &v44);
      v42 = *(_QWORD *)v31;
      v43 = v31[2];
      sub_180087414(v28);
      *(_QWORD *)(v28 + 172) = v42;
      *(_DWORD *)(v28 + 180) = v43;
      v32 = _InterlockedExchangeAdd64(&qword_180258748, 1uLL);
      v33 = v36;
      *(_QWORD *)(v36 + 208) = v32 + 1;
      v7 = *(_QWORD *)(v33 + 216);
      if ( v32 + 1 >= v7 )
        v7 = v32 + 1;
      *(_QWORD *)(v33 + 216) = v7;
      goto LABEL_25;
    }
    goto LABEL_20;
  }
LABEL_17:
  if ( a1[1468] )
  {
    v28 = v36;
    goto LABEL_19;
  }
LABEL_20:
  LOBYTE(v7) = a1[1466];
  if ( (_BYTE)v7 )
  {
    v28 = v36;
    goto LABEL_22;
  }
LABEL_25:
  if ( v37 )
  {
    LODWORD(v7) = _InterlockedDecrement(v37 + 2);
    if ( !(_DWORD)v7 )
    {
      v34 = v37;
      (**(void (__fastcall ***)(volatile signed __int32 *))v37)(v37);
      LODWORD(v7) = _InterlockedDecrement(v34 + 3);
      if ( !(_DWORD)v7 )
        LOBYTE(v7) = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v37 + 8LL))(v37);
    }
  }
  return v7;
}
