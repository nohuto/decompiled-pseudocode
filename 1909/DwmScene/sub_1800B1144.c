/*
 * XREFs of sub_1800B1144 @ 0x1800B1144
 * Callers:
 *     sub_1800C640C @ 0x1800C640C (sub_1800C640C.c)
 *     sub_1800FF478 @ 0x1800FF478 (sub_1800FF478.c)
 *     sub_1800FFD5C @ 0x1800FFD5C (sub_1800FFD5C.c)
 * Callees:
 *     sub_18000E4E8 @ 0x18000E4E8 (sub_18000E4E8.c)
 *     sub_180027880 @ 0x180027880 (sub_180027880.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 */

// Hidden C++ exception states: #wind=1
unsigned __int64 __fastcall sub_1800B1144(__int64 a1, int a2, char a3)
{
  __int64 v3; // r10
  __int64 v4; // rcx
  unsigned __int64 result; // rax
  __int64 *v6; // rax
  _QWORD v7[4]; // [rsp+40h] [rbp-88h] BYREF
  _QWORD v8[4]; // [rsp+60h] [rbp-68h] BYREF
  _QWORD pExceptionObject[9]; // [rsp+80h] [rbp-48h] BYREF

  if ( a2 < 0
    || (v3 = *(_QWORD *)(a1 + 104),
        v4 = *(_QWORD *)(a1 + 112) - v3,
        result = (unsigned __int64)((unsigned __int128)(v4 * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 63,
        a2 >= (int)(v4 / 48)) )
  {
    sub_18000E4E8(v8);
    v6 = sub_18000E4E8(v7);
    sub_180027880(pExceptionObject, v6, 1208, (__int64)v8, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  *(_BYTE *)(v3 + 48LL * a2) = a3;
  return result;
}
