/*
 * XREFs of ?ndisNsiEnumerateAllIfRcvAddressesInOneInterface@@YAJPEAU_NDIS_IF_BLOCK@@PEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z @ 0x1C00643EC
 * Callers:
 *     ?ndisNsiEnumerateAllIfRcvAddresses@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z @ 0x1C00642A0 (-ndisNsiEnumerateAllIfRcvAddresses@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z.c)
 * Callees:
 *     ndisIfDereferenceMiniport @ 0x1C0002A30 (ndisIfDereferenceMiniport.c)
 *     ndisIfReferenceMiniport @ 0x1C0002E20 (ndisIfReferenceMiniport.c)
 */

__int64 __fastcall ndisNsiEnumerateAllIfRcvAddressesInOneInterface(
        struct _NDIS_IF_BLOCK *a1,
        struct _NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS *a2)
{
  __int64 v4; // rdx
  bool v5; // zf
  unsigned int v6; // esi
  unsigned int ifRcvAddressCount; // r9d
  __int64 v8; // r11
  __int64 v9; // r8
  unsigned int v10; // ecx
  _NDIS_NSI_IF_RCV_ADDRESS_ROD *v11; // r14
  _NDIS_IF_RCV_ADDRESS *ifRcvAddressTable; // r10
  unsigned int v13; // ebx

  if ( a1->ifRcvAddressCount && ndisIfReferenceMiniport((__int64)a1) )
  {
    v5 = *((_DWORD *)a2 + 12) == 0;
    v6 = *((_DWORD *)a2 + 22);
    ifRcvAddressCount = a1->ifRcvAddressCount;
    v8 = *((unsigned int *)a2 + 16);
    *((_DWORD *)a2 + 22) = ifRcvAddressCount;
    if ( !v5 || *((_DWORD *)a2 + 20) || (unsigned int)v8 < 6 )
    {
      v13 = -1073741306;
    }
    else
    {
      v9 = *((_QWORD *)a2 + 2);
      v10 = 0;
      v11 = (_NDIS_NSI_IF_RCV_ADDRESS_ROD *)*((_QWORD *)a2 + 7);
      if ( v6 )
      {
        v4 = 0LL;
        do
        {
          if ( v10 >= a1->ifRcvAddressCount )
            break;
          ifRcvAddressTable = a1->ifRcvAddressTable;
          if ( *((_QWORD *)a2 + 2) )
          {
            *(_QWORD *)v9 = a1->NetLuid.Value;
            *(_OWORD *)(v9 + 8) = *(_OWORD *)ifRcvAddressTable[v4].ifRcvAddress;
            *(_OWORD *)(v9 + 24) = *(_OWORD *)&ifRcvAddressTable[v4].ifRcvAddress[16];
            v9 += 40LL;
          }
          if ( *((_QWORD *)a2 + 7) )
          {
            *v11 = ifRcvAddressTable[v4]._NDIS_NSI_IF_RCV_ADDRESS_ROD;
            v11 = (_NDIS_NSI_IF_RCV_ADDRESS_ROD *)((char *)v11 + v8);
          }
          ++v10;
          ++v4;
        }
        while ( v10 < v6 );
      }
      *((_DWORD *)a2 + 22) = v10;
      v13 = v10 < ifRcvAddressCount ? 0x105 : 0;
    }
    ndisIfDereferenceMiniport((__int64)a1, v4 * 40, 9u);
    return v13;
  }
  else
  {
    *((_DWORD *)a2 + 22) = 0;
    return 0LL;
  }
}
