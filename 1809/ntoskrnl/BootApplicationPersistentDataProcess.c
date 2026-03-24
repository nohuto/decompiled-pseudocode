/*
 * XREFs of BootApplicationPersistentDataProcess @ 0x1409D1004
 * Callers:
 *     IoInitSystemPreDrivers @ 0x1409B1F54 (IoInitSystemPreDrivers.c)
 *     Phase1InitializationIoReady @ 0x1409C4788 (Phase1InitializationIoReady.c)
 *     ExInitSystemPhase2 @ 0x1409D56E8 (ExInitSystemPhase2.c)
 * Callees:
 *     BapdpProcessEtwEvents @ 0x1401861A0 (BapdpProcessEtwEvents.c)
 *     BapdpMarshallBootDataToRegistry @ 0x1401862BC (BapdpMarshallBootDataToRegistry.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 *     BapdpProcessEDrvHintInfo @ 0x1409D0D68 (BapdpProcessEDrvHintInfo.c)
 *     BapdpProcessFwUpdateResults @ 0x1409D0DF8 (BapdpProcessFwUpdateResults.c)
 *     BapdpProcessWmdResults @ 0x1409D0E88 (BapdpProcessWmdResults.c)
 *     BapdpProcessHSTIResults @ 0x1409D0F74 (BapdpProcessHSTIResults.c)
 *     BapdpProcessResumeInformation @ 0x1409D10F4 (BapdpProcessResumeInformation.c)
 *     BapdpProcessBitlockerStatus @ 0x1409D11C4 (BapdpProcessBitlockerStatus.c)
 *     BapdpProcessVsmKeyBlobs @ 0x1409D12A0 (BapdpProcessVsmKeyBlobs.c)
 *     BapdpRegisterWbclData @ 0x1409D14E8 (BapdpRegisterWbclData.c)
 *     BapdpRecordIumStatus @ 0x1409D1958 (BapdpRecordIumStatus.c)
 *     BapdpProcessBootMetadata @ 0x1409D1DB0 (BapdpProcessBootMetadata.c)
 */

void __fastcall BootApplicationPersistentDataProcess(int a1)
{
  __int64 v1; // rcx
  __int64 v2; // rcx
  PVOID *v3; // rbx
  PVOID *v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rcx

  if ( (__int64 *)qword_1404DB4B8 != &qword_1404DB4B8 )
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
      v3 = (PVOID *)qword_1404DB4C0;
      v4 = (PVOID *)*((_QWORD *)qword_1404DB4C0 + 1);
      if ( *(__int64 **)qword_1404DB4C0 == &qword_1404DB4B8 )
      {
        while ( *v4 == v3 )
        {
          qword_1404DB4C0 = v4;
          *v4 = &qword_1404DB4B8;
          if ( v3 == (PVOID *)&qword_1404DB4B8 )
            return;
          ExFreePoolWithTag(v3[2], 0);
          ExFreePoolWithTag(v3, 0);
          v3 = (PVOID *)qword_1404DB4C0;
          if ( *(__int64 **)qword_1404DB4C0 != &qword_1404DB4B8 )
            break;
          v4 = (PVOID *)*((_QWORD *)qword_1404DB4C0 + 1);
        }
      }
      __fastfail(3u);
    }
  }
  if ( a1 == 2 )
    BapdpProcessVsmKeyBlobs(1LL);
}
