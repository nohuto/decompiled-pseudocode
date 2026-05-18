/*
 * XREFs of sub_18006CB20 @ 0x18006CB20
 * Callers:
 *     sub_180076608 @ 0x180076608 (sub_180076608.c)
 * Callees:
 *     sub_1800631C0 @ 0x1800631C0 (sub_1800631C0.c)
 *     sub_180063668 @ 0x180063668 (sub_180063668.c)
 *     sub_18006D55C @ 0x18006D55C (sub_18006D55C.c)
 *     sub_18006E3C8 @ 0x18006E3C8 (sub_18006E3C8.c)
 *     sub_1800D5E90 @ 0x1800D5E90 (sub_1800D5E90.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall sub_18006CB20(__int64 a1, __int64 *a2)
{
  __int64 v3; // rsi
  volatile signed __int32 *v4; // rdi
  __int64 result; // rax
  __int64 v6; // r14
  _QWORD *i; // rbx
  _QWORD *v8; // rax
  signed __int32 v9; // eax
  bool v10; // zf
  _BYTE v11[8]; // [rsp+38h] [rbp-38h] BYREF
  __int64 v12; // [rsp+40h] [rbp-30h] BYREF
  __int64 v13; // [rsp+48h] [rbp-28h]
  __int64 v14; // [rsp+50h] [rbp-20h] BYREF
  __int64 v15; // [rsp+58h] [rbp-18h]

  v3 = *a2;
  v4 = (volatile signed __int32 *)a2[1];
  *a2 = 0LL;
  a2[1] = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  sub_18006D55C(a1, &v14);
  v12 = 0LL;
  v13 = 0LL;
  sub_1800631C0(a1 + 24, &v12);
  result = *(_QWORD *)(a1 + 256);
  v6 = a1 + 248;
  for ( i = *(_QWORD **)(a1 + 248); i != (_QWORD *)result && *i != v3; i += 2 )
    ;
  if ( i != (_QWORD *)result )
  {
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v3 + 360LL))(v3, 0LL);
    v8 = (_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 184LL))(v3);
    sub_1800D5E90(*v8, 500LL);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 336LL))(v3);
    result = sub_18006E3C8(v6, v11, i);
  }
  if ( (_BYTE)v13 )
    result = sub_180063668(v12);
  if ( (_BYTE)v15 )
    result = sub_180063668(v14);
  if ( v4 )
  {
    v9 = _InterlockedExchangeAdd(v4 + 2, 0xFFFFFFFF);
    v10 = v9 == 1;
    result = (unsigned int)(v9 - 1);
    if ( v10 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v4)(v4);
      result = (unsigned int)_InterlockedDecrement(v4 + 3);
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v4 + 8LL))(v4);
    }
  }
  return result;
}
