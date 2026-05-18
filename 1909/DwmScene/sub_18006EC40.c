/*
 * XREFs of sub_18006EC40 @ 0x18006EC40
 * Callers:
 *     sub_180076620 @ 0x180076620 (sub_180076620.c)
 * Callees:
 *     sub_18000E4E8 @ 0x18000E4E8 (sub_18000E4E8.c)
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18001007C (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     sub_180072CA8 @ 0x180072CA8 (sub_180072CA8.c)
 *     sub_1800730C0 @ 0x1800730C0 (sub_1800730C0.c)
 *     sub_180074288 @ 0x180074288 (sub_180074288.c)
 *     sub_18007EC18 @ 0x18007EC18 (sub_18007EC18.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18006EC40(__int64 a1)
{
  __int64 v1; // rbx
  volatile signed __int32 *v2; // rbx
  __int64 v4; // [rsp+30h] [rbp-41h] BYREF
  _QWORD v5[5]; // [rsp+40h] [rbp-31h] BYREF
  _BYTE pExceptionObject[64]; // [rsp+68h] [rbp-9h] BYREF
  __int64 v7; // [rsp+A8h] [rbp+37h] BYREF
  volatile signed __int32 *v8; // [rsp+B0h] [rbp+3Fh]
  void *v9; // [rsp+B8h] [rbp+47h] BYREF

  v9 = &Spectre::Engine::Engine::EngineSceneData `RTTI Type Descriptor';
  v1 = a1 + 200;
  if ( sub_18007EC18(a1 + 200, &v9) )
  {
    sub_18000E4E8(v5);
    sub_180074288(pExceptionObject, v5, 0LL);
    throw (Spectre::Utils::SpectreInvalidArgException *)pExceptionObject;
  }
  v7 = 0LL;
  v8 = 0LL;
  sub_1800730C0(&v7);
  sub_180072CA8(v1, &v4, &v9);
  std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(v4 + 40), &v7);
  if ( v8 )
  {
    if ( _InterlockedExchangeAdd(v8 + 2, 0xFFFFFFFF) == 1 )
    {
      v2 = v8;
      (**(void (__fastcall ***)(volatile signed __int32 *))v8)(v8);
      if ( _InterlockedExchangeAdd(v2 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v8 + 8LL))(v8);
    }
  }
  return v7;
}
