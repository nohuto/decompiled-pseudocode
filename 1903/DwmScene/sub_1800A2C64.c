/*
 * XREFs of sub_1800A2C64 @ 0x1800A2C64
 * Callers:
 *     sub_18007DF80 @ 0x18007DF80 (sub_18007DF80.c)
 * Callees:
 *     sub_180026420 @ 0x180026420 (sub_180026420.c)
 *     sub_180069CC0 @ 0x180069CC0 (sub_180069CC0.c)
 *     sub_1800A5DF8 @ 0x1800A5DF8 (sub_1800A5DF8.c)
 *     sub_1800A5F28 @ 0x1800A5F28 (sub_1800A5F28.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x180125AC8 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800A2C64(__int64 a1)
{
  __int64 v2; // rcx
  unsigned __int64 v3; // rdx
  unsigned __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // rcx
  volatile signed __int32 *v7; // rbx
  volatile signed __int32 *v8; // rbx
  unsigned __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // rcx
  unsigned __int64 v15; // rdx
  __int64 v16; // rcx
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // rcx
  __int64 result; // rax
  volatile signed __int32 *v22; // rcx
  __int64 *v23; // [rsp+28h] [rbp-50h] BYREF
  _BYTE v24[8]; // [rsp+30h] [rbp-48h] BYREF
  _BYTE v25[8]; // [rsp+38h] [rbp-40h] BYREF
  _BYTE v26[8]; // [rsp+40h] [rbp-38h] BYREF
  __int64 *v27; // [rsp+48h] [rbp-30h] BYREF
  __int64 *v28; // [rsp+50h] [rbp-28h] BYREF

  v2 = *(_QWORD *)(a1 + 18664);
  if ( v2 )
  {
    v3 = (*(_QWORD *)(a1 + 18680) - v2) & 0xFFFFFFFFFFFFFFFCuLL;
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
    *(_QWORD *)(a1 + 18664) = 0LL;
    *(_QWORD *)(a1 + 18672) = 0LL;
    *(_QWORD *)(a1 + 18680) = 0LL;
  }
  v7 = *(volatile signed __int32 **)(a1 + 18656);
  if ( v7 )
  {
    if ( _InterlockedExchangeAdd(v7 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v7)(v7);
      if ( _InterlockedExchangeAdd(v7 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 8LL))(v7);
    }
  }
  v8 = *(volatile signed __int32 **)(a1 + 18640);
  if ( v8 )
  {
    if ( _InterlockedExchangeAdd(v8 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v8)(v8);
      if ( _InterlockedExchangeAdd(v8 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v8 + 8LL))(v8);
    }
  }
  sub_180026420((__int64 ***)(a1 + 18608), &v23, **(__int64 ***)(a1 + 18608), *(__int64 **)(a1 + 18608));
  j_j__o_free(*(_QWORD *)(a1 + 18608));
  sub_1800A5F28(a1 + 18592, v24, **(_QWORD **)(a1 + 18592));
  j_j__o_free(*(_QWORD *)(a1 + 18592));
  sub_1800A5DF8(a1 + 18576, v25, **(_QWORD **)(a1 + 18576));
  j_j__o_free(*(_QWORD *)(a1 + 18576));
  sub_1800A5F28(a1 + 18560, v26, **(_QWORD **)(a1 + 18560));
  j_j__o_free(*(_QWORD *)(a1 + 18560));
  v9 = *(_QWORD *)(a1 + 18552);
  if ( v9 >= 0x10 )
  {
    v10 = *(_QWORD *)(a1 + 18528);
    v11 = v9 + 1;
    if ( v11 < 0x1000 )
    {
LABEL_18:
      j_j__o_free(v10);
      goto LABEL_19;
    }
    v12 = v11 + 39;
    v13 = *(_QWORD *)(v10 - 8);
    v14 = v10 - v13;
    if ( (unsigned __int64)(v14 - 8) <= 0x1F )
    {
      v10 = v13;
      goto LABEL_18;
    }
LABEL_29:
    o__invalid_parameter_noinfo_noreturn(v14, v12);
    goto LABEL_30;
  }
LABEL_19:
  *(_QWORD *)(a1 + 18544) = 0LL;
  *(_QWORD *)(a1 + 18552) = 15LL;
  *(_BYTE *)(a1 + 18528) = 0;
  v15 = *(_QWORD *)(a1 + 18520);
  if ( v15 < 0x10 )
    goto LABEL_24;
  v16 = *(_QWORD *)(a1 + 18496);
  v17 = v15 + 1;
  if ( v17 >= 0x1000 )
  {
    v18 = v17 + 39;
    v19 = *(_QWORD *)(v16 - 8);
    v20 = v16 - v19;
    if ( (unsigned __int64)(v20 - 8) <= 0x1F )
    {
      v16 = v19;
      goto LABEL_23;
    }
LABEL_30:
    o__invalid_parameter_noinfo_noreturn(v20, v18);
    JUMPOUT(0x1800A2F92LL);
  }
LABEL_23:
  j_j__o_free(v16);
LABEL_24:
  *(_QWORD *)(a1 + 18512) = 0LL;
  *(_QWORD *)(a1 + 18520) = 15LL;
  *(_BYTE *)(a1 + 18496) = 0;
  `eh vector destructor iterator'(
    (void *)(a1 + 2104),
    0x20uLL,
    0x200uLL,
    (void (*)(void *))std::string::_Tidy_deallocate);
  sub_180069CC0((__int64 ***)(a1 + 2088), &v27, **(__int64 ***)(a1 + 2088), *(__int64 **)(a1 + 2088));
  j_j__o_free(*(_QWORD *)(a1 + 2088));
  `eh vector destructor iterator'((void *)(a1 + 32), 0x20uLL, 0x40uLL, (void (*)(void *))std::string::_Tidy_deallocate);
  sub_180069CC0((__int64 ***)(a1 + 16), &v28, **(__int64 ***)(a1 + 16), *(__int64 **)(a1 + 16));
  result = j_j__o_free(*(_QWORD *)(a1 + 16));
  v22 = *(volatile signed __int32 **)(a1 + 8);
  if ( v22 )
  {
    result = (unsigned int)_InterlockedDecrement(v22 + 3);
    if ( !(_DWORD)result )
      return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v22 + 8LL))(v22);
  }
  return result;
}
