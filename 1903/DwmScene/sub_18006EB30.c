/*
 * XREFs of sub_18006EB30 @ 0x18006EB30
 * Callers:
 *     sub_180076510 @ 0x180076510 (sub_180076510.c)
 * Callees:
 *     sub_18000E498 @ 0x18000E498 (sub_18000E498.c)
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18001002C (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     sub_180072B98 @ 0x180072B98 (sub_180072B98.c)
 *     sub_180072FB0 @ 0x180072FB0 (sub_180072FB0.c)
 *     sub_180074178 @ 0x180074178 (sub_180074178.c)
 *     sub_18007EB08 @ 0x18007EB08 (sub_18007EB08.c)
 *     _CxxThrowException @ 0x180125A78 (_CxxThrowException.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18006EB30(__int64 a1)
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
  if ( sub_18007EB08(a1 + 200, &v9) )
  {
    sub_18000E498(v5);
    sub_180074178(pExceptionObject, v5, 0LL);
    throw (Spectre::Utils::SpectreInvalidArgException *)pExceptionObject;
  }
  v7 = 0LL;
  v8 = 0LL;
  sub_180072FB0(&v7);
  sub_180072B98(v1, &v4, &v9);
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
