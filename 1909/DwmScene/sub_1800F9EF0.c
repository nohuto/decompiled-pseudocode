/*
 * XREFs of sub_1800F9EF0 @ 0x1800F9EF0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000E4E8 @ 0x18000E4E8 (sub_18000E4E8.c)
 *     sub_18006586C @ 0x18006586C (sub_18006586C.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 */

// Hidden C++ exception states: #wind=2
void __noreturn sub_1800F9EF0()
{
  __int64 *v0; // rax
  _QWORD v1[4]; // [rsp+48h] [rbp-90h] BYREF
  _QWORD v2[5]; // [rsp+68h] [rbp-70h] BYREF
  _QWORD pExceptionObject[9]; // [rsp+90h] [rbp-48h] BYREF

  sub_18000E4E8(v2);
  v0 = sub_18000E4E8(v1);
  sub_18006586C(pExceptionObject, v0, 31LL, (__int64)v2, 0);
  throw (Spectre::Engine::EngineException *)pExceptionObject;
}
