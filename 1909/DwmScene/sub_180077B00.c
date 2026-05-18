/*
 * XREFs of sub_180077B00 @ 0x180077B00
 * Callers:
 *     sub_180010550 @ 0x180010550 (sub_180010550.c)
 *     sub_180014230 @ 0x180014230 (sub_180014230.c)
 *     sub_1800181C0 @ 0x1800181C0 (sub_1800181C0.c)
 *     sub_180077710 @ 0x180077710 (sub_180077710.c)
 *     sub_1800778C0 @ 0x1800778C0 (sub_1800778C0.c)
 * Callees:
 *     sub_18000E4E8 @ 0x18000E4E8 (sub_18000E4E8.c)
 *     sub_18006586C @ 0x18006586C (sub_18006586C.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_180077B00(__int64 a1, _QWORD *a2)
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
    sub_18000E4E8(v7);
    v5 = sub_18000E4E8(v6);
    sub_18006586C(pExceptionObject, v5, 979LL, (__int64)v7, 0);
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
