/*
 * XREFs of sub_18006CC30 @ 0x18006CC30
 * Callers:
 *     sub_180076718 @ 0x180076718 (sub_180076718.c)
 * Callees:
 *     sub_1800632D0 @ 0x1800632D0 (sub_1800632D0.c)
 *     sub_180063778 @ 0x180063778 (sub_180063778.c)
 *     sub_18006D66C @ 0x18006D66C (sub_18006D66C.c)
 *     sub_18006E4D8 @ 0x18006E4D8 (sub_18006E4D8.c)
 *     sub_1800D5FA0 @ 0x1800D5FA0 (sub_1800D5FA0.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall sub_18006CC30(__int64 a1, __int64 *a2)
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
  sub_18006D66C(a1, &v14);
  v12 = 0LL;
  v13 = 0LL;
  sub_1800632D0(a1 + 24, &v12);
  result = *(_QWORD *)(a1 + 256);
  v6 = a1 + 248;
  for ( i = *(_QWORD **)(a1 + 248); i != (_QWORD *)result && *i != v3; i += 2 )
    ;
  if ( i != (_QWORD *)result )
  {
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v3 + 360LL))(v3, 0LL);
    v8 = (_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 184LL))(v3);
    sub_1800D5FA0(*v8, 500LL);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 336LL))(v3);
    result = sub_18006E4D8(v6, v11, i);
  }
  if ( (_BYTE)v13 )
    result = sub_180063778(v12);
  if ( (_BYTE)v15 )
    result = sub_180063778(v14);
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
