/*
 * XREFs of sub_180122AD0 @ 0x180122AD0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000E498 @ 0x18000E498 (sub_18000E498.c)
 *     sub_18011D9DC @ 0x18011D9DC (sub_18011D9DC.c)
 *     _CxxThrowException @ 0x180125A78 (_CxxThrowException.c)
 *     ??2@YAPEAX_K@Z @ 0x180126108 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall __noreturn sub_180122AD0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  void *v4; // rdi
  _QWORD pExceptionObject[3]; // [rsp+28h] [rbp-50h] BYREF
  _QWORD v6[5]; // [rsp+40h] [rbp-38h] BYREF

  pExceptionObject[1] = -2LL;
  v6[4] = a3;
  v3 = 0LL;
  v4 = operator new(0x40uLL);
  pExceptionObject[2] = v4;
  if ( v4 )
  {
    sub_18000E498(v6);
    v3 = sub_18011D9DC((__int64)v4, v6, 0);
  }
  pExceptionObject[0] = v3;
  throw (Spectre::Utils::SpectreException **)pExceptionObject;
}
