/*
 * XREFs of PopInitializePowerButtonHold @ 0x140A06E0C
 * Callers:
 *     PoInitSystem @ 0x140A06340 (PoInitSystem.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400438D0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     ZwOpenKey @ 0x1401C0310 (ZwOpenKey.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     RtlGetPersistedStateLocation @ 0x1405C0E20 (RtlGetPersistedStateLocation.c)
 *     PopInitializeWorkItem @ 0x14075ADE0 (PopInitializeWorkItem.c)
 *     PopPowerButtonBugcheckConfigure @ 0x14075AF40 (PopPowerButtonBugcheckConfigure.c)
 */

int __fastcall PopInitializePowerButtonHold(int a1)
{
  int result; // eax
  ULONG BufferLengthOut; // [rsp+40h] [rbp-C0h] BYREF
  HANDLE KeyHandle; // [rsp+48h] [rbp-B8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B0h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-A0h] BYREF
  WCHAR SourceString[264]; // [rsp+90h] [rbp-70h] BYREF

  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  result = (unsigned int)memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  if ( a1 )
  {
    if ( a1 == 1 )
    {
      result = RtlGetPersistedStateLocation(
                 L"PowerButtonBugcheckSettings",
                 0LL,
                 L"\\REGISTRY\\MACHINE\\SYSTEM\\CURRENTCONTROLSET\\CONTROL\\POWER",
                 LocationTypeRegistry,
                 SourceString,
                 0x208u,
                 &BufferLengthOut);
      if ( result >= 0 )
      {
        RtlInitUnicodeString(&DestinationString, SourceString);
        ObjectAttributes.RootDirectory = 0LL;
        ObjectAttributes.ObjectName = &DestinationString;
        ObjectAttributes.Length = 48;
        ObjectAttributes.Attributes = 576;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        result = ZwOpenKey(&KeyHandle, 0x11u, &ObjectAttributes);
        if ( result >= 0 )
        {
          *(_QWORD *)PopPowerButtonBugcheckWatchWorkItem = 0LL;
          qword_140438970 = (__int64)PopPowerButtonBugcheckWatchCallback;
          qword_140438978 = (__int64)KeyHandle;
          return PopPowerButtonBugcheckConfigure(KeyHandle);
        }
      }
    }
  }
  else
  {
    PopAcpiPdttSupportEnabled = 0;
    PopPowerButtonBugcheckConfig = 0;
    PopPowerButtonBugcheckLock = 0LL;
    memset(&unk_140438988, 0, 0xC8uLL);
    memset(&PopPowerButtonTriageBlock, 0, 0x70uLL);
    dword_140438AB0 = 0;
    dword_140438AB4 = 0;
    PopPowerButtonHold = 0LL;
    qword_140438AC0 = (__int64)&PopBlackBoxEntries;
    LODWORD(PopPowerButtonTriageBlock) = 2;
    dword_140438AC8 = 20;
    return PopInitializeWorkItem((__int64)&unk_140438A10, (__int64)PopPowerButtonWorkCallback, 0LL);
  }
  return result;
}
