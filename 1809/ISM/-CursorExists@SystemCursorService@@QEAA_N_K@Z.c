/*
 * XREFs of ?CursorExists@SystemCursorService@@QEAA_N_K@Z @ 0x1800944A0
 * Callers:
 *     ?DestroyCursorShapeAnimation@SystemCursorController@@MEAAJPEAVBamoSystemCursorControllerStub@@_K1@Z @ 0x1800927C0 (-DestroyCursorShapeAnimation@SystemCursorController@@MEAAJPEAVBamoSystemCursorControllerStub@@_K.c)
 *     ?CreateCursorForDevice@SystemCursorService@@QEAAJ_K@Z @ 0x1800956F4 (-CreateCursorForDevice@SystemCursorService@@QEAAJ_K@Z.c)
 *     ?CreateCursorShapeAnimation@SystemCursorService@@QEAAJIK_K0@Z @ 0x180095B94 (-CreateCursorShapeAnimation@SystemCursorService@@QEAAJIK_K0@Z.c)
 *     ?OnCursorDestroyed@SystemCursorService@@UEAAJUCursorId@@UCursorDestroyData@@@Z @ 0x1800964D0 (-OnCursorDestroyed@SystemCursorService@@UEAAJUCursorId@@UCursorDestroyData@@@Z.c)
 *     ?OnCursorVisibilityChanged@SystemCursorService@@UEAAJUCursorId@@UCursorVisibilityData@@@Z @ 0x1800965F0 (-OnCursorVisibilityChanged@SystemCursorService@@UEAAJUCursorId@@UCursorVisibilityData@@@Z.c)
 *     ?OnCursorGlyphChanged@SystemCursorService@@UEAAJUCursorId@@UCursorGlyphData@@@Z @ 0x1800966F0 (-OnCursorGlyphChanged@SystemCursorService@@UEAAJUCursorId@@UCursorGlyphData@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall SystemCursorService::CursorExists(SystemCursorService *this, __int64 a2)
{
  _QWORD *v2; // r8
  __int64 v4; // r9
  unsigned __int64 i; // r10
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // r9
  __int64 v9; // r10
  _QWORD *j; // rax
  _QWORD *v11; // rcx
  __int64 v13; // [rsp+10h] [rbp+10h]

  v2 = (_QWORD *)*((_QWORD *)this + 7);
  v13 = a2;
  v4 = 0xCBF29CE484222325uLL;
  for ( i = 0LL; i < 8; ++i )
  {
    v6 = *((unsigned __int8 *)&v13 + i);
    v4 = 0x100000001B3LL * (v6 ^ v4);
  }
  v7 = v4 & *((_QWORD *)this + 12);
  v8 = *((_QWORD *)this + 9);
  v9 = 2 * v7;
  for ( j = *(_QWORD **)(v8 + 16 * v7); ; j = (_QWORD *)*j )
  {
    v11 = *(_QWORD **)(v8 + 8 * v9) == v2 ? v2 : **(_QWORD ***)(v8 + 8 * v9 + 8);
    if ( j == v11 )
      break;
    if ( j[2] == a2 )
      return j != v2;
  }
  j = v2;
  return j != v2;
}
