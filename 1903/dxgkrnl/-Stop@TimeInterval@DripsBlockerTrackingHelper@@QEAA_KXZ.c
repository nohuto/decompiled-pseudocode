/*
 * XREFs of ?Stop@TimeInterval@DripsBlockerTrackingHelper@@QEAA_KXZ @ 0x1C0246014
 * Callers:
 *     ?EngageDFx@DripsBlockerTrackingHelper@@QEAAX_N@Z @ 0x1C02431CC (-EngageDFx@DripsBlockerTrackingHelper@@QEAAX_N@Z.c)
 *     ?SetPDCIdleResiliencyEngaged@DXGGLOBAL@@QEAAXH@Z @ 0x1C0245B64 (-SetPDCIdleResiliencyEngaged@DXGGLOBAL@@QEAAXH@Z.c)
 * Callees:
 *     ?GetElapsed@TimeInterval@DripsBlockerTrackingHelper@@SA_K_K@Z @ 0x1C0243CE0 (-GetElapsed@TimeInterval@DripsBlockerTrackingHelper@@SA_K_K@Z.c)
 */

__int64 __fastcall DripsBlockerTrackingHelper::TimeInterval::Stop(DripsBlockerTrackingHelper::TimeInterval *this)
{
  __int64 result; // rax

  result = 0LL;
  if ( *(_BYTE *)this )
  {
    result = DripsBlockerTrackingHelper::TimeInterval::GetElapsed(*((_QWORD *)this + 1));
    *((_QWORD *)this + 2) += result;
    *(_BYTE *)this = 0;
  }
  return result;
}
