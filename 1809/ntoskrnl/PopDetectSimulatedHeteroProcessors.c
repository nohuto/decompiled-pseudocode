/*
 * XREFs of PopDetectSimulatedHeteroProcessors @ 0x140750FD4
 * Callers:
 *     PopInitializeHeteroProcessors @ 0x140750624 (PopInitializeHeteroProcessors.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x1400A7860 (KeQueryActiveProcessorCountEx.c)
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     ZwOpenKey @ 0x1401B8530 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x1401B85D0 (ZwQueryValueKey.c)
 *     ZwEnumerateKey @ 0x1401B8930 (ZwEnumerateKey.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     RtlUnicodeStringToInteger @ 0x140696B10 (RtlUnicodeStringToInteger.c)
 */

char __fastcall PopDetectSimulatedHeteroProcessors(__int64 a1)
{
  char v2; // r14
  ULONG v4; // esi
  HANDLE v5; // rcx
  NTSTATUS v6; // ebx
  unsigned __int16 v7; // di
  __int64 v8; // rcx
  ULONG ActiveProcessorCount; // eax
  int *v10; // r9
  _BYTE *v11; // r8
  __int64 v12; // r10
  unsigned int v13; // ecx
  unsigned __int64 v14; // rax
  __int64 v15; // rdx
  ULONG Value[2]; // [rsp+38h] [rbp-D0h] BYREF
  HANDLE KeyHandle; // [rsp+40h] [rbp-C8h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-C0h] BYREF
  UNICODE_STRING String_8; // [rsp+58h] [rbp-B0h] BYREF
  UNICODE_STRING DestinationString_8; // [rsp+68h] [rbp-A0h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+78h] [rbp-90h] BYREF
  UNICODE_STRING ValueName; // [rsp+A8h] [rbp-60h] BYREF
  int KeyValueInformation; // [rsp+B8h] [rbp-50h] BYREF
  int v24; // [rsp+BCh] [rbp-4Ch]
  __int64 v25; // [rsp+C0h] [rbp-48h]
  _BYTE KeyInformation[12]; // [rsp+C8h] [rbp-40h] BYREF
  ULONG v27; // [rsp+D4h] [rbp-34h]
  char v28; // [rsp+D8h] [rbp-30h] BYREF
  int v29; // [rsp+E8h] [rbp-20h]
  _DWORD v30[43]; // [rsp+ECh] [rbp-1Ch] BYREF

  v29 = 1310721;
  memset(v30, 0, 0xA4uLL);
  RtlInitUnicodeString(
    &DestinationString_8,
    L"\\Registry\\MACHINE\\SYSTEM\\CurrentControlSet\\Control\\Session Manager\\Kernel\\KGroups");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString_8;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  v2 = 0;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 8u, &ObjectAttributes) < 0 )
    return v2;
  v4 = 0;
  String_8.Buffer = (wchar_t *)&v28;
  String_8.MaximumLength = 4;
  RtlInitUnicodeString(&ValueName, L"SmallProcessorMask");
  v5 = KeyHandle;
  ObjectAttributes.RootDirectory = KeyHandle;
  do
  {
    v6 = ZwEnumerateKey(v5, v4, KeyBasicInformation, KeyInformation, 0x18u, Value);
    if ( v6 < 0 )
      goto LABEL_20;
    Value[0] = v27;
    if ( v27 <= 4 )
    {
      String_8.Length = v27;
      v6 = RtlUnicodeStringToInteger(&String_8, 0xAu, &Value[1]);
      if ( v6 >= 0 )
      {
        v7 = Value[1];
        if ( Value[1] < HIWORD(v29) )
        {
          DestinationString_8 = String_8;
          v6 = ZwOpenKey(&Handle, 1u, &ObjectAttributes);
          if ( v6 < 0 )
          {
LABEL_20:
            ++v4;
            goto LABEL_21;
          }
          v6 = ZwQueryValueKey(
                 Handle,
                 &ValueName,
                 KeyValuePartialInformationAlign64,
                 &KeyValueInformation,
                 0x10u,
                 Value);
          if ( v6 >= 0 && (KeyValueInformation == 4 || KeyValueInformation == 11) )
          {
            v2 = 1;
            if ( v24 == 4 )
            {
              v8 = (unsigned int)v25;
              v25 = (unsigned int)v25;
LABEL_16:
              if ( (unsigned __int16)v29 <= v7 )
                LOWORD(v29) = v7 + 1;
              *(_QWORD *)&v30[2 * v7 + 1] |= v8;
              goto LABEL_19;
            }
            if ( v24 == 8 )
            {
              v8 = v25;
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
    v5 = KeyHandle;
  }
  while ( v6 >= 0 );
  ZwClose(KeyHandle);
  if ( v2 )
  {
    ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
    v10 = KiProcessorIndexToNumberMappingTable;
    v11 = (_BYTE *)(a1 + 8);
    v12 = ActiveProcessorCount + 1;
    do
    {
      v13 = *v10++;
      v14 = v13;
      LOBYTE(v13) = v13 & 0x3F;
      v14 >>= 6;
      v15 = (*(_QWORD *)&v30[2 * v14 + 1] >> v13) & 1LL;
      LOBYTE(v13) = !((*(_QWORD *)&v30[2 * v14 + 1] >> v13) & 1);
      *v11 = v13;
      *(v11 - 1) = v15;
      *(v11 - 2) = v13;
      v11 += 3;
      --v12;
    }
    while ( v12 );
    *(_WORD *)(a1 + 4) = 257;
  }
  return v2;
}
