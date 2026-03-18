/*
 * XREFs of fsg_AllocateGlyphDataMemory @ 0x1C02BBF5C
 * Callers:
 *     fsg_CreateGlyphData @ 0x1C02BCA50 (fsg_CreateGlyphData.c)
 *     fsg_ExecuteGlyph @ 0x1C02BD004 (fsg_ExecuteGlyph.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall fsg_AllocateGlyphDataMemory(unsigned int a1, __int64 a2, _QWORD *a3)
{
  _DWORD *v3; // r10
  __int64 v4; // r9
  bool v5; // zf
  __int64 result; // rax

  v3 = *(_DWORD **)(a2 + 24);
  LODWORD(v4) = 0;
  if ( *v3 )
  {
LABEL_4:
    v5 = (_DWORD)v4 == a1;
  }
  else
  {
    while ( 1 )
    {
      v5 = (_DWORD)v4 == a1;
      if ( (unsigned int)v4 >= a1 )
        break;
      v4 = (unsigned int)(v4 + 1);
      if ( v3[v4] )
        goto LABEL_4;
    }
  }
  if ( v5 )
    return 5132LL;
  v3[(unsigned int)v4] = 0;
  result = 0LL;
  *a3 = *(_QWORD *)(a2 + 32) + 224LL * (unsigned int)v4;
  return result;
}
