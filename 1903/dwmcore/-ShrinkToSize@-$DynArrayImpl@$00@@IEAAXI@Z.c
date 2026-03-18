/*
 * XREFs of ?ShrinkToSize@?$DynArrayImpl@$00@@IEAAXI@Z @ 0x180027C98
 * Callers:
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ @ 0x180094CE0 (-ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ.c)
 *     ?CloseChannel@CComposition@@IEAAJI@Z @ 0x1800CCCF4 (-CloseChannel@CComposition@@IEAAJI@Z.c)
 *     ??1CComposition@@MEAA@XZ @ 0x180176B24 (--1CComposition@@MEAA@XZ.c)
 *     ?ReleaseNotificationChannels@CComposition@@AEAAXXZ @ 0x180177BAC (-ReleaseNotificationChannels@CComposition@@AEAAXXZ.c)
 *     ?ReleaseTargets@CRenderTargetManager@@QEAAXXZ @ 0x180189164 (-ReleaseTargets@CRenderTargetManager@@QEAAXXZ.c)
 *     ?SuspendAnimations@CExpressionManager@@QEAAXI_N0@Z @ 0x1801C1558 (-SuspendAnimations@CExpressionManager@@QEAAXI_N0@Z.c)
 *     ?ReleaseResources@CCompositionCubeMap@@AEAAXXZ @ 0x1801D06DC (-ReleaseResources@CCompositionCubeMap@@AEAAXXZ.c)
 * Callees:
 *     ?Realloc@DefaultHeap@@SAPEAXPEAX_K@Z @ 0x180028D30 (-Realloc@DefaultHeap@@SAPEAXPEAX_K@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800932DC (--3@YAXPEAX@Z.c)
 *     memcpy_0 @ 0x1800EC54B (memcpy_0.c)
 */

void __fastcall DynArrayImpl<1>::ShrinkToSize(__int64 a1, unsigned int a2)
{
  void *v3; // rcx
  unsigned __int64 v4; // r8
  void *v5; // rax
  int v6; // eax

  v3 = *(void **)(a1 + 8);
  if ( *(void **)a1 != v3 )
  {
    v4 = a2 * (unsigned __int64)*(unsigned int *)(a1 + 24);
    if ( v4 <= 0xFFFFFFFF )
    {
      if ( *(_DWORD *)(a1 + 24) <= *(_DWORD *)(a1 + 16) )
      {
        memcpy_0(v3, *(const void **)a1, (unsigned int)v4);
        operator delete(*(void **)a1);
        *(_QWORD *)a1 = *(_QWORD *)(a1 + 8);
        v6 = *(_DWORD *)(a1 + 16);
        goto LABEL_7;
      }
      v5 = DefaultHeap::Realloc(*(void **)a1, (unsigned int)v4);
      if ( v5 )
      {
        *(_QWORD *)a1 = v5;
        v6 = *(_DWORD *)(a1 + 24);
LABEL_7:
        *(_DWORD *)(a1 + 20) = v6;
      }
    }
  }
}
