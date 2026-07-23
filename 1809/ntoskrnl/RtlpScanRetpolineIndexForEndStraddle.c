/*
 * XREFs of RtlpScanRetpolineIndexForEndStraddle @ 0x1402F7FB8
 * Callers:
 *     RtlCreateRetpolineRelocationInformation @ 0x1402F6FB8 (RtlCreateRetpolineRelocationInformation.c)
 * Callees:
 *     RtlSizeOfRetpolineIndirectFixup @ 0x1402F7620 (RtlSizeOfRetpolineIndirectFixup.c)
 */

void __fastcall RtlpScanRetpolineIndexForEndStraddle(unsigned __int16 *a1, _BYTE *a2, char **a3)
{
  char *v3; // r9
  char *v4; // r11
  char *v5; // r10
  char *v6; // rbx
  int v7; // eax
  char *v8; // r11

  v3 = (char *)(a1 + 6);
  v4 = (char *)a1 + *a1 + 12;
  v5 = &v4[a1[1]];
  v6 = &v5[a1[2]];
  while ( v3 < v4 )
  {
    if ( (*(_DWORD *)v3 & 0xFFFu) + 12 > 0x1000 )
    {
      *a2 = 3;
      goto LABEL_16;
    }
    v3 += 4;
  }
  while ( v4 < v5 )
  {
    v7 = RtlSizeOfRetpolineIndirectFixup(v4);
    if ( (*(_WORD *)v8 & 0xFFFu) + v7 > 0x1000 )
    {
      *a2 = 4;
      v3 = v8;
      goto LABEL_16;
    }
    v4 = v8 + 2;
  }
  while ( 1 )
  {
    if ( v5 >= v6 )
    {
      v3 = 0LL;
      *a2 = 0;
      goto LABEL_16;
    }
    if ( (*(_WORD *)v5 & 0xFFFu) + 6 > 0x1000 )
      break;
    v5 += 2;
  }
  *a2 = 5;
  v3 = v5;
LABEL_16:
  *a3 = v3;
}
