/*
 * XREFs of sub_180062E80 @ 0x180062E80
 * Callers:
 *     sub_1800632D0 @ 0x1800632D0 (sub_1800632D0.c)
 *     sub_180063778 @ 0x180063778 (sub_180063778.c)
 * Callees:
 *     sub_18000E4E8 @ 0x18000E4E8 (sub_18000E4E8.c)
 *     sub_180063064 @ 0x180063064 (sub_180063064.c)
 *     sub_180063238 @ 0x180063238 (sub_180063238.c)
 *     sub_1800633E0 @ 0x1800633E0 (sub_1800633E0.c)
 *     sub_1800636FC @ 0x1800636FC (sub_1800636FC.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180062E80(__int64 a1, char a2)
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
  if ( !(unsigned __int8)sub_1800636FC() )
  {
    sub_18000E4E8(v14);
    v10 = (unsigned int)sub_18000E4E8(v13);
    sub_180063064((unsigned int)pExceptionObject, v10, 64, (unsigned int)v14, 0);
    throw (Spectre::Engine::EngineAccessDeniedException *)pExceptionObject;
  }
  LOBYTE(v4) = a2;
  v5 = *(_QWORD *)sub_180063238(a1, v11, v4);
  v6 = sub_1800633E0();
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
  return sub_18011E318(a1);
}
