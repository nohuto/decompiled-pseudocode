/*
 * XREFs of sub_180015574 @ 0x180015574
 * Callers:
 *     sub_180014CB8 @ 0x180014CB8 (sub_180014CB8.c)
 * Callees:
 *     ??$_Resetp@V__ExceptionPtr@@@?$shared_ptr@V__ExceptionPtr@@@std@@AEAAXPEAV__ExceptionPtr@@@Z_0 @ 0x180016E08 (--$_Resetp@V__ExceptionPtr@@@-$shared_ptr@V__ExceptionPtr@@@std@@AEAAXPEAV__ExceptionPtr@@@Z_0.c)
 *     sub_180017790 @ 0x180017790 (sub_180017790.c)
 *     sub_180063178 @ 0x180063178 (sub_180063178.c)
 *     sub_180063668 @ 0x180063668 (sub_180063668.c)
 *     sub_18006D310 @ 0x18006D310 (sub_18006D310.c)
 *     sub_180075B3C @ 0x180075B3C (sub_180075B3C.c)
 *     sub_180078A58 @ 0x180078A58 (sub_180078A58.c)
 *     sub_1800B5D5C @ 0x1800B5D5C (sub_1800B5D5C.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x180126108 (--2@YAPEAX_K@Z.c)
 *     memset @ 0x1801271C8 (memset.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
_QWORD *__fastcall sub_180015574(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  void *v8; // rax
  __int64 v9; // r8
  void *v10; // rbx
  __int64 v11; // rcx
  __int64 v12; // rbx
  __int64 v13; // rbx
  volatile signed __int32 *v14; // rdi
  char v16; // [rsp+20h] [rbp-69h]
  __int128 v17; // [rsp+30h] [rbp-59h] BYREF
  __int128 v18; // [rsp+40h] [rbp-49h] BYREF
  __int128 v19; // [rsp+50h] [rbp-39h] BYREF
  __int128 v20; // [rsp+60h] [rbp-29h] BYREF
  __int128 v21; // [rsp+70h] [rbp-19h] BYREF
  __int64 v22; // [rsp+80h] [rbp-9h]
  void *v23; // [rsp+88h] [rbp-1h]
  __int64 v24; // [rsp+90h] [rbp+7h]
  __int64 v25; // [rsp+98h] [rbp+Fh] BYREF
  __int64 v26; // [rsp+A0h] [rbp+17h]

  v22 = -2LL;
  v24 = a3;
  v17 = 0uLL;
  v8 = operator new(0x1028uLL);
  v10 = v8;
  v23 = v8;
  if ( v8 )
  {
    memset(v8, 0, 0x1028uLL);
    v19 = 0LL;
    v11 = *(_QWORD *)(a1 + 472);
    if ( v11 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v11 + 8));
      v11 = *(_QWORD *)(a1 + 472);
    }
    *(_QWORD *)&v19 = *(_QWORD *)(a1 + 464);
    *((_QWORD *)&v19 + 1) = v11;
    v8 = (void *)sub_1800B5D5C(v10, a1, &v19);
  }
  v17 = 0LL;
  LOBYTE(v9) = v16;
  std::shared_ptr<__ExceptionPtr>::_Resetp<__ExceptionPtr>(&v17, v8, v9);
  v25 = 0LL;
  v26 = 0LL;
  v12 = v17;
  sub_180063178(v17 + 24, &v25);
  sub_18006D310(v12, a3, a4);
  v20 = 0LL;
  v13 = *((_QWORD *)&v17 + 1);
  if ( *((_QWORD *)&v17 + 1) )
  {
    _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v17 + 1) + 8LL));
    v13 = *((_QWORD *)&v17 + 1);
  }
  v20 = v17;
  sub_180075B3C(a1, &v20);
  v14 = (volatile signed __int32 *)*((_QWORD *)&v20 + 1);
  if ( *((_QWORD *)&v20 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v20 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v14)(v14);
      if ( _InterlockedExchangeAdd(v14 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 8LL))(v14);
    }
    v13 = *((_QWORD *)&v17 + 1);
  }
  v21 = 0LL;
  v18 = 0LL;
  if ( v13 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v13 + 8));
    v13 = *((_QWORD *)&v17 + 1);
  }
  v18 = v17;
  sub_180078A58(a1, 7LL, &v18, &v21);
  *a2 = v17;
  a2[1] = v13;
  v17 = 0LL;
  if ( (_BYTE)v26 )
    sub_180063668(v25);
  sub_180017790(a3);
  return a2;
}
