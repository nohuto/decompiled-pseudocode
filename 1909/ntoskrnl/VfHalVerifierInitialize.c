/*
 * XREFs of VfHalVerifierInitialize @ 0x14096A1B8
 * Callers:
 *     VfInitVerifierComponents @ 0x140964C00 (VfInitVerifierComponents.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     ViHalApplySettings @ 0x14096C43C (ViHalApplySettings.c)
 */

__int64 VfHalVerifierInitialize()
{
  __int16 v1; // [rsp+30h] [rbp-28h]

  qword_1409C7E08 = 0LL;
  qword_1409C8100 = 0LL;
  v1 = 16;
  ViAdapterList.Blink = &ViAdapterList;
  ViAdapterList.Flink = &ViAdapterList;
  qword_1409C80F8 = (__int64)&ViDomainCommonBufferList;
  ViDomainCommonBufferList = (__int64)&ViDomainCommonBufferList;
  pXdvExInitializeNPagedLookasideList(
    (int)&ViHalWaitBlockLookaside,
    0,
    (int)VfUtilFreePoolCheckIRQL,
    512,
    152LL,
    1449943368,
    v1,
    VfInitializedWithoutReboot,
    (__int64)ExInitializeNPagedLookasideListInternal);
  return ViHalApplySettings();
}
