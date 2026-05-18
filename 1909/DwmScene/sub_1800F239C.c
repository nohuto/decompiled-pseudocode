/*
 * XREFs of sub_1800F239C @ 0x1800F239C
 * Callers:
 *     sub_180091AE8 @ 0x180091AE8 (sub_180091AE8.c)
 *     sub_180092F50 @ 0x180092F50 (sub_180092F50.c)
 *     sub_180093744 @ 0x180093744 (sub_180093744.c)
 *     sub_180093FEC @ 0x180093FEC (sub_180093FEC.c)
 *     sub_1800EA350 @ 0x1800EA350 (sub_1800EA350.c)
 *     sub_1800EC240 @ 0x1800EC240 (sub_1800EC240.c)
 *     sub_1800EC790 @ 0x1800EC790 (sub_1800EC790.c)
 * Callees:
 *     sub_18000E4E8 @ 0x18000E4E8 (sub_18000E4E8.c)
 *     sub_180027880 @ 0x180027880 (sub_180027880.c)
 *     sub_1800F2454 @ 0x1800F2454 (sub_1800F2454.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 */

// Hidden C++ exception states: #wind=1
_UNKNOWN **__fastcall sub_1800F239C(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  _UNKNOWN **result; // rax
  __int64 v8; // rdi
  __int64 *v9; // rax
  _QWORD v10[4]; // [rsp+40h] [rbp-98h] BYREF
  _QWORD v11[4]; // [rsp+60h] [rbp-78h] BYREF
  _QWORD pExceptionObject[11]; // [rsp+80h] [rbp-58h] BYREF
  _UNKNOWN *retaddr; // [rsp+D8h] [rbp+0h] BYREF

  result = &retaddr;
  if ( *(_DWORD *)(a1 + 1168) )
  {
    sub_18000E4E8(v11);
    v9 = sub_18000E4E8(v10);
    sub_180027880(pExceptionObject, v9, 572, (__int64)v11, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  if ( a3 )
  {
    v8 = a3;
    do
    {
      result = (_UNKNOWN **)sub_1800F2454(a1, a2, a4);
      a2 += 64LL;
      --v8;
    }
    while ( v8 );
  }
  return result;
}
