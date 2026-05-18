/*
 * XREFs of sub_1800B6980 @ 0x1800B6980
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000E498 @ 0x18000E498 (sub_18000E498.c)
 *     sub_18011D9DC @ 0x18011D9DC (sub_18011D9DC.c)
 *     _CxxThrowException @ 0x180125A78 (_CxxThrowException.c)
 */

// Hidden C++ exception states: #wind=1
void __noreturn sub_1800B6980()
{
  _QWORD v0[5]; // [rsp+28h] [rbp-70h] BYREF
  _BYTE pExceptionObject[72]; // [rsp+50h] [rbp-48h] BYREF

  sub_18000E498(v0);
  sub_18011D9DC(pExceptionObject, v0, 0LL);
  throw (Spectre::Utils::SpectreException *)pExceptionObject;
}
