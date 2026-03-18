/*
 * XREFs of ??_E_AUTO@?1??DrvFunctionalizeDisplayConfig@@YAJPEAIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@IPEAXPEAW4DISPLAYCONFIG_TOPOLOGY_ID@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z@UEAAPEAXI@Z @ 0x1C0100680
 * Callers:
 *     <none>
 * Callees:
 *     _DrvFunctionalizeDisplayConfig_::_2_::_AUTO::__AUTO @ 0x1C0100598 (_DrvFunctionalizeDisplayConfig_--_2_--_AUTO--__AUTO.c)
 */

struct D3DKMT_GETPATHSMODALITY **__fastcall `DrvFunctionalizeDisplayConfig'::`2'::_AUTO::`vector deleting destructor'(
        struct D3DKMT_GETPATHSMODALITY **a1,
        char a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rax

  DrvFunctionalizeDisplayConfig_::_2_::_AUTO::__AUTO(a1);
  if ( (a2 & 1) != 0 )
  {
    v7 = WdLogNewEntry5_WdAssertion(v5, v4, v6);
    WdLogEvent5_WdAssertion(v7);
  }
  return a1;
}
