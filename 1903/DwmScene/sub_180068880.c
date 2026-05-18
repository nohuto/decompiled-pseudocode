/*
 * XREFs of sub_180068880 @ 0x180068880
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000E498 @ 0x18000E498 (sub_18000E498.c)
 *     sub_18006575C @ 0x18006575C (sub_18006575C.c)
 *     _CxxThrowException @ 0x180125A78 (_CxxThrowException.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_180068880(__int64 a1, unsigned int a2)
{
  __int64 *v2; // rax
  _QWORD v3[4]; // [rsp+40h] [rbp-88h] BYREF
  _QWORD v4[4]; // [rsp+60h] [rbp-68h] BYREF
  _QWORD pExceptionObject[9]; // [rsp+80h] [rbp-48h] BYREF

  if ( a2 > 4 )
  {
    sub_18000E498(v4);
    v2 = sub_18000E498(v3);
    sub_18006575C(pExceptionObject, v2, 271LL, (__int64)v4, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  *(_DWORD *)(a1 + 296) = a2;
}
