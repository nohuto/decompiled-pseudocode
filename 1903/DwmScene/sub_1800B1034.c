/*
 * XREFs of sub_1800B1034 @ 0x1800B1034
 * Callers:
 *     sub_1800C62FC @ 0x1800C62FC (sub_1800C62FC.c)
 *     sub_1800FF368 @ 0x1800FF368 (sub_1800FF368.c)
 *     sub_1800FFC4C @ 0x1800FFC4C (sub_1800FFC4C.c)
 * Callees:
 *     sub_18000E498 @ 0x18000E498 (sub_18000E498.c)
 *     sub_180027770 @ 0x180027770 (sub_180027770.c)
 *     _CxxThrowException @ 0x180125A78 (_CxxThrowException.c)
 */

// Hidden C++ exception states: #wind=1
unsigned __int64 __fastcall sub_1800B1034(__int64 a1, int a2, char a3)
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
    sub_18000E498(v8);
    v6 = sub_18000E498(v7);
    sub_180027770(pExceptionObject, v6, 1208, (__int64)v8, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  *(_BYTE *)(v3 + 48LL * a2) = a3;
  return result;
}
