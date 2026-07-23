/*
 * XREFs of PspDecodeMitigationExecuteOptions @ 0x1406CC2BC
 * Callers:
 *     PspApplyMitigationOptions @ 0x14064EF50 (PspApplyMitigationOptions.c)
 * Callees:
 *     <none>
 */

char __fastcall PspDecodeMitigationExecuteOptions(unsigned __int64 *a1)
{
  unsigned __int64 v1; // rax
  char v2; // dl

  v1 = *a1;
  v2 = 0;
  switch ( *a1 & 3 )
  {
    case 1uLL:
      v2 = 13;
      break;
    case 2uLL:
      v2 = 58;
      break;
    case 3uLL:
      v2 = 9;
      break;
  }
  if ( ((v1 >> 4) & 3) == 1 )
    return v2 | 8;
  if ( ((v1 >> 4) & 3) == 2 )
    return v2 | 0x48;
  return v2;
}
