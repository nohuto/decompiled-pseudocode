/*
 * XREFs of ?UpdateIndependentFlipStateUnsafe@DISPLAY_SOURCE@@QEAAXIE@Z @ 0x1C01547DC
 * Callers:
 *     ?UpdateIndependentFlipState@ADAPTER_DISPLAY@@QEAAXIIE@Z @ 0x1C015475C (-UpdateIndependentFlipState@ADAPTER_DISPLAY@@QEAAXIIE@Z.c)
 * Callees:
 *     ?GetLatestPlaneConfigInternal@DISPLAY_SOURCE@@QEAAPEAU_DISPLAY_PLANE_CONFIG@@I@Z @ 0x1C0142F70 (-GetLatestPlaneConfigInternal@DISPLAY_SOURCE@@QEAAPEAU_DISPLAY_PLANE_CONFIG@@I@Z.c)
 *     ?IsDisplayPlaneConfigQueueEmpty@@YAEPEAU_DISPLAY_PLANE_CONFIG_QUEUE@@@Z @ 0x1C0142FE0 (-IsDisplayPlaneConfigQueueEmpty@@YAEPEAU_DISPLAY_PLANE_CONFIG_QUEUE@@@Z.c)
 */

void __fastcall DISPLAY_SOURCE::UpdateIndependentFlipStateUnsafe(DISPLAY_SOURCE *this, __int64 a2, unsigned __int8 a3)
{
  __int64 v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // rcx
  struct _DISPLAY_PLANE_CONFIG *LatestPlaneConfigInternal; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax

  v5 = (unsigned int)a2;
  if ( *(struct _KTHREAD **)(*((_QWORD *)this + 1) + 520LL) != KeGetCurrentThread() )
  {
    v9 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v9 + 24) = 9307LL;
    WdLogEvent5_WdAssertion(v9);
  }
  if ( (unsigned int)v5 >= *((_DWORD *)this + 934) )
  {
    v10 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v10 + 24) = 9308LL;
    WdLogEvent5_WdAssertion(v10);
  }
  if ( IsDisplayPlaneConfigQueueEmpty((DISPLAY_SOURCE *)((char *)this + 168 * v5 + 1120), a2) )
  {
    v11 = WdLogNewEntry5_WdAssertion(v7, v6);
    *(_QWORD *)(v11 + 24) = 9309LL;
    WdLogEvent5_WdAssertion(v11);
  }
  LatestPlaneConfigInternal = DISPLAY_SOURCE::GetLatestPlaneConfigInternal(this, v5);
  if ( LatestPlaneConfigInternal )
    *((_DWORD *)LatestPlaneConfigInternal + 2) ^= (*((_DWORD *)LatestPlaneConfigInternal + 2) ^ (8 * a3)) & 8;
}
