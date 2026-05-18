/*
 * XREFs of sub_18008AD88 @ 0x18008AD88
 * Callers:
 *     sub_18006EE48 @ 0x18006EE48 (sub_18006EE48.c)
 *     sub_18008A058 @ 0x18008A058 (sub_18008A058.c)
 *     sub_18008A970 @ 0x18008A970 (sub_18008A970.c)
 *     sub_18008ACB0 @ 0x18008ACB0 (sub_18008ACB0.c)
 *     sub_18008B2A0 @ 0x18008B2A0 (sub_18008B2A0.c)
 *     sub_18008BC2C @ 0x18008BC2C (sub_18008BC2C.c)
 *     sub_18008C220 @ 0x18008C220 (sub_18008C220.c)
 *     sub_1800BE5E0 @ 0x1800BE5E0 (sub_1800BE5E0.c)
 *     sub_1800C1DD4 @ 0x1800C1DD4 (sub_1800C1DD4.c)
 *     sub_1800C62FC @ 0x1800C62FC (sub_1800C62FC.c)
 *     sub_1801007B0 @ 0x1801007B0 (sub_1801007B0.c)
 * Callees:
 *     unknown_libname_116 @ 0x18001141C (unknown_libname_116.c)
 *     sub_180063430 @ 0x180063430 (sub_180063430.c)
 *     sub_18008DD08 @ 0x18008DD08 (sub_18008DD08.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall sub_18008AD88(__int64 a1, __int64 *a2, __int64 *a3)
{
  __int64 v6; // rax
  __int64 *v7; // rax
  char v8; // di
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // rbx
  __int64 v14; // [rsp+20h] [rbp-40h] BYREF
  __int64 v15; // [rsp+28h] [rbp-38h]
  __int128 v16; // [rsp+30h] [rbp-30h] BYREF
  int v17; // [rsp+40h] [rbp-20h]
  __int64 v18; // [rsp+48h] [rbp-18h]
  __int64 v19; // [rsp+50h] [rbp-10h] BYREF

  v18 = -2LL;
  v17 = 0;
  sub_180063430(a1 + 16);
  v19 = 0LL;
  sub_18008DD08(a1 + 88, &v19, a3);
  v6 = v19;
  if ( v19 == *(_QWORD *)(a1 + 88) )
  {
    v16 = 0LL;
    v7 = (__int64 *)&v16;
    v8 = 5;
    v9 = v15;
  }
  else
  {
    v9 = *(_QWORD *)(v19 + 72);
    if ( v9 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v9 + 8));
      v9 = *(_QWORD *)(v6 + 72);
    }
    v14 = *(_QWORD *)(v6 + 64);
    v15 = v9;
    v7 = &v14;
    v8 = 6;
  }
  *a2 = 0LL;
  a2[1] = 0LL;
  v10 = v7[1];
  if ( v10 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v10 + 8));
    v9 = v15;
  }
  *a2 = *v7;
  a2[1] = v10;
  if ( (v8 & 2) != 0 )
  {
    v8 &= ~2u;
    if ( v9 )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v9 + 8), 0xFFFFFFFF) == 1 )
      {
        v11 = v15;
        (**(void (__fastcall ***)(__int64))v15)(v15);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v11 + 12), 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
      }
    }
  }
  if ( (v8 & 1) != 0 )
  {
    if ( *((_QWORD *)&v16 + 1) )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v16 + 1) + 8LL), 0xFFFFFFFF) == 1 )
      {
        v12 = *((_QWORD *)&v16 + 1);
        (***((void (__fastcall ****)(_QWORD, __int64))&v16 + 1))(*((_QWORD *)&v16 + 1), v9);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v12 + 12), 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v16 + 1) + 8LL))(*((_QWORD *)&v16 + 1));
      }
    }
  }
  unknown_libname_116(a3);
  return a2;
}
