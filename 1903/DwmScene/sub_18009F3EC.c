/*
 * XREFs of sub_18009F3EC @ 0x18009F3EC
 * Callers:
 *     sub_1800CFDC8 @ 0x1800CFDC8 (sub_1800CFDC8.c)
 * Callees:
 *     sub_18000E498 @ 0x18000E498 (sub_18000E498.c)
 *     sub_18006575C @ 0x18006575C (sub_18006575C.c)
 *     sub_18009F198 @ 0x18009F198 (sub_18009F198.c)
 *     _CxxThrowException @ 0x180125A78 (_CxxThrowException.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18009F3EC(__int64 a1, __int64 a2)
{
  __int64 *v5; // rax
  _QWORD v6[4]; // [rsp+40h] [rbp-88h] BYREF
  _QWORD v7[4]; // [rsp+60h] [rbp-68h] BYREF
  _QWORD pExceptionObject[9]; // [rsp+80h] [rbp-48h] BYREF

  if ( !sub_18009F198(*(_QWORD *)(a1 + 112), *(_QWORD *)(*(_QWORD *)a2 + 96LL)) )
  {
    sub_18000E498(v7);
    v5 = sub_18000E498(v6);
    sub_18006575C(pExceptionObject, v5, 147LL, (__int64)v7, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  return sub_18009F494(a1, a2);
}
