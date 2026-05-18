/*
 * XREFs of sub_1800A7C0C @ 0x1800A7C0C
 * Callers:
 *     sub_1800A5A90 @ 0x1800A5A90 (sub_1800A5A90.c)
 * Callees:
 *     sub_180069CC0 @ 0x180069CC0 (sub_180069CC0.c)
 *     sub_1800A6058 @ 0x1800A6058 (sub_1800A6058.c)
 *     sub_1800AA044 @ 0x1800AA044 (sub_1800AA044.c)
 *     sub_1800AA1DC @ 0x1800AA1DC (sub_1800AA1DC.c)
 *     sub_18011E090 @ 0x18011E090 (sub_18011E090.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x180125AC8 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800A7C0C(__int64 a1)
{
  __int64 v2; // rcx
  unsigned __int64 v3; // rdx
  unsigned __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // rcx
  unsigned __int64 v7; // rdx
  __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rcx
  volatile signed __int32 *v13; // rbx
  volatile signed __int32 *v14; // rbx
  __int64 result; // rax
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // rdx
  __int64 v18; // rcx
  unsigned __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // rcx
  volatile signed __int32 *v22; // rcx
  _BYTE v23[8]; // [rsp+38h] [rbp-40h] BYREF
  _BYTE v24[8]; // [rsp+40h] [rbp-38h] BYREF
  __int64 *v25; // [rsp+48h] [rbp-30h] BYREF
  __int64 *v26; // [rsp+50h] [rbp-28h]
  __int64 *v27; // [rsp+58h] [rbp-20h]
  __int64 *v28; // [rsp+60h] [rbp-18h] BYREF

  v2 = *(_QWORD *)(a1 + 528);
  if ( v2 )
  {
    v3 = (*(_QWORD *)(a1 + 544) - v2) & 0xFFFFFFFFFFFFFFFCuLL;
    if ( v3 >= 0x1000 )
    {
      v4 = v3 + 39;
      v5 = *(_QWORD *)(v2 - 8);
      v6 = v2 - v5;
      if ( (unsigned __int64)(v6 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v6, v4);
        goto LABEL_29;
      }
      v2 = v5;
    }
    j_j__o_free(v2);
    *(_QWORD *)(a1 + 528) = 0LL;
    *(_QWORD *)(a1 + 536) = 0LL;
    *(_QWORD *)(a1 + 544) = 0LL;
  }
  v7 = *(_QWORD *)(a1 + 520);
  if ( v7 >= 0x10 )
  {
    v8 = *(_QWORD *)(a1 + 496);
    v9 = v7 + 1;
    if ( v9 < 0x1000 )
    {
LABEL_10:
      j_j__o_free(v8);
      goto LABEL_11;
    }
    v10 = v9 + 39;
    v11 = *(_QWORD *)(v8 - 8);
    v12 = v8 - v11;
    if ( (unsigned __int64)(v12 - 8) <= 0x1F )
    {
      v8 = v11;
      goto LABEL_10;
    }
LABEL_29:
    o__invalid_parameter_noinfo_noreturn(v12, v10);
    goto LABEL_30;
  }
LABEL_11:
  *(_QWORD *)(a1 + 512) = 0LL;
  *(_QWORD *)(a1 + 520) = 15LL;
  *(_BYTE *)(a1 + 496) = 0;
  sub_1800AA1DC(a1 + 480, v23, **(_QWORD **)(a1 + 480), *(_QWORD *)(a1 + 480), -2LL);
  j_j__o_free(*(_QWORD *)(a1 + 480));
  sub_18011E090(a1 + 472);
  v13 = *(volatile signed __int32 **)(a1 + 464);
  if ( v13 )
  {
    if ( _InterlockedExchangeAdd(v13 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v13)(v13);
      if ( _InterlockedExchangeAdd(v13 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 8LL))(v13);
    }
  }
  v14 = *(volatile signed __int32 **)(a1 + 448);
  if ( v14 )
  {
    if ( _InterlockedExchangeAdd(v14 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v14)(v14);
      if ( _InterlockedExchangeAdd(v14 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 8LL))(v14);
    }
  }
  sub_1800AA044(a1 + 416, v24, **(_QWORD **)(a1 + 416));
  j_j__o_free(*(_QWORD *)(a1 + 416));
  `eh vector destructor iterator'((void *)(a1 + 256), 0x10uLL, 0xAuLL, (void (*)(void *))unknown_libname_110);
  `eh vector destructor iterator'((void *)(a1 + 96), 0x10uLL, 0xAuLL, (void (*)(void *))unknown_libname_110);
  sub_180069CC0((__int64 ***)(a1 + 80), &v25, **(__int64 ***)(a1 + 80), *(__int64 **)(a1 + 80));
  j_j__o_free(*(_QWORD *)(a1 + 80));
  v26 = *(__int64 **)(a1 + 48);
  v27 = (__int64 *)*v26;
  sub_1800A6058((__int64 ***)(a1 + 48), &v28, v27, v26);
  result = j_j__o_free(*(_QWORD *)(a1 + 48));
  v16 = *(_QWORD *)(a1 + 40);
  if ( v16 >= 0x10 )
  {
    v17 = v16 + 1;
    v18 = *(_QWORD *)(a1 + 16);
    if ( v17 < 0x1000 )
    {
LABEL_23:
      result = j_j__o_free(v18);
      goto LABEL_24;
    }
    v19 = v17 + 39;
    v20 = *(_QWORD *)(v18 - 8);
    v21 = v18 - v20;
    if ( (unsigned __int64)(v21 - 8) <= 0x1F )
    {
      v18 = v20;
      goto LABEL_23;
    }
LABEL_30:
    o__invalid_parameter_noinfo_noreturn(v21, v19);
    JUMPOUT(0x1800A7EFFLL);
  }
LABEL_24:
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 15LL;
  *(_BYTE *)(a1 + 16) = 0;
  v22 = *(volatile signed __int32 **)(a1 + 8);
  if ( v22 )
  {
    result = (unsigned int)_InterlockedDecrement(v22 + 3);
    if ( !(_DWORD)result )
      return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v22 + 8LL))(v22);
  }
  return result;
}
