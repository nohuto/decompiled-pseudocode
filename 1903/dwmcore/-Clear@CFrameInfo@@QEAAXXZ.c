/*
 * XREFs of ?Clear@CFrameInfo@@QEAAXXZ @ 0x1800A4B20
 * Callers:
 *     ?Reinitialize@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x1800A48A0 (-Reinitialize@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 * Callees:
 *     ??_GTouchUpdateInfo@CTelemetryTouchLatencyAnalysis@@QEAAPEAXI@Z @ 0x180021EFC (--_GTouchUpdateInfo@CTelemetryTouchLatencyAnalysis@@QEAAPEAXI@Z.c)
 *     ?ResetTokens@CScheduleFrameInfoVolatileData@@AEAAXXZ @ 0x1800A4B80 (-ResetTokens@CScheduleFrameInfoVolatileData@@AEAAXXZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800B8A58 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     memset_0 @ 0x1800E7E5E (memset_0.c)
 */

void __fastcall CFrameInfo::Clear(CFrameInfo *this)
{
  __int64 i; // rdi
  CTelemetryTouchLatencyAnalysis::TouchUpdateInfo *v3; // rcx

  memset_0(this, 0, 0x438uLL);
  CScheduleFrameInfoVolatileData::ResetTokens(this);
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 284); i = (unsigned int)(i + 1) )
  {
    v3 = *(CTelemetryTouchLatencyAnalysis::TouchUpdateInfo **)(*((_QWORD *)this + 139) + 8 * i);
    if ( v3 )
      CTelemetryTouchLatencyAnalysis::TouchUpdateInfo::`scalar deleting destructor'(v3);
  }
  *((_DWORD *)this + 284) = 0;
  DynArrayImpl<0>::ShrinkToSize((char *)this + 1112, 8LL);
  CFrameInfo::ReleaseResponses(this);
}
