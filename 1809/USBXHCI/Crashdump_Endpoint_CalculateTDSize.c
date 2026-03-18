/*
 * XREFs of Crashdump_Endpoint_CalculateTDSize @ 0x1C0005E3C
 * Callers:
 *     Crashdump_Endpoint_SendBulkTransfer @ 0x1C003D6C4 (Crashdump_Endpoint_SendBulkTransfer.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Crashdump_Endpoint_CalculateTDSize(unsigned __int16 *a1, int a2, unsigned int a3, char a4)
{
  unsigned int v4; // r10d

  v4 = 0;
  if ( *(_BYTE *)(*(_QWORD *)a1 + 627LL) )
  {
    if ( !a4 )
    {
      v4 = a2 - a3 / a1[27];
      if ( v4 > 0x1F )
        return 31;
    }
  }
  return v4;
}
