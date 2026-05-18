/*
 * XREFs of sub_1800C5A08 @ 0x1800C5A08
 * Callers:
 *     sub_1800C2D50 @ 0x1800C2D50 (sub_1800C2D50.c)
 * Callees:
 *     sub_180077A8C @ 0x180077A8C (sub_180077A8C.c)
 *     sub_180078228 @ 0x180078228 (sub_180078228.c)
 *     sub_1800A41D0 @ 0x1800A41D0 (sub_1800A41D0.c)
 *     sub_1800F5C1C @ 0x1800F5C1C (sub_1800F5C1C.c)
 *     sub_1800F5D44 @ 0x1800F5D44 (sub_1800F5D44.c)
 *     sub_1800F638C @ 0x1800F638C (sub_1800F638C.c)
 *     sub_18011C9A8 @ 0x18011C9A8 (sub_18011C9A8.c)
 *     _o_powf @ 0x180125B76 (_o_powf.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800C5A08(__m128 *a1, __int64 a2, int a3)
{
  __int64 v5; // rdi
  int v6; // r13d
  int v7; // r15d
  int v8; // eax
  char v9; // si
  BOOL v10; // eax
  float v11; // xmm10_4
  BOOL v12; // eax
  float v13; // xmm9_4
  BOOL v14; // eax
  float v15; // xmm8_4
  BOOL v16; // eax
  float v17; // xmm7_4
  BOOL v18; // eax
  float v19; // xmm6_4
  BOOL v20; // eax
  bool v21; // al
  float v22; // xmm15_4
  float v23; // xmm13_4
  unsigned __int8 v24; // r12
  int v25; // xmm14_4
  int v26; // esi
  double v27; // xmm0_8
  double v28; // xmm0_8
  double v29; // xmm0_8
  int v30; // xmm11_4
  double v31; // xmm0_8
  int v32; // xmm9_4
  double v33; // xmm0_8
  int v34; // xmm7_4
  double v35; // xmm0_8
  int v36; // xmm8_4
  double v37; // xmm0_8
  int v38; // xmm6_4
  __int64 v39; // rax
  __int64 result; // rax
  volatile signed __int32 *v41; // rbx
  signed __int32 v42; // eax
  bool v43; // zf
  float v44; // [rsp+38h] [rbp-D0h]
  float v45; // [rsp+3Ch] [rbp-CCh]
  float v46; // [rsp+40h] [rbp-C8h]
  _BYTE v47[16]; // [rsp+70h] [rbp-98h] BYREF
  _BYTE v48[16]; // [rsp+80h] [rbp-88h] BYREF
  __int64 v49; // [rsp+90h] [rbp-78h] BYREF
  volatile signed __int32 *v50; // [rsp+98h] [rbp-70h]
  __m128 v51; // [rsp+A0h] [rbp-68h]
  int v52; // [rsp+B0h] [rbp-58h]
  int v53; // [rsp+B4h] [rbp-54h]
  int v54; // [rsp+B8h] [rbp-50h]
  float v55; // [rsp+BCh] [rbp-4Ch]
  int v56; // [rsp+C0h] [rbp-48h]
  int v57; // [rsp+C4h] [rbp-44h]
  int v58; // [rsp+C8h] [rbp-40h]
  float v59; // [rsp+CCh] [rbp-3Ch]
  float v60; // [rsp+D0h] [rbp-38h]
  float v61; // [rsp+D4h] [rbp-34h]
  float v62; // [rsp+D8h] [rbp-30h]
  float v63; // [rsp+DCh] [rbp-2Ch]
  float v64; // [rsp+E0h] [rbp-28h]
  float v65; // [rsp+E4h] [rbp-24h]
  int v66; // [rsp+E8h] [rbp-20h]
  float v67; // [rsp+ECh] [rbp-1Ch]

  v5 = sub_180077A8C((__int64)a1, a3);
  v6 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v5 + 72LL))(v5, &unk_18025A0D8, 0LL);
  v7 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v5 + 72LL))(v5, &unk_18025A0F8, 0LL);
  (*(void (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v5 + 64LL))(v5, &unk_18025A0B8, 0LL);
  (*(void (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v5 + 64LL))(v5, &unk_180259F38, 0LL);
  v51 = a1[92];
  v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 88LL))(a2);
  v51 = _mm_mul_ps(
          _mm_shuffle_ps((__m128)COERCE_UNSIGNED_INT((float)v8), (__m128)COERCE_UNSIGNED_INT((float)v8), 0),
          v51);
  if ( a1 == (__m128 *)-1472LL )
    wassert(L"pSource", L"d:\\os\\public\\amd64fre\\sdk\\inc\\DirectXMathConvert.inl", 0x2A5u);
  if ( _mm_movemask_ps(_mm_cmpneq_ps((__m128)xmmword_18025EF88, a1[92])) )
    a1[91].m128_i8[1] = 1;
  else
    v51.m128_i32[1] = 0;
  v9 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v5 + 64LL))(v5, &unk_180259FD8, 0LL);
  v10 = v9
     && (*(unsigned __int8 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v5 + 64LL))(v5, &unk_180259FF8, 0LL);
  v11 = (float)v10;
  v12 = v9
     && (*(unsigned __int8 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v5 + 64LL))(v5, &unk_18025A018, 0LL);
  v13 = (float)v12;
  v14 = v9
     && (*(unsigned __int8 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v5 + 64LL))(v5, &unk_18025A038, 0LL);
  v15 = (float)v14;
  v16 = v9
     && (*(unsigned __int8 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v5 + 64LL))(v5, &unk_18025A058, 0LL);
  v17 = (float)v16;
  v18 = v9
     && (*(unsigned __int8 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v5 + 64LL))(v5, &unk_18025A078, 0LL);
  v19 = (float)v18;
  v20 = v9
     && (*(unsigned __int8 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v5 + 64LL))(v5, &unk_18025A098, 0LL);
  v21 = !v9 || v11 == 0.0 || v13 == 0.0 || v15 == 0.0 || v17 == 0.0 || v19 == 0.0 || (float)v20 == 0.0;
  if ( v7 || v6 != 2 )
    v21 = 1;
  if ( v21 )
    a1[91].m128_i8[1] = 1;
  v44 = 0.0;
  v45 = 0.0;
  v22 = 1.0;
  v46 = 0.0;
  v23 = 1.0;
  v24 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v5 + 64LL))(v5, &unk_18025C1B8, 0LL);
  v25 = 0;
  v26 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v5 + 72LL))(v5, &unk_18025C1D8, 0LL);
  if ( v24 )
  {
    v27 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v5 + 88LL))(v5, &unk_18025C198);
    v23 = *(float *)&v27 / 100.0;
    a1[91].m128_i8[1] = 1;
  }
  if ( v26 )
  {
    if ( v26 == 2 )
      v25 = 1065353216;
    a1[91].m128_i8[1] = 1;
  }
  if ( (*(unsigned __int8 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v5 + 64LL))(v5, &unk_18025C258, 0LL) )
  {
    (*(void (__fastcall **)(__int64, void *))(*(_QWORD *)v5 + 88LL))(v5, &unk_18025C238);
    (*(void (__fastcall **)(__int64, void *))(*(_QWORD *)v5 + 88LL))(v5, &unk_18025C218);
    (*(void (__fastcall **)(__int64, void *))(*(_QWORD *)v5 + 88LL))(v5, &unk_18025C1F8);
    sub_18011C9A8(v47);
    v44 = (*(float (__fastcall **)(__int64, void *))(*(_QWORD *)v5 + 88LL))(v5, &unk_18025C278);
    a1[91].m128_i8[1] = 1;
  }
  if ( (*(unsigned __int8 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v5 + 64LL))(v5, &unk_18025C2F8, 0LL) )
  {
    (*(void (__fastcall **)(__int64, void *))(*(_QWORD *)v5 + 88LL))(v5, &unk_18025C2D8);
    (*(void (__fastcall **)(__int64, void *))(*(_QWORD *)v5 + 88LL))(v5, &unk_18025C2B8);
    (*(void (__fastcall **)(__int64, void *))(*(_QWORD *)v5 + 88LL))(v5, &unk_18025C298);
    sub_18011C9A8(v48);
    v45 = (*(float (__fastcall **)(__int64, void *))(*(_QWORD *)v5 + 88LL))(v5, &unk_18025C318);
    a1[91].m128_i8[1] = 1;
  }
  if ( (*(unsigned __int8 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v5 + 64LL))(v5, &unk_18025C358, 0LL) )
  {
    v28 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v5 + 88LL))(v5, &unk_18025C338);
    v22 = *(float *)&v28 / 100.0;
    v46 = (*(float (__fastcall **)(__int64, void *))(*(_QWORD *)v5 + 88LL))(v5, &unk_18025C378);
    a1[91].m128_i8[1] = 1;
  }
  v29 = ((double (*)(void))o_powf)();
  v30 = LODWORD(v29);
  v31 = ((double (*)(void))o_powf)();
  v32 = LODWORD(v31);
  v33 = ((double (*)(void))o_powf)();
  v34 = LODWORD(v33);
  v35 = ((double (*)(void))o_powf)();
  v36 = LODWORD(v35);
  v37 = ((double (*)(void))o_powf)();
  v38 = LODWORD(v37);
  *(float *)&v37 = o_powf();
  v52 = v34;
  v53 = v32;
  v54 = v30;
  v55 = v44;
  v56 = LODWORD(v37);
  v57 = v38;
  v58 = v36;
  v59 = v45;
  v60 = v22;
  v61 = v22;
  v62 = v22;
  v63 = v46;
  v64 = v23;
  v65 = (float)v24;
  v66 = v25;
  v67 = (float)(v26 != 0);
  v49 = 0LL;
  v50 = 0LL;
  v39 = sub_180078228((__int64)a1);
  sub_1800A41D0(v39, &v49);
  sub_1800F5D44(v49);
  sub_1800F5D44(v49);
  sub_1800F5C1C(v49);
  sub_1800F5C1C(v49);
  sub_1800F5C1C(v49);
  sub_1800F5C1C(v49);
  sub_1800F5C1C(v49);
  sub_1800F5C1C(v49);
  sub_1800F5C1C(v49);
  sub_1800F5C1C(v49);
  sub_1800F638C(v49);
  sub_1800F638C(v49);
  sub_1800F638C(v49);
  sub_1800F638C(v49);
  result = sub_1800F638C(v49);
  v41 = v50;
  if ( v50 )
  {
    v42 = _InterlockedExchangeAdd(v50 + 2, 0xFFFFFFFF);
    v43 = v42 == 1;
    result = (unsigned int)(v42 - 1);
    if ( v43 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v41)(v41);
      result = (unsigned int)_InterlockedDecrement(v41 + 3);
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v41 + 8LL))(v41);
    }
  }
  return result;
}
