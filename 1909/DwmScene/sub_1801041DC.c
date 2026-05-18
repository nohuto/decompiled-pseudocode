/*
 * XREFs of sub_1801041DC @ 0x1801041DC
 * Callers:
 *     sub_18010467C @ 0x18010467C (sub_18010467C.c)
 *     sub_1801049A4 @ 0x1801049A4 (sub_1801049A4.c)
 * Callees:
 *     sub_18000E4E8 @ 0x18000E4E8 (sub_18000E4E8.c)
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180010000 (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     sub_1800113D8 @ 0x1800113D8 (sub_1800113D8.c)
 *     sub_180015F14 @ 0x180015F14 (sub_180015F14.c)
 *     sub_1800645F4 @ 0x1800645F4 (sub_1800645F4.c)
 *     sub_18006CEC8 @ 0x18006CEC8 (sub_18006CEC8.c)
 *     sub_18007B288 @ 0x18007B288 (sub_18007B288.c)
 *     sub_180098268 @ 0x180098268 (sub_180098268.c)
 *     sub_18009E070 @ 0x18009E070 (sub_18009E070.c)
 *     sub_1800F0EB4 @ 0x1800F0EB4 (sub_1800F0EB4.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 *     memmove @ 0x180125BAC (memmove.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_1801041DC(__int64 a1)
{
  __int64 v2; // rax
  __int64 *v3; // rdi
  __int64 *v4; // r15
  volatile signed __int32 *v5; // rbx
  __int64 v6; // rsi
  __int64 v7; // rcx
  _QWORD *v9; // rax
  __int64 *v10; // rdi
  volatile signed __int32 *v11; // rbx
  __int64 *v13; // rax
  size_t Size; // [rsp+48h] [rbp-C0h]
  __int64 v15; // [rsp+58h] [rbp-B0h] BYREF
  volatile signed __int32 *v16; // [rsp+60h] [rbp-A8h]
  __int64 v17; // [rsp+68h] [rbp-A0h]
  volatile signed __int32 *v18; // [rsp+70h] [rbp-98h]
  __int64 v19; // [rsp+78h] [rbp-90h] BYREF
  char v20; // [rsp+86h] [rbp-82h]
  __int64 v21; // [rsp+88h] [rbp-80h]
  __int64 v22; // [rsp+90h] [rbp-78h]
  __int64 v23; // [rsp+98h] [rbp-70h]
  __int64 v24[4]; // [rsp+A0h] [rbp-68h] BYREF
  _QWORD v25[5]; // [rsp+C0h] [rbp-48h] BYREF
  _QWORD pExceptionObject[8]; // [rsp+E8h] [rbp-20h] BYREF
  __int64 *v27; // [rsp+128h] [rbp+20h] BYREF
  __int64 *v28; // [rsp+130h] [rbp+28h]
  __int64 v29; // [rsp+138h] [rbp+30h]

  v23 = -2LL;
  v2 = sub_1800F0EB4(a1);
  v27 = 0LL;
  v28 = 0LL;
  v29 = 0LL;
  sub_18007B288(v2, &v27);
  v3 = v27;
  v4 = v28;
  while ( v3 != v4 )
  {
    v17 = 0LL;
    v18 = 0LL;
    v5 = (volatile signed __int32 *)v3[1];
    if ( v5 )
    {
      _InterlockedIncrement(v5 + 2);
      v5 = (volatile signed __int32 *)v3[1];
    }
    v6 = *v3;
    v17 = v6;
    v18 = v5;
    if ( (unsigned int)sub_18006CEC8(v6)
      && !(*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 96LL))(v6, 1LL) )
    {
      v7 = *(_QWORD *)(a1 + 144);
      if ( !v7 || ((v7 - 1) & v7) != 0 )
      {
        sub_18000E4E8(v25);
        v13 = sub_18000E4E8(v24);
        sub_180098268(pExceptionObject, v13, 478, (__int64)v25, 0);
        throw (Spectre::Engine::EngineNotImplException *)pExceptionObject;
      }
    }
    if ( v5 && _InterlockedExchangeAdd(v5 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v5)(v5);
      if ( _InterlockedExchangeAdd(v5 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 8LL))(v5);
    }
    v3 += 2;
  }
  v9 = (_QWORD *)sub_1800F0EB4(a1);
  sub_180015F14(v9, &v15, 1u);
  v10 = (__int64 *)(a1 + 96);
  std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(a1 + 96), &v15);
  v11 = v16;
  if ( v16 )
  {
    if ( _InterlockedExchangeAdd(v16 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v11)(v11);
      if ( _InterlockedExchangeAdd(v11 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 8LL))(v11);
    }
  }
  v22 = 15LL;
  LOBYTE(v19) = 0;
  v21 = 14LL;
  memmove(&v19, "ColorTransform", 0xEuLL);
  v20 = 0;
  sub_1800645F4(*v10, &v19);
  LODWORD(Size) = (*(_QWORD *)(a1 + 120) - *(_QWORD *)(a1 + 112)) & 0xFFFFFFFC;
  sub_18009E070(
    *v10,
    *(_DWORD *)(a1 + 144),
    *(_DWORD *)(a1 + 144),
    *(_DWORD *)(a1 + 144),
    16,
    0,
    1,
    *(const void **)(a1 + 112),
    Size,
    0LL);
  return sub_1800113D8((__int64 *)&v27);
}
