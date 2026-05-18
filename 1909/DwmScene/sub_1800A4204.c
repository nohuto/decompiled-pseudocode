/*
 * XREFs of sub_1800A4204 @ 0x1800A4204
 * Callers:
 *     sub_1800EC790 @ 0x1800EC790 (sub_1800EC790.c)
 *     sub_18010F964 @ 0x18010F964 (sub_18010F964.c)
 * Callees:
 *     sub_18000E4E8 @ 0x18000E4E8 (sub_18000E4E8.c)
 *     sub_180027880 @ 0x180027880 (sub_180027880.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800A4204(__int64 a1, _DWORD **a2)
{
  __int64 v2; // rcx
  _DWORD *i; // r8
  __int64 *v5; // rax
  _QWORD v6[4]; // [rsp+38h] [rbp-90h] BYREF
  _QWORD v7[5]; // [rsp+58h] [rbp-70h] BYREF
  _QWORD pExceptionObject[9]; // [rsp+80h] [rbp-48h] BYREF

  v2 = 0LL;
  for ( i = *a2; i != a2[1]; ++i )
  {
    if ( *i == -1 )
    {
      sub_18000E4E8(v7);
      v5 = sub_18000E4E8(v6);
      sub_180027880(pExceptionObject, v5, 675, (__int64)v7, 0);
      throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
    }
    v2 |= 1LL << *i;
  }
  return v2;
}
