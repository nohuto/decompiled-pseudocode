/*
 * XREFs of ?ndisValidateConnectionOffload@@YAEPEAU_NDIS_TCP_CONNECTION_OFFLOAD@@@Z @ 0x1C00AAF88
 * Callers:
 *     ndisMSetOffloadAttributes @ 0x1C00312E0 (ndisMSetOffloadAttributes.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall ndisValidateConnectionOffload(struct _NDIS_TCP_CONNECTION_OFFLOAD *a1)
{
  unsigned __int8 result; // al

  if ( a1->Header.Type != 0x80 )
    return 0;
  result = 1;
  if ( !a1->Header.Revision || a1->Header.Size < 0x14u )
    return 0;
  return result;
}
