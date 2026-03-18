/*
 * XREFs of ?_DetermineDefaultTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAA?AW4MultiScreenDefaultShellTopology@@XZ @ 0x1C028CD08
 * Callers:
 *     ?_ConstructDefault@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJAEAI@Z @ 0x1C028C3AC (-_ConstructDefault@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJAEAI@Z.c)
 * Callees:
 *     ?IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x1C000411C (-IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0011D10 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetMultiScreenDefaultShellTopology@@YAJPEAW4MultiScreenDefaultShellTopology@@@Z @ 0x1C003E674 (-GetMultiScreenDefaultShellTopology@@YAJPEAW4MultiScreenDefaultShellTopology@@@Z.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C00E2938 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 */

__int64 __fastcall BTL_TOPOLOGY_CONSTRUCTOR::_DetermineDefaultTopology(__int64 a1)
{
  int MultiScreenDefaultShellTopology; // eax
  __int64 v3; // rcx
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 result; // rax
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v8; // rax
  DXGADAPTER *v9; // rdx
  char v10; // bl
  __int64 v11; // rax
  unsigned __int64 v12; // [rsp+38h] [rbp+10h] BYREF

  MultiScreenDefaultShellTopology = GetMultiScreenDefaultShellTopology((enum MultiScreenDefaultShellTopology *)&v12);
  v4 = MultiScreenDefaultShellTopology;
  if ( MultiScreenDefaultShellTopology >= 0 )
  {
    result = (unsigned __int16)v12;
  }
  else
  {
    v5 = WdLogNewEntry5_WdAssertion(v3);
    *(_QWORD *)(v5 + 24) = v4;
    WdLogEvent5_WdAssertion(v5);
    result = 0LL;
  }
  if ( !(_WORD)result )
  {
    Global = DXGGLOBAL::GetGlobal(v3);
    v8 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *(struct _LUID *)(a1 + 12), &v12);
    v9 = v8;
    v10 = 1;
    if ( v8 )
    {
      v11 = *((_QWORD *)v8 + 315);
      if ( (!*(_BYTE *)(v11 + 132) || !*(_BYTE *)(v11 + 133))
        && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v9 + 24) + 64LL) + 40LL) + 28LL) < 0x4003u )
      {
        v10 = 0;
      }
      DXGADAPTER::ReleaseReference(v9);
    }
    if ( IsInternalVideoOutput(*(enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)(a1 + 28))
      && (!*(_BYTE *)(a1 + 52) || *(_BYTE *)(a1 + 60) || v10) )
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
