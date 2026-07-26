/*
 * XREFs of ?ndisValidateOffloadCapability@@YAEPEAU_NDIS_OFFLOAD@@@Z @ 0x1C00316E0
 * Callers:
 *     ndisMSetOffloadAttributes @ 0x1C00312E0 (ndisMSetOffloadAttributes.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall ndisValidateOffloadCapability(struct _NDIS_OFFLOAD *a1)
{
  unsigned __int8 result; // al

  if ( a1->Header.Type != 0xA7 )
    return 0;
  result = 1;
  if ( !a1->Header.Revision || a1->Header.Size < 0x70u )
    return 0;
  return result;
}
