/*
 * XREFs of sub_180078120 @ 0x180078120
 * Callers:
 *     sub_180068BD0 @ 0x180068BD0 (sub_180068BD0.c)
 *     sub_18007578C @ 0x18007578C (sub_18007578C.c)
 *     sub_18007B138 @ 0x18007B138 (sub_18007B138.c)
 *     sub_18007C144 @ 0x18007C144 (sub_18007C144.c)
 *     sub_180085274 @ 0x180085274 (sub_180085274.c)
 *     sub_18008E5F0 @ 0x18008E5F0 (sub_18008E5F0.c)
 *     sub_1800AF450 @ 0x1800AF450 (sub_1800AF450.c)
 *     sub_1800D67E0 @ 0x1800D67E0 (sub_1800D67E0.c)
 *     sub_1800F0ED4 @ 0x1800F0ED4 (sub_1800F0ED4.c)
 *     sub_180102010 @ 0x180102010 (sub_180102010.c)
 * Callees:
 *     sub_18000E498 @ 0x18000E498 (sub_18000E498.c)
 *     sub_18006575C @ 0x18006575C (sub_18006575C.c)
 *     _CxxThrowException @ 0x180125A78 (_CxxThrowException.c)
 */

// Hidden C++ exception states: #wind=1
void __noreturn sub_180078120()
{
  __int64 *v0; // rax
  _QWORD v1[4]; // [rsp+38h] [rbp-90h] BYREF
  _QWORD v2[5]; // [rsp+58h] [rbp-70h] BYREF
  _QWORD pExceptionObject[9]; // [rsp+80h] [rbp-48h] BYREF

  sub_18000E498(v2);
  v0 = sub_18000E498(v1);
  sub_18006575C(pExceptionObject, v0, 336LL, (__int64)v2, 0);
  throw (Spectre::Engine::EngineException *)pExceptionObject;
}
