/*
 * XREFs of ?ScenarioNameFromGuid@CAnimationTracking@@CAJAEBU_GUID@@PEAPEBG@Z @ 0x1800C3104
 * Callers:
 *     ?GetScenarioName@CAnimationTracking@@AEAAPEBGPEAUAnimationScenarioRunningStatistics@1@PEAGK@Z @ 0x1800839E4 (-GetScenarioName@CAnimationTracking@@AEAAPEBGPEAUAnimationScenarioRunningStatistics@1@PEAGK@Z.c)
 *     ?SendLongtermStatistics@CAnimationTracking@@AEAAXXZ @ 0x18014CA0C (-SendLongtermStatistics@CAnimationTracking@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CAnimationTracking::ScenarioNameFromGuid(const struct _GUID *a1, const unsigned __int16 **a2)
{
  __int64 v3; // rax
  unsigned int v4; // r8d
  __int64 v5; // rcx

  v3 = 0LL;
  v4 = -2147319765;
  while ( 1 )
  {
    v5 = *(_QWORD *)&a1->Data1 - (_QWORD)*(&off_180305310 + 3 * v3 + 1);
    if ( *(wchar_t **)&a1->Data1 == *(&off_180305310 + 3 * v3 + 1) )
      v5 = *(_QWORD *)a1->Data4 - (_QWORD)(&off_180305310)[3 * v3 + 1];
    if ( !v5 )
      break;
    v3 = (unsigned int)(v3 + 1);
    if ( (unsigned int)v3 >= 0x48 )
      return v4;
  }
  v4 = 0;
  *a2 = (&off_180305310)[3 * v3];
  return v4;
}
