/*
 * XREFs of sub_1800EFE20 @ 0x1800EFE20
 * Callers:
 *     <none>
 * Callees:
 *     sub_18006CD84 @ 0x18006CD84 (sub_18006CD84.c)
 *     sub_18007797C @ 0x18007797C (sub_18007797C.c)
 *     sub_18009112C @ 0x18009112C (sub_18009112C.c)
 *     sub_180095D8C @ 0x180095D8C (sub_180095D8C.c)
 *     sub_180099950 @ 0x180099950 (sub_180099950.c)
 *     sub_180099A40 @ 0x180099A40 (sub_180099A40.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall sub_1800EFE20(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rax
  __int64 v6; // rax
  unsigned int v7; // ebx
  __int64 *v8; // rax
  signed __int32 v9; // eax
  volatile signed __int32 *v10; // rbx
  volatile signed __int32 *v11; // rbx
  __int64 v13; // [rsp+28h] [rbp-30h] BYREF
  volatile signed __int32 *v14; // [rsp+30h] [rbp-28h]
  __int64 v15; // [rsp+38h] [rbp-20h] BYREF
  volatile signed __int32 *v16; // [rsp+40h] [rbp-18h]

  v15 = 0LL;
  v16 = 0LL;
  sub_180099950(a2, (__int64)&v15);
  if ( (unsigned __int8)sub_18009112C(v15, (__int64)&qword_18025B638) )
  {
    v5 = sub_18006CD84(a3);
    v6 = sub_18007797C(v5, 1);
    if ( (*(unsigned __int8 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v6 + 64LL))(v6, &unk_180258F38, 0LL)
      && (*(_WORD *)(v15 + 112) & 0x10) != 0
      && (*(_WORD *)(v15 + 112) & 0x2000) == 0 )
    {
      v7 = 7;
    }
    else
    {
      v7 = 3;
    }
  }
  else
  {
    v7 = 1;
  }
  v8 = sub_180099A40(a2, &v13);
  LOBYTE(v9) = sub_180095D8C(*v8, v7);
  v10 = v14;
  if ( v14 )
  {
    v9 = _InterlockedDecrement(v14 + 2);
    if ( !v9 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v10)(v10);
      v9 = _InterlockedDecrement(v10 + 3);
      if ( !v9 )
        LOBYTE(v9) = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 8LL))(v10);
    }
  }
  v11 = v16;
  if ( v16 )
  {
    v9 = _InterlockedDecrement(v16 + 2);
    if ( !v9 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v11)(v11);
      v9 = _InterlockedDecrement(v11 + 3);
      if ( !v9 )
        LOBYTE(v9) = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 8LL))(v11);
    }
  }
  return v9;
}
