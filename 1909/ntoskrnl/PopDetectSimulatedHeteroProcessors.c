/*
 * XREFs of PopDetectSimulatedHeteroProcessors @ 0x140777DE0
 * Callers:
 *     PopInitializeHeteroProcessors @ 0x140777198 (PopInitializeHeteroProcessors.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x140005340 (KeQueryActiveProcessorCountEx.c)
 *     RtlInitUnicodeString @ 0x140043CD0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     ZwClose @ 0x1401C0E30 (ZwClose.c)
 *     ZwOpenKey @ 0x1401C0E90 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x1401C0F30 (ZwQueryValueKey.c)
 *     ZwEnumerateKey @ 0x1401C1290 (ZwEnumerateKey.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     RtlUnicodeStringToInteger @ 0x1406B5920 (RtlUnicodeStringToInteger.c)
 */

char __fastcall PopDetectSimulatedHeteroProcessors(__int64 a1)
{
  char v1; // r14
  ULONG v3; // esi
  HANDLE v4; // rcx
  NTSTATUS v5; // ebx
  unsigned __int16 v6; // di
  __int64 v7; // rcx
  __int64 v8; // r15
  ULONG ActiveProcessorCount; // eax
  int *v10; // r9
  _BYTE *v11; // r8
  __int64 v12; // r10
  unsigned int v13; // ecx
  unsigned __int64 v14; // rax
  __int64 v15; // rdx
  ULONG ResultLength; // [rsp+30h] [rbp-D0h] BYREF
  ULONG Value; // [rsp+34h] [rbp-CCh] BYREF
  HANDLE KeyHandle; // [rsp+38h] [rbp-C8h] BYREF
  UNICODE_STRING String; // [rsp+40h] [rbp-C0h] BYREF
  HANDLE Handle; // [rsp+50h] [rbp-B0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v22; // [rsp+70h] [rbp-90h]
  UNICODE_STRING ValueName; // [rsp+78h] [rbp-88h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+88h] [rbp-78h] BYREF
  __int64 KeyValueInformation; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v26; // [rsp+C0h] [rbp-40h]
  __int64 KeyInformation; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v28; // [rsp+D0h] [rbp-30h]
  __int64 v29; // [rsp+D8h] [rbp-28h] BYREF
  int v30; // [rsp+E0h] [rbp-20h]
  _DWORD v31[43]; // [rsp+E4h] [rbp-1Ch] BYREF

  v22 = a1;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  KeyInformation = 0LL;
  v28 = 0LL;
  v29 = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  v30 = 1310721;
  *(_QWORD *)&String.Length = 0LL;
  String.Buffer = 0LL;
  KeyValueInformation = 0LL;
  v26 = 0LL;
  *(_QWORD *)&ValueName.Length = 0LL;
  ValueName.Buffer = 0LL;
  memset(v31, 0, 0xA4uLL);
  RtlInitUnicodeString(
    &DestinationString,
    L"\\Registry\\MACHINE\\SYSTEM\\CurrentControlSet\\Control\\Session Manager\\Kernel\\KGroups");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  v1 = 0;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 8u, &ObjectAttributes) < 0 )
    return v1;
  v3 = 0;
  String.Buffer = (wchar_t *)&v29;
  String.MaximumLength = 4;
  RtlInitUnicodeString(&ValueName, L"SmallProcessorMask");
  v4 = KeyHandle;
  ObjectAttributes.RootDirectory = KeyHandle;
  do
  {
    v5 = ZwEnumerateKey(v4, v3, KeyBasicInformation, &KeyInformation, 0x18u, &ResultLength);
    if ( v5 < 0 )
      goto LABEL_20;
    ResultLength = HIDWORD(v28);
    if ( HIDWORD(v28) <= 4 )
    {
      String.Length = WORD2(v28);
      v5 = RtlUnicodeStringToInteger(&String, 0xAu, &Value);
      if ( v5 >= 0 )
      {
        v6 = Value;
        if ( Value < HIWORD(v30) )
        {
          DestinationString = String;
          v5 = ZwOpenKey(&Handle, 1u, &ObjectAttributes);
          if ( v5 < 0 )
          {
LABEL_20:
            ++v3;
            goto LABEL_21;
          }
          v5 = ZwQueryValueKey(
                 Handle,
                 &ValueName,
                 KeyValuePartialInformationAlign64,
                 &KeyValueInformation,
                 0x10u,
                 &ResultLength);
          if ( v5 >= 0 && ((_DWORD)KeyValueInformation == 4 || (_DWORD)KeyValueInformation == 11) )
          {
            v1 = 1;
            if ( HIDWORD(KeyValueInformation) == 4 )
            {
              v7 = (unsigned int)v26;
              v26 = (unsigned int)v26;
LABEL_16:
              if ( (unsigned __int16)v30 <= v6 )
                LOWORD(v30) = v6 + 1;
              *(_QWORD *)&v31[2 * v6 + 1] |= v7;
              goto LABEL_19;
            }
            if ( HIDWORD(KeyValueInformation) == 8 )
            {
              v7 = v26;
              goto LABEL_16;
            }
          }
LABEL_19:
          ZwClose(Handle);
          goto LABEL_20;
        }
      }
    }
LABEL_21:
    v4 = KeyHandle;
  }
  while ( v5 >= 0 );
  ZwClose(KeyHandle);
  v8 = v22;
  if ( v1 )
  {
    ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
    v10 = KiProcessorIndexToNumberMappingTable;
    v11 = (_BYTE *)(v8 + 8);
    v12 = ActiveProcessorCount + 1;
    do
    {
      v13 = *v10++;
      v14 = v13;
      LOBYTE(v13) = v13 & 0x3F;
      v14 >>= 6;
      v15 = (*(_QWORD *)&v31[2 * v14 + 1] >> v13) & 1LL;
      LOBYTE(v13) = !((*(_QWORD *)&v31[2 * v14 + 1] >> v13) & 1);
      *v11 = v13;
      *(v11 - 1) = v15;
      *(v11 - 2) = v13;
      v11 += 3;
      --v12;
    }
    while ( v12 );
    *(_WORD *)(v8 + 4) = 257;
  }
  return v1;
}
