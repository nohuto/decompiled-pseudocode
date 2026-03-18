/*
 * XREFs of RIMFindReferencedSiblingPointerDeviceForMouseDevice @ 0x1C011AEB0
 * Callers:
 *     RIMApplyPTPConfigRemedy @ 0x1C012FEAC (RIMApplyPTPConfigRemedy.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C0031320 (RIMLockExclusive.c)
 *     RIMIsParentCommon @ 0x1C011B30C (RIMIsParentCommon.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall RIMFindReferencedSiblingPointerDeviceForMouseDevice(__int64 a1, _QWORD *a2, __int64 a3)
{
  int v5; // eax
  __int64 *i; // rbx
  __int64 v7; // rdx

  if ( *(_BYTE *)(a1 + 48) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  v5 = *(_DWORD *)(a1 + 184);
  if ( (v5 & 0x2000000) == 0 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
    v5 = *(_DWORD *)(a1 + 184);
  }
  if ( (v5 & 0x4000000) == 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  *a2 = 0LL;
  RIMLockExclusive((__int64)&gObListLock);
  for ( i = (__int64 *)gObRimDevList; i != &gObRimDevList; i = (__int64 *)*i )
  {
    if ( *(_BYTE *)(((unsigned __int64)(i + 9) & ((unsigned __int128)-(__int128)(unsigned __int64)(i - 2) >> 64)) + 0x30) == 2
      && (*(_DWORD *)(((unsigned __int64)(i + 9) & ((unsigned __int128)-(__int128)(unsigned __int64)(i - 2) >> 64))
                    + 0xB8) & 0x400) == 0 )
    {
      v7 = (unsigned __int64)(i + 9) & ((unsigned __int128)-(__int128)(unsigned __int64)(i - 2) >> 64);
      if ( (unsigned int)RIMIsParentCommon(
                           a1,
                           v7,
                           *(_QWORD *)(v7 + 464),
                           *(unsigned __int16 *)(*(_QWORD *)(v7 + 464) + 110LL),
                           *(_WORD *)(*(_QWORD *)(v7 + 464) + 112LL)) )
      {
        ObReferenceObjectByPointer(i - 2, 3u, ExRawInputManagerObjectType, 0);
        *a2 = i - 2;
        break;
      }
    }
  }
  qword_1C01D0F90 = 0LL;
  ExReleasePushLockExclusiveEx(&gObListLock, 0LL);
  KeLeaveCriticalRegion();
}
