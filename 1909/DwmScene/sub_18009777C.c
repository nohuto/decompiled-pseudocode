/*
 * XREFs of sub_18009777C @ 0x18009777C
 * Callers:
 *     sub_1800FBDCC @ 0x1800FBDCC (sub_1800FBDCC.c)
 *     sub_1800FBF88 @ 0x1800FBF88 (sub_1800FBF88.c)
 * Callees:
 *     sub_18000E4E8 @ 0x18000E4E8 (sub_18000E4E8.c)
 *     sub_18006586C @ 0x18006586C (sub_18006586C.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_18009777C(__int64 a1, int a2)
{
  __int64 *v2; // rax
  _QWORD v3[4]; // [rsp+40h] [rbp-88h] BYREF
  _QWORD v4[4]; // [rsp+60h] [rbp-68h] BYREF
  _QWORD pExceptionObject[9]; // [rsp+80h] [rbp-48h] BYREF

  if ( *(_BYTE *)(a1 + 310) )
  {
    sub_18000E4E8(v4);
    v2 = sub_18000E4E8(v3);
    sub_18006586C(pExceptionObject, v2, 983LL, (__int64)v4, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  *(_DWORD *)(a1 + 300) = a2;
}
