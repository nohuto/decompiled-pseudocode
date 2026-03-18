/*
 * XREFs of CmpLogUnsupportedOperation @ 0x1407FA064
 * Callers:
 *     CmpCreateChild @ 0x1405AB7A4 (CmpCreateChild.c)
 *     CmpDoParseKey @ 0x140641CC0 (CmpDoParseKey.c)
 *     CmpPerformUnloadKey @ 0x1406923B0 (CmpPerformUnloadKey.c)
 *     NtCompactKeys @ 0x1407E8ED0 (NtCompactKeys.c)
 *     CmRenameKey @ 0x1407EDB14 (CmRenameKey.c)
 *     CmSetKeyFlags @ 0x1407EF43C (CmSetKeyFlags.c)
 *     CmRestoreKey @ 0x1408013CC (CmRestoreKey.c)
 *     CmSaveKey @ 0x140801F50 (CmSaveKey.c)
 *     CmSaveMergedKeys @ 0x14080231C (CmSaveMergedKeys.c)
 * Callees:
 *     _TlgWrite @ 0x140012EE4 (_TlgWrite.c)
 *     __security_check_cookie @ 0x140193FF0 (__security_check_cookie.c)
 *     CmpSendUnsupportedOperationTelemetryEvent @ 0x1407FA400 (CmpSendUnsupportedOperationTelemetryEvent.c)
 */

TLG_STATUS __fastcall CmpLogUnsupportedOperation(unsigned int a1)
{
  TLG_STATUS result; // eax
  unsigned int v3; // [rsp+30h] [rbp-48h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-40h] BYREF
  int *v5; // [rsp+58h] [rbp-20h]
  int v6; // [rsp+60h] [rbp-18h]
  int v7; // [rsp+64h] [rbp-14h]

  result = _InterlockedIncrement(&CmpUnsupportedOperationHits[a1]);
  if ( result == 0x7FFFFFFF && _InterlockedExchange(&CmpUnsupportedOperationHits[a1], 0) )
    result = CmpSendUnsupportedOperationTelemetryEvent(a1);
  if ( stru_1403FFAA0.LevelPlus1 > 5 )
  {
    v7 = 0;
    v5 = (int *)&v3;
    v3 = a1;
    v6 = 4;
    return TlgWrite(&stru_1403FFAA0, &unk_14036C47D, 0LL, 0LL, 3u, &pData);
  }
  return result;
}
