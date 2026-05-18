/*
 * XREFs of sub_1800299C8 @ 0x1800299C8
 * Callers:
 *     sub_180028A70 @ 0x180028A70 (sub_180028A70.c)
 *     sub_18002AA60 @ 0x18002AA60 (sub_18002AA60.c)
 *     sub_18002B0C0 @ 0x18002B0C0 (sub_18002B0C0.c)
 *     sub_18002C650 @ 0x18002C650 (sub_18002C650.c)
 *     sub_18002CA10 @ 0x18002CA10 (sub_18002CA10.c)
 *     sub_18002E850 @ 0x18002E850 (sub_18002E850.c)
 *     sub_18002F4AC @ 0x18002F4AC (sub_18002F4AC.c)
 *     sub_1800311C4 @ 0x1800311C4 (sub_1800311C4.c)
 *     sub_180034D80 @ 0x180034D80 (sub_180034D80.c)
 *     sub_180039FB0 @ 0x180039FB0 (sub_180039FB0.c)
 *     sub_18003A940 @ 0x18003A940 (sub_18003A940.c)
 * Callees:
 *     sub_18000E498 @ 0x18000E498 (sub_18000E498.c)
 *     sub_180027770 @ 0x180027770 (sub_180027770.c)
 *     _CxxThrowException @ 0x180125A78 (_CxxThrowException.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800299C8(int a1, int a2)
{
  unsigned int v3; // edx
  int v4; // r8d
  __int64 *v6; // rax
  _OWORD pExceptionObject[6]; // [rsp+40h] [rbp-59h] BYREF
  int v8; // [rsp+A0h] [rbp+7h]
  _QWORD v9[4]; // [rsp+B0h] [rbp+17h] BYREF
  _QWORD v10[4]; // [rsp+D0h] [rbp+37h] BYREF

  pExceptionObject[0] = _mm_load_si128((const __m128i *)&xmmword_18014C410);
  pExceptionObject[1] = _mm_load_si128((const __m128i *)&xmmword_18014C420);
  pExceptionObject[2] = _mm_load_si128((const __m128i *)&xmmword_18014C3F0);
  pExceptionObject[3] = _mm_load_si128((const __m128i *)&xmmword_18014C400);
  pExceptionObject[4] = _mm_load_si128((const __m128i *)&xmmword_18014C430);
  pExceptionObject[5] = _mm_load_si128((const __m128i *)&xmmword_18014C440);
  v8 = 107;
  v3 = *((_DWORD *)pExceptionObject + a1);
  if ( !a2 )
    return v3;
  v4 = a2 - 1;
  if ( v4 )
  {
    if ( v4 != 1 )
    {
      sub_18000E498(v10);
      v6 = sub_18000E498(v9);
      sub_180027770(pExceptionObject, v6, 165, (__int64)v10, 0);
      throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
    }
    return v3;
  }
  switch ( v3 )
  {
    case 0x1Cu:
      return 29;
    case 0x47u:
      return 72;
    case 0x4Au:
      return 75;
    case 0x4Du:
      return 78;
    case 0x57u:
      return 91;
    case 0x58u:
      return 93;
    case 0x5Au:
      return 91;
    case 0x5Cu:
      return 93;
    case 0x62u:
      return 99;
  }
  return v3;
}
