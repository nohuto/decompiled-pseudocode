/*
 * XREFs of ?SwapChainOpenInternal@@YAPEAUDXGSWAPCHAIN_CONTAINER@@PEAX@Z @ 0x1C0288238
 * Callers:
 *     ?DodSetIndirectSwapchain@ADAPTER_DISPLAY@@QEAAJIPEAX@Z @ 0x1C01F1468 (-DodSetIndirectSwapchain@ADAPTER_DISPLAY@@QEAAJIPEAX@Z.c)
 *     ?SetIndirectSwapChainHandles@BLTQUEUE@@QEAAJPEAX@Z @ 0x1C027D5C8 (-SetIndirectSwapChainHandles@BLTQUEUE@@QEAAJPEAX@Z.c)
 * Callees:
 *     <none>
 */

struct DXGSWAPCHAIN_CONTAINER *__fastcall SwapChainOpenInternal(void *a1)
{
  NTSTATUS v2; // eax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // rdi
  __int64 v7; // rax
  PVOID v9; // [rsp+48h] [rbp+10h] BYREF

  v2 = ObReferenceObjectByHandle(a1, 0x20000u, g_pDxgkSharedSwapChainObjectType, 1, &v9, 0LL);
  v6 = v2;
  if ( v2 >= 0 )
    return (struct DXGSWAPCHAIN_CONTAINER *)v9;
  v7 = WdLogNewEntry5_WdWarning(v4, v3, v5);
  *(_QWORD *)(v7 + 24) = a1;
  *(_QWORD *)(v7 + 32) = v6;
  WdLogEvent5_WdWarning(v7);
  return 0LL;
}
