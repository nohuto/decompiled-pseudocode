/*
 * XREFs of sub_18010A230 @ 0x18010A230
 * Callers:
 *     sub_1800D5AE0 @ 0x1800D5AE0 (sub_1800D5AE0.c)
 * Callees:
 *     sub_1800E0FAC @ 0x1800E0FAC (sub_1800E0FAC.c)
 *     sub_1801082F8 @ 0x1801082F8 (sub_1801082F8.c)
 *     sub_180108A44 @ 0x180108A44 (sub_180108A44.c)
 *     sub_180108D30 @ 0x180108D30 (sub_180108D30.c)
 *     sub_18011E1A0 @ 0x18011E1A0 (sub_18011E1A0.c)
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_18010A230(_QWORD *a1, __int64 *a2, _QWORD *a3)
{
  __int64 v6; // rcx
  __int64 v7; // rcx
  _QWORD *v8; // rax
  __int64 result; // rax
  unsigned __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // rcx
  volatile signed __int32 *v16; // rbx
  signed __int32 v17; // eax
  bool v18; // zf
  __int64 v19; // rcx
  __int128 v20; // [rsp+38h] [rbp-D0h] BYREF
  __int128 v21; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v22; // [rsp+58h] [rbp-B0h]
  _QWORD *v23; // [rsp+60h] [rbp-A8h]
  __int64 v24; // [rsp+68h] [rbp-A0h] BYREF
  _BYTE v25[8]; // [rsp+78h] [rbp-90h] BYREF
  __int64 v26; // [rsp+80h] [rbp-88h] BYREF
  _QWORD v27[23]; // [rsp+98h] [rbp-70h] BYREF
  _QWORD v28[24]; // [rsp+150h] [rbp+48h] BYREF

  v22 = -2LL;
  v28[23] = a2;
  v23 = a3;
  v20 = 0LL;
  v6 = a1[113];
  if ( v6 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v6 + 8));
    v6 = a1[113];
  }
  *(_QWORD *)&v20 = a1[112];
  *((_QWORD *)&v20 + 1) = v6;
  v21 = 0LL;
  v7 = a3[1];
  if ( v7 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v7 + 8));
    v7 = a3[1];
  }
  *(_QWORD *)&v21 = *a3;
  *((_QWORD *)&v21 + 1) = v7;
  sub_180108D30((__int64)v25, 0, &v21, &v20, a1[114]);
  v8 = (_QWORD *)sub_1801082F8((__int64)(a1 + 110), (__int64)a2);
  sub_180108A44(a1 + 110, (__int64)&v24, 0, v8 + 4, v8);
  sub_1800E0FAC(v28);
  sub_1800E0FAC(v27);
  result = sub_18011E1A0(&v26);
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
        return sub_18010A3EC(v19);
      }
      v11 = v14;
    }
    result = j_j__o_free(v11);
  }
  a2[2] = 0LL;
  a2[3] = 15LL;
  *(_BYTE *)a2 = 0;
  v16 = (volatile signed __int32 *)a3[1];
  if ( v16 )
  {
    v17 = _InterlockedExchangeAdd(v16 + 2, 0xFFFFFFFF);
    v18 = v17 == 1;
    result = (unsigned int)(v17 - 1);
    if ( v18 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v16)(v16);
      result = (unsigned int)_InterlockedDecrement(v16 + 3);
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 8LL))(v16);
    }
  }
  return result;
}
