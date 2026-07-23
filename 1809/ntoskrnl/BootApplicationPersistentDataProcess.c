/*
 * XREFs of BootApplicationPersistentDataProcess @ 0x1409D2004
 * Callers:
 *     IoInitSystemPreDrivers @ 0x1409B2F54 (IoInitSystemPreDrivers.c)
 *     Phase1InitializationIoReady @ 0x1409C5788 (Phase1InitializationIoReady.c)
 *     ExInitSystemPhase2 @ 0x1409D66E8 (ExInitSystemPhase2.c)
 * Callees:
 *     BapdpProcessEtwEvents @ 0x1401862E0 (BapdpProcessEtwEvents.c)
 *     BapdpMarshallBootDataToRegistry @ 0x1401863FC (BapdpMarshallBootDataToRegistry.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     BapdpProcessEDrvHintInfo @ 0x1409D1D68 (BapdpProcessEDrvHintInfo.c)
 *     BapdpProcessFwUpdateResults @ 0x1409D1DF8 (BapdpProcessFwUpdateResults.c)
 *     BapdpProcessWmdResults @ 0x1409D1E88 (BapdpProcessWmdResults.c)
 *     BapdpProcessHSTIResults @ 0x1409D1F74 (BapdpProcessHSTIResults.c)
 *     BapdpProcessResumeInformation @ 0x1409D20F4 (BapdpProcessResumeInformation.c)
 *     BapdpProcessBitlockerStatus @ 0x1409D21C4 (BapdpProcessBitlockerStatus.c)
 *     BapdpProcessVsmKeyBlobs @ 0x1409D22A0 (BapdpProcessVsmKeyBlobs.c)
 *     BapdpRegisterWbclData @ 0x1409D24E8 (BapdpRegisterWbclData.c)
 *     BapdpRecordIumStatus @ 0x1409D2958 (BapdpRecordIumStatus.c)
 *     BapdpProcessBootMetadata @ 0x1409D2DB0 (BapdpProcessBootMetadata.c)
 */

void __fastcall BootApplicationPersistentDataProcess(int a1)
{
  __int64 v1; // rcx
  __int64 v2; // rcx
  PVOID *v3; // rbx
  PVOID *v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rcx

  if ( (__int64 *)qword_1404DC578 != &qword_1404DC578 )
  {
    if ( !a1 )
    {
      BapdpProcessWmdResults();
      BapdpProcessResumeInformation();
      BapdpProcessBitlockerStatus();
      BapdpRegisterWbclData(0LL);
      BapdpRegisterWbclData(1LL);
      BapdpProcessVsmKeyBlobs(0LL);
      BapdpProcessEDrvHintInfo(v5);
      BapdpProcessFwUpdateResults(v6);
      return;
    }
    if ( a1 == 1 )
    {
      BapdpProcessBootMetadata();
      BapdpRecordIumStatus();
      BapdpProcessEtwEvents(v1);
      BapdpProcessHSTIResults(v2);
      BapdpMarshallBootDataToRegistry();
      v3 = (PVOID *)qword_1404DC580;
      v4 = (PVOID *)*((_QWORD *)qword_1404DC580 + 1);
      if ( *(__int64 **)qword_1404DC580 == &qword_1404DC578 )
      {
        while ( *v4 == v3 )
        {
          qword_1404DC580 = v4;
          *v4 = &qword_1404DC578;
          if ( v3 == (PVOID *)&qword_1404DC578 )
            return;
          ExFreePoolWithTag(v3[2], 0);
          ExFreePoolWithTag(v3, 0);
          v3 = (PVOID *)qword_1404DC580;
          if ( *(__int64 **)qword_1404DC580 != &qword_1404DC578 )
            break;
          v4 = (PVOID *)*((_QWORD *)qword_1404DC580 + 1);
        }
      }
      __fastfail(3u);
    }
  }
  if ( a1 == 2 )
    BapdpProcessVsmKeyBlobs(1LL);
}
