/*
 * XREFs of ??_GAnimationScenarioLongtermStatistics@CAnimationTracking@@QEAAPEAXI@Z @ 0x18018D784
 * Callers:
 *     ?UpdateLongtermStatistics@CAnimationTracking@@AEAAXPEBU_GUID@@PEBGIIIIII@Z @ 0x1800A6F8C (-UpdateLongtermStatistics@CAnimationTracking@@AEAAXPEBU_GUID@@PEBGIIIIII@Z.c)
 *     ?ClearAllLongtermScenarios@CAnimationTracking@@AEAAXXZ @ 0x18018D7B0 (-ClearAllLongtermScenarios@CAnimationTracking@@AEAAXXZ.c)
 *     ?SendLongtermStatistics@CAnimationTracking@@AEAAXXZ @ 0x18018DA24 (-SendLongtermStatistics@CAnimationTracking@@AEAAXXZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800932DC (--3@YAXPEAX@Z.c)
 */

void **__fastcall CAnimationTracking::AnimationScenarioLongtermStatistics::`scalar deleting destructor'(void **this)
{
  operator delete(this[2]);
  operator delete(this);
  return this;
}
