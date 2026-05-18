/*
 * XREFs of sub_1800F2D08 @ 0x1800F2D08
 * Callers:
 *     sub_1800F5588 @ 0x1800F5588 (sub_1800F5588.c)
 * Callees:
 *     sub_18000E4E8 @ 0x18000E4E8 (sub_18000E4E8.c)
 *     sub_180027880 @ 0x180027880 (sub_180027880.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_1800F2D08(__int64 a1)
{
  __int64 *v1; // rax
  _QWORD v2[4]; // [rsp+40h] [rbp-88h] BYREF
  _QWORD v3[4]; // [rsp+60h] [rbp-68h] BYREF
  _QWORD pExceptionObject[9]; // [rsp+80h] [rbp-48h] BYREF

  if ( *(_DWORD *)(a1 + 1168) != 1 )
  {
    sub_18000E4E8(v3);
    v1 = sub_18000E4E8(v2);
    sub_180027880(pExceptionObject, v1, 549, (__int64)v3, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  *(_DWORD *)(a1 + 1168) = 0;
}
