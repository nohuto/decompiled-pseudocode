/*
 * XREFs of PnpDetermineResourceListSize @ 0x1407246BC
 * Callers:
 *     IoGetDeviceProperty @ 0x1405BFB40 (IoGetDeviceProperty.c)
 *     IopQueryDeviceResources @ 0x140724000 (IopQueryDeviceResources.c)
 *     IopLegacyResourceAllocation @ 0x1407515AC (IopLegacyResourceAllocation.c)
 *     IopCombineCmResourceList @ 0x1407517E8 (IopCombineCmResourceList.c)
 *     IoReportDetectedDevice @ 0x140751940 (IoReportDetectedDevice.c)
 *     PnpBuildCmResourceLists @ 0x14075280C (PnpBuildCmResourceLists.c)
 *     IopChangeInterfaceType @ 0x14086013C (IopChangeInterfaceType.c)
 *     PnpSetRegistryResourceList @ 0x14086134C (PnpSetRegistryResourceList.c)
 *     IopCombineLegacyResources @ 0x140862684 (IopCombineLegacyResources.c)
 *     PnpCopyResourceList @ 0x140874E98 (PnpCopyResourceList.c)
 *     PnpRestoreResourcesInternal @ 0x140875D60 (PnpRestoreResourcesInternal.c)
 *     IopReportBootResources @ 0x1409F4F30 (IopReportBootResources.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PnpDetermineResourceListSize(_DWORD *a1)
{
  _DWORD *v1; // r8
  __int64 result; // rax
  __int64 v3; // r10
  unsigned int v4; // ecx
  _DWORD *v5; // r9
  unsigned int v6; // edx
  __int64 v7; // r11
  __int64 v8; // rcx

  if ( !a1 )
    return 0LL;
  v1 = a1 + 1;
  result = 4LL;
  if ( *a1 )
  {
    v3 = (unsigned int)*a1;
    do
    {
      v4 = v1[3];
      v5 = v1 + 4;
      v6 = 16;
      if ( v4 )
      {
        v7 = v4;
        do
        {
          v8 = 20LL;
          if ( *(_BYTE *)v5 == 5 )
            v8 = (unsigned int)(v5[1] + 20);
          v6 += v8;
          v5 = (_DWORD *)((char *)v5 + v8);
          --v7;
        }
        while ( v7 );
      }
      result = v6 + (unsigned int)result;
      v1 = (_DWORD *)((char *)v1 + v6);
      --v3;
    }
    while ( v3 );
  }
  return result;
}
