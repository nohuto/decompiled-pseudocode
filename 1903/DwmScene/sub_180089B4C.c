/*
 * XREFs of sub_180089B4C @ 0x180089B4C
 * Callers:
 *     sub_18008965C @ 0x18008965C (sub_18008965C.c)
 * Callees:
 *     sub_18000E498 @ 0x18000E498 (sub_18000E498.c)
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18000FFB0 (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     sub_180027770 @ 0x180027770 (sub_180027770.c)
 *     sub_1800634AC @ 0x1800634AC (sub_1800634AC.c)
 *     sub_180085B50 @ 0x180085B50 (sub_180085B50.c)
 *     sub_18008A5C0 @ 0x18008A5C0 (sub_18008A5C0.c)
 *     sub_18008B420 @ 0x18008B420 (sub_18008B420.c)
 *     sub_18008DD90 @ 0x18008DD90 (sub_18008DD90.c)
 *     _CxxThrowException @ 0x180125A78 (_CxxThrowException.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
_QWORD *__fastcall sub_180089B4C(__int64 a1, _QWORD *a2, unsigned __int64 a3, _QWORD *a4, _QWORD *a5)
{
  __int64 *v9; // rax
  volatile signed __int32 *v10; // rbx
  signed __int64 v11; // rcx
  _QWORD *v12; // rbx
  volatile signed __int32 *v13; // rax
  __int64 v14; // rcx
  volatile signed __int32 *v15; // rbx
  __int64 *v17; // rax
  __int64 *v18; // rax
  _QWORD *v19; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v20; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v21; // [rsp+40h] [rbp-C0h]
  volatile signed __int32 *v22; // [rsp+48h] [rbp-B8h]
  __int128 v23; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD *v24; // [rsp+60h] [rbp-A0h]
  __int64 v25; // [rsp+68h] [rbp-98h]
  _QWORD *v26; // [rsp+70h] [rbp-90h]
  char v27[8]; // [rsp+78h] [rbp-88h] BYREF
  volatile signed __int32 *v28; // [rsp+80h] [rbp-80h]
  __int64 v29[4]; // [rsp+88h] [rbp-78h] BYREF
  _QWORD v30[4]; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v31[4]; // [rsp+C8h] [rbp-38h] BYREF
  _QWORD v32[5]; // [rsp+E8h] [rbp-18h] BYREF
  _QWORD v33[8]; // [rsp+110h] [rbp+10h] BYREF
  _QWORD pExceptionObject[8]; // [rsp+150h] [rbp+50h] BYREF
  unsigned __int64 v35; // [rsp+190h] [rbp+90h] BYREF

  v25 = -2LL;
  v19 = a2;
  v35 = a3;
  v26 = a4;
  sub_1800634AC(a1 + 16, (__int64)a2);
  if ( !*a4 )
  {
    v9 = (__int64 *)sub_18008B420(*a5, v27);
    std::shared_ptr<__ExceptionPtr>::operator=(a4, v9);
    v10 = v28;
    if ( v28 )
    {
      if ( _InterlockedExchangeAdd(v28 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v10)(v10);
        if ( _InterlockedExchangeAdd(v10 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 8LL))(v10);
      }
    }
  }
  if ( a3 == -1LL )
  {
    v11 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 72), 1uLL);
    v35 = v11;
  }
  else
  {
    v11 = v35;
    if ( v35 >= *(_QWORD *)(a1 + 72) )
    {
      _InterlockedExchange64((volatile __int64 *)(a1 + 72), v35 + 1);
      v11 = v35;
    }
  }
  if ( v11 == -1 )
  {
    sub_18000E498(v30);
    v18 = sub_18000E498(v29);
    sub_180027770(v33, v18, 318, (__int64)v30, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)v33;
  }
  v24 = *(_QWORD **)(a1 + 128);
  v12 = v24;
  sub_18008DD90(a1 + 120, &v19, &v35);
  if ( v19 != v12 )
  {
    sub_18000E498(v32);
    v17 = sub_18000E498(v31);
    sub_180027770(pExceptionObject, v17, 323, (__int64)v32, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  if ( *a4 )
  {
    v13 = (volatile signed __int32 *)(*a5 + 76LL);
    v22 = v13;
    while ( _interlockedbittestandset(v13, 0) )
      v13 = v22;
    v20 = 0LL;
    v21 = 0LL;
    sub_18008A5C0(a1, &v20, &v35);
    v23 = 0LL;
    v14 = a4[1];
    if ( v14 )
    {
      _InterlockedAdd((volatile signed __int32 *)(v14 + 8), 1u);
      v14 = a4[1];
    }
    *(_QWORD *)&v23 = *a4;
    *((_QWORD *)&v23 + 1) = v14;
    sub_180085B50(v20, (__int64 *)&v23);
    *(_BYTE *)(*a5 + 72LL) = 1;
    *a2 = v20;
    a2[1] = v21;
    v20 = 0LL;
    v21 = 0LL;
    *v22 = 0;
    v15 = (volatile signed __int32 *)a4[1];
    if ( v15 )
    {
      if ( _InterlockedExchangeAdd(v15 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v15)(v15);
        if ( _InterlockedExchangeAdd(v15 + 3, 0xFFFFFFFF) == 1 )
          goto LABEL_25;
      }
    }
  }
  else
  {
    *a2 = 0LL;
    a2[1] = 0LL;
    v15 = (volatile signed __int32 *)a4[1];
    if ( v15 )
    {
      if ( _InterlockedExchangeAdd(v15 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v15)(v15);
        if ( _InterlockedExchangeAdd(v15 + 3, 0xFFFFFFFF) == 1 )
LABEL_25:
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 8LL))(v15);
      }
    }
  }
  return a2;
}
