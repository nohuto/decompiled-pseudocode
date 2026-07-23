/*
 * XREFs of PiDrvDbSetupNodeHive @ 0x14087A094
 * Callers:
 *     PiDrvDbLoadNodeWorkerCallback @ 0x1406F1F00 (PiDrvDbLoadNodeWorkerCallback.c)
 *     PiDrvDbSetupNodes @ 0x140756C5C (PiDrvDbSetupNodes.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x140002BC0 (RtlAppendUnicodeToString.c)
 *     RtlInitUnicodeString @ 0x140043CD0 (RtlInitUnicodeString.c)
 *     RtlAppendUnicodeStringToString @ 0x1400EC910 (RtlAppendUnicodeStringToString.c)
 *     _wcsicmp @ 0x1401A0820 (_wcsicmp.c)
 *     ZwClose @ 0x1401C0E30 (ZwClose.c)
 *     ZwOpenKey @ 0x1401C0E90 (ZwOpenKey.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     RtlFreeAnsiString @ 0x14060D250 (RtlFreeAnsiString.c)
 *     ExpAllocateStringRoutine @ 0x1406D4640 (ExpAllocateStringRoutine.c)
 *     PiDrvDbUnloadHive @ 0x1406F2268 (PiDrvDbUnloadHive.c)
 *     PiDrvDbLoadHive @ 0x1406F22B4 (PiDrvDbLoadHive.c)
 *     _PnpSetObjectProperty @ 0x1407083D4 (_PnpSetObjectProperty.c)
 *     PiDrvDbOverlayNodeHive @ 0x1408788D4 (PiDrvDbOverlayNodeHive.c)
 *     PiDrvDbResolveNodeFilePaths @ 0x140879B74 (PiDrvDbResolveNodeFilePaths.c)
 *     RtlSuffixUnicodeString @ 0x1408CDD70 (RtlSuffixUnicodeString.c)
 */

__int64 __fastcall PiDrvDbSetupNodeHive(__int64 a1, const WCHAR *a2)
{
  char v4; // r13
  NTSTATUS v5; // eax
  int appended; // ebx
  unsigned __int16 i; // cx
  unsigned __int16 Length; // bx
  unsigned __int16 v9; // si
  unsigned __int64 v10; // r14
  wchar_t *Buffer; // r15
  int v12; // eax
  UNICODE_STRING Destination; // [rsp+58h] [rbp-39h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+68h] [rbp-29h] BYREF
  UNICODE_STRING DestinationString; // [rsp+78h] [rbp-19h] BYREF
  UNICODE_STRING String1; // [rsp+88h] [rbp-9h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+98h] [rbp+7h] BYREF
  HANDLE KeyHandle; // [rsp+108h] [rbp+77h] BYREF

  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  *(_QWORD *)&UnicodeString.Length = 0LL;
  v4 = 0;
  UnicodeString.Buffer = 0LL;
  *(_QWORD *)&Destination.Length = 0LL;
  Destination.Buffer = 0LL;
  *(_QWORD *)&String1.Length = 0LL;
  String1.Buffer = 0LL;
  KeyHandle = 0LL;
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
      goto LABEL_38;
LABEL_34:
    appended = PiDrvDbResolveNodeFilePaths(a1, (__int64)KeyHandle);
    if ( appended >= 0 && (*(_DWORD *)(a1 + 64) & 8) != 0 )
      appended = PiDrvDbOverlayNodeHive(a1, a2, (__int64)KeyHandle);
    goto LABEL_38;
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
      goto LABEL_38;
    }
    appended = RtlAppendUnicodeToString(&Destination, L"\\REGISTRY\\MACHINE\\");
    if ( appended < 0 )
      goto LABEL_38;
    appended = RtlAppendUnicodeStringToString(&Destination, &DestinationString);
    if ( appended < 0 )
      goto LABEL_38;
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &Destination;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v5 = ZwOpenKey(&KeyHandle, 0xF003Fu, &ObjectAttributes);
    appended = v5;
    if ( v5 != -1073741772 )
      goto LABEL_9;
LABEL_37:
    appended = 0;
    goto LABEL_38;
  }
  if ( (MEMORY[0xFFFFF780000002F0] & 0x400) == 0 )
    goto LABEL_37;
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
      if ( appended >= 0 )
      {
        RtlInitUnicodeString(&String1, L"DRIVERS");
        Length = Destination.Length;
        v9 = String1.Length;
        v10 = Destination.Length;
        Buffer = Destination.Buffer;
        if ( Destination.Length > (unsigned __int64)String1.Length + 2
          && RtlSuffixUnicodeString(&String1, &Destination, 1u)
          && Buffer[((Length - (unsigned __int64)v9) >> 1) - 1] != 92
          || (RtlInitUnicodeString(&String1, L"SYSTEM"), v9 = String1.Length, v10 > (unsigned __int64)String1.Length + 2)
          && RtlSuffixUnicodeString(&String1, &Destination, 1u)
          && Buffer[((Length - (unsigned __int64)v9) >> 1) - 1] != 92 )
        {
          Destination.Length = Length - v9;
        }
        appended = RtlAppendUnicodeStringToString(&Destination, &DestinationString);
        if ( appended >= 0 )
        {
          v12 = PiDrvDbLoadHive(&Destination, &UnicodeString, 0x2000, &KeyHandle);
          appended = v12;
          if ( v12 != -1073741772 )
          {
            if ( v12 < 0 )
              goto LABEL_38;
            if ( (*(_DWORD *)(a1 + 492) & 2) == 0 || wcsicmp(a2, L"SOFTWARE") )
              v4 = 1;
            else
              PnpSetObjectProperty(
                *(__int64 *)&PiPnpRtlCtx,
                *(_QWORD *)(a1 + 24),
                7u,
                *(_QWORD *)(a1 + 72),
                0LL,
                (__int64)&DEVPKEY_DriverDatabase_SoftwareRegistryPath,
                18,
                (__int64)Destination.Buffer,
                Destination.Length + 2,
                0);
            goto LABEL_34;
          }
          goto LABEL_37;
        }
      }
    }
  }
LABEL_38:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( v4 )
    PiDrvDbUnloadHive(&Destination, 0LL);
  RtlFreeAnsiString(&UnicodeString);
  RtlFreeAnsiString(&Destination);
  return (unsigned int)appended;
}
