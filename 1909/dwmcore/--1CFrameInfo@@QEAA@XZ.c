/*
 * XREFs of ??1CFrameInfo@@QEAA@XZ @ 0x18018BA40
 * Callers:
 *     <none>
 * Callees:
 *     ??_GTouchUpdateInfo@CTelemetryTouchLatencyAnalysis@@QEAAPEAXI@Z @ 0x18002032C (--_GTouchUpdateInfo@CTelemetryTouchLatencyAnalysis@@QEAAPEAXI@Z.c)
 *     ?ResetTokens@CScheduleFrameInfoVolatileData@@AEAAXXZ @ 0x1800261A8 (-ResetTokens@CScheduleFrameInfoVolatileData@@AEAAXXZ.c)
 *     ?ReleaseResponses@CFrameInfo@@QEAAXXZ @ 0x1800261E8 (-ReleaseResponses@CFrameInfo@@QEAAXXZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x18007A004 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800BB688 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 */

void __fastcall CFrameInfo::~CFrameInfo(CFrameInfo *this)
{
  __int64 i; // rbx
  CTelemetryTouchLatencyAnalysis::TouchUpdateInfo *v3; // rcx

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 284); i = (unsigned int)(i + 1) )
  {
    v3 = *(CTelemetryTouchLatencyAnalysis::TouchUpdateInfo **)(*((_QWORD *)this + 139) + 8 * i);
    if ( v3 )
      CTelemetryTouchLatencyAnalysis::TouchUpdateInfo::`scalar deleting destructor'(v3);
  }
  *((_DWORD *)this + 284) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this + 1112, 8u);
  CFrameInfo::ReleaseResponses(this);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 1144);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 1112);
  CScheduleFrameInfoVolatileData::ResetTokens(this);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 1080);
}
