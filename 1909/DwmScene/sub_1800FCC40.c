/*
 * XREFs of sub_1800FCC40 @ 0x1800FCC40
 * Callers:
 *     sub_1800FC8A4 @ 0x1800FC8A4 (sub_1800FC8A4.c)
 * Callees:
 *     sub_1800FCEB4 @ 0x1800FCEB4 (sub_1800FCEB4.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800FCC40(__int64 a1, __int64 a2, float a3, float a4, char a5)
{
  volatile signed __int32 *v7; // rbx
  _BYTE v9[8]; // [rsp+40h] [rbp-28h] BYREF
  float v10; // [rsp+80h] [rbp+18h] BYREF
  float v11; // [rsp+88h] [rbp+20h] BYREF

  v11 = a4;
  v10 = a3;
  v9[0] = a5;
  sub_1800FCEB4(a1, a2, &v10, &v11, v9);
  v7 = *(volatile signed __int32 **)(a2 + 8);
  if ( v7 )
  {
    if ( _InterlockedExchangeAdd(v7 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v7)(v7);
      if ( _InterlockedExchangeAdd(v7 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 8LL))(v7);
    }
  }
  return a1;
}
