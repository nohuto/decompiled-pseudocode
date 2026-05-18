/*
 * XREFs of sub_180068990 @ 0x180068990
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000E4E8 @ 0x18000E4E8 (sub_18000E4E8.c)
 *     sub_18006586C @ 0x18006586C (sub_18006586C.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_180068990(__int64 a1, unsigned int a2)
{
  __int64 *v2; // rax
  _QWORD v3[4]; // [rsp+40h] [rbp-88h] BYREF
  _QWORD v4[4]; // [rsp+60h] [rbp-68h] BYREF
  _QWORD pExceptionObject[9]; // [rsp+80h] [rbp-48h] BYREF

  if ( a2 > 4 )
  {
    sub_18000E4E8(v4);
    v2 = sub_18000E4E8(v3);
    sub_18006586C(pExceptionObject, v2, 271LL, (__int64)v4, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  *(_DWORD *)(a1 + 296) = a2;
}
