/*
 * XREFs of sub_1800779F0 @ 0x1800779F0
 * Callers:
 *     sub_180010500 @ 0x180010500 (sub_180010500.c)
 *     sub_1800141C0 @ 0x1800141C0 (sub_1800141C0.c)
 *     sub_180018150 @ 0x180018150 (sub_180018150.c)
 *     sub_180077600 @ 0x180077600 (sub_180077600.c)
 *     sub_1800777B0 @ 0x1800777B0 (sub_1800777B0.c)
 * Callees:
 *     sub_18000E498 @ 0x18000E498 (sub_18000E498.c)
 *     sub_18006575C @ 0x18006575C (sub_18006575C.c)
 *     _CxxThrowException @ 0x180125A78 (_CxxThrowException.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_1800779F0(__int64 a1, _QWORD *a2)
{
  _QWORD *v2; // rax
  __int64 v3; // rcx
  __int64 *v5; // rax
  _QWORD v6[4]; // [rsp+40h] [rbp-88h] BYREF
  _QWORD v7[4]; // [rsp+60h] [rbp-68h] BYREF
  _QWORD pExceptionObject[9]; // [rsp+80h] [rbp-48h] BYREF

  v2 = *(_QWORD **)(a1 + 704);
  if ( v2 == *(_QWORD **)(a1 + 712) )
  {
    sub_18000E498(v7);
    v5 = sub_18000E498(v6);
    sub_18006575C(pExceptionObject, v5, 979LL, (__int64)v7, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  *a2 = 0LL;
  a2[1] = 0LL;
  v3 = v2[1];
  if ( v3 )
    _InterlockedIncrement((volatile signed __int32 *)(v3 + 8));
  *a2 = *v2;
  a2[1] = v2[1];
  return a2;
}
