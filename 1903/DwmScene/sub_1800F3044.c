/*
 * XREFs of sub_1800F3044 @ 0x1800F3044
 * Callers:
 *     sub_1800919D8 @ 0x1800919D8 (sub_1800919D8.c)
 *     sub_1800EC680 @ 0x1800EC680 (sub_1800EC680.c)
 *     sub_1800F2AC4 @ 0x1800F2AC4 (sub_1800F2AC4.c)
 * Callees:
 *     sub_18000E498 @ 0x18000E498 (sub_18000E498.c)
 *     sub_180027770 @ 0x180027770 (sub_180027770.c)
 *     _CxxThrowException @ 0x180125A78 (_CxxThrowException.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_1800F3044(__int64 a1, unsigned int a2)
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
      sub_18000E498(v5);
      v3 = sub_18000E498(v4);
      sub_180027770(pExceptionObject, v3, 230, (__int64)v5, 0);
      throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
    }
  }
  *(_DWORD *)(a1 + 1172) = a2 >> 2;
}
