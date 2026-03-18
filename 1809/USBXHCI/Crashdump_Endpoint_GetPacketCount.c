/*
 * XREFs of Crashdump_Endpoint_GetPacketCount @ 0x1C0005E7C
 * Callers:
 *     Crashdump_Endpoint_SendBulkTransfer @ 0x1C003D6C4 (Crashdump_Endpoint_SendBulkTransfer.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Crashdump_Endpoint_GetPacketCount(unsigned __int16 *a1, int a2)
{
  if ( *(_BYTE *)(*(_QWORD *)a1 + 627LL) )
    return ((unsigned int)a1[27] + a2 - 1) / a1[27];
  else
    return 0LL;
}
