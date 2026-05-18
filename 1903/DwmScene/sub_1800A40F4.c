/*
 * XREFs of sub_1800A40F4 @ 0x1800A40F4
 * Callers:
 *     sub_1800EC680 @ 0x1800EC680 (sub_1800EC680.c)
 *     sub_18010F854 @ 0x18010F854 (sub_18010F854.c)
 * Callees:
 *     sub_18000E498 @ 0x18000E498 (sub_18000E498.c)
 *     sub_180027770 @ 0x180027770 (sub_180027770.c)
 *     _CxxThrowException @ 0x180125A78 (_CxxThrowException.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800A40F4(__int64 a1, _DWORD **a2)
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
      sub_18000E498(v7);
      v5 = sub_18000E498(v6);
      sub_180027770(pExceptionObject, v5, 675, (__int64)v7, 0);
      throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
    }
    v2 |= 1LL << *i;
  }
  return v2;
}
