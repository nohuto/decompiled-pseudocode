/*
 * XREFs of NdisFreeGenericObject @ 0x1C0014C80
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 */

void __stdcall NdisFreeGenericObject(PNDIS_GENERIC_OBJECT NdisObject)
{
  if ( (unsigned __int8)byte_1C00A0264 >= 4u )
    WPP_SF_q(150LL, &WPP_f453a6740ca1326a168191528118e90e_Traceguids, NdisObject);
  ExFreePoolWithTag(NdisObject, 0);
  if ( (unsigned __int8)byte_1C00A0264 >= 4u )
    WPP_SF_q(151LL, &WPP_f453a6740ca1326a168191528118e90e_Traceguids, 0LL);
}
