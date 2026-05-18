/*
 * XREFs of sub_1800EF730 @ 0x1800EF730
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000FB5C @ 0x18000FB5C (sub_18000FB5C.c)
 *     sub_1800113D8 @ 0x1800113D8 (sub_1800113D8.c)
 *     sub_1800A9308 @ 0x1800A9308 (sub_1800A9308.c)
 *     sub_1800E9EB4 @ 0x1800E9EB4 (sub_1800E9EB4.c)
 *     sub_1800E9F88 @ 0x1800E9F88 (sub_1800E9F88.c)
 *     sub_1800EA038 @ 0x1800EA038 (sub_1800EA038.c)
 *     sub_1800ED974 @ 0x1800ED974 (sub_1800ED974.c)
 *     sub_1800F5DE0 @ 0x1800F5DE0 (sub_1800F5DE0.c)
 *     sub_1800F638C @ 0x1800F638C (sub_1800F638C.c)
 *     sub_1800F63C0 @ 0x1800F63C0 (sub_1800F63C0.c)
 *     sub_18010C5E8 @ 0x18010C5E8 (sub_18010C5E8.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x180125BD8 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 *     ??_L@YAXPEAX_K1P6AX0@Z2@Z @ 0x180126650 (--_L@YAXPEAX_K1P6AX0@Z2@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=15
void __fastcall sub_1800EF730(__int64 a1, __int64 *a2)
{
  __int64 v4; // r9
  __int64 v5; // r8
  volatile signed __int32 *v6; // rbx
  __int64 v7; // rdx
  signed __int32 v8; // eax
  __int64 v9; // rdx
  signed __int32 v10; // eax
  volatile signed __int32 *v11; // rbx
  __int64 v12; // rbx
  __int64 v13; // rbx
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rcx
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // rdx
  __int64 v22; // rcx
  unsigned __int64 v23; // rdx
  unsigned __int64 v24; // rdx
  __int64 v25; // rcx
  unsigned __int64 v26; // rdx
  unsigned __int64 v27; // rdx
  __int64 v28; // rcx
  unsigned __int64 v29; // rdx
  unsigned __int64 v30; // rdx
  __int64 v31; // rcx
  unsigned __int64 v32; // rdx
  unsigned __int64 v33; // rdx
  __int64 v34; // rcx
  unsigned __int64 v35; // rdx
  unsigned __int64 v36; // rdx
  volatile signed __int32 *v37; // rbx
  __int64 v38; // rbx
  volatile signed __int32 *v39; // rbx
  __m128 v40; // [rsp+68h] [rbp-A0h] BYREF
  __m128 v41; // [rsp+78h] [rbp-90h] BYREF
  __int64 v42; // [rsp+88h] [rbp-80h] BYREF
  volatile signed __int32 *v43; // [rsp+90h] [rbp-78h]
  __int128 v44; // [rsp+98h] [rbp-70h]
  _BYTE v45[24]; // [rsp+A8h] [rbp-60h] BYREF
  _BYTE v46[24]; // [rsp+C0h] [rbp-48h] BYREF
  _BYTE v47[24]; // [rsp+D8h] [rbp-30h] BYREF
  _BYTE v48[24]; // [rsp+F0h] [rbp-18h] BYREF
  _BYTE v49[24]; // [rsp+108h] [rbp+0h] BYREF
  __int64 v50; // [rsp+120h] [rbp+18h] BYREF
  __int128 v51; // [rsp+128h] [rbp+20h]
  __int128 v52; // [rsp+138h] [rbp+30h] BYREF
  __int64 v53[3]; // [rsp+148h] [rbp+40h] BYREF
  __int64 v54[3]; // [rsp+160h] [rbp+58h] BYREF
  _BYTE v55[48]; // [rsp+178h] [rbp+70h] BYREF

  v52 = 0LL;
  `eh vector constructor iterator'(
    v55,
    0x10uLL,
    3uLL,
    (void (*)(void *))_Stl_critical_section::_Stl_critical_section,
    (void (*)(void *))unknown_libname_110);
  v4 = *a2;
  v5 = 0LL;
  v6 = 0LL;
  v7 = *(_QWORD *)(v4 + 64);
  if ( v7 )
  {
    while ( 1 )
    {
      v8 = *(_DWORD *)(v7 + 8);
      if ( !v8 )
        break;
      if ( v8 == _InterlockedCompareExchange((volatile signed __int32 *)(v7 + 8), v8 + 1, v8) )
      {
        v5 = *(_QWORD *)(v4 + 56);
        v6 = *(volatile signed __int32 **)(v4 + 64);
        break;
      }
    }
  }
  v44 = 0LL;
  v9 = *(_QWORD *)(v5 + 80);
  if ( v9 )
  {
    while ( 1 )
    {
      v10 = *(_DWORD *)(v9 + 8);
      if ( !v10 )
        break;
      if ( v10 == _InterlockedCompareExchange((volatile signed __int32 *)(v9 + 8), v10 + 1, v10) )
      {
        v44 = *(_OWORD *)(v5 + 72);
        break;
      }
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
  memset(v54, 0, sizeof(v54));
  sub_18000FB5C(v44, v54);
  memset(v53, 0, sizeof(v53));
  sub_1800E9EB4(v44, v53);
  sub_18010C5E8((unsigned int)v54, (unsigned int)v53, a1 + 152, (unsigned int)&v52, (__int64)v55);
  v42 = 0LL;
  v43 = 0LL;
  v11 = *(volatile signed __int32 **)(a1 + 64);
  if ( v11 )
  {
    _InterlockedIncrement(v11 + 2);
    v11 = *(volatile signed __int32 **)(a1 + 64);
  }
  sub_1800A9308(*(_QWORD *)(a1 + 56), &v42, 9);
  if ( v11 )
  {
    if ( _InterlockedExchangeAdd(v11 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v11)(v11);
      if ( _InterlockedExchangeAdd(v11 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 8LL))(v11);
    }
  }
  if ( v42 )
  {
    sub_1800F638C(v42);
    sub_1800F638C(v42);
    sub_1800F638C(v42);
    v12 = v42;
    sub_1800ED974(&v40, (__m128 *)(*(_QWORD *)(a1 + 216) + 240LL), (__m128 *)(*(_QWORD *)(a1 + 216) + 272LL));
    sub_1800F638C(v12);
    v13 = v42;
    sub_1800ED974(&v41, (__m128 *)(*(_QWORD *)(a1 + 216) + 256LL), (__m128 *)(*(_QWORD *)(a1 + 216) + 272LL));
    sub_1800F638C(v13);
    sub_1800F638C(v42);
    sub_1800F638C(v42);
    sub_1800F638C(v42);
    sub_1800F638C(v42);
    if ( *(_QWORD *)(a1 + 216) == -336LL )
      wassert(L"pSource", L"d:\\os\\public\\amd64fre\\sdk\\inc\\DirectXMathConvert.inl", 0x2A5u);
    sub_1800F638C(v42);
    v50 = 0LL;
    v14 = *(_QWORD *)(a1 + 216);
    v50 = 0LL;
    v51 = 0LL;
    sub_1800EA038(&v50, (_OWORD *)(v14 + 496), (_OWORD *)(v14 + 544));
    sub_1800F63C0(v42, &qword_18025CA18, &v50);
    memset(v49, 0, sizeof(v49));
    v15 = *(_QWORD *)(a1 + 216);
    *(_QWORD *)v49 = 0LL;
    sub_1800EA038(v49, (_OWORD *)(v15 + 544), (_OWORD *)(v15 + 592));
    sub_1800F63C0(v42, &qword_18025CA38, v49);
    memset(v48, 0, sizeof(v48));
    v16 = *(_QWORD *)(a1 + 216);
    *(_QWORD *)v48 = 0LL;
    sub_1800EA038(v48, (_OWORD *)(v16 + 448), (_OWORD *)(v16 + 496));
    sub_1800F63C0(v42, &qword_18025CAB8, v48);
    memset(v47, 0, sizeof(v47));
    v17 = *(_QWORD *)(a1 + 216);
    *(_QWORD *)v47 = 0LL;
    sub_1800EA038(v47, (_OWORD *)(v17 + 400), (_OWORD *)(v17 + 448));
    sub_1800F63C0(v42, &qword_18025CA98, v47);
    memset(v46, 0, sizeof(v46));
    v18 = *(_QWORD *)(a1 + 216);
    *(_QWORD *)v46 = 0LL;
    sub_1800EA038(v46, (_OWORD *)(v18 + 352), (_OWORD *)(v18 + 400));
    sub_1800F63C0(v42, &qword_18025CA78, v46);
    memset(v45, 0, sizeof(v45));
    sub_1800E9F88(v45, *(char **)(a1 + 216), (char *)(*(_QWORD *)(a1 + 216) + 192LL));
    sub_1800F5DE0(v42, &qword_18025CA58, v45);
    v19 = *(_QWORD *)v45;
    if ( *(_QWORD *)v45 )
    {
      v20 = (*(_QWORD *)&v45[16] - *(_QWORD *)v45) & 0xFFFFFFFFFFFFFFC0uLL;
      if ( v20 >= 0x1000 )
      {
        v21 = v20 + 39;
        v19 = *(_QWORD *)(*(_QWORD *)v45 - 8LL);
        if ( (unsigned __int64)(*(_QWORD *)v45 - v19 - 8) > 0x1F )
        {
          o__invalid_parameter_noinfo_noreturn(v19, v21);
          __debugbreak();
        }
      }
      j_j__o_free(v19);
      memset(v45, 0, sizeof(v45));
    }
    v22 = *(_QWORD *)v46;
    if ( *(_QWORD *)v46 )
    {
      v23 = (*(_QWORD *)&v46[16] - *(_QWORD *)v46) & 0xFFFFFFFFFFFFFFF0uLL;
      if ( v23 >= 0x1000 )
      {
        v24 = v23 + 39;
        v22 = *(_QWORD *)(*(_QWORD *)v46 - 8LL);
        if ( (unsigned __int64)(*(_QWORD *)v46 - v22 - 8) > 0x1F )
        {
          o__invalid_parameter_noinfo_noreturn(v22, v24);
          __debugbreak();
        }
      }
      j_j__o_free(v22);
      memset(v46, 0, sizeof(v46));
    }
    v25 = *(_QWORD *)v47;
    if ( *(_QWORD *)v47 )
    {
      v26 = (*(_QWORD *)&v47[16] - *(_QWORD *)v47) & 0xFFFFFFFFFFFFFFF0uLL;
      if ( v26 >= 0x1000 )
      {
        v27 = v26 + 39;
        v25 = *(_QWORD *)(*(_QWORD *)v47 - 8LL);
        if ( (unsigned __int64)(*(_QWORD *)v47 - v25 - 8) > 0x1F )
        {
          o__invalid_parameter_noinfo_noreturn(v25, v27);
          __debugbreak();
        }
      }
      j_j__o_free(v25);
      memset(v47, 0, sizeof(v47));
    }
    v28 = *(_QWORD *)v48;
    if ( *(_QWORD *)v48 )
    {
      v29 = (*(_QWORD *)&v48[16] - *(_QWORD *)v48) & 0xFFFFFFFFFFFFFFF0uLL;
      if ( v29 >= 0x1000 )
      {
        v30 = v29 + 39;
        v28 = *(_QWORD *)(*(_QWORD *)v48 - 8LL);
        if ( (unsigned __int64)(*(_QWORD *)v48 - v28 - 8) > 0x1F )
        {
          o__invalid_parameter_noinfo_noreturn(v28, v30);
          __debugbreak();
        }
      }
      j_j__o_free(v28);
      memset(v48, 0, sizeof(v48));
    }
    v31 = *(_QWORD *)v49;
    if ( *(_QWORD *)v49 )
    {
      v32 = (*(_QWORD *)&v49[16] - *(_QWORD *)v49) & 0xFFFFFFFFFFFFFFF0uLL;
      if ( v32 >= 0x1000 )
      {
        v33 = v32 + 39;
        v31 = *(_QWORD *)(*(_QWORD *)v49 - 8LL);
        if ( (unsigned __int64)(*(_QWORD *)v49 - v31 - 8) > 0x1F )
        {
          o__invalid_parameter_noinfo_noreturn(v31, v33);
          __debugbreak();
        }
      }
      j_j__o_free(v31);
      memset(v49, 0, sizeof(v49));
    }
    v34 = v50;
    if ( v50 )
    {
      v35 = (*((_QWORD *)&v51 + 1) - v50) & 0xFFFFFFFFFFFFFFF0uLL;
      if ( v35 >= 0x1000 )
      {
        v36 = v35 + 39;
        v34 = *(_QWORD *)(v50 - 8);
        if ( (unsigned __int64)(v50 - v34 - 8) > 0x1F )
        {
          o__invalid_parameter_noinfo_noreturn(v34, v36);
          __debugbreak();
        }
      }
      j_j__o_free(v34);
    }
  }
  v37 = v43;
  if ( v43 )
  {
    if ( _InterlockedExchangeAdd(v43 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v37)(v37);
      if ( _InterlockedExchangeAdd(v37 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v37 + 8LL))(v37);
    }
  }
  sub_1800113D8(v53);
  sub_1800113D8(v54);
  if ( *((_QWORD *)&v44 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v44 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      v38 = *((_QWORD *)&v44 + 1);
      (***((void (__fastcall ****)(_QWORD))&v44 + 1))(*((_QWORD *)&v44 + 1));
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v38 + 12), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v44 + 1) + 8LL))(*((_QWORD *)&v44 + 1));
    }
  }
  `eh vector destructor iterator'(v55, 0x10uLL, 3uLL, (void (*)(void *))unknown_libname_110);
  v39 = (volatile signed __int32 *)*((_QWORD *)&v52 + 1);
  if ( *((_QWORD *)&v52 + 1) && !_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v52 + 1) + 8LL)) )
  {
    (**(void (__fastcall ***)(volatile signed __int32 *))v39)(v39);
    if ( !_InterlockedDecrement(v39 + 3) )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v39 + 8LL))(v39);
  }
}
