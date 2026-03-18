/*
 * XREFs of GetUserEUDCRegistryPath @ 0x1C011D170
 * Callers:
 *     bAddAllFlEntry @ 0x1C011CDF4 (bAddAllFlEntry.c)
 *     bReadUserSystemEUDCRegistry @ 0x1C011CF88 (bReadUserSystemEUDCRegistry.c)
 *     bWriteUserSystemEUDCRegistry @ 0x1C02924E8 (bWriteUserSystemEUDCRegistry.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetUserEUDCRegistryPath(WCHAR *a1)
{
  NTSTATUS appended; // ebx
  struct _UNICODE_STRING Destination; // [rsp+20h] [rbp-20h] BYREF
  struct _UNICODE_STRING KeyPath; // [rsp+30h] [rbp-10h] BYREF

  Destination.Buffer = a1;
  *(_QWORD *)&KeyPath.Length = 0LL;
  KeyPath.Buffer = 0LL;
  *(_QWORD *)&Destination.Length = 17039360LL;
  if ( RtlFormatCurrentUserKeyPath(&KeyPath) < 0 )
  {
    appended = RtlAppendUnicodeToString(&Destination, L"\\Registry\\User\\.DEFAULT");
    if ( appended < 0 )
      return (unsigned int)appended;
    appended = RtlAppendUnicodeToString(&Destination, L"\\EUDC\\");
    if ( appended < 0 )
      return (unsigned int)appended;
    appended = RtlAppendUnicodeToString(&Destination, word_1C032BE28);
  }
  else
  {
    appended = RtlAppendUnicodeStringToString(&Destination, &KeyPath);
    if ( appended >= 0 )
    {
      appended = RtlAppendUnicodeToString(&Destination, L"\\EUDC\\");
      if ( appended >= 0 )
        appended = RtlAppendUnicodeToString(&Destination, word_1C032BE28);
    }
    RtlFreeUnicodeString(&KeyPath);
  }
  if ( appended >= 0 && Destination.Length == Destination.MaximumLength )
    return (unsigned int)-1073741789;
  return (unsigned int)appended;
}
