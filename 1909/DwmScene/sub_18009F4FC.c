/*
 * XREFs of sub_18009F4FC @ 0x18009F4FC
 * Callers:
 *     sub_1800CFED8 @ 0x1800CFED8 (sub_1800CFED8.c)
 * Callees:
 *     sub_18000E4E8 @ 0x18000E4E8 (sub_18000E4E8.c)
 *     sub_18006586C @ 0x18006586C (sub_18006586C.c)
 *     sub_18009F2A8 @ 0x18009F2A8 (sub_18009F2A8.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18009F4FC(__int64 a1, __int64 a2)
{
  __int64 *v5; // rax
  _QWORD v6[4]; // [rsp+40h] [rbp-88h] BYREF
  _QWORD v7[4]; // [rsp+60h] [rbp-68h] BYREF
  _QWORD pExceptionObject[9]; // [rsp+80h] [rbp-48h] BYREF

  if ( !sub_18009F2A8(*(_QWORD *)(a1 + 112), *(_QWORD *)(*(_QWORD *)a2 + 96LL)) )
  {
    sub_18000E4E8(v7);
    v5 = sub_18000E4E8(v6);
    sub_18006586C(pExceptionObject, v5, 147LL, (__int64)v7, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  return sub_18009F5A4(a1, a2);
}
