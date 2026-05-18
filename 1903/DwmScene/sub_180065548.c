/*
 * XREFs of sub_180065548 @ 0x180065548
 * Callers:
 *     sub_18002C1D0 @ 0x18002C1D0 (sub_18002C1D0.c)
 *     sub_18002C650 @ 0x18002C650 (sub_18002C650.c)
 * Callees:
 *     sub_18000E498 @ 0x18000E498 (sub_18000E498.c)
 *     sub_18006575C @ 0x18006575C (sub_18006575C.c)
 *     sub_18009EC2C @ 0x18009EC2C (sub_18009EC2C.c)
 *     _CxxThrowException @ 0x180125A78 (_CxxThrowException.c)
 */

// Hidden C++ exception states: #wind=1
_UNKNOWN **__fastcall sub_180065548(__int64 a1, __int64 a2)
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
    sub_18000E498(v9);
    v7 = (unsigned int)sub_18000E498(v8);
    sub_18006575C((unsigned int)pExceptionObject, v7, 30, (unsigned int)v9, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  v5 = *(_QWORD *)(a1 + 96);
  if ( v5 )
    result = (_UNKNOWN **)sub_18009EC2C(v5, a2);
  v6 = *(_QWORD *)(a1 + 112);
  if ( v6 )
    return (_UNKNOWN **)sub_18009EC2C(v6, a2);
  return result;
}
