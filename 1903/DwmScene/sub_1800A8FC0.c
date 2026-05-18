/*
 * XREFs of sub_1800A8FC0 @ 0x1800A8FC0
 * Callers:
 *     sub_18008FE08 @ 0x18008FE08 (sub_18008FE08.c)
 * Callees:
 *     sub_18000E498 @ 0x18000E498 (sub_18000E498.c)
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18000FFB0 (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18001002C (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     sub_180027770 @ 0x180027770 (sub_180027770.c)
 *     sub_1800A727C @ 0x1800A727C (sub_1800A727C.c)
 *     sub_1800A7320 @ 0x1800A7320 (sub_1800A7320.c)
 *     sub_1800F72B4 @ 0x1800F72B4 (sub_1800F72B4.c)
 *     _CxxThrowException @ 0x180125A78 (_CxxThrowException.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall sub_1800A8FC0(__int64 a1, _QWORD *a2, unsigned __int64 a3, int a4)
{
  __int64 **v5; // r12
  __int64 *v6; // rax
  __int64 v7; // rcx
  unsigned __int64 v8; // rdx
  _QWORD *v9; // rdi
  _QWORD *v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rbx
  __int64 v14; // rcx
  __int64 *v16; // rax
  __int128 v17; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v18; // [rsp+40h] [rbp-C0h]
  __int64 v19; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v20; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v21; // [rsp+68h] [rbp-98h] BYREF
  _QWORD v22[4]; // [rsp+78h] [rbp-88h] BYREF
  _QWORD v23[5]; // [rsp+98h] [rbp-68h] BYREF
  _QWORD pExceptionObject[8]; // [rsp+C0h] [rbp-40h] BYREF
  unsigned __int64 v25; // [rsp+100h] [rbp+0h] BYREF
  int v26; // [rsp+108h] [rbp+8h] BYREF

  v18 = -2LL;
  v25 = a3;
  v26 = a4;
  if ( *(_DWORD *)(a1 + 432) != 1 )
  {
    sub_18000E498(v23);
    v16 = sub_18000E498(v22);
    sub_180027770(pExceptionObject, v16, 419, (__int64)v23, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  v25 = *(_QWORD *)(a1 + 64) & a3;
  sub_1800A727C((__int64 **)(a1 + 416), (__int64)&v19, &v26);
  v5 = (__int64 **)(v19 + 56);
  v6 = *(__int64 **)(v19 + 56);
  v7 = v6[1];
  v8 = v25;
  if ( *(_BYTE *)(v7 + 25) )
    goto LABEL_9;
  do
  {
    if ( *(_QWORD *)(v7 + 32) >= v25 )
    {
      v6 = (__int64 *)v7;
      v7 = *(_QWORD *)v7;
    }
    else
    {
      v7 = *(_QWORD *)(v7 + 16);
    }
  }
  while ( !*(_BYTE *)(v7 + 25) );
  if ( v6 == *v5 || v25 < v6[4] )
LABEL_9:
    v6 = *v5;
  if ( v6 != *v5 )
  {
    *a2 = 0LL;
    a2[1] = 0LL;
    v14 = v6[6];
    if ( v14 )
      _InterlockedIncrement((volatile signed __int32 *)(v14 + 8));
    *a2 = v6[5];
    v12 = v6[6];
LABEL_26:
    a2[1] = v12;
    return a2;
  }
  v9 = *(_QWORD **)(v19 + 40);
  v10 = (_QWORD *)*v9;
  if ( (_QWORD *)*v9 != v9 )
  {
    while ( !(unsigned __int8)sub_1800F72B4(v10[2], v8) )
    {
      v10 = (_QWORD *)*v10;
      if ( v10 == v9 )
        goto LABEL_18;
      v8 = v25;
    }
    sub_1800A7320(v5, (__int64)&v20, &v25);
    std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(v20 + 40), v10 + 2);
    *a2 = 0LL;
    a2[1] = 0LL;
    v11 = v10[3];
    if ( v11 )
      _InterlockedIncrement((volatile signed __int32 *)(v11 + 8));
    *a2 = v10[2];
    v12 = v10[3];
    goto LABEL_26;
  }
LABEL_18:
  v17 = 0LL;
  sub_1800A7320(v5, (__int64)&v21, &v25);
  std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(v21 + 40), (__int64 *)&v17);
  if ( *((_QWORD *)&v17 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v17 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      v13 = *((_QWORD *)&v17 + 1);
      (***((void (__fastcall ****)(_QWORD))&v17 + 1))(*((_QWORD *)&v17 + 1));
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v13 + 12), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v17 + 1) + 8LL))(*((_QWORD *)&v17 + 1));
    }
  }
  *a2 = 0LL;
  a2[1] = 0LL;
  return a2;
}
