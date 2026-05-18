/*
 * XREFs of sub_1800A7654 @ 0x1800A7654
 * Callers:
 *     sub_18009FA80 @ 0x18009FA80 (sub_18009FA80.c)
 * Callees:
 *     sub_18000F3F4 @ 0x18000F3F4 (sub_18000F3F4.c)
 *     sub_18002B69C @ 0x18002B69C (sub_18002B69C.c)
 *     sub_18002B6D4 @ 0x18002B6D4 (sub_18002B6D4.c)
 *     sub_18006DDDC @ 0x18006DDDC (sub_18006DDDC.c)
 *     sub_1800A73C8 @ 0x1800A73C8 (sub_1800A73C8.c)
 *     sub_18011E078 @ 0x18011E078 (sub_18011E078.c)
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 *     ??_L@YAXPEAX_K1P6AX0@Z2@Z @ 0x180126540 (--_L@YAXPEAX_K1P6AX0@Z2@Z.c)
 *     memset @ 0x1801271C8 (memset.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=17
__int64 __fastcall sub_1800A7654(__int64 a1, _QWORD *a2, _QWORD *a3, _QWORD *a4)
{
  _QWORD *v8; // rcx
  __int64 v9; // rax
  volatile signed __int32 *v10; // rcx
  __int64 *v11; // rdx
  char v12; // al
  volatile signed __int32 *v13; // rbx
  volatile signed __int32 *v14; // rbx
  unsigned __int64 v15; // rdx
  __int64 v16; // rcx
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // rcx
  volatile signed __int32 *v21; // rbx
  volatile signed __int32 *v22; // rbx
  char v24; // [rsp+30h] [rbp-49h]
  __int64 v25; // [rsp+40h] [rbp-39h] BYREF
  volatile signed __int32 *v26; // [rsp+48h] [rbp-31h]
  __int64 v27; // [rsp+50h] [rbp-29h]
  __int64 v28; // [rsp+58h] [rbp-21h]
  _QWORD *v29; // [rsp+60h] [rbp-19h]
  _QWORD *v30; // [rsp+68h] [rbp-11h]
  __int64 v31; // [rsp+70h] [rbp-9h] BYREF
  volatile signed __int32 *v32; // [rsp+78h] [rbp-1h]
  _QWORD *v33; // [rsp+80h] [rbp+7h]

  v27 = -2LL;
  v28 = a1;
  v33 = a2;
  v29 = a3;
  v30 = a4;
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  v8 = (_QWORD *)(a1 + 16);
  v8[2] = 0LL;
  v8[3] = 0LL;
  sub_18000F3F4(v8, (__int64)a2);
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_QWORD *)(a1 + 48) = sub_18006DDDC();
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_QWORD *)(a1 + 80) = sub_18002B6D4();
  memset((void *)(a1 + 96), 0, 0xA0uLL);
  `eh vector constructor iterator'(
    (void *)(a1 + 96),
    0x10uLL,
    0xAuLL,
    (void (*)(void *))_Stl_critical_section::_Stl_critical_section,
    (void (*)(void *))unknown_libname_110);
  memset((void *)(a1 + 256), 0, 0xA0uLL);
  `eh vector constructor iterator'(
    (void *)(a1 + 256),
    0x10uLL,
    0xAuLL,
    (void (*)(void *))_Stl_critical_section::_Stl_critical_section,
    (void (*)(void *))unknown_libname_110);
  *(_QWORD *)(a1 + 416) = 0LL;
  *(_QWORD *)(a1 + 424) = 0LL;
  *(_QWORD *)(a1 + 416) = sub_18002B6D4();
  *(_DWORD *)(a1 + 432) = 0;
  *(_QWORD *)(a1 + 440) = 0LL;
  *(_QWORD *)(a1 + 448) = 0LL;
  v9 = a3[1];
  if ( v9 )
    _InterlockedIncrement((volatile signed __int32 *)(v9 + 8));
  *(_QWORD *)(a1 + 440) = *a3;
  *(_QWORD *)(a1 + 448) = a3[1];
  if ( *a4 )
  {
    v10 = (volatile signed __int32 *)a4[1];
    if ( v10 )
    {
      _InterlockedIncrement(v10 + 2);
      v10 = (volatile signed __int32 *)a4[1];
    }
    v25 = *a4;
    v26 = v10;
    v11 = &v25;
    v12 = 1;
  }
  else
  {
    v11 = sub_1800A73C8(&v31, "<NullExtension>");
    v12 = 2;
  }
  *(_QWORD *)(a1 + 456) = 0LL;
  *(_QWORD *)(a1 + 464) = 0LL;
  *(_QWORD *)(a1 + 456) = *v11;
  *(_QWORD *)(a1 + 464) = v11[1];
  *v11 = 0LL;
  v11[1] = 0LL;
  if ( (v12 & 2) != 0 )
  {
    v12 &= ~2u;
    v24 = v12;
    v13 = v32;
    if ( v32 )
    {
      if ( _InterlockedExchangeAdd(v32 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v13)(v13);
        if ( _InterlockedExchangeAdd(v13 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 8LL))(v13);
      }
      v12 = v24;
    }
  }
  if ( (v12 & 1) != 0 )
  {
    if ( v26 )
    {
      if ( _InterlockedExchangeAdd(v26 + 2, 0xFFFFFFFF) == 1 )
      {
        v14 = v26;
        (**(void (__fastcall ***)(volatile signed __int32 *))v26)(v26);
        if ( _InterlockedExchangeAdd(v14 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v26 + 8LL))(v26);
      }
    }
  }
  sub_18011E078(a1 + 472);
  *(_QWORD *)(a1 + 480) = 0LL;
  *(_QWORD *)(a1 + 488) = 0LL;
  *(_QWORD *)(a1 + 480) = sub_18002B69C();
  *(_QWORD *)(a1 + 512) = 0LL;
  *(_QWORD *)(a1 + 520) = 15LL;
  *(_BYTE *)(a1 + 496) = 0;
  *(_QWORD *)(a1 + 528) = 0LL;
  *(_QWORD *)(a1 + 536) = 0LL;
  *(_QWORD *)(a1 + 544) = 0LL;
  *(_QWORD *)(a1 + 552) = 0LL;
  v15 = a2[3];
  if ( v15 >= 0x10 )
  {
    v16 = *a2;
    v17 = v15 + 1;
    if ( v17 >= 0x1000 )
    {
      v18 = v17 + 39;
      v19 = *(_QWORD *)(v16 - 8);
      v20 = v16 - v19;
      if ( (unsigned __int64)(v20 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v20, v18);
        JUMPOUT(0x1800A7A32LL);
      }
      v16 = v19;
    }
    j_j__o_free(v16);
  }
  a2[2] = 0LL;
  a2[3] = 15LL;
  *(_BYTE *)a2 = 0;
  v21 = (volatile signed __int32 *)a3[1];
  if ( v21 )
  {
    if ( _InterlockedExchangeAdd(v21 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v21)(v21);
      if ( _InterlockedExchangeAdd(v21 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v21 + 8LL))(v21);
    }
  }
  v22 = (volatile signed __int32 *)a4[1];
  if ( v22 )
  {
    if ( _InterlockedExchangeAdd(v22 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v22)(v22);
      if ( _InterlockedExchangeAdd(v22 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v22 + 8LL))(v22);
    }
  }
  return a1;
}
