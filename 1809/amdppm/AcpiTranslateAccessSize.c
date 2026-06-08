/*
 * XREFs of AcpiTranslateAccessSize @ 0x1C0026FF4
 * Callers:
 *     DecodeAcpiIdleState @ 0x1C0004998 (DecodeAcpiIdleState.c)
 *     AcpiEval_CST @ 0x1C0023740 (AcpiEval_CST.c)
 *     AcpiEval_PCT_PTC @ 0x1C0023B48 (AcpiEval_PCT_PTC.c)
 *     AcpiEval_CPC @ 0x1C00251A0 (AcpiEval_CPC.c)
 *     AcpiParseLpiObject @ 0x1C00257C0 (AcpiParseLpiObject.c)
 * Callees:
 *     <none>
 */

void __fastcall AcpiTranslateAccessSize(_BYTE *a1)
{
  unsigned __int8 v2; // r9
  _BYTE *v3; // rax
  char v4; // r10
  char v5; // dl
  unsigned int v6; // ecx
  unsigned __int8 v7; // cl
  unsigned __int8 v8; // dl

  if ( *a1 != 10 )
  {
    v2 = a1[3];
    v3 = &unk_1C000D6AD;
    v4 = a1[1];
    v5 = a1[2];
    v6 = 1;
    while ( v2 != *v3 )
    {
      ++v6;
      ++v3;
      if ( v6 >= 5 )
      {
        v7 = 0;
        if ( v2 <= 4u )
          v7 = v2;
        if ( !v7 )
        {
          v8 = v4 + v5;
          if ( v8 > 8u )
          {
            if ( v8 > 0x10u )
              v7 = (v8 > 0x20u) + 3;
            else
              v7 = 2;
          }
          else
          {
            v7 = 1;
          }
        }
        a1[3] = *((_BYTE *)&AcpiGenericAccessSizeTranslation + v7);
        return;
      }
    }
  }
}
