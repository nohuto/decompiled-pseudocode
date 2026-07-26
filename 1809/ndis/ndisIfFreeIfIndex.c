/*
 * XREFs of ndisIfFreeIfIndex @ 0x1C003EFBC
 * Callers:
 *     ?ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C0009F20 (-ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ?ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z @ 0x1C000B1B0 (-ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z.c)
 *     ?ndisNsiEnumerateAllInterfaceInformation@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z @ 0x1C000E670 (-ndisNsiEnumerateAllInterfaceInformation@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@.c)
 *     IFBLOCK_DECREMENT_REF @ 0x1C001C21C (IFBLOCK_DECREMENT_REF.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisIfFreeIfIndex(ULONG64 BitNumber)
{
  unsigned int v1; // ebx

  if ( (_DWORD)BitNumber != 0xFFFF )
  {
    v1 = BitNumber;
    if ( RtlTestBitEx(&ndisIfAllocatedInterfaceIndexes, (unsigned int)BitNumber) )
      RtlClearBitEx(&ndisIfAllocatedInterfaceIndexes, v1);
  }
}
