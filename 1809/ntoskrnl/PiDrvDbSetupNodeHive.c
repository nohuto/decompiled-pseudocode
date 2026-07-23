/*
 * XREFs of PiDrvDbSetupNodeHive @ 0x140840358
 * Callers:
 *     PiDrvDbLoadNodeWorkerCallback @ 0x140681F20 (PiDrvDbLoadNodeWorkerCallback.c)
 *     PiDrvDbSetupNodes @ 0x14073B9B4 (PiDrvDbSetupNodes.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x140015E00 (RtlAppendUnicodeToString.c)
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     RtlAppendUnicodeStringToString @ 0x1400F5250 (RtlAppendUnicodeStringToString.c)
 *     _wcsicmp @ 0x140195A70 (_wcsicmp.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     ZwOpenKey @ 0x1401B8530 (ZwOpenKey.c)
 *     RtlFreeAnsiString @ 0x140624790 (RtlFreeAnsiString.c)
 *     PiDrvDbUnloadHive @ 0x140684920 (PiDrvDbUnloadHive.c)
 *     PiDrvDbLoadHive @ 0x140684968 (PiDrvDbLoadHive.c)
 *     ExpAllocateStringRoutine @ 0x1406B33A0 (ExpAllocateStringRoutine.c)
 *     PiDrvDbOverlayNodeHive @ 0x14083EFEC (PiDrvDbOverlayNodeHive.c)
 *     PiDrvDbResolveNodeFilePaths @ 0x14083FF38 (PiDrvDbResolveNodeFilePaths.c)
 */

__int64 __fastcall PiDrvDbSetupNodeHive(__int64 a1, const WCHAR *a2)
{
  char v3; // si
  NTSTATUS v5; // eax
  int appended; // ebx
  unsigned __int16 i; // cx
  int v8; // eax
  UNICODE_STRING Destination; // [rsp+20h] [rbp-60h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+30h] [rbp-50h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  HANDLE KeyHandle; // [rsp+B0h] [rbp+30h] BYREF

  KeyHandle = 0LL;
  v3 = 0;
  RtlInitUnicodeString(&DestinationString, a2);
  RtlInitUnicodeString(&UnicodeString, 0LL);
  RtlInitUnicodeString(&Destination, 0LL);
  if ( !wcsicmp(a2, L"SYSTEM") )
  {
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)(a1 + 32);
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v5 = ZwOpenKey(&KeyHandle, 0xF003Fu, &ObjectAttributes);
    appended = v5;
LABEL_9:
    if ( v5 < 0 )
      goto LABEL_28;
LABEL_24:
    appended = PiDrvDbResolveNodeFilePaths(a1, (__int64)KeyHandle);
    if ( appended >= 0 && (*(_DWORD *)(a1 + 64) & 8) != 0 )
      appended = PiDrvDbOverlayNodeHive(a1, a2, (__int64)KeyHandle);
    goto LABEL_28;
  }
  if ( (*(_DWORD *)(a1 + 64) & 8) == 0 )
  {
    Destination.Length = 0;
    Destination.MaximumLength = DestinationString.Length + 38;
    Destination.Buffer = (wchar_t *)ExpAllocateStringRoutine((unsigned __int16)(DestinationString.Length + 38));
    if ( !Destination.Buffer )
    {
LABEL_5:
      appended = -1073741670;
      goto LABEL_28;
    }
    appended = RtlAppendUnicodeToString(&Destination, L"\\REGISTRY\\MACHINE\\");
    if ( appended < 0 )
      goto LABEL_28;
    appended = RtlAppendUnicodeStringToString(&Destination, &DestinationString);
    if ( appended < 0 )
      goto LABEL_28;
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &Destination;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v5 = ZwOpenKey(&KeyHandle, 0xF003Fu, &ObjectAttributes);
    appended = v5;
    if ( v5 != -1073741772 )
      goto LABEL_9;
LABEL_27:
    appended = 0;
    goto LABEL_28;
  }
  if ( (MEMORY[0xFFFFF780000002F0] & 0x400) == 0 )
    goto LABEL_27;
  UnicodeString.MaximumLength = DestinationString.Length + *(_WORD *)(a1 + 50);
  UnicodeString.Length = 0;
  UnicodeString.Buffer = (wchar_t *)ExpAllocateStringRoutine(UnicodeString.MaximumLength);
  if ( !UnicodeString.Buffer )
    goto LABEL_5;
  appended = RtlAppendUnicodeStringToString(&UnicodeString, (PCUNICODE_STRING)(a1 + 48));
  if ( appended >= 0 )
  {
    for ( i = UnicodeString.Length; i > 2u; UnicodeString.Length = i )
    {
      if ( UnicodeString.Buffer[((unsigned __int64)i >> 1) - 1] == 92 )
        break;
      i -= 2;
    }
    appended = RtlAppendUnicodeStringToString(&UnicodeString, &DestinationString);
    if ( appended >= 0 )
    {
      Destination.MaximumLength = DestinationString.Length + *(_WORD *)(a1 + 34);
      Destination.Length = 0;
      Destination.Buffer = (wchar_t *)ExpAllocateStringRoutine(Destination.MaximumLength);
      if ( !Destination.Buffer )
        goto LABEL_5;
      appended = RtlAppendUnicodeStringToString(&Destination, (PCUNICODE_STRING)(a1 + 32));
      if ( appended < 0 )
        goto LABEL_28;
      appended = RtlAppendUnicodeStringToString(&Destination, &DestinationString);
      if ( appended < 0 )
        goto LABEL_28;
      v8 = PiDrvDbLoadHive(&Destination, &UnicodeString, 0x2000, &KeyHandle);
      appended = v8;
      if ( v8 != -1073741772 )
      {
        if ( v8 < 0 )
          goto LABEL_28;
        v3 = 1;
        goto LABEL_24;
      }
      goto LABEL_27;
    }
  }
LABEL_28:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( v3 )
    PiDrvDbUnloadHive(&Destination, 0LL);
  RtlFreeAnsiString(&UnicodeString);
  RtlFreeAnsiString(&Destination);
  return (unsigned int)appended;
}
