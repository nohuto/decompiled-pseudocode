/*
 * XREFs of sub_1800AED34 @ 0x1800AED34
 * Callers:
 *     sub_1800B1C10 @ 0x1800B1C10 (sub_1800B1C10.c)
 *     sub_1800B1E70 @ 0x1800B1E70 (sub_1800B1E70.c)
 *     sub_1800B214C @ 0x1800B214C (sub_1800B214C.c)
 * Callees:
 *     sub_18000E498 @ 0x18000E498 (sub_18000E498.c)
 *     sub_18006575C @ 0x18006575C (sub_18006575C.c)
 *     _CxxThrowException @ 0x180125A78 (_CxxThrowException.c)
 */

// Hidden C++ exception states: #wind=1
bool __fastcall sub_1800AED34(__int64 a1, int a2)
{
  __int64 v3; // rcx
  __int64 *v5; // rax
  _QWORD v6[4]; // [rsp+38h] [rbp-90h] BYREF
  _QWORD v7[5]; // [rsp+58h] [rbp-70h] BYREF
  _QWORD pExceptionObject[9]; // [rsp+80h] [rbp-48h] BYREF

  v3 = 0LL;
  while ( 1 << v3 != a2 )
  {
    v3 = (unsigned int)(v3 + 1);
    if ( (unsigned int)v3 >= 3 )
    {
      sub_18000E498(v7);
      v5 = sub_18000E498(v6);
      sub_18006575C(pExceptionObject, v5, 465LL, (__int64)v7, 0);
      throw (Spectre::Engine::EngineException *)pExceptionObject;
    }
  }
  return *(_DWORD *)(a1 + 4 * v3 + 280) != 0;
}
