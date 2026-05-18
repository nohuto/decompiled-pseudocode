/*
 * XREFs of sub_18006CFB0 @ 0x18006CFB0
 * Callers:
 *     <none>
 * Callees:
 *     unknown_libname_115 @ 0x1800100F8 (unknown_libname_115.c)
 *     sub_1800636EC @ 0x1800636EC (sub_1800636EC.c)
 *     sub_180063778 @ 0x180063778 (sub_180063778.c)
 *     sub_18006AEC8 @ 0x18006AEC8 (sub_18006AEC8.c)
 *     sub_18006BA54 @ 0x18006BA54 (sub_18006BA54.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall sub_18006CFB0(__int64 a1, _QWORD *a2, unsigned int a3)
{
  __int64 v5; // rbx
  __int64 v6; // r15
  __int64 v7; // rcx
  volatile signed __int32 *v8; // rdi
  __int64 *v9; // rdi
  __int64 v10; // r14
  __int64 v11; // rdi
  __int64 v13; // [rsp+20h] [rbp-40h]
  __int64 v14; // [rsp+30h] [rbp-30h] BYREF
  unsigned int v15; // [rsp+40h] [rbp-20h] BYREF
  __int64 v16; // [rsp+48h] [rbp-18h] BYREF
  volatile signed __int32 *v17; // [rsp+50h] [rbp-10h]

  v15 = a3;
  v5 = a1 + 8;
  v13 = a1 + 8;
  sub_1800636EC(a1 + 8);
  sub_18006BA54((__int64 **)(a1 + 24), (__int64)&v14, &v15);
  v6 = v14;
  v7 = *(_QWORD *)(v14 + 48);
  if ( *(_QWORD *)(v14 + 40) == v7 )
  {
    v16 = 0LL;
    v17 = 0LL;
    sub_18006AEC8(*(_QWORD *)(a1 + 16), &v16);
    if ( (*(unsigned __int8 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v16 + 40LL))(
           v16,
           *(_QWORD *)(a1 + 16),
           v15) )
    {
      *a2 = v16;
      a2[1] = v17;
      v16 = 0LL;
      v17 = 0LL;
      sub_180063778(v5);
    }
    else
    {
      v8 = v17;
      if ( v17 )
      {
        if ( _InterlockedExchangeAdd(v17 + 2, 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v8)(v8);
          if ( _InterlockedExchangeAdd(v8 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v8 + 8LL))(v8);
        }
        v5 = v13;
      }
      *a2 = 0LL;
      a2[1] = 0LL;
      sub_180063778(v5);
    }
  }
  else
  {
    v9 = (__int64 *)(v7 - 16);
    v10 = *(_QWORD *)(v7 - 16 + 8);
    if ( v10 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v10 + 8));
      v10 = v9[1];
      v7 = *(_QWORD *)(v6 + 48);
      v5 = v13;
    }
    v11 = *v9;
    unknown_libname_115(v7 - 16, 0);
    *(_QWORD *)(v6 + 48) -= 16LL;
    *a2 = v11;
    a2[1] = v10;
    sub_180063778(v5);
  }
  return a2;
}
