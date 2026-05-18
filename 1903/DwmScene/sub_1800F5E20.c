/*
 * XREFs of sub_1800F5E20 @ 0x1800F5E20
 * Callers:
 *     sub_180090E14 @ 0x180090E14 (sub_180090E14.c)
 *     sub_1800F5D80 @ 0x1800F5D80 (sub_1800F5D80.c)
 * Callees:
 *     sub_18000E498 @ 0x18000E498 (sub_18000E498.c)
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18000FFB0 (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     sub_1800114EC @ 0x1800114EC (sub_1800114EC.c)
 *     sub_180027770 @ 0x180027770 (sub_180027770.c)
 *     sub_1800453AC @ 0x1800453AC (sub_1800453AC.c)
 *     sub_1800A4414 @ 0x1800A4414 (sub_1800A4414.c)
 *     sub_1800F2F48 @ 0x1800F2F48 (sub_1800F2F48.c)
 *     sub_1800F3024 @ 0x1800F3024 (sub_1800F3024.c)
 *     _CxxThrowException @ 0x180125A78 (_CxxThrowException.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall sub_1800F5E20(__int64 a1, unsigned __int16 a2, __int64 *a3)
{
  __int64 *v6; // rsi
  _DWORD *v7; // rax
  __int64 result; // rax
  volatile signed __int32 *v9; // rbx
  signed __int32 v10; // eax
  bool v11; // zf
  __int64 *v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  _QWORD *v15; // rax
  __int64 v16; // rbx
  __int64 *v17; // rax
  __int64 *v18; // rax
  _QWORD v19[4]; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD v20[4]; // [rsp+68h] [rbp-98h] BYREF
  _QWORD v21[4]; // [rsp+88h] [rbp-78h] BYREF
  _QWORD v22[4]; // [rsp+A8h] [rbp-58h] BYREF
  _QWORD v23[4]; // [rsp+C8h] [rbp-38h] BYREF
  _QWORD v24[4]; // [rsp+E8h] [rbp-18h] BYREF
  _BYTE v25[40]; // [rsp+108h] [rbp+8h] BYREF
  _QWORD v26[8]; // [rsp+130h] [rbp+30h] BYREF
  _QWORD v27[8]; // [rsp+170h] [rbp+70h] BYREF
  _QWORD pExceptionObject[12]; // [rsp+1B0h] [rbp+B0h] BYREF

  v6 = (__int64 *)(a1 + 16);
  if ( !sub_1800F3024(*(_QWORD *)(a1 + 16), a2) )
  {
    v13 = sub_1800114EC((__int64)v6);
    v14 = sub_1800114EC(v13 + 1152);
    v15 = sub_1800A4414(v14, v24, a2);
    v16 = sub_1800453AC((__int64)v25, (__int64)"Property does not exist: ", (__int64)v15);
    v17 = sub_18000E498(v19);
    sub_180027770(v26, v17, 433, v16, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)v26;
  }
  v7 = (_DWORD *)sub_1800F2F48(*v6, a2);
  if ( v7[9] != 8 )
  {
    sub_18000E498(v21);
    v18 = sub_18000E498(v20);
    sub_180027770(v27, v18, 437, (__int64)v21, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)v27;
  }
  if ( v7[12] == 2 )
  {
    sub_18000E498(v23);
    v12 = sub_18000E498(v22);
    sub_180027770(pExceptionObject, v12, 442, (__int64)v23, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  result = (__int64)std::shared_ptr<__ExceptionPtr>::operator=(
                      (_QWORD *)(*(_QWORD *)(a1 + 56) + 40LL * (unsigned int)v7[10]),
                      a3);
  v9 = (volatile signed __int32 *)a3[1];
  if ( v9 )
  {
    v10 = _InterlockedExchangeAdd(v9 + 2, 0xFFFFFFFF);
    v11 = v10 == 1;
    result = (unsigned int)(v10 - 1);
    if ( v11 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v9)(v9);
      result = (unsigned int)_InterlockedDecrement(v9 + 3);
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v9 + 8LL))(v9);
    }
  }
  return result;
}
