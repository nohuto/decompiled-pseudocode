/*
 * XREFs of sub_180078230 @ 0x180078230
 * Callers:
 *     sub_180068CE0 @ 0x180068CE0 (sub_180068CE0.c)
 *     sub_18007589C @ 0x18007589C (sub_18007589C.c)
 *     sub_18007B248 @ 0x18007B248 (sub_18007B248.c)
 *     sub_18007C254 @ 0x18007C254 (sub_18007C254.c)
 *     sub_180085384 @ 0x180085384 (sub_180085384.c)
 *     sub_18008E700 @ 0x18008E700 (sub_18008E700.c)
 *     sub_1800AF560 @ 0x1800AF560 (sub_1800AF560.c)
 *     sub_1800D68F0 @ 0x1800D68F0 (sub_1800D68F0.c)
 *     sub_1800F0FE4 @ 0x1800F0FE4 (sub_1800F0FE4.c)
 *     sub_180102120 @ 0x180102120 (sub_180102120.c)
 * Callees:
 *     sub_18000E4E8 @ 0x18000E4E8 (sub_18000E4E8.c)
 *     sub_18006586C @ 0x18006586C (sub_18006586C.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 */

// Hidden C++ exception states: #wind=1
void __noreturn sub_180078230()
{
  __int64 *v0; // rax
  _QWORD v1[4]; // [rsp+38h] [rbp-90h] BYREF
  _QWORD v2[5]; // [rsp+58h] [rbp-70h] BYREF
  _QWORD pExceptionObject[9]; // [rsp+80h] [rbp-48h] BYREF

  sub_18000E4E8(v2);
  v0 = sub_18000E4E8(v1);
  sub_18006586C(pExceptionObject, v0, 336LL, (__int64)v2, 0);
  throw (Spectre::Engine::EngineException *)pExceptionObject;
}
