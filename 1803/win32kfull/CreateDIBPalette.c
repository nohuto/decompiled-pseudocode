/*
 * XREFs of CreateDIBPalette @ 0x1C01D3448
 * Callers:
 *     ?xxxGetDummyPalette@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1C01D3110 (-xxxGetDummyPalette@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 * Callees:
 *     GreCreateHalftonePalette @ 0x1C0287704 (GreCreateHalftonePalette.c)
 */

_WORD *__fastcall CreateDIBPalette(_DWORD *a1, int a2)
{
  int v2; // ebx
  int v4; // ebp
  int v5; // eax
  __int16 v6; // r14
  _WORD *result; // rax
  _WORD *v8; // rdi
  _BYTE *v9; // rdx
  _BYTE *v10; // rcx
  char v11; // al
  __int64 HalftonePalette; // rbx

  v2 = 0;
  if ( !a2 )
  {
    HalftonePalette = GreCreateHalftonePalette(*(HDC *)(gpDispInfo + 64LL));
LABEL_11:
    GreSetPaletteOwner(HalftonePalette, 0LL);
    return (_WORD *)HalftonePalette;
  }
  v4 = *a1;
  if ( *a1 == 12 || (v5 = a1[8]) == 0 )
    LOWORD(v5) = a2;
  v6 = v5;
  result = (_WORD *)Win32AllocPoolWithQuota(4LL * (unsigned __int16)v5 + 8, 1885565781LL);
  v8 = result;
  if ( result )
  {
    result[1] = v6;
    v9 = (_BYTE *)(*(unsigned __int16 *)a1 + 1LL);
    *result = 768;
    if ( v6 )
    {
      v10 = (char *)result + 5;
      v9 = &v9[(_QWORD)a1];
      do
      {
        ++v2;
        *(v10 - 1) = v9[1];
        *v10 = *v9;
        v10 += 4;
        v11 = *(v9 - 1);
        v9 += (v4 != 12) + 3;
        *(v10 - 3) = v11;
        *(v10 - 2) = 4;
      }
      while ( v2 < (unsigned __int16)v8[1] );
    }
    HalftonePalette = GreCreatePalette(v8, v9);
    Win32FreePool(v8);
    goto LABEL_11;
  }
  return result;
}
