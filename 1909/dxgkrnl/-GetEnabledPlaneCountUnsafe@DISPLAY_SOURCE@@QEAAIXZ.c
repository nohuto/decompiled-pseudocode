/*
 * XREFs of ?GetEnabledPlaneCountUnsafe@DISPLAY_SOURCE@@QEAAIXZ @ 0x1C01F2B18
 * Callers:
 *     ?PrepareIndependentFlipToken@@YAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAU_PRESENT_REDIRECTED_PARAMS@@@Z @ 0x1C0118A00 (-PrepareIndependentFlipToken@@YAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAUDXGK_PRESENT_PARAMS@@PEAUV.c)
 * Callees:
 *     ?GetLatestPlaneConfigInternal@DISPLAY_SOURCE@@QEAAPEAU_DISPLAY_PLANE_CONFIG@@I@Z @ 0x1C0142F70 (-GetLatestPlaneConfigInternal@DISPLAY_SOURCE@@QEAAPEAU_DISPLAY_PLANE_CONFIG@@I@Z.c)
 */

__int64 __fastcall DISPLAY_SOURCE::GetEnabledPlaneCountUnsafe(DISPLAY_SOURCE *this)
{
  struct _KTHREAD *CurrentThread; // rdx
  __int64 v3; // rax
  unsigned int v4; // esi
  unsigned int i; // edi
  struct _DISPLAY_PLANE_CONFIG *LatestPlaneConfigInternal; // rax

  CurrentThread = KeGetCurrentThread();
  if ( *(struct _KTHREAD **)(*((_QWORD *)this + 1) + 520LL) != CurrentThread )
  {
    v3 = WdLogNewEntry5_WdAssertion(this, CurrentThread);
    *(_QWORD *)(v3 + 24) = 9766LL;
    WdLogEvent5_WdAssertion(v3);
  }
  v4 = 0;
  for ( i = 0; i < *((_DWORD *)this + 934); ++i )
  {
    LatestPlaneConfigInternal = DISPLAY_SOURCE::GetLatestPlaneConfigInternal(this, i);
    if ( LatestPlaneConfigInternal && (*((_DWORD *)LatestPlaneConfigInternal + 2) & 1) != 0 )
      ++v4;
  }
  return v4;
}
