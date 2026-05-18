/*
 * XREFs of sub_1800B6DC0 @ 0x1800B6DC0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000E4E8 @ 0x18000E4E8 (sub_18000E4E8.c)
 *     sub_18011DAEC @ 0x18011DAEC (sub_18011DAEC.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 */

// Hidden C++ exception states: #wind=1
void __noreturn sub_1800B6DC0()
{
  _QWORD v0[5]; // [rsp+28h] [rbp-70h] BYREF
  _BYTE pExceptionObject[72]; // [rsp+50h] [rbp-48h] BYREF

  sub_18000E4E8(v0);
  sub_18011DAEC(pExceptionObject, v0, 0LL);
  throw (Spectre::Utils::SpectreException *)pExceptionObject;
}
