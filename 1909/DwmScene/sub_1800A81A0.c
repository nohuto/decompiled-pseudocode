/*
 * XREFs of sub_1800A81A0 @ 0x1800A81A0
 * Callers:
 *     sub_1800A3178 @ 0x1800A3178 (sub_1800A3178.c)
 *     sub_1800A3AA8 @ 0x1800A3AA8 (sub_1800A3AA8.c)
 * Callees:
 *     sub_18000E4E8 @ 0x18000E4E8 (sub_18000E4E8.c)
 *     sub_180027880 @ 0x180027880 (sub_180027880.c)
 *     sub_1800635BC @ 0x1800635BC (sub_1800635BC.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall sub_1800A81A0(__int64 a1, _QWORD *a2)
{
  volatile signed __int32 *v4; // rbx
  __int64 *v5; // rax
  _QWORD v6[4]; // [rsp+48h] [rbp-90h] BYREF
  _QWORD v7[5]; // [rsp+68h] [rbp-70h] BYREF
  _QWORD pExceptionObject[9]; // [rsp+90h] [rbp-48h] BYREF

  sub_1800635BC(*a2 + 24LL, (__int64)a2);
  if ( *(_DWORD *)(a1 + 432) != 1 )
  {
    sub_18000E4E8(v7);
    v5 = sub_18000E4E8(v6);
    sub_180027880(pExceptionObject, v5, 510, (__int64)v7, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  v4 = (volatile signed __int32 *)a2[1];
  if ( v4 && _InterlockedExchangeAdd(v4 + 2, 0xFFFFFFFF) == 1 )
  {
    (**(void (__fastcall ***)(volatile signed __int32 *))v4)(v4);
    if ( !_InterlockedDecrement(v4 + 3) )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v4 + 8LL))(v4);
  }
}
