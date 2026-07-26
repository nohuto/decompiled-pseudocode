/*
 * XREFs of NdisCloseFile @ 0x1C00EB9A0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_ @ 0x1C00260B0 (WPP_SF_.c)
 */

void __stdcall NdisCloseFile(NDIS_HANDLE FileHandle)
{
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_(0x16u, &WPP_8df08a1cf1a93f964e71fb8294d520a8_Traceguids);
  ExFreePoolWithTag(*(PVOID *)FileHandle, 0);
  ExFreePoolWithTag(FileHandle, 0);
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_(0x17u, &WPP_8df08a1cf1a93f964e71fb8294d520a8_Traceguids);
}
