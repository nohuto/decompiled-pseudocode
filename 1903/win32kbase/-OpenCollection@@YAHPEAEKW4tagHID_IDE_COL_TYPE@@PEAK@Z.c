/*
 * XREFs of ?OpenCollection@@YAHPEAEKW4tagHID_IDE_COL_TYPE@@PEAK@Z @ 0x1C014C5FC
 * Callers:
 *     ?BuildMainItem@@YAHPEAEKPEAKUtagUSAGE_PROPERTIES@@PEAU1@W4_HIDP_REPORT_TYPE@@PEAH1@Z @ 0x1C014BD98 (-BuildMainItem@@YAHPEAEKPEAKUtagUSAGE_PROPERTIES@@PEAU1@W4_HIDP_REPORT_TYPE@@PEAH1@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall OpenCollection(__int64 a1, unsigned int a2, int a3, unsigned int *a4)
{
  __int64 v4; // r10
  unsigned int v5; // r11d
  unsigned int v6; // edi
  __int64 v7; // r10
  int v8; // r8d

  v4 = *a4;
  v5 = 0;
  v6 = v4 + 2;
  if ( (int)v4 + 2 < a2 )
  {
    v5 = 1;
    gulCollectionOffset = *a4;
    *(_BYTE *)(v4 + a1) = -95;
    v7 = (unsigned int)(v4 + 1);
    if ( a3 )
    {
      v8 = a3 - 1;
      if ( v8 )
      {
        if ( v8 == 1 )
          *(_BYTE *)(v7 + a1) = 2;
        else
          v5 = 0;
      }
      else
      {
        *(_BYTE *)(v7 + a1) = 0;
      }
    }
    else
    {
      *(_BYTE *)(v7 + a1) = 1;
    }
    *a4 = v6;
  }
  return v5;
}
