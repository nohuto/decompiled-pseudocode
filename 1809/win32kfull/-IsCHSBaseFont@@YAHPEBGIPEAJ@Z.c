/*
 * XREFs of ?IsCHSBaseFont@@YAHPEBGIPEAJ@Z @ 0x1C01623A8
 * Callers:
 *     ?bAddEntry@PFFMEMOBJ@@QEAAHKPEAU_FD_GLYPHSET@@_KPEAU_IFIMETRICS@@1PEAU_UNIVERSAL_FONT_ID@@PEAU_EUDCLOAD@@@Z @ 0x1C00CA2B8 (-bAddEntry@PFFMEMOBJ@@QEAAHKPEAU_FD_GLYPHSET@@_KPEAU_IFIMETRICS@@1PEAU_UNIVERSAL_FONT_ID@@PEAU_E.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsCHSBaseFont(const unsigned __int16 *a1, int a2, int *a3)
{
  __int64 v4; // rax
  __int64 v5; // r9
  __int64 v6; // rax
  const UNICODE_STRING *v7; // rdi
  int v8; // esi
  int v9; // ebx
  __int64 result; // rax
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  if ( !gcwcFontsDirectory )
    return 0LL;
  v4 = gcwcFontsDirectory - 1;
  v5 = (unsigned int)v4;
  if ( a2 - (int)v4 < 8 )
    return 0LL;
  v6 = *(_QWORD *)&a1[v4];
  if ( v6 == gMSYHFontFileNamePrefix )
  {
    v7 = &gMSYHFontFileNameSuffixes;
    v8 = 0;
  }
  else
  {
    if ( v6 != gSimsunFontFileNamePrefix )
      return 0LL;
    v7 = (const UNICODE_STRING *)&unk_1C02C34B8;
    v8 = 3;
  }
  RtlInitUnicodeString(&DestinationString, &a1[v5 + 4]);
  v9 = 0;
  while ( !RtlEqualUnicodeString(&DestinationString, v7, 0) )
  {
    ++v7;
    if ( (unsigned int)++v9 >= 3 )
    {
      v9 = -1;
      break;
    }
  }
  if ( v9 >= 0 )
  {
    result = 1LL;
    *a3 = v9 + v8;
    return result;
  }
  return 0LL;
}
