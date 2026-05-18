/*
 * XREFs of sub_1800F9DE0 @ 0x1800F9DE0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000E498 @ 0x18000E498 (sub_18000E498.c)
 *     sub_18006575C @ 0x18006575C (sub_18006575C.c)
 *     _CxxThrowException @ 0x180125A78 (_CxxThrowException.c)
 */

// Hidden C++ exception states: #wind=2
void __noreturn sub_1800F9DE0()
{
  __int64 *v0; // rax
  _QWORD v1[4]; // [rsp+48h] [rbp-90h] BYREF
  _QWORD v2[5]; // [rsp+68h] [rbp-70h] BYREF
  _QWORD pExceptionObject[9]; // [rsp+90h] [rbp-48h] BYREF

  sub_18000E498(v2);
  v0 = sub_18000E498(v1);
  sub_18006575C(pExceptionObject, v0, 31LL, (__int64)v2, 0);
  throw (Spectre::Engine::EngineException *)pExceptionObject;
}
