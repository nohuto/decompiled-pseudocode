/*
 * XREFs of sub_180109218 @ 0x180109218
 * Callers:
 *     sub_1800D55A0 @ 0x1800D55A0 (sub_1800D55A0.c)
 * Callees:
 *     unknown_libname_116 @ 0x18001146C (unknown_libname_116.c)
 *     sub_1800E0FAC @ 0x1800E0FAC (sub_1800E0FAC.c)
 *     sub_1801082F8 @ 0x1801082F8 (sub_1801082F8.c)
 *     sub_180108A44 @ 0x180108A44 (sub_180108A44.c)
 *     sub_180108D30 @ 0x180108D30 (sub_180108D30.c)
 *     sub_18011DE0C @ 0x18011DE0C (sub_18011DE0C.c)
 *     sub_18011E1A0 @ 0x18011E1A0 (sub_18011E1A0.c)
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_180109218(_QWORD *a1, __int64 *a2, _QWORD *a3)
{
  __int64 v6; // rcx
  __int64 v7; // rcx
  _QWORD *v8; // rax
  __int64 v9; // r14
  unsigned __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // rcx
  volatile signed __int32 *v16; // rbx
  __int128 v18; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v19; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v20; // [rsp+50h] [rbp-B0h]
  _QWORD *v21; // [rsp+58h] [rbp-A8h]
  __int64 v22; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v23[8]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v24[24]; // [rsp+78h] [rbp-88h] BYREF
  _QWORD v25[23]; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v26[24]; // [rsp+148h] [rbp+48h] BYREF
  __int64 v27[4]; // [rsp+208h] [rbp+108h] BYREF

  v20 = -2LL;
  v26[23] = a2;
  v21 = a3;
  sub_18011DE0C(v27);
  (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)*a3 + 64LL))(*a3, v27);
  v18 = 0LL;
  v6 = a1[113];
  if ( v6 )
  {
    _InterlockedAdd((volatile signed __int32 *)(v6 + 8), 1u);
    v6 = a1[113];
  }
  *(_QWORD *)&v18 = a1[112];
  *((_QWORD *)&v18 + 1) = v6;
  v19 = 0LL;
  v7 = a3[1];
  if ( v7 )
  {
    _InterlockedAdd((volatile signed __int32 *)(v7 + 8), 1u);
    v7 = a3[1];
  }
  *(_QWORD *)&v19 = *a3;
  *((_QWORD *)&v19 + 1) = v7;
  sub_180108D30((__int64)v23, 1, &v19, &v18, a1[114]);
  v8 = (_QWORD *)sub_1801082F8((__int64)(a1 + 110), (__int64)a2);
  sub_180108A44(a1 + 110, (__int64)&v22, 0, v8 + 4, v8);
  sub_1800E0FAC(v26);
  sub_1800E0FAC(v25);
  sub_18011E1A0(v24);
  v9 = v22;
  unknown_libname_116(v27);
  v10 = a2[3];
  if ( v10 >= 0x10 )
  {
    v11 = *a2;
    v12 = v10 + 1;
    if ( v12 >= 0x1000 )
    {
      v13 = v12 + 39;
      v14 = *(_QWORD *)(v11 - 8);
      v15 = v11 - v14;
      if ( (unsigned __int64)(v15 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v15, v13);
        JUMPOUT(0x180109409LL);
      }
      v11 = v14;
    }
    j_j__o_free(v11);
  }
  a2[2] = 0LL;
  a2[3] = 15LL;
  *(_BYTE *)a2 = 0;
  v16 = (volatile signed __int32 *)a3[1];
  if ( v16 )
  {
    if ( _InterlockedExchangeAdd(v16 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v16)(v16);
      if ( _InterlockedExchangeAdd(v16 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 8LL))(v16);
    }
  }
  return v9 + 64;
}
