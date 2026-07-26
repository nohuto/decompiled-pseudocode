/*
 * XREFs of ndisFindMiniportOnGlobalList @ 0x1C013A410
 * Callers:
 *     NdisIMInitializeDeviceInstanceEx @ 0x1C007FBB0 (NdisIMInitializeDeviceInstanceEx.c)
 * Callees:
 *     ndisReferencePackage @ 0x1C0001008 (ndisReferencePackage.c)
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     ndisDereferencePackage @ 0x1C001B95C (ndisDereferencePackage.c)
 *     memcmp @ 0x1C0041250 (memcmp.c)
 */

wchar_t *__fastcall ndisFindMiniportOnGlobalList(PCUNICODE_STRING SourceString)
{
  wchar_t *result; // rax
  wchar_t *v3; // rsi
  KIRQL v4; // al
  struct _NDIS_MINIPORT_BLOCK *v5; // rbx
  KIRQL v6; // bp
  unsigned __int16 Length; // di
  _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-28h] BYREF

  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      13,
      102,
      (struct _GUID *)&WPP_3bdda7144e74370204adec44604355d7_Traceguids,
      (char)SourceString);
  DestinationString.Length = SourceString->Length;
  DestinationString.MaximumLength = DestinationString.Length + 2;
  result = (wchar_t *)ExAllocatePoolWithTag(
                        NonPagedPoolNx,
                        (unsigned __int16)(DestinationString.Length + 2),
                        0x7473444Eu);
  DestinationString.Buffer = result;
  v3 = result;
  if ( result )
  {
    RtlUpcaseUnicodeString(&DestinationString, SourceString, 0);
    ndisReferencePackage((__int64)&ndisPkgs);
    v4 = KeAcquireSpinLockRaiseToDpc(&ndisMiniportListLock);
    v5 = ndisMiniportList;
    v6 = v4;
    if ( ndisMiniportList )
    {
      Length = DestinationString.Length;
      do
      {
        if ( Length == v5->MiniportName.Length && !memcmp(DestinationString.Buffer, v5->MiniportName.Buffer, Length) )
          break;
        v5 = v5->NextGlobalMiniport;
      }
      while ( v5 );
    }
    KeReleaseSpinLock(&ndisMiniportListLock, v6);
    ndisDereferencePackage((__int64)&ndisPkgs);
    ExFreePoolWithTag(v3, 0);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4,
        13,
        103,
        (struct _GUID *)&WPP_3bdda7144e74370204adec44604355d7_Traceguids,
        (char)v5);
    return (wchar_t *)v5;
  }
  return result;
}
