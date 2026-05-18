/*
 * XREFs of sub_1800F3154 @ 0x1800F3154
 * Callers:
 *     sub_180091AE8 @ 0x180091AE8 (sub_180091AE8.c)
 *     sub_1800EC790 @ 0x1800EC790 (sub_1800EC790.c)
 *     sub_1800F2BD4 @ 0x1800F2BD4 (sub_1800F2BD4.c)
 * Callees:
 *     sub_18000E4E8 @ 0x18000E4E8 (sub_18000E4E8.c)
 *     sub_180027880 @ 0x180027880 (sub_180027880.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_1800F3154(__int64 a1, unsigned int a2)
{
  int v2; // eax
  __int64 *v3; // rax
  _QWORD v4[4]; // [rsp+40h] [rbp-88h] BYREF
  _QWORD v5[4]; // [rsp+60h] [rbp-68h] BYREF
  _QWORD pExceptionObject[9]; // [rsp+80h] [rbp-48h] BYREF

  if ( a2 > 0x10 || (v2 = 65809, !_bittest(&v2, a2)) )
  {
    if ( *(_DWORD *)(a1 + 1168) )
    {
      sub_18000E4E8(v5);
      v3 = sub_18000E4E8(v4);
      sub_180027880(pExceptionObject, v3, 230, (__int64)v5, 0);
      throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
    }
  }
  *(_DWORD *)(a1 + 1172) = a2 >> 2;
}
