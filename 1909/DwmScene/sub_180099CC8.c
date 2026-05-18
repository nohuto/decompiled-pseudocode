/*
 * XREFs of sub_180099CC8 @ 0x180099CC8
 * Callers:
 *     sub_18009AB00 @ 0x18009AB00 (sub_18009AB00.c)
 * Callees:
 *     sub_18000E4E8 @ 0x18000E4E8 (sub_18000E4E8.c)
 *     sub_18006586C @ 0x18006586C (sub_18006586C.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall sub_180099CC8(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // r9
  __int64 *v4; // rax
  _QWORD v5[4]; // [rsp+38h] [rbp-90h] BYREF
  _QWORD v6[5]; // [rsp+58h] [rbp-70h] BYREF
  _QWORD pExceptionObject[9]; // [rsp+80h] [rbp-48h] BYREF

  v2 = *(_QWORD *)(a1 + 104);
  if ( a2 >= (*(_QWORD *)(a1 + 112) - v2) / 88 )
  {
    sub_18000E4E8(v6);
    v4 = sub_18000E4E8(v5);
    sub_18006586C(pExceptionObject, v4, 134LL, (__int64)v6, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  return *(_BYTE *)(88 * a2 + v2 + 16);
}
