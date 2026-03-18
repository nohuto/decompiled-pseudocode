/*
 * XREFs of BootApplicationPersistentDataProcess @ 0x140A098F0
 * Callers:
 *     Phase1InitializationIoReady @ 0x1409FE82C (Phase1InitializationIoReady.c)
 *     IoInitSystemPreDrivers @ 0x140A0544C (IoInitSystemPreDrivers.c)
 *     ExInitSystemPhase2 @ 0x140A09604 (ExInitSystemPhase2.c)
 * Callees:
 *     BapdpProcessEtwEvents @ 0x14018BF4C (BapdpProcessEtwEvents.c)
 *     BapdpMarshallBootDataToRegistry @ 0x14018C068 (BapdpMarshallBootDataToRegistry.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     BapdpProcessEDrvHintInfo @ 0x140A09654 (BapdpProcessEDrvHintInfo.c)
 *     BapdpProcessFwUpdateResults @ 0x140A096E4 (BapdpProcessFwUpdateResults.c)
 *     BapdpProcessWmdResults @ 0x140A09774 (BapdpProcessWmdResults.c)
 *     BapdpProcessHSTIResults @ 0x140A09860 (BapdpProcessHSTIResults.c)
 *     BapdpProcessResumeInformation @ 0x140A099E0 (BapdpProcessResumeInformation.c)
 *     BapdpProcessBitlockerStatus @ 0x140A09AB0 (BapdpProcessBitlockerStatus.c)
 *     BapdpProcessVsmKeyBlobs @ 0x140A09B80 (BapdpProcessVsmKeyBlobs.c)
 *     BapdpRegisterWbclData @ 0x140A09D98 (BapdpRegisterWbclData.c)
 *     BapdpRecordIumStatus @ 0x140A0A228 (BapdpRecordIumStatus.c)
 *     BapdpProcessBootMetadata @ 0x140A0A328 (BapdpProcessBootMetadata.c)
 */

void __fastcall BootApplicationPersistentDataProcess(int a1)
{
  __int64 v1; // rcx
  __int64 v2; // rcx
  PVOID *v3; // rbx
  PVOID *v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rcx

  if ( (__int64 *)qword_140508B08 != &qword_140508B08 )
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
      v3 = (PVOID *)qword_140508B10;
      v4 = (PVOID *)*((_QWORD *)qword_140508B10 + 1);
      if ( *(__int64 **)qword_140508B10 == &qword_140508B08 )
      {
        while ( *v4 == v3 )
        {
          qword_140508B10 = v4;
          *v4 = &qword_140508B08;
          if ( v3 == (PVOID *)&qword_140508B08 )
            return;
          ExFreePoolWithTag(v3[2], 0);
          ExFreePoolWithTag(v3, 0);
          v3 = (PVOID *)qword_140508B10;
          if ( *(__int64 **)qword_140508B10 != &qword_140508B08 )
            break;
          v4 = (PVOID *)*((_QWORD *)qword_140508B10 + 1);
        }
      }
      __fastfail(3u);
    }
  }
  if ( a1 == 2 )
    BapdpProcessVsmKeyBlobs(1LL);
}
