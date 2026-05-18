/*
 * XREFs of sub_1800A9A84 @ 0x1800A9A84
 * Callers:
 *     sub_1800C2D50 @ 0x1800C2D50 (sub_1800C2D50.c)
 *     sub_1800C4490 @ 0x1800C4490 (sub_1800C4490.c)
 *     sub_1800C8208 @ 0x1800C8208 (sub_1800C8208.c)
 * Callees:
 *     sub_18000E4E8 @ 0x18000E4E8 (sub_18000E4E8.c)
 *     sub_180027880 @ 0x180027880 (sub_180027880.c)
 *     sub_18002C088 @ 0x18002C088 (sub_18002C088.c)
 *     sub_18009FC40 @ 0x18009FC40 (sub_18009FC40.c)
 *     sub_1800A8F24 @ 0x1800A8F24 (sub_1800A8F24.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800A9A84(__int64 a1, _QWORD *a2, char a3)
{
  unsigned int v6; // eax
  __int64 v7; // r8
  const void **v9; // rax
  __int64 v10; // rbx
  __int64 *v11; // rax
  _QWORD v12[4]; // [rsp+40h] [rbp-A8h] BYREF
  const void *Src; // [rsp+60h] [rbp-88h] BYREF
  _BYTE v14[32]; // [rsp+80h] [rbp-68h] BYREF
  _QWORD pExceptionObject[8]; // [rsp+A0h] [rbp-48h] BYREF

  v6 = sub_1800A8F24(a1, (__int64)a2);
  if ( v6 == -1 )
  {
    v9 = sub_18009FC40(&Src, "ShaderFamily::SetOption() -- The option '", a2);
    v10 = sub_18002C088((__int64)v14, v9, "' cannot be set.");
    v11 = sub_18000E4E8(v12);
    sub_180027880(pExceptionObject, v11, 696, v10, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  LOBYTE(v7) = a3;
  return sub_1800A9B48(a1, v6, v7);
}
