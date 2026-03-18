/*
 * XREFs of IsAnyCharsetDbcs @ 0x1C0047BE4
 * Callers:
 *     ?bInit@PFEMEMOBJ@@QEAAHPEAVPFF@@KPEAU_FD_GLYPHSET@@_KPEAU_IFIMETRICS@@2HPEAU_UNIVERSAL_FONT_ID@@H@Z @ 0x1C0047524 (-bInit@PFEMEMOBJ@@QEAAHPEAVPFF@@KPEAU_FD_GLYPHSET@@_KPEAU_IFIMETRICS@@2HPEAU_UNIVERSAL_FONT_ID@@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsAnyCharsetDbcs(__int64 a1)
{
  unsigned __int8 v1; // al
  int v2; // r9d
  __int64 v3; // rax
  _BYTE *v4; // rcx
  _BYTE *v5; // r8

  v1 = *(_BYTE *)(a1 + 44) + 0x80;
  v2 = 323;
  if ( v1 <= 8u && _bittest(&v2, v1) )
    return 1LL;
  v3 = *(int *)(a1 + 40);
  if ( (_DWORD)v3 )
  {
    v4 = (_BYTE *)(v3 + a1);
    v5 = v4 + 16;
    while ( v4 < v5 )
    {
      if ( (unsigned __int8)(*v4 + 0x80) <= 8u && _bittest(&v2, (unsigned __int8)(*v4 + 0x80)) )
        return 1LL;
      if ( *v4 == 1 )
        return 0LL;
      ++v4;
    }
  }
  return 0LL;
}
