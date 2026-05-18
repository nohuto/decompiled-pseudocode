/*
 * XREFs of sub_1800EB6E0 @ 0x1800EB6E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000FB0C @ 0x18000FB0C (sub_18000FB0C.c)
 *     sub_180011388 @ 0x180011388 (sub_180011388.c)
 *     sub_1800A91F8 @ 0x1800A91F8 (sub_1800A91F8.c)
 *     sub_1800E9DA4 @ 0x1800E9DA4 (sub_1800E9DA4.c)
 *     sub_1800E9E78 @ 0x1800E9E78 (sub_1800E9E78.c)
 *     sub_1800E9F28 @ 0x1800E9F28 (sub_1800E9F28.c)
 *     sub_1800F5CD0 @ 0x1800F5CD0 (sub_1800F5CD0.c)
 *     sub_1800F62B0 @ 0x1800F62B0 (sub_1800F62B0.c)
 *     sub_18010C4D8 @ 0x18010C4D8 (sub_18010C4D8.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x180125AC8 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 *     ??_L@YAXPEAX_K1P6AX0@Z2@Z @ 0x180126540 (--_L@YAXPEAX_K1P6AX0@Z2@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=14
void __fastcall sub_1800EB6E0(__int64 a1, __int64 *a2)
{
  volatile signed __int32 *v4; // rbx
  __int64 v5; // r9
  __int64 v6; // r8
  volatile signed __int32 *v7; // rbx
  __int64 v8; // rdx
  signed __int32 v9; // eax
  __int64 v10; // rdx
  signed __int32 v11; // eax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rcx
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // rdx
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
  volatile signed __int32 *v31; // rbx
  volatile signed __int32 *v32; // rbx
  __int128 v33; // [rsp+50h] [rbp-B0h]
  __int64 v34; // [rsp+60h] [rbp-A0h] BYREF
  volatile signed __int32 *v35; // [rsp+68h] [rbp-98h]
  _BYTE v36[24]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v37[24]; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v38[24]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v39[24]; // [rsp+B8h] [rbp-48h] BYREF
  _BYTE v40[24]; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v41; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v42[3]; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v43[3]; // [rsp+110h] [rbp+10h] BYREF
  _BYTE v44[48]; // [rsp+128h] [rbp+28h] BYREF

  v34 = 0LL;
  v35 = 0LL;
  v4 = *(volatile signed __int32 **)(a1 + 64);
  if ( v4 )
  {
    _InterlockedIncrement(v4 + 2);
    v4 = *(volatile signed __int32 **)(a1 + 64);
  }
  sub_1800A91F8(*(_QWORD *)(a1 + 56), &v34, 9);
  if ( v4 )
  {
    if ( !_InterlockedDecrement(v4 + 2) )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v4)(v4);
      if ( !_InterlockedDecrement(v4 + 3) )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v4 + 8LL))(v4);
    }
  }
  if ( v34 )
  {
    v41 = 0LL;
    `eh vector constructor iterator'(
      v44,
      0x10uLL,
      3uLL,
      (void (*)(void *))_Stl_critical_section::_Stl_critical_section,
      (void (*)(void *))unknown_libname_110);
    v5 = *a2;
    v6 = 0LL;
    v7 = 0LL;
    v8 = *(_QWORD *)(*a2 + 64);
    if ( v8 )
    {
      while ( 1 )
      {
        v9 = *(_DWORD *)(v8 + 8);
        if ( !v9 )
          break;
        if ( v9 == _InterlockedCompareExchange((volatile signed __int32 *)(v8 + 8), v9 + 1, v9) )
        {
          v6 = *(_QWORD *)(v5 + 56);
          v7 = *(volatile signed __int32 **)(v5 + 64);
          break;
        }
      }
    }
    v33 = 0LL;
    v10 = *(_QWORD *)(v6 + 80);
    if ( v10 )
    {
      while ( 1 )
      {
        v11 = *(_DWORD *)(v10 + 8);
        if ( !v11 )
          break;
        if ( v11 == _InterlockedCompareExchange((volatile signed __int32 *)(v10 + 8), v11 + 1, v11) )
        {
          v33 = *(_OWORD *)(v6 + 72);
          break;
        }
      }
    }
    if ( v7 )
    {
      if ( _InterlockedExchangeAdd(v7 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v7)(v7);
        if ( _InterlockedExchangeAdd(v7 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 8LL))(v7);
      }
    }
    memset(v43, 0, sizeof(v43));
    sub_18000FB0C(v33, v43);
    memset(v42, 0, sizeof(v42));
    sub_1800E9DA4(v33, v42);
    sub_18010C4D8((unsigned int)v43, (unsigned int)v42, a1 + 112, (unsigned int)&v41, (__int64)v44);
    memset(v40, 0, sizeof(v40));
    v12 = *(_QWORD *)(a1 + 176);
    *(_QWORD *)v40 = 0LL;
    sub_1800E9F28(v40, (_OWORD *)(v12 + 496), (_OWORD *)(v12 + 544));
    sub_1800F62B0(v34, &qword_18025BA18, v40);
    memset(v39, 0, sizeof(v39));
    v13 = *(_QWORD *)(a1 + 176);
    *(_QWORD *)v39 = 0LL;
    sub_1800E9F28(v39, (_OWORD *)(v13 + 544), (_OWORD *)(v13 + 592));
    sub_1800F62B0(v34, &qword_18025BA38, v39);
    memset(v38, 0, sizeof(v38));
    v14 = *(_QWORD *)(a1 + 176);
    *(_QWORD *)v38 = 0LL;
    sub_1800E9F28(v38, (_OWORD *)(v14 + 448), (_OWORD *)(v14 + 496));
    sub_1800F62B0(v34, &qword_18025BAB8, v38);
    memset(v37, 0, sizeof(v37));
    v15 = *(_QWORD *)(a1 + 176);
    *(_QWORD *)v37 = 0LL;
    sub_1800E9F28(v37, (_OWORD *)(v15 + 352), (_OWORD *)(v15 + 400));
    sub_1800F62B0(v34, &qword_18025BA78, v37);
    memset(v36, 0, sizeof(v36));
    sub_1800E9E78(v36, *(char **)(a1 + 176), (char *)(*(_QWORD *)(a1 + 176) + 192LL));
    sub_1800F5CD0(v34, &qword_18025BA58, v36);
    v16 = *(_QWORD *)v36;
    if ( *(_QWORD *)v36 )
    {
      v17 = (*(_QWORD *)&v36[16] - *(_QWORD *)v36) & 0xFFFFFFFFFFFFFFC0uLL;
      if ( v17 >= 0x1000 )
      {
        v18 = v17 + 39;
        v16 = *(_QWORD *)(*(_QWORD *)v36 - 8LL);
        if ( (unsigned __int64)(*(_QWORD *)v36 - v16 - 8) > 0x1F )
        {
          o__invalid_parameter_noinfo_noreturn(v16, v18);
          __debugbreak();
        }
      }
      j_j__o_free(v16);
      memset(v36, 0, sizeof(v36));
    }
    v19 = *(_QWORD *)v37;
    if ( *(_QWORD *)v37 )
    {
      v20 = (*(_QWORD *)&v37[16] - *(_QWORD *)v37) & 0xFFFFFFFFFFFFFFF0uLL;
      if ( v20 >= 0x1000 )
      {
        v21 = v20 + 39;
        v19 = *(_QWORD *)(*(_QWORD *)v37 - 8LL);
        if ( (unsigned __int64)(*(_QWORD *)v37 - v19 - 8) > 0x1F )
        {
          o__invalid_parameter_noinfo_noreturn(v19, v21);
          __debugbreak();
        }
      }
      j_j__o_free(v19);
      memset(v37, 0, sizeof(v37));
    }
    v22 = *(_QWORD *)v38;
    if ( *(_QWORD *)v38 )
    {
      v23 = (*(_QWORD *)&v38[16] - *(_QWORD *)v38) & 0xFFFFFFFFFFFFFFF0uLL;
      if ( v23 >= 0x1000 )
      {
        v24 = v23 + 39;
        v22 = *(_QWORD *)(*(_QWORD *)v38 - 8LL);
        if ( (unsigned __int64)(*(_QWORD *)v38 - v22 - 8) > 0x1F )
        {
          o__invalid_parameter_noinfo_noreturn(v22, v24);
          __debugbreak();
        }
      }
      j_j__o_free(v22);
      memset(v38, 0, sizeof(v38));
    }
    v25 = *(_QWORD *)v39;
    if ( *(_QWORD *)v39 )
    {
      v26 = (*(_QWORD *)&v39[16] - *(_QWORD *)v39) & 0xFFFFFFFFFFFFFFF0uLL;
      if ( v26 >= 0x1000 )
      {
        v27 = v26 + 39;
        v25 = *(_QWORD *)(*(_QWORD *)v39 - 8LL);
        if ( (unsigned __int64)(*(_QWORD *)v39 - v25 - 8) > 0x1F )
        {
          o__invalid_parameter_noinfo_noreturn(v25, v27);
          __debugbreak();
        }
      }
      j_j__o_free(v25);
      memset(v39, 0, sizeof(v39));
    }
    v28 = *(_QWORD *)v40;
    if ( *(_QWORD *)v40 )
    {
      v29 = (*(_QWORD *)&v40[16] - *(_QWORD *)v40) & 0xFFFFFFFFFFFFFFF0uLL;
      if ( v29 >= 0x1000 )
      {
        v30 = v29 + 39;
        v28 = *(_QWORD *)(*(_QWORD *)v40 - 8LL);
        if ( (unsigned __int64)(*(_QWORD *)v40 - v28 - 8) > 0x1F )
        {
          o__invalid_parameter_noinfo_noreturn(v28, v30);
          __debugbreak();
        }
      }
      j_j__o_free(v28);
      memset(v40, 0, sizeof(v40));
    }
    sub_180011388(v42);
    sub_180011388(v43);
    if ( *((_QWORD *)&v33 + 1) )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v33 + 1) + 8LL), 0xFFFFFFFF) == 1 )
      {
        (***((void (__fastcall ****)(_QWORD))&v33 + 1))(*((_QWORD *)&v33 + 1));
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v33 + 1) + 12LL), 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v33 + 1) + 8LL))(*((_QWORD *)&v33 + 1));
      }
    }
    `eh vector destructor iterator'(v44, 0x10uLL, 3uLL, (void (*)(void *))unknown_libname_110);
    v31 = (volatile signed __int32 *)*((_QWORD *)&v41 + 1);
    if ( *((_QWORD *)&v41 + 1) )
    {
      if ( !_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v41 + 1) + 8LL)) )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v31)(v31);
        if ( !_InterlockedDecrement(v31 + 3) )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v31 + 8LL))(v31);
      }
    }
  }
  v32 = v35;
  if ( v35 && !_InterlockedDecrement(v35 + 2) )
  {
    (**(void (__fastcall ***)(volatile signed __int32 *))v32)(v32);
    if ( !_InterlockedDecrement(v32 + 3) )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v32 + 8LL))(v32);
  }
}
