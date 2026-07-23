/*
 * XREFs of RtlpApplyGenericRetpolineFixup @ 0x1402F774C
 * Callers:
 *     RtlApplyImportRelocationToImage @ 0x1402F6D34 (RtlApplyImportRelocationToImage.c)
 *     RtlApplyImportRelocationToPage @ 0x1402F6DD8 (RtlApplyImportRelocationToPage.c)
 *     RtlApplyIndirectRelocationToPage @ 0x1402F6E80 (RtlApplyIndirectRelocationToPage.c)
 *     RtlApplySwitchJumpRelocationToPage @ 0x1402F6F1C (RtlApplySwitchJumpRelocationToPage.c)
 *     RtlPerformRetpolineRelocationsOnImageEx @ 0x1402F7294 (RtlPerformRetpolineRelocationsOnImageEx.c)
 * Callees:
 *     <none>
 */

char __fastcall RtlpApplyGenericRetpolineFixup(unsigned __int64 a1, unsigned int a2, unsigned __int16 *a3, int a4)
{
  unsigned int v4; // r10d
  unsigned __int64 v5; // r11
  _BYTE *v6; // r9
  _BYTE *v7; // rdx
  int v8; // eax

  v4 = 0;
  v5 = a1 + a2;
  v6 = (_BYTE *)(a1 + a4);
  v7 = v6;
  do
  {
    if ( (unsigned __int64)v7 >= a1 )
    {
      if ( (unsigned __int64)v7 >= v5 )
        return v8;
      v8 = *a3;
      if ( _bittest(&v8, v4) )
      {
        LOBYTE(v8) = *((_BYTE *)a3 + v7 - v6 + 2);
        *v7 = v8;
      }
    }
    ++v4;
    ++v7;
  }
  while ( v4 < 0xC );
  return v8;
}
