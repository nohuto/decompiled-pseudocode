/*
 * XREFs of sub_180099A7C @ 0x180099A7C
 * Callers:
 *     sub_180099A60 @ 0x180099A60 (sub_180099A60.c)
 *     sub_18009A7C0 @ 0x18009A7C0 (sub_18009A7C0.c)
 *     sub_18009AB00 @ 0x18009AB00 (sub_18009AB00.c)
 *     sub_18009BD60 @ 0x18009BD60 (sub_18009BD60.c)
 *     sub_1801119A0 @ 0x1801119A0 (sub_1801119A0.c)
 * Callees:
 *     sub_18000E4E8 @ 0x18000E4E8 (sub_18000E4E8.c)
 *     sub_18006586C @ 0x18006586C (sub_18006586C.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_180099A7C(__int64 a1, _QWORD *a2, unsigned __int64 a3)
{
  __int64 v4; // r10
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 *v8; // rax
  _QWORD v9[4]; // [rsp+40h] [rbp-88h] BYREF
  _QWORD v10[4]; // [rsp+60h] [rbp-68h] BYREF
  _QWORD pExceptionObject[9]; // [rsp+80h] [rbp-48h] BYREF

  v4 = *(_QWORD *)(a1 + 104);
  if ( a3 >= (*(_QWORD *)(a1 + 112) - v4) / 88 )
  {
    sub_18000E4E8(v10);
    v8 = sub_18000E4E8(v9);
    sub_18006586C(pExceptionObject, v8, 690LL, (__int64)v10, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  v5 = 88 * a3;
  *a2 = 0LL;
  a2[1] = 0LL;
  v6 = *(_QWORD *)(88 * a3 + v4 + 8);
  if ( v6 )
    _InterlockedIncrement((volatile signed __int32 *)(v6 + 8));
  *a2 = *(_QWORD *)(v5 + v4);
  a2[1] = *(_QWORD *)(v5 + v4 + 8);
  return a2;
}
