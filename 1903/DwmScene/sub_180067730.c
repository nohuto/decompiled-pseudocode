/*
 * XREFs of sub_180067730 @ 0x180067730
 * Callers:
 *     <none>
 * Callees:
 *     sub_18006CCE8 @ 0x18006CCE8 (sub_18006CCE8.c)
 *     sub_18006CD84 @ 0x18006CD84 (sub_18006CD84.c)
 *     sub_18007797C @ 0x18007797C (sub_18007797C.c)
 *     sub_1800D5388 @ 0x1800D5388 (sub_1800D5388.c)
 *     sub_1800D67E0 @ 0x1800D67E0 (sub_1800D67E0.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180067730(_QWORD *a1, unsigned int a2)
{
  __int64 result; // rax
  __int64 *v5; // r8
  __int64 v6; // rdx
  __int64 v7; // rsi
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rdi
  char v11; // bl
  char v12; // r15
  char v13; // r12
  char v14; // r13
  char v15; // al
  __int64 v16; // r8
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rbx
  char v20; // [rsp+20h] [rbp-50h]
  char v21; // [rsp+21h] [rbp-4Fh]
  char v22; // [rsp+22h] [rbp-4Eh]
  __int128 v23; // [rsp+28h] [rbp-48h] BYREF
  __int64 v24; // [rsp+38h] [rbp-38h]
  _BYTE v25[8]; // [rsp+48h] [rbp-28h] BYREF
  __int64 v26; // [rsp+50h] [rbp-20h]
  __int128 v27; // [rsp+58h] [rbp-18h]

  v24 = -2LL;
  result = (*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(*a1 + 376LL))(a1, v25);
  v5 = (__int64 *)result;
  v27 = 0LL;
  v6 = *(_QWORD *)(result + 8);
  if ( v6 )
  {
    while ( 1 )
    {
      result = *(unsigned int *)(v6 + 8);
      if ( !(_DWORD)result )
        break;
      if ( (_DWORD)result == _InterlockedCompareExchange((volatile signed __int32 *)(v6 + 8), result + 1, result) )
      {
        v7 = *v5;
        *(_QWORD *)&v27 = *v5;
        result = v5[1];
        *((_QWORD *)&v27 + 1) = result;
        goto LABEL_3;
      }
    }
  }
  v7 = v27;
LABEL_3:
  v8 = v26;
  if ( v26 )
  {
    result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v26 + 12));
    if ( !(_DWORD)result )
      result = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v8 + 8LL))(v8, v6, v5);
    v7 = v27;
  }
  if ( v7 )
  {
    v9 = sub_18006CD84(v7);
    v10 = sub_18007797C(v9, a2);
    v11 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v10 + 64LL))(v10, &unk_180258E38, 0LL);
    v12 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v10 + 64LL))(v10, &unk_180258E58, 0LL);
    v13 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v10 + 64LL))(v10, &unk_180258D78, 0LL);
    v14 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v10 + 64LL))(v10, &unk_180258D98, 0LL);
    v20 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v10 + 64LL))(v10, &unk_180258DB8, 0LL);
    v21 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v10 + 64LL))(v10, &unk_180258DD8, 0LL);
    v22 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v10 + 64LL))(v10, &unk_180258DF8, 0LL);
    v15 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v10 + 64LL))(v10, &unk_180258E18, 0LL);
    v16 = v11 && !v12;
    if ( v13 )
      v16 = (unsigned int)v16 | 2;
    if ( v14 )
      v16 = (unsigned int)v16 | 4;
    if ( v20 )
      v16 = (unsigned int)v16 | 8;
    if ( v21 )
      v16 = (unsigned int)v16 | 0x40;
    if ( v22 )
      v16 = (unsigned int)v16 | 0x10;
    if ( v15 )
      v16 = (unsigned int)v16 | 0x20;
    sub_1800D67E0(a1[57], v7, v16);
    v17 = sub_18006CCE8(v7);
    v23 = 0LL;
    v18 = *(_QWORD *)(v17 + 8);
    if ( v18 )
      _InterlockedIncrement((volatile signed __int32 *)(v18 + 8));
    v23 = *(_OWORD *)v17;
    result = sub_1800D5388(a1[55], &v23, a1[60]);
  }
  if ( *((_QWORD *)&v27 + 1) )
  {
    result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v27 + 1) + 8LL));
    if ( !(_DWORD)result )
    {
      v19 = *((_QWORD *)&v27 + 1);
      (***((void (__fastcall ****)(_QWORD, __int64, __int64 *))&v27 + 1))(*((_QWORD *)&v27 + 1), v6, v5);
      result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v19 + 12));
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)&v27 + 1) + 8LL))(*((_QWORD *)&v27 + 1));
    }
  }
  return result;
}
