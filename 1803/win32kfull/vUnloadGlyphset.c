/*
 * XREFs of vUnloadGlyphset @ 0x1C02ADC40
 * Callers:
 *     BmfdUnloadFontFile @ 0x1C0225B08 (BmfdUnloadFontFile.c)
 *     vtfdUnloadFontFileTE @ 0x1C0228CA0 (vtfdUnloadFontFileTE.c)
 * Callees:
 *     <none>
 */

void __fastcall vUnloadGlyphset(__int64 *a1, __int64 a2)
{
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v6; // rdx

  v3 = *a1;
  if ( v3 )
  {
    v4 = 0LL;
    while ( v3 != a2 )
    {
      v4 = v3;
      v3 = *(_QWORD *)(v3 + 16);
    }
    if ( (*(_DWORD *)v3)-- == 1 )
    {
      v6 = *(_QWORD *)(v3 + 16);
      if ( v4 )
        *(_QWORD *)(v4 + 16) = v6;
      else
        *a1 = v6;
      Win32FreePool(v3);
    }
  }
}
