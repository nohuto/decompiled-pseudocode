/*
 * XREFs of ?ndisIsValidIfStringParts@@YAEPEB_WK@Z @ 0x1C0025DE4
 * Callers:
 *     ?ndisIfCreateNetworkBlock@@YAJPEAU_NDIS_IF_COMPARTMENT_BLOCK@@PEAU_GUID@@PEAU_NDIS_NSI_NETWORK_RW@@PEAPEAU_NDIS_IF_NETWORK_BLOCK@@@Z @ 0x1C001EE2C (-ndisIfCreateNetworkBlock@@YAJPEAU_NDIS_IF_COMPARTMENT_BLOCK@@PEAU_GUID@@PEAU_NDIS_NSI_NETWORK_R.c)
 *     ?ndisNsiChangeInterfaceInfo@@YAJPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_NSI_INTERFACE_INFORMATION_RW@@KKPEAK@Z @ 0x1C0022AB8 (-ndisNsiChangeInterfaceInfo@@YAJPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_NSI_INTERFACE_INFORMATION_RW@@KKPE.c)
 *     ?ndisIsValidIfString@@YAEPEBU_IF_COUNTED_STRING_LH@@@Z @ 0x1C0025DCC (-ndisIsValidIfString@@YAEPEBU_IF_COUNTED_STRING_LH@@@Z.c)
 *     ?ndisIfUpdateStringIfNeeded@@YAXPEAU_NDIS_IF_BLOCK@@PEBU_UNICODE_STRING@@PEAU_IF_COUNTED_STRING_LH@@W4_NSI_STRUCT_TYPE@@K@Z @ 0x1C003F0F0 (-ndisIfUpdateStringIfNeeded@@YAXPEAU_NDIS_IF_BLOCK@@PEBU_UNICODE_STRING@@PEAU_IF_COUNTED_STRING_.c)
 *     ?ndisNsiChangeNetworkInfo@@YAJPEAU_NDIS_IF_NETWORK_BLOCK@@PEAU_NDIS_NSI_NETWORK_RW@@KKPEAK@Z @ 0x1C003F1CC (-ndisNsiChangeNetworkInfo@@YAJPEAU_NDIS_IF_NETWORK_BLOCK@@PEAU_NDIS_NSI_NETWORK_RW@@KKPEAK@Z.c)
 *     ndisIfInitialize @ 0x1C0126788 (ndisIfInitialize.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall ndisIsValidIfStringParts(const wchar_t *a1, unsigned int a2)
{
  unsigned __int8 result; // al

  if ( a2 > 0x200 )
    return 0;
  result = 1;
  if ( (a2 & 1) != 0 )
    return 0;
  return result;
}
