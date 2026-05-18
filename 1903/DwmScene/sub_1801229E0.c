/*
 * XREFs of sub_1801229E0 @ 0x1801229E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000E498 @ 0x18000E498 (sub_18000E498.c)
 *     sub_18011D9DC @ 0x18011D9DC (sub_18011D9DC.c)
 *     _CxxThrowException @ 0x180125A78 (_CxxThrowException.c)
 *     ??2@YAPEAX_K@Z @ 0x180126108 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=3
void __noreturn sub_1801229E0()
{
  __int64 v0; // rbx
  void *v1; // rdi
  _QWORD pExceptionObject[3]; // [rsp+20h] [rbp-48h] BYREF
  _QWORD v3[6]; // [rsp+38h] [rbp-30h] BYREF

  pExceptionObject[1] = -2LL;
  v0 = 0LL;
  try
  {
    v1 = operator new(0x40uLL);
    pExceptionObject[2] = v1;
    if ( v1 )
    {
      sub_18000E498(v3);
      v0 = sub_18011D9DC((__int64)v1, v3, 0);
    }
    pExceptionObject[0] = v0;
    throw (Spectre::Utils::SpectreException **)pExceptionObject;
  }
  catch ( ... )
  {
    sub_18011D988(&qword_18025E1C0, 3, "Failed to deserialise the JSON configuration. Check the configuration format.");
    throw;
  }
}
