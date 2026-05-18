/*
 * XREFs of sub_1800F2BF8 @ 0x1800F2BF8
 * Callers:
 *     sub_1800F5478 @ 0x1800F5478 (sub_1800F5478.c)
 * Callees:
 *     sub_18000E498 @ 0x18000E498 (sub_18000E498.c)
 *     sub_180027770 @ 0x180027770 (sub_180027770.c)
 *     _CxxThrowException @ 0x180125A78 (_CxxThrowException.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_1800F2BF8(__int64 a1)
{
  __int64 *v1; // rax
  _QWORD v2[4]; // [rsp+40h] [rbp-88h] BYREF
  _QWORD v3[4]; // [rsp+60h] [rbp-68h] BYREF
  _QWORD pExceptionObject[9]; // [rsp+80h] [rbp-48h] BYREF

  if ( *(_DWORD *)(a1 + 1168) != 1 )
  {
    sub_18000E498(v3);
    v1 = sub_18000E498(v2);
    sub_180027770(pExceptionObject, v1, 549, (__int64)v3, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  *(_DWORD *)(a1 + 1168) = 0;
}
