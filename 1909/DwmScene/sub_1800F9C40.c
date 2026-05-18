/*
 * XREFs of sub_1800F9C40 @ 0x1800F9C40
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000E4E8 @ 0x18000E4E8 (sub_18000E4E8.c)
 *     sub_18006586C @ 0x18006586C (sub_18006586C.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 */

// Hidden C++ exception states: #wind=1
void __noreturn sub_1800F9C40()
{
  __int64 *v0; // rax
  _QWORD v1[4]; // [rsp+40h] [rbp-88h] BYREF
  _QWORD v2[4]; // [rsp+60h] [rbp-68h] BYREF
  _QWORD pExceptionObject[9]; // [rsp+80h] [rbp-48h] BYREF

  sub_18000E4E8(v2);
  v0 = sub_18000E4E8(v1);
  sub_18006586C(pExceptionObject, v0, 35LL, (__int64)v2, 0);
  throw (Spectre::Engine::EngineException *)pExceptionObject;
}
