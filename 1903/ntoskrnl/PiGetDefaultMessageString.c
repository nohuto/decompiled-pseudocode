/*
 * XREFs of PiGetDefaultMessageString @ 0x140779578
 * Callers:
 *     PiNormalizeDeviceText @ 0x1406FE3AC (PiNormalizeDeviceText.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     RtlInitUnicodeString @ 0x1400438D0 (RtlInitUnicodeString.c)
 *     RtlInitAnsiString @ 0x1400E5090 (RtlInitAnsiString.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     RtlFreeAnsiString @ 0x14060B740 (RtlFreeAnsiString.c)
 *     RtlAnsiStringToUnicodeString @ 0x14063CAA0 (RtlAnsiStringToUnicodeString.c)
 *     RtlCreateUnicodeString @ 0x140667B10 (RtlCreateUnicodeString.c)
 *     RtlFindMessage @ 0x1406C58E0 (RtlFindMessage.c)
 *     IopGetDriverNameFromKeyNode @ 0x140709878 (IopGetDriverNameFromKeyNode.c)
 *     IopReferenceDriverObjectByName @ 0x140733DD0 (IopReferenceDriverObjectByName.c)
 */

__int64 __fastcall PiGetDefaultMessageString(HANDLE KeyHandle, ULONG MessageId, _QWORD *a3)
{
  PVOID *v6; // rdi
  NTSTATUS DriverNameFromKeyNode; // ebx
  PVOID *v8; // rax
  unsigned __int16 Length; // ax
  wchar_t *Buffer; // rsi
  unsigned __int64 v11; // rbx
  _WORD *PoolWithTag; // rax
  _WORD *v13; // r14
  UNICODE_STRING UnicodeString; // [rsp+30h] [rbp-30h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-20h] BYREF
  _STRING SourceString; // [rsp+50h] [rbp-10h] BYREF
  PMESSAGE_RESOURCE_ENTRY MessageResourceEntry; // [rsp+A8h] [rbp+48h] BYREF

  *(_QWORD *)&SourceString.Length = 0LL;
  SourceString.Buffer = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  *(_QWORD *)&UnicodeString.Length = 0LL;
  UnicodeString.Buffer = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  RtlInitUnicodeString(&UnicodeString, 0LL);
  v6 = 0LL;
  DriverNameFromKeyNode = IopGetDriverNameFromKeyNode(KeyHandle, &DestinationString);
  if ( DriverNameFromKeyNode >= 0 )
  {
    v8 = (PVOID *)IopReferenceDriverObjectByName(&DestinationString);
    v6 = v8;
    if ( v8 )
    {
      DriverNameFromKeyNode = RtlFindMessage(v8[3], 0xBu, 0, MessageId, &MessageResourceEntry);
      if ( DriverNameFromKeyNode < 0 )
        goto LABEL_11;
      if ( (MessageResourceEntry->Flags & 1) != 0 )
      {
        if ( !RtlCreateUnicodeString(&UnicodeString, (PCWSTR)MessageResourceEntry->Text) )
        {
LABEL_14:
          DriverNameFromKeyNode = -1073741670;
          goto LABEL_11;
        }
LABEL_6:
        Length = UnicodeString.Length;
        Buffer = UnicodeString.Buffer;
        if ( UnicodeString.Length >= 4u && *(wchar_t *)((char *)UnicodeString.Buffer + UnicodeString.Length - 4) == 13 )
        {
          *(wchar_t *)((char *)UnicodeString.Buffer + UnicodeString.Length - 4) = 0;
          Length -= 4;
          UnicodeString.Length = Length;
        }
        v11 = Length;
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, Length + 2LL, 0x20207050u);
        v13 = PoolWithTag;
        if ( PoolWithTag )
        {
          memmove(PoolWithTag, Buffer, (unsigned int)v11);
          *a3 = v13;
          v13[v11 >> 1] = 0;
          DriverNameFromKeyNode = 0;
          goto LABEL_11;
        }
        goto LABEL_14;
      }
      RtlInitAnsiString(&SourceString, (PCSZ)MessageResourceEntry->Text);
      DriverNameFromKeyNode = RtlAnsiStringToUnicodeString(&UnicodeString, &SourceString, 1u);
      if ( DriverNameFromKeyNode >= 0 )
        goto LABEL_6;
    }
    else
    {
      DriverNameFromKeyNode = -1073741823;
    }
  }
LABEL_11:
  RtlFreeAnsiString(&DestinationString);
  RtlFreeAnsiString(&UnicodeString);
  if ( v6 )
    ObfDereferenceObject(v6);
  return (unsigned int)DriverNameFromKeyNode;
}
