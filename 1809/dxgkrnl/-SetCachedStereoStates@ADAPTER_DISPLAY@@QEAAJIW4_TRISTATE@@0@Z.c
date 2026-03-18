/*
 * XREFs of ?SetCachedStereoStates@ADAPTER_DISPLAY@@QEAAJIW4_TRISTATE@@0@Z @ 0x1C00B2004
 * Callers:
 *     ?DxgkpAdapterCheckStereoMode@@YAJU_LUID@@IPEAE1@Z @ 0x1C00B1BB0 (-DxgkpAdapterCheckStereoMode@@YAJU_LUID@@IPEAE1@Z.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0005E8C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::SetCachedStereoStates(__int64 a1, unsigned int a2, int a3, int a4)
{
  __int64 v5; // rdi
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v11; // rax
  __int64 v12; // rax

  v5 = a2;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(a1 + 16)) )
  {
    v11 = WdLogNewEntry5_WdAssertion(v8);
    *(_QWORD *)(v11 + 24) = 5886LL;
    WdLogEvent5_WdAssertion(v11);
  }
  if ( (unsigned int)v5 >= *(_DWORD *)(a1 + 80) )
  {
    v12 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v12 + 24) = v5;
    *(_QWORD *)(v12 + 32) = *(unsigned int *)(a1 + 80);
    WdLogEvent5_WdError(v12);
    return 3221225485LL;
  }
  else
  {
    v9 = 3760 * v5;
    *(_DWORD *)(*(_QWORD *)(a1 + 112) + v9 + 1104) = a3;
    *(_DWORD *)(*(_QWORD *)(a1 + 112) + v9 + 1108) = a4;
    return 0LL;
  }
}
