/*
 * XREFs of ?SetCachedStereoStates@ADAPTER_DISPLAY@@QEAAJIW4_TRISTATE@@0@Z @ 0x1C00C7908
 * Callers:
 *     ?DxgkpAdapterCheckStereoMode@@YAJU_LUID@@IPEAE1@Z @ 0x1C00C72EC (-DxgkpAdapterCheckStereoMode@@YAJU_LUID@@IPEAE1@Z.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000CD7C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::SetCachedStereoStates(__int64 a1, unsigned int a2, int a3, int a4)
{
  __int64 v5; // rsi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rcx
  __int64 v13; // rax
  __int64 v14; // rax

  v5 = a2;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(a1 + 16)) )
  {
    v13 = WdLogNewEntry5_WdAssertion(v9, v8);
    *(_QWORD *)(v13 + 24) = 6132LL;
    WdLogEvent5_WdAssertion(v13);
  }
  if ( (unsigned int)v5 >= *(_DWORD *)(a1 + 80) )
  {
    v14 = WdLogNewEntry5_WdError(v9, v8, v10);
    *(_QWORD *)(v14 + 24) = v5;
    *(_QWORD *)(v14 + 32) = *(unsigned int *)(a1 + 80);
    WdLogEvent5_WdError(v14);
    return 3221225485LL;
  }
  else
  {
    v11 = 3968 * v5;
    *(_DWORD *)(*(_QWORD *)(a1 + 112) + v11 + 1104) = a3;
    *(_DWORD *)(*(_QWORD *)(a1 + 112) + v11 + 1108) = a4;
    return 0LL;
  }
}
