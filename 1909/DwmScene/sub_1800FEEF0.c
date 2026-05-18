/*
 * XREFs of sub_1800FEEF0 @ 0x1800FEEF0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetLocaleT@_LocaleUpdate@@QEAAPEAU__crt_locale_pointers@@XZ @ 0x18000F5A0 (-GetLocaleT@_LocaleUpdate@@QEAAPEAU__crt_locale_pointers@@XZ.c)
 *     sub_180082090 @ 0x180082090 (sub_180082090.c)
 *     sub_1800821B4 @ 0x1800821B4 (sub_1800821B4.c)
 *     sub_1800848F4 @ 0x1800848F4 (sub_1800848F4.c)
 *     sub_180084E74 @ 0x180084E74 (sub_180084E74.c)
 *     sub_1800866D4 @ 0x1800866D4 (sub_1800866D4.c)
 *     sub_1800B1940 @ 0x1800B1940 (sub_1800B1940.c)
 *     sub_1800E2EB4 @ 0x1800E2EB4 (sub_1800E2EB4.c)
 *     sub_1800E32E8 @ 0x1800E32E8 (sub_1800E32E8.c)
 *     sub_1800FE1A4 @ 0x1800FE1A4 (sub_1800FE1A4.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 *     cosf @ 0x1801272F0 (cosf.c)
 *     sinf @ 0x1801272FC (sinf.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
unsigned __int64 __fastcall sub_1800FEEF0(__int64 a1, _LocaleUpdate *a2)
{
  struct __crt_locale_pointers *LocaleT; // rax
  char v5; // r15
  bool v6; // si
  bool v7; // bl
  bool v8; // r14
  __int64 v9; // r9
  float v10; // xmm0_4
  int v11; // eax
  void (__fastcall *v12)(__int64, __int64, _QWORD, __int64, bool, bool, bool, _DWORD); // rax
  float v13; // xmm6_4
  float v14; // xmm0_4
  float v15; // xmm6_4
  float v16; // xmm0_4
  float v17; // xmm0_4
  float v18; // xmm6_4
  float v19; // xmm7_4
  float v20; // xmm8_4
  float v21; // xmm6_4
  unsigned __int64 *v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rbx
  __int64 v25; // rdx
  __int64 v26; // rbx
  signed __int32 v28; // eax
  signed __int32 v29; // eax
  __int128 v30; // [rsp+58h] [rbp-B0h]
  __int128 v31; // [rsp+68h] [rbp-A0h]
  __int64 v32; // [rsp+78h] [rbp-90h] BYREF
  __int64 v33; // [rsp+80h] [rbp-88h]
  __int64 v34; // [rsp+88h] [rbp-80h] BYREF
  __int64 v35; // [rsp+90h] [rbp-78h]
  unsigned __int64 v36; // [rsp+98h] [rbp-70h] BYREF
  int v37; // [rsp+A0h] [rbp-68h]
  __int64 v38; // [rsp+A8h] [rbp-60h]
  _DWORD v39[4]; // [rsp+B0h] [rbp-58h] BYREF
  float v40; // [rsp+C0h] [rbp-48h] BYREF
  float v41; // [rsp+C4h] [rbp-44h]
  int v42; // [rsp+C8h] [rbp-40h]
  int v43; // [rsp+CCh] [rbp-3Ch]
  unsigned int v44; // [rsp+D0h] [rbp-38h]
  float v45; // [rsp+D8h] [rbp-30h] BYREF
  float v46; // [rsp+DCh] [rbp-2Ch]
  int v47; // [rsp+E0h] [rbp-28h]
  int v48; // [rsp+E4h] [rbp-24h]
  int v49; // [rsp+E8h] [rbp-20h]
  __int64 v50; // [rsp+F0h] [rbp-18h] BYREF
  float v51; // [rsp+F8h] [rbp-10h]
  unsigned __int64 v52; // [rsp+100h] [rbp-8h] BYREF
  int v53; // [rsp+108h] [rbp+0h]
  __int64 v54; // [rsp+110h] [rbp+8h] BYREF
  int v55; // [rsp+118h] [rbp+10h]

  v38 = -2LL;
  LocaleT = _LocaleUpdate::GetLocaleT(a2);
  v45 = -1.0;
  v46 = -1.0;
  v47 = 2;
  v48 = 0;
  v49 = 0;
  v40 = -1.0;
  v41 = -1.0;
  v42 = 2;
  v43 = 0;
  v44 = 0;
  sub_1800E2EB4((__int64)LocaleT, (__int64)&v40, (__int64)&v45);
  v5 = v43 & 1;
  v6 = (v43 & 4) != 0;
  v7 = (v43 & 8) != 0;
  v8 = v42 == 1;
  if ( v45 == 0.0 || v46 == 0.0 || v40 == 0.0 || v41 == 0.0 )
  {
    v50 = qword_18026C290;
  }
  else
  {
    *(float *)&v50 = v40 - v45;
    *((float *)&v50 + 1) = v41 - v46;
  }
  v10 = sub_1800E32E8((__int64)a2);
  if ( v5 && v8 )
    goto LABEL_11;
  if ( v6 )
  {
    if ( v8 )
    {
LABEL_11:
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 216LL))(a1);
      goto LABEL_14;
    }
  }
  else if ( v8 )
  {
    goto LABEL_14;
  }
  *(float *)(a1 + 1892) = v10 + *(float *)(a1 + 1892);
LABEL_14:
  v11 = *(_DWORD *)(a1 + 1868);
  if ( v11 == 1 )
  {
    v12 = *(void (__fastcall **)(__int64, __int64, _QWORD, __int64, bool, bool, bool, _DWORD))(*(_QWORD *)a1 + 208LL);
  }
  else
  {
    if ( v11 != 2 )
      goto LABEL_22;
    if ( v7 && *(_BYTE *)(a1 + 1864) )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 216LL))(a1);
    v12 = *(void (__fastcall **)(__int64, __int64, _QWORD, __int64, bool, bool, bool, _DWORD))(*(_QWORD *)a1 + 232LL);
  }
  LOBYTE(v9) = v5;
  v12(a1, v50, v44, v9, v6, v7, v8, LODWORD(v10));
LABEL_22:
  if ( *(_DWORD *)(a1 + 1868) )
  {
    v13 = *(float *)(a1 + 1824);
    v14 = fmaxf(*(float *)(a1 + 1876), *(float *)(a1 + 1820));
    *(float *)(a1 + 1876) = fminf(v14, v13);
    v15 = *(float *)(a1 + 1832);
    LODWORD(v16) = sub_1800FE1A4(a1).m128_u32[0];
    v17 = fmaxf(*(float *)(a1 + 1880), v16);
    *(float *)(a1 + 1880) = fminf(v17, v15);
    v18 = *(float *)(a1 + 1876);
    v19 = cosf(v18);
    v20 = sinf(*(float *)(a1 + 1872)) * v19;
    v21 = sinf(v18);
    *(float *)&v50 = cosf(*(float *)(a1 + 1872)) * v19;
    *((float *)&v50 + 1) = v21;
    v51 = v20;
    sub_180084E74(&v50);
    v52 = *(_QWORD *)(a1 + 1800);
    v53 = *(_DWORD *)(a1 + 1808);
    v22 = (unsigned __int64 *)sub_180082090(
                                v39,
                                (unsigned __int64 *)&v50,
                                COERCE_DOUBLE((unsigned __int64)*(_DWORD *)(a1 + 1880)));
    sub_1800821B4(&v54, &v52, v22);
    v32 = v54;
    LODWORD(v33) = v55;
    v30 = 0LL;
    v23 = *(_QWORD *)(a1 + 64);
    if ( v23 )
    {
      while ( 1 )
      {
        v28 = *(_DWORD *)(v23 + 8);
        if ( !v28 )
          break;
        if ( v28 == _InterlockedCompareExchange((volatile signed __int32 *)(v23 + 8), v28 + 1, v28) )
        {
          v24 = *(_QWORD *)(a1 + 64);
          *((_QWORD *)&v30 + 1) = v24;
          sub_1800866D4(*(_QWORD *)(a1 + 56), (__int64)&v32);
          goto LABEL_25;
        }
      }
    }
    v24 = 0LL;
    sub_1800866D4(0LL, (__int64)&v32);
LABEL_25:
    if ( v24 )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v24 + 8), 0xFFFFFFFF) == 1 )
      {
        (***((void (__fastcall ****)(_QWORD))&v30 + 1))(*((_QWORD *)&v30 + 1));
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v30 + 1) + 12LL), 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v30 + 1) + 8LL))(*((_QWORD *)&v30 + 1));
      }
    }
    v34 = qword_18025EF28;
    LODWORD(v35) = dword_18025EF30;
    v36 = v52;
    v37 = v53;
    v31 = 0LL;
    v25 = *(_QWORD *)(a1 + 64);
    if ( v25 )
    {
      while ( 1 )
      {
        v29 = *(_DWORD *)(v25 + 8);
        if ( !v29 )
          break;
        if ( v29 == _InterlockedCompareExchange((volatile signed __int32 *)(v25 + 8), v29 + 1, v29) )
        {
          *(_QWORD *)&v31 = *(_QWORD *)(a1 + 56);
          v26 = *(_QWORD *)(a1 + 64);
          *((_QWORD *)&v31 + 1) = v26;
          goto LABEL_31;
        }
      }
    }
    v26 = 0LL;
LABEL_31:
    sub_1800848F4(v31, &v36, (__int64)&v34);
    if ( v26 )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v26 + 8), 0xFFFFFFFF) == 1 )
      {
        (***((void (__fastcall ****)(_QWORD))&v31 + 1))(*((_QWORD *)&v31 + 1));
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v31 + 1) + 12LL), 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v31 + 1) + 8LL))(*((_QWORD *)&v31 + 1));
      }
    }
  }
  return sub_1800B1940(a1);
}
