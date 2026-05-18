/*
 * XREFs of sub_1800F228C @ 0x1800F228C
 * Callers:
 *     sub_1800919D8 @ 0x1800919D8 (sub_1800919D8.c)
 *     sub_180092E40 @ 0x180092E40 (sub_180092E40.c)
 *     sub_180093634 @ 0x180093634 (sub_180093634.c)
 *     sub_180093EDC @ 0x180093EDC (sub_180093EDC.c)
 *     sub_1800EA240 @ 0x1800EA240 (sub_1800EA240.c)
 *     sub_1800EC130 @ 0x1800EC130 (sub_1800EC130.c)
 *     sub_1800EC680 @ 0x1800EC680 (sub_1800EC680.c)
 * Callees:
 *     sub_18000E498 @ 0x18000E498 (sub_18000E498.c)
 *     sub_180027770 @ 0x180027770 (sub_180027770.c)
 *     sub_1800F2344 @ 0x1800F2344 (sub_1800F2344.c)
 *     _CxxThrowException @ 0x180125A78 (_CxxThrowException.c)
 */

// Hidden C++ exception states: #wind=1
_UNKNOWN **__fastcall sub_1800F228C(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
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
    sub_18000E498(v11);
    v9 = sub_18000E498(v10);
    sub_180027770(pExceptionObject, v9, 572, (__int64)v11, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  if ( a3 )
  {
    v8 = a3;
    do
    {
      result = (_UNKNOWN **)sub_1800F2344(a1, a2, a4);
      a2 += 64LL;
      --v8;
    }
    while ( v8 );
  }
  return result;
}
