/*
 * XREFs of ?UpdateIndependentFlipStateUnsafe@DISPLAY_SOURCE@@QEAAXIE@Z @ 0x1C013E5DC
 * Callers:
 *     ?UpdateIndependentFlipState@ADAPTER_DISPLAY@@QEAAXIIE@Z @ 0x1C013E55C (-UpdateIndependentFlipState@ADAPTER_DISPLAY@@QEAAXIIE@Z.c)
 * Callees:
 *     ?GetLatestPlaneConfigInternal@DISPLAY_SOURCE@@QEAAPEAU_DISPLAY_PLANE_CONFIG@@I@Z @ 0x1C0122D40 (-GetLatestPlaneConfigInternal@DISPLAY_SOURCE@@QEAAPEAU_DISPLAY_PLANE_CONFIG@@I@Z.c)
 *     ?IsDisplayPlaneConfigQueueEmpty@@YAEPEAU_DISPLAY_PLANE_CONFIG_QUEUE@@@Z @ 0x1C0122DB0 (-IsDisplayPlaneConfigQueueEmpty@@YAEPEAU_DISPLAY_PLANE_CONFIG_QUEUE@@@Z.c)
 */

void __fastcall DISPLAY_SOURCE::UpdateIndependentFlipStateUnsafe(
        DISPLAY_SOURCE *this,
        unsigned int a2,
        unsigned __int8 a3)
{
  __int64 v5; // rdi
  __int64 v6; // rax
  __int64 v7; // rcx
  struct _DISPLAY_PLANE_CONFIG *LatestPlaneConfigInternal; // rax
  __int64 v9; // rax
  __int64 v10; // rax

  v5 = a2;
  if ( *(struct _KTHREAD **)(*((_QWORD *)this + 1) + 408LL) != KeGetCurrentThread() )
  {
    v6 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v6 + 24) = 8850LL;
    WdLogEvent5_WdAssertion(v6);
  }
  if ( (unsigned int)v5 >= *((_DWORD *)this + 934) )
  {
    v9 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v9 + 24) = 8851LL;
    WdLogEvent5_WdAssertion(v9);
  }
  if ( IsDisplayPlaneConfigQueueEmpty((DISPLAY_SOURCE *)((char *)this + 168 * v5 + 1120)) )
  {
    v10 = WdLogNewEntry5_WdAssertion(v7);
    *(_QWORD *)(v10 + 24) = 8852LL;
    WdLogEvent5_WdAssertion(v10);
  }
  LatestPlaneConfigInternal = DISPLAY_SOURCE::GetLatestPlaneConfigInternal(this, v5);
  if ( LatestPlaneConfigInternal )
    *((_DWORD *)LatestPlaneConfigInternal + 2) ^= (*((_DWORD *)LatestPlaneConfigInternal + 2) ^ (8 * a3)) & 8;
}
