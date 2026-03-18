/*
 * XREFs of BootApplicationPersistentDataProcess @ 0x140A09E1C
 * Callers:
 *     Phase1InitializationIoReady @ 0x1409FED48 (Phase1InitializationIoReady.c)
 *     IoInitSystemPreDrivers @ 0x140A05968 (IoInitSystemPreDrivers.c)
 *     ExInitSystemPhase2 @ 0x140A09B30 (ExInitSystemPhase2.c)
 * Callees:
 *     BapdpProcessEtwEvents @ 0x14018C7C4 (BapdpProcessEtwEvents.c)
 *     BapdpMarshallBootDataToRegistry @ 0x14018C8E0 (BapdpMarshallBootDataToRegistry.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     BapdpProcessEDrvHintInfo @ 0x140A09B80 (BapdpProcessEDrvHintInfo.c)
 *     BapdpProcessFwUpdateResults @ 0x140A09C10 (BapdpProcessFwUpdateResults.c)
 *     BapdpProcessWmdResults @ 0x140A09CA0 (BapdpProcessWmdResults.c)
 *     BapdpProcessHSTIResults @ 0x140A09D8C (BapdpProcessHSTIResults.c)
 *     BapdpProcessResumeInformation @ 0x140A09F0C (BapdpProcessResumeInformation.c)
 *     BapdpProcessBitlockerStatus @ 0x140A09FDC (BapdpProcessBitlockerStatus.c)
 *     BapdpProcessVsmKeyBlobs @ 0x140A0A0AC (BapdpProcessVsmKeyBlobs.c)
 *     BapdpRegisterWbclData @ 0x140A0A2C4 (BapdpRegisterWbclData.c)
 *     BapdpRecordIumStatus @ 0x140A0A754 (BapdpRecordIumStatus.c)
 *     BapdpProcessBootMetadata @ 0x140A0A854 (BapdpProcessBootMetadata.c)
 */

void __fastcall BootApplicationPersistentDataProcess(int a1)
{
  __int64 v1; // rcx
  __int64 v2; // rcx
  PVOID *v3; // rbx
  PVOID *v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rcx

  if ( (__int64 *)qword_140508848 != &qword_140508848 )
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
      v3 = (PVOID *)qword_140508850;
      v4 = (PVOID *)*((_QWORD *)qword_140508850 + 1);
      if ( *(__int64 **)qword_140508850 == &qword_140508848 )
      {
        while ( *v4 == v3 )
        {
          qword_140508850 = v4;
          *v4 = &qword_140508848;
          if ( v3 == (PVOID *)&qword_140508848 )
            return;
          ExFreePoolWithTag(v3[2], 0);
          ExFreePoolWithTag(v3, 0);
          v3 = (PVOID *)qword_140508850;
          if ( *(__int64 **)qword_140508850 != &qword_140508848 )
            break;
          v4 = (PVOID *)*((_QWORD *)qword_140508850 + 1);
        }
      }
      __fastfail(3u);
    }
  }
  if ( a1 == 2 )
    BapdpProcessVsmKeyBlobs(1LL);
}
