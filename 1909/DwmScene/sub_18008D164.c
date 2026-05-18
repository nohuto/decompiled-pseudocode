/*
 * XREFs of sub_18008D164 @ 0x18008D164
 * Callers:
 *     sub_18008CF58 @ 0x18008CF58 (sub_18008CF58.c)
 * Callees:
 *     sub_1800635BC @ 0x1800635BC (sub_1800635BC.c)
 *     sub_18008D004 @ 0x18008D004 (sub_18008D004.c)
 *     sub_18008D8C8 @ 0x18008D8C8 (sub_18008D8C8.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_18008D164(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  __int64 v4; // rbx
  char v5[8]; // [rsp+20h] [rbp-40h] BYREF
  _BYTE v6[24]; // [rsp+28h] [rbp-38h] BYREF
  __int64 v7; // [rsp+40h] [rbp-20h]
  _BYTE v8[8]; // [rsp+48h] [rbp-18h] BYREF

  v7 = -2LL;
  sub_1800635BC(a1 + 16, a2);
  v5[0] = 1;
  if ( (unsigned __int8)((__int64 (__fastcall *)(__int64, char *, _QWORD, __int64))sub_18008D8C8)(a2 + 72, v5, 0LL, 5LL) )
  {
    v8[0] = 0;
    *(_QWORD *)v6 = qword_18026C298;
    *(_DWORD *)&v6[8] = dword_18026C2A0;
    *(_QWORD *)&v6[12] = qword_18026C298;
    *(_DWORD *)&v6[20] = dword_18026C2A0;
    *(_OWORD *)(a2 + 48) = *(_OWORD *)v6;
    *(_QWORD *)(a2 + 64) = *(_QWORD *)&v6[16];
    v3 = *(_QWORD *)(a2 + 40);
    if ( v3 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v3 + 8));
      v3 = *(_QWORD *)(a2 + 40);
    }
    *(_QWORD *)v6 = *(_QWORD *)(a2 + 32);
    *(_QWORD *)&v6[8] = v3;
    sub_18008D004((__int64 *)v6, a2 + 48, (__int64)v8);
    if ( *(_QWORD *)&v6[8]
      && _InterlockedExchangeAdd((volatile signed __int32 *)(*(_QWORD *)&v6[8] + 8LL), 0xFFFFFFFF) == 1 )
    {
      v4 = *(_QWORD *)&v6[8];
      (***(void (__fastcall ****)(_QWORD))&v6[8])(*(_QWORD *)&v6[8]);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v4 + 12), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&v6[8] + 8LL))(*(_QWORD *)&v6[8]);
    }
  }
}
