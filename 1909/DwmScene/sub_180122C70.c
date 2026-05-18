/*
 * XREFs of sub_180122C70 @ 0x180122C70
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000E4E8 @ 0x18000E4E8 (sub_18000E4E8.c)
 *     sub_18011DAEC @ 0x18011DAEC (sub_18011DAEC.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 *     ??2@YAPEAX_K@Z @ 0x180126218 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall __noreturn sub_180122C70(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  void *v5; // rdi
  _QWORD pExceptionObject[4]; // [rsp+28h] [rbp-60h] BYREF
  _QWORD v7[5]; // [rsp+48h] [rbp-40h] BYREF

  pExceptionObject[1] = -2LL;
  pExceptionObject[2] = a3;
  v7[4] = a4;
  v4 = 0LL;
  v5 = operator new(0x40uLL);
  pExceptionObject[3] = v5;
  if ( v5 )
  {
    sub_18000E4E8(v7);
    v4 = sub_18011DAEC((__int64)v5, v7, 0);
  }
  pExceptionObject[0] = v4;
  throw (Spectre::Utils::SpectreException **)pExceptionObject;
}
