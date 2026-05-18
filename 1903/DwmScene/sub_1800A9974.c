/*
 * XREFs of sub_1800A9974 @ 0x1800A9974
 * Callers:
 *     sub_1800C2C40 @ 0x1800C2C40 (sub_1800C2C40.c)
 *     sub_1800C4380 @ 0x1800C4380 (sub_1800C4380.c)
 *     sub_1800C80F8 @ 0x1800C80F8 (sub_1800C80F8.c)
 * Callees:
 *     sub_18000E498 @ 0x18000E498 (sub_18000E498.c)
 *     sub_180027770 @ 0x180027770 (sub_180027770.c)
 *     sub_18002BF78 @ 0x18002BF78 (sub_18002BF78.c)
 *     sub_18009FB30 @ 0x18009FB30 (sub_18009FB30.c)
 *     sub_1800A8E14 @ 0x1800A8E14 (sub_1800A8E14.c)
 *     _CxxThrowException @ 0x180125A78 (_CxxThrowException.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800A9974(__int64 a1, _QWORD *a2, char a3)
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

  v6 = sub_1800A8E14(a1, (__int64)a2);
  if ( v6 == -1 )
  {
    v9 = sub_18009FB30(&Src, "ShaderFamily::SetOption() -- The option '", a2);
    v10 = sub_18002BF78((__int64)v14, v9, "' cannot be set.");
    v11 = sub_18000E498(v12);
    sub_180027770(pExceptionObject, v11, 696, v10, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  LOBYTE(v7) = a3;
  return sub_1800A9A38(a1, v6, v7);
}
