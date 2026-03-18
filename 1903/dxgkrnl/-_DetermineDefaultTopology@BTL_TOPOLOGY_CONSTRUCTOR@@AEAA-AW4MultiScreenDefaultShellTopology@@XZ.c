/*
 * XREFs of ?_DetermineDefaultTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAA?AW4MultiScreenDefaultShellTopology@@XZ @ 0x1C02C557C
 * Callers:
 *     ?_ConstructDefault@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJAEAI@Z @ 0x1C02C4C3C (-_ConstructDefault@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJAEAI@Z.c)
 * Callees:
 *     ?IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x1C0003D4C (-IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C000BC9C (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetMultiScreenDefaultShellTopology@@YAJPEAW4MultiScreenDefaultShellTopology@@@Z @ 0x1C0045408 (-GetMultiScreenDefaultShellTopology@@YAJPEAW4MultiScreenDefaultShellTopology@@@Z.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C00FBA60 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 */

__int64 __fastcall BTL_TOPOLOGY_CONSTRUCTOR::_DetermineDefaultTopology(__int64 a1)
{
  int MultiScreenDefaultShellTopology; // eax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 result; // rax
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v9; // rax
  DXGADAPTER *v10; // rdx
  char v11; // bl
  __int64 v12; // rax
  unsigned __int64 v13; // [rsp+38h] [rbp+10h] BYREF

  MultiScreenDefaultShellTopology = GetMultiScreenDefaultShellTopology((enum MultiScreenDefaultShellTopology *)&v13);
  v5 = MultiScreenDefaultShellTopology;
  if ( MultiScreenDefaultShellTopology >= 0 )
  {
    result = (unsigned __int16)v13;
  }
  else
  {
    v6 = WdLogNewEntry5_WdAssertion(v4, v3);
    *(_QWORD *)(v6 + 24) = v5;
    WdLogEvent5_WdAssertion(v6);
    result = 0LL;
  }
  if ( !(_WORD)result )
  {
    Global = DXGGLOBAL::GetGlobal(v4, v3);
    v9 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *(struct _LUID *)(a1 + 12), &v13);
    v10 = v9;
    v11 = 1;
    if ( v9 )
    {
      v12 = *((_QWORD *)v9 + 319);
      if ( (!*(_BYTE *)(v12 + 233) || !*(_BYTE *)(v12 + 234))
        && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v10 + 24) + 64LL) + 40LL) + 28LL) < 0x4003u )
      {
        v11 = 0;
      }
      DXGADAPTER::ReleaseReferenceNoTracking(v10);
    }
    if ( IsInternalVideoOutput(*(enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)(a1 + 28))
      && (!*(_BYTE *)(a1 + 52) || *(_BYTE *)(a1 + 60) || v11) )
    {
      return 3LL;
    }
    else
    {
      return 4LL;
    }
  }
  return result;
}
