/*
 * XREFs of ?UpdateFrameIndices@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x180092164
 * Callers:
 *     ?ScheduleAndProcessFrame@CPartitionVerticalBlankScheduler@@UEAAJXZ @ 0x180093D30 (-ScheduleAndProcessFrame@CPartitionVerticalBlankScheduler@@UEAAJXZ.c)
 * Callees:
 *     ??_GTouchUpdateInfo@CTelemetryTouchLatencyAnalysis@@QEAAPEAXI@Z @ 0x180021EFC (--_GTouchUpdateInfo@CTelemetryTouchLatencyAnalysis@@QEAAPEAXI@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800932DC (--3@YAXPEAX@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800B8A58 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     memset_0 @ 0x1800E7E5E (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0qqqq @ 0x180166350 (McTemplateU0qqqq.c)
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
  __int64 v10; // rcx

  v1 = *((unsigned int *)this + 6470);
  v3 = ((_BYTE)v1 + 1) & 0xF;
  if ( *((_DWORD *)this + 6473) == (_DWORD)v3 )
    *((_DWORD *)this + 6473) = -1;
  if ( *((_DWORD *)this + 6472) == (_DWORD)v3 )
    *((_DWORD *)this + 6472) = -1;
  *((_DWORD *)this + 6470) = v3;
  v4 = (char *)this + 1608 * v3 + 152;
  *((_DWORD *)this + 6471) = v1;
  *((_QWORD *)this + 3237) = v4;
  *((_QWORD *)this + 3238) = (char *)this + 1608 * v1 + 152;
  memset_0(v4, 0, 0x438uLL);
  for ( i = 0; i < *((_DWORD *)v4 + 276); ++i )
    operator delete(*(void **)(*((_QWORD *)v4 + 135) + 8LL * i));
  *((_DWORD *)v4 + 276) = 0;
  DynArrayImpl<0>::ShrinkToSize(v4 + 1080, 8LL);
  for ( j = 0; j < *((_DWORD *)v4 + 284); ++j )
  {
    v9 = *(CTelemetryTouchLatencyAnalysis::TouchUpdateInfo **)(*((_QWORD *)v4 + 139) + 8LL * j);
    if ( v9 )
      CTelemetryTouchLatencyAnalysis::TouchUpdateInfo::`scalar deleting destructor'(v9);
  }
  *((_DWORD *)v4 + 284) = 0;
  DynArrayImpl<0>::ShrinkToSize(v4 + 1112, 8LL);
  for ( k = 0; k < *((_DWORD *)v4 + 292); ++k )
  {
    v10 = *(_QWORD *)(*((_QWORD *)v4 + 143) + 8LL * k);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 32LL))(v10);
  }
  *((_DWORD *)v4 + 292) = 0;
  DynArrayImpl<0>::ShrinkToSize(v4 + 1144, 8LL);
  *(_BYTE *)(*((_QWORD *)this + 3237) + 1176LL) = 0;
  *(_QWORD *)(*((_QWORD *)this + 3237) + 1184LL) = 0LL;
  *(_BYTE *)(*((_QWORD *)this + 3237) + 1192LL) = 0;
  *(_BYTE *)(*((_QWORD *)this + 3237) + 1201LL) = 0;
  *(_DWORD *)(*((_QWORD *)this + 3237) + 1196LL) = 0;
  *(_BYTE *)(*((_QWORD *)this + 3237) + 1200LL) = 0;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    McTemplateU0qqqq(
      v8,
      (unsigned int)&EVTDESC_SCHEDULE_UPDATE_FRAME_INDEXES,
      *((_DWORD *)this + 6471),
      *((_DWORD *)this + 6470),
      *((_DWORD *)this + 6473),
      *((_DWORD *)this + 6472));
}
