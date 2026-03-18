/*
 * XREFs of LogFwpRegisterWorker @ 0x140950710
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x1400B9A70 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x1401B8350 (ZwClose.c)
 *     ZwOpenKey @ 0x1401B83B0 (ZwOpenKey.c)
 *     ZwCreateKey @ 0x1401B8510 (ZwCreateKey.c)
 *     ZwSetValueKey @ 0x1401B8D70 (ZwSetValueKey.c)
 */

int LogFwpRegisterWorker()
{
  int result; // eax
  NTSTATUS v1; // eax
  HANDLE v2; // rcx
  int v3; // ebx
  int *v4; // rbx
  HANDLE KeyHandle; // [rsp+40h] [rbp-9h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-1h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp+Fh] BYREF
  int Data; // [rsp+B8h] [rbp+6Fh] BYREF
  ULONG Disposition; // [rsp+C0h] [rbp+77h] BYREF
  HANDLE Handle; // [rsp+C8h] [rbp+7Fh] BYREF

  KeyHandle = 0LL;
  Handle = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\REGISTRY\\MACHINE\\SYSTEM\\CurrentControlSet\\Control");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( result >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"BGFX");
    ObjectAttributes.RootDirectory = KeyHandle;
    ObjectAttributes.Attributes = 576;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Length = 48;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v1 = ZwCreateKey(&Handle, 0x20019u, &ObjectAttributes, 0, 0LL, 1u, &Disposition);
    v2 = KeyHandle;
    if ( v1 >= 0 )
    {
      v3 = dword_1404C6550;
      ZwClose(KeyHandle);
      RtlInitUnicodeString(&DestinationString, L"Resume");
      Data = (v3 & 0x100000) != 0;
      ZwSetValueKey(Handle, &DestinationString, 0, 4u, &Data, 4u);
      RtlInitUnicodeString(&DestinationString, L"Width");
      Data = qword_1404C6568;
      ZwSetValueKey(Handle, &DestinationString, 0, 4u, &Data, 4u);
      RtlInitUnicodeString(&DestinationString, L"Height");
      Data = HIDWORD(qword_1404C6568);
      ZwSetValueKey(Handle, &DestinationString, 0, 4u, &Data, 4u);
      RtlInitUnicodeString(&DestinationString, L"BPP");
      Data = dword_1404C6510;
      ZwSetValueKey(Handle, &DestinationString, 0, 4u, &Data, 4u);
      RtlInitUnicodeString(&DestinationString, L"LogoSize");
      Data = Size;
      ZwSetValueKey(Handle, &DestinationString, 0, 4u, &Data, 4u);
      RtlInitUnicodeString(&DestinationString, L"ProgressFrames");
      Data = dword_1404C6548;
      ZwSetValueKey(Handle, &DestinationString, 0, 4u, &Data, 4u);
      RtlInitUnicodeString(&DestinationString, L"ProgressMemory");
      Data = dword_140405AF0;
      ZwSetValueKey(Handle, &DestinationString, 0, 4u, &Data, 4u);
      RtlInitUnicodeString(&DestinationString, L"ProgressProlog");
      Data = 1000000 * qword_1404C6558 / qword_140403BE0;
      ZwSetValueKey(Handle, &DestinationString, 0, 4u, &Data, 4u);
      RtlInitUnicodeString(&DestinationString, L"ProgressLow");
      Data = 1000000 * qword_140403BD8 / qword_140403BE0;
      ZwSetValueKey(Handle, &DestinationString, 0, 4u, &Data, 4u);
      RtlInitUnicodeString(&DestinationString, L"ProgressHigh");
      Data = 1000000 * qword_1404C64F8 / qword_140403BE0;
      ZwSetValueKey(Handle, &DestinationString, 0, 4u, &Data, 4u);
      v4 = (int *)qword_140405B00;
      if ( qword_140405B00 )
      {
        RtlInitUnicodeString(&DestinationString, L"ResidentSize");
        Data = *v4;
        ZwSetValueKey(Handle, &DestinationString, 0, 4u, &Data, 4u);
      }
      RtlInitUnicodeString(&DestinationString, L"ProgressTotal");
      Data = 1000000 * qword_1404C6540 / qword_140403BE0;
      ZwSetValueKey(Handle, &DestinationString, 0, 4u, &Data, 4u);
      RtlInitUnicodeString(&DestinationString, L"ProgressManual");
      Data = 1000000 * qword_1404C6530 / qword_140403BE0;
      ZwSetValueKey(Handle, &DestinationString, 0, 4u, &Data, 4u);
      RtlInitUnicodeString(&DestinationString, L"FadeProlog");
      Data = 1000000 * qword_1404C6560 / qword_140403BE0;
      ZwSetValueKey(Handle, &DestinationString, 0, 4u, &Data, 4u);
      RtlInitUnicodeString(&DestinationString, L"FadeOverlap");
      Data = dword_1404C6580;
      ZwSetValueKey(Handle, &DestinationString, 0, 4u, &Data, 4u);
      RtlInitUnicodeString(&DestinationString, L"FadeIo");
      Data = dword_1404C654C;
      ZwSetValueKey(Handle, &DestinationString, 0, 4u, &Data, 4u);
      RtlInitUnicodeString(&DestinationString, L"FadeCpu");
      Data = dword_1404C6514;
      ZwSetValueKey(Handle, &DestinationString, 0, 4u, &Data, 4u);
      RtlInitUnicodeString(&DestinationString, L"FadeFrames");
      Data = dword_1404C6500;
      ZwSetValueKey(Handle, &DestinationString, 0, 4u, &Data, 4u);
      RtlInitUnicodeString(&DestinationString, L"FadeMemory");
      Data = dword_140405AEC;
      ZwSetValueKey(Handle, &DestinationString, 0, 4u, &Data, 4u);
      RtlInitUnicodeString(&DestinationString, L"FadeLow");
      Data = 1000000 * qword_140403BE8 / qword_140403BE0;
      ZwSetValueKey(Handle, &DestinationString, 0, 4u, &Data, 4u);
      RtlInitUnicodeString(&DestinationString, L"FadeHigh");
      Data = 1000000 * qword_1404C6508 / qword_140403BE0;
      ZwSetValueKey(Handle, &DestinationString, 0, 4u, &Data, 4u);
      RtlInitUnicodeString(&DestinationString, L"FadeTotal");
      Data = 1000000 * qword_1404C6528 / qword_140403BE0;
      ZwSetValueKey(Handle, &DestinationString, 0, 4u, &Data, 4u);
      RtlInitUnicodeString(&DestinationString, L"AnimationTotal");
      Data = 1000000 * qword_1404C6518 / qword_140403BE0;
      ZwSetValueKey(Handle, &DestinationString, 0, 4u, &Data, 4u);
      RtlInitUnicodeString(&DestinationString, L"CompressBitmaps");
      Data = 1000000 * qword_1404DC888 / qword_140403BE0;
      ZwSetValueKey(Handle, &DestinationString, 0, 4u, &Data, 4u);
      v2 = Handle;
    }
    return ZwClose(v2);
  }
  return result;
}
