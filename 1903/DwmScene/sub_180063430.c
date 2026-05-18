/*
 * XREFs of sub_180063430 @ 0x180063430
 * Callers:
 *     sub_18006ED90 @ 0x18006ED90 (sub_18006ED90.c)
 *     sub_180087340 @ 0x180087340 (sub_180087340.c)
 *     sub_18008AA04 @ 0x18008AA04 (sub_18008AA04.c)
 *     sub_18008AAB0 @ 0x18008AAB0 (sub_18008AAB0.c)
 *     sub_18008ACB0 @ 0x18008ACB0 (sub_18008ACB0.c)
 *     sub_18008AD88 @ 0x18008AD88 (sub_18008AD88.c)
 *     sub_18008AF1C @ 0x18008AF1C (sub_18008AF1C.c)
 *     sub_18008B2A0 @ 0x18008B2A0 (sub_18008B2A0.c)
 *     sub_18008C220 @ 0x18008C220 (sub_18008C220.c)
 *     sub_1800B9898 @ 0x1800B9898 (sub_1800B9898.c)
 *     sub_1800B9BA0 @ 0x1800B9BA0 (sub_1800B9BA0.c)
 *     sub_1800B9EA8 @ 0x1800B9EA8 (sub_1800B9EA8.c)
 *     sub_1800BA1B0 @ 0x1800BA1B0 (sub_1800BA1B0.c)
 *     sub_1800BA4B8 @ 0x1800BA4B8 (sub_1800BA4B8.c)
 *     sub_1800BA7C0 @ 0x1800BA7C0 (sub_1800BA7C0.c)
 *     sub_1800C1AF8 @ 0x1800C1AF8 (sub_1800C1AF8.c)
 *     sub_1800DB87C @ 0x1800DB87C (sub_1800DB87C.c)
 *     sub_1800DDA58 @ 0x1800DDA58 (sub_1800DDA58.c)
 * Callees:
 *     sub_18000E498 @ 0x18000E498 (sub_18000E498.c)
 *     sub_180062F54 @ 0x180062F54 (sub_180062F54.c)
 *     sub_1800633E8 @ 0x1800633E8 (sub_1800633E8.c)
 *     _CxxThrowException @ 0x180125A78 (_CxxThrowException.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall sub_180063430(__int64 a1)
{
  char result; // al
  __int64 *v2; // rax
  _QWORD v3[4]; // [rsp+38h] [rbp-90h] BYREF
  _QWORD v4[5]; // [rsp+58h] [rbp-70h] BYREF
  _QWORD pExceptionObject[9]; // [rsp+80h] [rbp-48h] BYREF

  result = sub_1800633E8(a1);
  if ( !result )
  {
    sub_18000E498(v4);
    v2 = sub_18000E498(v3);
    sub_180062F54(pExceptionObject, v2, 248, (__int64)v4, 0);
    throw (Spectre::Engine::EngineAccessDeniedException *)pExceptionObject;
  }
  return result;
}
