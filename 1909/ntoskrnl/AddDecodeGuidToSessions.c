/*
 * XREFs of AddDecodeGuidToSessions @ 0x1409001A8
 * Callers:
 *     EtwpSetProviderTraitsCommon @ 0x1405C48F0 (EtwpSetProviderTraitsCommon.c)
 * Callees:
 *     EtwpReleaseLoggerContext @ 0x1405C5400 (EtwpReleaseLoggerContext.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x1405C5448 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpTrackDecodeGuidForSession @ 0x1408FF80C (EtwpTrackDecodeGuidForSession.c)
 */

bool __fastcall AddDecodeGuidToSessions(__int64 a1)
{
  unsigned __int8 v1; // si
  bool v3; // di
  unsigned int v5; // edx
  unsigned int *v6; // rbx

  v1 = *(_BYTE *)(a1 + 100);
  v3 = 1;
  do
  {
    if ( !_BitScanForward(&v5, v1) )
      break;
    v1 &= v1 - 1;
    v6 = EtwpAcquireLoggerContextByLoggerId(
           *(_QWORD *)(*(_QWORD *)(a1 + 32) + 392LL),
           *(unsigned __int16 *)(32LL * v5 + *(_QWORD *)(a1 + 32) + 134),
           0);
    v3 = EtwpTrackDecodeGuidForSession((__int64)v6, a1);
    EtwpReleaseLoggerContext(v6, 0);
  }
  while ( v3 );
  return v3;
}
