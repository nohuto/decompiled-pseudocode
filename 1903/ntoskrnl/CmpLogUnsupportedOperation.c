/*
 * XREFs of CmpLogUnsupportedOperation @ 0x140833384
 * Callers:
 *     CmpDoParseKey @ 0x1405FAD20 (CmpDoParseKey.c)
 *     CmpCreateChild @ 0x140630518 (CmpCreateChild.c)
 *     CmpPerformUnloadKey @ 0x14069AC04 (CmpPerformUnloadKey.c)
 *     NtCompactKeys @ 0x140823B40 (NtCompactKeys.c)
 *     CmRenameKey @ 0x14082855C (CmRenameKey.c)
 *     CmSetKeyFlags @ 0x140829C7C (CmSetKeyFlags.c)
 *     CmRestoreKey @ 0x14083A914 (CmRestoreKey.c)
 *     CmSaveKey @ 0x14083B43C (CmSaveKey.c)
 *     CmSaveMergedKeys @ 0x14083B80C (CmSaveMergedKeys.c)
 * Callees:
 *     _TlgWrite @ 0x14008A700 (_TlgWrite.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     CmpSendUnsupportedOperationTelemetryEvent @ 0x14083375C (CmpSendUnsupportedOperationTelemetryEvent.c)
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
    return TlgWrite(&stru_140425BC0, &unk_14038BF86, 0LL, 0LL, 3u, &pData);
  }
  return result;
}
