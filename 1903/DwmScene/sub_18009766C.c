/*
 * XREFs of sub_18009766C @ 0x18009766C
 * Callers:
 *     sub_1800FBCBC @ 0x1800FBCBC (sub_1800FBCBC.c)
 *     sub_1800FBE78 @ 0x1800FBE78 (sub_1800FBE78.c)
 * Callees:
 *     sub_18000E498 @ 0x18000E498 (sub_18000E498.c)
 *     sub_18006575C @ 0x18006575C (sub_18006575C.c)
 *     _CxxThrowException @ 0x180125A78 (_CxxThrowException.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_18009766C(__int64 a1, int a2)
{
  __int64 *v2; // rax
  _QWORD v3[4]; // [rsp+40h] [rbp-88h] BYREF
  _QWORD v4[4]; // [rsp+60h] [rbp-68h] BYREF
  _QWORD pExceptionObject[9]; // [rsp+80h] [rbp-48h] BYREF

  if ( *(_BYTE *)(a1 + 310) )
  {
    sub_18000E498(v4);
    v2 = sub_18000E498(v3);
    sub_18006575C(pExceptionObject, v2, 983LL, (__int64)v4, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  *(_DWORD *)(a1 + 300) = a2;
}
