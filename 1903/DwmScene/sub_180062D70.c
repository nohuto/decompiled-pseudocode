/*
 * XREFs of sub_180062D70 @ 0x180062D70
 * Callers:
 *     sub_1800631C0 @ 0x1800631C0 (sub_1800631C0.c)
 *     sub_180063668 @ 0x180063668 (sub_180063668.c)
 * Callees:
 *     sub_18000E498 @ 0x18000E498 (sub_18000E498.c)
 *     sub_180062F54 @ 0x180062F54 (sub_180062F54.c)
 *     sub_180063128 @ 0x180063128 (sub_180063128.c)
 *     sub_1800632D0 @ 0x1800632D0 (sub_1800632D0.c)
 *     sub_1800635EC @ 0x1800635EC (sub_1800635EC.c)
 *     _CxxThrowException @ 0x180125A78 (_CxxThrowException.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180062D70(__int64 a1, char a2)
{
  __int64 v4; // r8
  __int64 v5; // rbx
  __int64 v6; // r8
  __int64 v7; // rax
  __int64 v8; // rbx
  unsigned int v10; // eax
  _BYTE v11[8]; // [rsp+30h] [rbp-98h] BYREF
  __int64 v12; // [rsp+38h] [rbp-90h]
  _QWORD v13[4]; // [rsp+40h] [rbp-88h] BYREF
  _QWORD v14[4]; // [rsp+60h] [rbp-68h] BYREF
  _BYTE pExceptionObject[72]; // [rsp+80h] [rbp-48h] BYREF

  v12 = -2LL;
  if ( !(unsigned __int8)sub_1800635EC() )
  {
    sub_18000E498(v14);
    v10 = (unsigned int)sub_18000E498(v13);
    sub_180062F54((unsigned int)pExceptionObject, v10, 64, (unsigned int)v14, 0);
    throw (Spectre::Engine::EngineAccessDeniedException *)pExceptionObject;
  }
  LOBYTE(v4) = a2;
  v5 = *(_QWORD *)sub_180063128(a1, v11, v4);
  v6 = sub_1800632D0();
  v7 = *(_QWORD *)(v6 + 8);
  v8 = v5 + 16;
  if ( v8 != v7 )
  {
    do
    {
      *(_QWORD *)(v8 - 16) = *(_QWORD *)v8;
      *(_BYTE *)(v8 - 8) = *(_BYTE *)(v8 + 8);
      v8 += 16LL;
    }
    while ( v8 != v7 );
    v7 = *(_QWORD *)(v6 + 8);
  }
  *(_QWORD *)(v6 + 8) = v7 - 16;
  return sub_18011E208(a1);
}
