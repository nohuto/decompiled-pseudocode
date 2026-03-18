/*
 * XREFs of ?UpdateFrameIndices@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x1800C77D8
 * Callers:
 *     ?ScheduleAndProcessFrame@CPartitionVerticalBlankScheduler@@UEAAJXZ @ 0x1800C8F90 (-ScheduleAndProcessFrame@CPartitionVerticalBlankScheduler@@UEAAJXZ.c)
 * Callees:
 *     ??_GTouchUpdateInfo@CTelemetryTouchLatencyAnalysis@@QEAAPEAXI@Z @ 0x18001EA08 (--_GTouchUpdateInfo@CTelemetryTouchLatencyAnalysis@@QEAAPEAXI@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180057AF0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?ReleaseResponseRef@CResponseItem@@QEAAXXZ @ 0x180071A24 (-ReleaseResponseRef@CResponseItem@@QEAAXXZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     memset_0 @ 0x1800EC516 (memset_0.c)
 *     McTemplateU0qqqq @ 0x180149B9C (McTemplateU0qqqq.c)
 */

void __fastcall CPartitionVerticalBlankScheduler::UpdateFrameIndices(CPartitionVerticalBlankScheduler *this)
{
  __int64 v1; // rdx
  __int64 v3; // rax
  char *v4; // rdi
  unsigned int i; // esi
  unsigned int j; // esi
  unsigned int k; // esi
  int v8; // ecx
  CTelemetryTouchLatencyAnalysis::TouchUpdateInfo *v9; // rcx

  v1 = *((unsigned int *)this + 6460);
  v3 = ((_BYTE)v1 + 1) & 0xF;
  if ( *((_DWORD *)this + 6463) == (_DWORD)v3 )
    *((_DWORD *)this + 6463) = -1;
  if ( *((_DWORD *)this + 6462) == (_DWORD)v3 )
    *((_DWORD *)this + 6462) = -1;
  *((_DWORD *)this + 6460) = v3;
  v4 = (char *)this + 1608 * v3 + 112;
  *((_DWORD *)this + 6461) = v1;
  *((_QWORD *)this + 3232) = v4;
  *((_QWORD *)this + 3233) = (char *)this + 1608 * v1 + 112;
  memset_0(v4, 0, 0x438uLL);
  for ( i = 0; i < *((_DWORD *)v4 + 276); ++i )
    WPF::ProcessHeapImpl::Free(*(void **)(*((_QWORD *)v4 + 135) + 8LL * i));
  *((_DWORD *)v4 + 276) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)(v4 + 1080), 8u);
  for ( j = 0; j < *((_DWORD *)v4 + 284); ++j )
  {
    v9 = *(CTelemetryTouchLatencyAnalysis::TouchUpdateInfo **)(*((_QWORD *)v4 + 139) + 8LL * j);
    if ( v9 )
      CTelemetryTouchLatencyAnalysis::TouchUpdateInfo::`scalar deleting destructor'(v9);
  }
  *((_DWORD *)v4 + 284) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)(v4 + 1112), 8u);
  for ( k = 0; k < *((_DWORD *)v4 + 292); ++k )
    CResponseItem::ReleaseResponseRef(*(CResponseItem **)(*((_QWORD *)v4 + 143) + 8LL * k));
  *((_DWORD *)v4 + 292) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)(v4 + 1144), 8u);
  *(_BYTE *)(*((_QWORD *)this + 3232) + 1176LL) = 0;
  *(_QWORD *)(*((_QWORD *)this + 3232) + 1184LL) = 0LL;
  *(_BYTE *)(*((_QWORD *)this + 3232) + 1192LL) = 0;
  *(_BYTE *)(*((_QWORD *)this + 3232) + 1201LL) = 0;
  *(_DWORD *)(*((_QWORD *)this + 3232) + 1196LL) = 0;
  *(_BYTE *)(*((_QWORD *)this + 3232) + 1200LL) = 0;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    McTemplateU0qqqq(
      v8,
      (unsigned int)&EVTDESC_SCHEDULE_UPDATE_FRAME_INDEXES,
      *((_DWORD *)this + 6461),
      *((_DWORD *)this + 6460),
      *((_DWORD *)this + 6463),
      *((_DWORD *)this + 6462));
}
