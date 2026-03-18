/*
 * XREFs of RIMFindReferencedSiblingPointerDeviceForMouseDevice @ 0x1C00EF680
 * Callers:
 *     RIMApplyPTPConfigRemedy @ 0x1C01087F4 (RIMApplyPTPConfigRemedy.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C003B4E0 (RIMLockExclusive.c)
 *     RIMIsParentCommon @ 0x1C00EFE8C (RIMIsParentCommon.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall RIMFindReferencedSiblingPointerDeviceForMouseDevice(__int64 a1, _QWORD *a2)
{
  int v4; // eax
  __int64 *i; // rbx
  __int64 v6; // rdx

  if ( *(_BYTE *)(a1 + 48) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2);
  v4 = *(_DWORD *)(a1 + 184);
  if ( (v4 & 0x4000000) == 0 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2);
    v4 = *(_DWORD *)(a1 + 184);
  }
  if ( (v4 & 0x8000000) == 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2);
  *a2 = 0LL;
  RIMLockExclusive((__int64)&gObListLock);
  for ( i = (__int64 *)gObRimDevList; i != &gObRimDevList; i = (__int64 *)*i )
  {
    if ( *(_BYTE *)(((unsigned __int64)(i + 8) & ((unsigned __int128)-(__int128)(unsigned __int64)(i - 2) >> 64)) + 0x30) == 2
      && (*(_DWORD *)(((unsigned __int64)(i + 8) & ((unsigned __int128)-(__int128)(unsigned __int64)(i - 2) >> 64))
                    + 0xB8) & 0x200) == 0 )
    {
      v6 = (unsigned __int64)(i + 8) & ((unsigned __int128)-(__int128)(unsigned __int64)(i - 2) >> 64);
      if ( (unsigned int)RIMIsParentCommon(
                           a1,
                           v6,
                           *(_QWORD *)(v6 + 464),
                           *(unsigned __int16 *)(*(_QWORD *)(v6 + 464) + 110LL),
                           *(_WORD *)(*(_QWORD *)(v6 + 464) + 112LL)) )
      {
        ObReferenceObjectByPointer(i - 2, 3u, ExRawInputManagerObjectType, 0);
        *a2 = i - 2;
        break;
      }
    }
  }
  qword_1C01A1640 = 0LL;
  ExReleasePushLockExclusiveEx(&gObListLock, 0LL);
  KeLeaveCriticalRegion();
}
