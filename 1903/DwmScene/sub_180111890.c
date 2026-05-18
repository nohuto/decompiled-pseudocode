/*
 * XREFs of sub_180111890 @ 0x180111890
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800906C4 @ 0x1800906C4 (sub_1800906C4.c)
 *     sub_180090A04 @ 0x180090A04 (sub_180090A04.c)
 *     sub_180090DA8 @ 0x180090DA8 (sub_180090DA8.c)
 *     sub_18009996C @ 0x18009996C (sub_18009996C.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180111890(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  int v3; // eax
  char v4; // bl
  bool v5; // bp
  bool v6; // si
  bool v7; // di
  char v8; // r8
  char v9; // r8
  char v10; // r8
  __int64 result; // rax
  volatile signed __int32 *v12; // rbx
  signed __int32 v13; // eax
  bool v14; // zf
  __int64 v15; // [rsp+28h] [rbp-30h] BYREF
  volatile signed __int32 *v16; // [rsp+30h] [rbp-28h]

  v15 = 0LL;
  v16 = 0LL;
  sub_18009996C(a2, &v15, a3);
  v3 = sub_1800906C4(v15);
  v4 = 1;
  v5 = v3 == 1;
  v6 = v3 == 3;
  v7 = v3 == 2;
  v8 = v3 == 1 || v3 == 2;
  sub_180090DA8(v15, 9, v8);
  v9 = v6 || v7;
  sub_180090DA8(v15, 8, v9);
  v10 = v5 || v7;
  sub_180090A04(v15, (__int64)&qword_18025C598, v10);
  if ( !v6 && !v7 )
    v4 = 0;
  result = sub_180090A04(v15, (__int64)&qword_18025C5B8, v4);
  v12 = v16;
  if ( v16 )
  {
    v13 = _InterlockedExchangeAdd(v16 + 2, 0xFFFFFFFF);
    v14 = v13 == 1;
    result = (unsigned int)(v13 - 1);
    if ( v14 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v12)(v12);
      result = (unsigned int)_InterlockedDecrement(v12 + 3);
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 8LL))(v12);
    }
  }
  return result;
}
