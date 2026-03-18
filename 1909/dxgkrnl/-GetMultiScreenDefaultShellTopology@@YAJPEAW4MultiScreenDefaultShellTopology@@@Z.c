/*
 * XREFs of ?GetMultiScreenDefaultShellTopology@@YAJPEAW4MultiScreenDefaultShellTopology@@@Z @ 0x1C0045580
 * Callers:
 *     ?DetermineDefaultTopology@@YA?AW4MultiScreenDefaultShellTopology@@IE@Z @ 0x1C026E258 (-DetermineDefaultTopology@@YA-AW4MultiScreenDefaultShellTopology@@IE@Z.c)
 *     ?_DetermineDefaultTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAA?AW4MultiScreenDefaultShellTopology@@XZ @ 0x1C02C563C (-_DetermineDefaultTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAA-AW4MultiScreenDefaultShellTopology@@XZ.c)
 * Callees:
 *     ?DetermineMultiScreenCapabilities@DefaultMultiScreenConfig@@YAJPEAW4MultiScreenShellCapabilities@@@Z @ 0x1C0045484 (-DetermineMultiScreenCapabilities@DefaultMultiScreenConfig@@YAJPEAW4MultiScreenShellCapabilities.c)
 *     ?IsXbox@@YA_NXZ @ 0x1C00456C4 (-IsXbox@@YA_NXZ.c)
 */

__int64 __fastcall GetMultiScreenDefaultShellTopology(enum MultiScreenDefaultShellTopology *a1)
{
  int v2; // edi
  __int16 v3; // ax
  enum MultiScreenShellCapabilities *v4; // rdx
  int v6; // [rsp+48h] [rbp+10h] BYREF

  v2 = 0;
  if ( !`IsWindowsTeamEdition'::`2'::s_dwProductType
    && !RtlGetProductInfo(0xAu, 0, 0, 0, &`IsWindowsTeamEdition'::`2'::s_dwProductType) )
  {
    `IsWindowsTeamEdition'::`2'::s_dwProductType = 0;
  }
  if ( `IsWindowsTeamEdition'::`2'::s_dwProductType == 119 )
  {
    v3 = 4;
LABEL_8:
    *(_WORD *)a1 = v3;
    return (unsigned int)v2;
  }
  if ( IsXbox() )
  {
    v3 = 1;
    goto LABEL_8;
  }
  *(_WORD *)a1 = 0;
  v2 = DefaultMultiScreenConfig::DetermineMultiScreenCapabilities((DefaultMultiScreenConfig *)&v6, v4);
  if ( v2 >= 0 && (v6 & 0x20000000) != 0 )
    *(_WORD *)a1 = (v6 & 0x4000000) != 0 ? 5 : 3;
  return (unsigned int)v2;
}
