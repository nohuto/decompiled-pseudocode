/*
 * XREFs of sub_1800F0B50 @ 0x1800F0B50
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000E498 @ 0x18000E498 (sub_18000E498.c)
 *     sub_18002BF78 @ 0x18002BF78 (sub_18002BF78.c)
 *     sub_180078030 @ 0x180078030 (sub_180078030.c)
 *     sub_180088228 @ 0x180088228 (sub_180088228.c)
 *     sub_180098158 @ 0x180098158 (sub_180098158.c)
 *     sub_18009FB30 @ 0x18009FB30 (sub_18009FB30.c)
 *     _CxxThrowException @ 0x180125A78 (_CxxThrowException.c)
 *     __RTtypeid @ 0x180125AAE (__RTtypeid.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
_QWORD *__fastcall sub_1800F0B50(__int64 a1, _QWORD *a2, _DWORD *a3, __int64 a4)
{
  volatile signed __int32 *v6; // rbx
  _QWORD *v8; // r8
  const void **v9; // rax
  _QWORD *v10; // rbx
  __int64 v11; // rax
  _BYTE *v12; // rax
  _QWORD *v13; // rax
  __int64 v14; // rbx
  __int64 *v15; // rax
  _QWORD v16[4]; // [rsp+48h] [rbp-100h] BYREF
  const void *Src; // [rsp+68h] [rbp-E0h] BYREF
  _BYTE v18[32]; // [rsp+88h] [rbp-C0h] BYREF
  _BYTE v19[32]; // [rsp+A8h] [rbp-A0h] BYREF
  _BYTE v20[40]; // [rsp+C8h] [rbp-80h] BYREF
  _QWORD pExceptionObject[11]; // [rsp+F0h] [rbp-58h] BYREF

  if ( (*a3 & 0x10000) == 0 )
  {
    v8 = (_QWORD *)sub_180078030(a1);
    v9 = sub_18009FB30(&Src, "Component::Clone() -- component '", v8);
    v10 = (_QWORD *)sub_18002BF78((__int64)v18, v9, "' of type ");
    v11 = _RTtypeid(a1);
    v12 = (_BYTE *)sub_180088228(v11);
    v13 = (_QWORD *)sub_18002BF78((__int64)v19, v10, v12);
    v14 = sub_18002BF78((__int64)v20, v13, " does not support cloning.");
    v15 = sub_18000E498(v16);
    sub_180098158(pExceptionObject, v15, 43, v14, 0);
    throw (Spectre::Engine::EngineNotImplException *)pExceptionObject;
  }
  *a2 = 0LL;
  a2[1] = 0LL;
  v6 = *(volatile signed __int32 **)(a4 + 8);
  if ( v6 )
  {
    if ( _InterlockedExchangeAdd(v6 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v6)(v6);
      if ( _InterlockedExchangeAdd(v6 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 8LL))(v6);
    }
  }
  return a2;
}
