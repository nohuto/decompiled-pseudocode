/*
 * XREFs of sub_180065658 @ 0x180065658
 * Callers:
 *     sub_18002C2E0 @ 0x18002C2E0 (sub_18002C2E0.c)
 *     sub_18002C760 @ 0x18002C760 (sub_18002C760.c)
 * Callees:
 *     sub_18000E4E8 @ 0x18000E4E8 (sub_18000E4E8.c)
 *     sub_18006586C @ 0x18006586C (sub_18006586C.c)
 *     sub_18009ED3C @ 0x18009ED3C (sub_18009ED3C.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 */

// Hidden C++ exception states: #wind=1
_UNKNOWN **__fastcall sub_180065658(__int64 a1, __int64 a2)
{
  _UNKNOWN **result; // rax
  __int64 v5; // rcx
  __int64 v6; // rcx
  unsigned int v7; // eax
  _QWORD v8[4]; // [rsp+40h] [rbp-98h] BYREF
  _QWORD v9[4]; // [rsp+60h] [rbp-78h] BYREF
  _BYTE pExceptionObject[64]; // [rsp+80h] [rbp-58h] BYREF
  _UNKNOWN *retaddr; // [rsp+D8h] [rbp+0h] BYREF

  result = &retaddr;
  if ( *(float *)&a2 < 0.0 || *((float *)&a2 + 1) < 0.0 )
  {
    sub_18000E4E8(v9);
    v7 = (unsigned int)sub_18000E4E8(v8);
    sub_18006586C((unsigned int)pExceptionObject, v7, 30, (unsigned int)v9, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  v5 = *(_QWORD *)(a1 + 96);
  if ( v5 )
    result = (_UNKNOWN **)sub_18009ED3C(v5, a2);
  v6 = *(_QWORD *)(a1 + 112);
  if ( v6 )
    return (_UNKNOWN **)sub_18009ED3C(v6, a2);
  return result;
}
