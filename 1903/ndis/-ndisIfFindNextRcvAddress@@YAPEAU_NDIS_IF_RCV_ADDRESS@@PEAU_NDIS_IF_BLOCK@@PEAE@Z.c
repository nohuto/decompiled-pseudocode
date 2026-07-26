/*
 * XREFs of ?ndisIfFindNextRcvAddress@@YAPEAU_NDIS_IF_RCV_ADDRESS@@PEAU_NDIS_IF_BLOCK@@PEAE@Z @ 0x1C0113DA8
 * Callers:
 *     ?ndisNsiGetAllIfRcvAddress@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z @ 0x1C00648B0 (-ndisNsiGetAllIfRcvAddress@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z.c)
 *     ?ndisNsiGetIfRcvAddress@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C0064BA0 (-ndisNsiGetIfRcvAddress@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 * Callees:
 *     memcmp @ 0x1C0040FC0 (memcmp.c)
 */

struct _NDIS_IF_RCV_ADDRESS *__fastcall ndisIfFindNextRcvAddress(struct _NDIS_IF_BLOCK *a1, unsigned __int8 *a2)
{
  unsigned int ifRcvAddressCount; // esi
  __int64 v3; // rdi
  unsigned int v5; // ebx
  _NDIS_IF_RCV_ADDRESS *ifRcvAddressTable; // r14

  ifRcvAddressCount = a1->ifRcvAddressCount;
  v3 = 0LL;
  v5 = 0;
  if ( ifRcvAddressCount )
  {
    ifRcvAddressTable = a1->ifRcvAddressTable;
    while ( memcmp(a2, ifRcvAddressTable[v5].ifRcvAddress, ifRcvAddressTable[v5].ifRcvAddressLength) )
    {
      if ( ++v5 >= ifRcvAddressCount )
        return (struct _NDIS_IF_RCV_ADDRESS *)v3;
    }
    if ( v5 < ifRcvAddressCount - 1 )
      return &ifRcvAddressTable[v5 + 1];
  }
  return (struct _NDIS_IF_RCV_ADDRESS *)v3;
}
