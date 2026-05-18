/*
 * XREFs of sub_180029AD8 @ 0x180029AD8
 * Callers:
 *     sub_180028B80 @ 0x180028B80 (sub_180028B80.c)
 *     sub_18002AB70 @ 0x18002AB70 (sub_18002AB70.c)
 *     sub_18002B1D0 @ 0x18002B1D0 (sub_18002B1D0.c)
 *     sub_18002C760 @ 0x18002C760 (sub_18002C760.c)
 *     sub_18002CB20 @ 0x18002CB20 (sub_18002CB20.c)
 *     sub_18002E960 @ 0x18002E960 (sub_18002E960.c)
 *     sub_18002F5BC @ 0x18002F5BC (sub_18002F5BC.c)
 *     sub_1800312D4 @ 0x1800312D4 (sub_1800312D4.c)
 *     sub_180034E90 @ 0x180034E90 (sub_180034E90.c)
 *     sub_18003A0C0 @ 0x18003A0C0 (sub_18003A0C0.c)
 *     sub_18003AA50 @ 0x18003AA50 (sub_18003AA50.c)
 * Callees:
 *     sub_18000E4E8 @ 0x18000E4E8 (sub_18000E4E8.c)
 *     sub_180027880 @ 0x180027880 (sub_180027880.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180029AD8(int a1, int a2)
{
  unsigned int v3; // edx
  int v4; // r8d
  __int64 *v6; // rax
  _OWORD pExceptionObject[6]; // [rsp+40h] [rbp-59h] BYREF
  int v8; // [rsp+A0h] [rbp+7h]
  _QWORD v9[4]; // [rsp+B0h] [rbp+17h] BYREF
  _QWORD v10[4]; // [rsp+D0h] [rbp+37h] BYREF

  pExceptionObject[0] = _mm_load_si128((const __m128i *)&xmmword_18014D410);
  pExceptionObject[1] = _mm_load_si128((const __m128i *)&xmmword_18014D420);
  pExceptionObject[2] = _mm_load_si128((const __m128i *)&xmmword_18014D3F0);
  pExceptionObject[3] = _mm_load_si128((const __m128i *)&xmmword_18014D400);
  pExceptionObject[4] = _mm_load_si128((const __m128i *)&xmmword_18014D430);
  pExceptionObject[5] = _mm_load_si128((const __m128i *)&xmmword_18014D440);
  v8 = 107;
  v3 = *((_DWORD *)pExceptionObject + a1);
  if ( !a2 )
    return v3;
  v4 = a2 - 1;
  if ( v4 )
  {
    if ( v4 != 1 )
    {
      sub_18000E4E8(v10);
      v6 = sub_18000E4E8(v9);
      sub_180027880(pExceptionObject, v6, 165, (__int64)v10, 0);
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
