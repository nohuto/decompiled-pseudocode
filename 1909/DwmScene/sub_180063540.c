/*
 * XREFs of sub_180063540 @ 0x180063540
 * Callers:
 *     sub_18006EEA0 @ 0x18006EEA0 (sub_18006EEA0.c)
 *     sub_180087450 @ 0x180087450 (sub_180087450.c)
 *     sub_18008AB14 @ 0x18008AB14 (sub_18008AB14.c)
 *     sub_18008ABC0 @ 0x18008ABC0 (sub_18008ABC0.c)
 *     sub_18008ADC0 @ 0x18008ADC0 (sub_18008ADC0.c)
 *     sub_18008AE98 @ 0x18008AE98 (sub_18008AE98.c)
 *     sub_18008B02C @ 0x18008B02C (sub_18008B02C.c)
 *     sub_18008B3B0 @ 0x18008B3B0 (sub_18008B3B0.c)
 *     sub_18008C330 @ 0x18008C330 (sub_18008C330.c)
 *     sub_1800B99A8 @ 0x1800B99A8 (sub_1800B99A8.c)
 *     sub_1800B9CB0 @ 0x1800B9CB0 (sub_1800B9CB0.c)
 *     sub_1800B9FB8 @ 0x1800B9FB8 (sub_1800B9FB8.c)
 *     sub_1800BA2C0 @ 0x1800BA2C0 (sub_1800BA2C0.c)
 *     sub_1800BA5C8 @ 0x1800BA5C8 (sub_1800BA5C8.c)
 *     sub_1800BA8D0 @ 0x1800BA8D0 (sub_1800BA8D0.c)
 *     sub_1800C1C08 @ 0x1800C1C08 (sub_1800C1C08.c)
 *     sub_1800DB98C @ 0x1800DB98C (sub_1800DB98C.c)
 *     sub_1800DDB68 @ 0x1800DDB68 (sub_1800DDB68.c)
 * Callees:
 *     sub_18000E4E8 @ 0x18000E4E8 (sub_18000E4E8.c)
 *     sub_180063064 @ 0x180063064 (sub_180063064.c)
 *     sub_1800634F8 @ 0x1800634F8 (sub_1800634F8.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall sub_180063540(__int64 a1)
{
  char result; // al
  __int64 *v2; // rax
  _QWORD v3[4]; // [rsp+38h] [rbp-90h] BYREF
  _QWORD v4[5]; // [rsp+58h] [rbp-70h] BYREF
  _QWORD pExceptionObject[9]; // [rsp+80h] [rbp-48h] BYREF

  result = sub_1800634F8(a1);
  if ( !result )
  {
    sub_18000E4E8(v4);
    v2 = sub_18000E4E8(v3);
    sub_180063064(pExceptionObject, v2, 248, (__int64)v4, 0);
    throw (Spectre::Engine::EngineAccessDeniedException *)pExceptionObject;
  }
  return result;
}
