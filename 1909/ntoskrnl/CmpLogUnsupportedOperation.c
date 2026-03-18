/*
 * XREFs of CmpLogUnsupportedOperation @ 0x1408329E4
 * Callers:
 *     CmpDoParseKey @ 0x1405FBD70 (CmpDoParseKey.c)
 *     CmpCreateChild @ 0x140634398 (CmpCreateChild.c)
 *     CmpPerformUnloadKey @ 0x1406B91E4 (CmpPerformUnloadKey.c)
 *     NtCompactKeys @ 0x140823240 (NtCompactKeys.c)
 *     CmRenameKey @ 0x140827C5C (CmRenameKey.c)
 *     CmSetKeyFlags @ 0x14082937C (CmSetKeyFlags.c)
 *     CmRestoreKey @ 0x140839F74 (CmRestoreKey.c)
 *     CmSaveKey @ 0x14083AA9C (CmSaveKey.c)
 *     CmSaveMergedKeys @ 0x14083AE6C (CmSaveMergedKeys.c)
 * Callees:
 *     _TlgWrite @ 0x14008BA00 (_TlgWrite.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     CmpSendUnsupportedOperationTelemetryEvent @ 0x140832DBC (CmpSendUnsupportedOperationTelemetryEvent.c)
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
  if ( stru_140425BC0.LevelPlus1 > 5 )
  {
    v7 = 0;
    v5 = (int *)&v3;
    v3 = a1;
    v6 = 4;
    return TlgWrite(&stru_140425BC0, &unk_14038C24F, 0LL, 0LL, 3u, &pData);
  }
  return result;
}
