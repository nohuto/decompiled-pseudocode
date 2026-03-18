/*
 * XREFs of ?ReadTabletButtonIndex@@YAJIPEAK@Z @ 0x1C01DB754
 * Callers:
 *     ?ReadTabletButtonSettings@@YAXXZ @ 0x1C01DB914 (-ReadTabletButtonSettings@@YAXXZ.c)
 * Callees:
 *     ?RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C00DF460 (-RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     memset @ 0x1C0166840 (memset.c)
 */

__int64 __fastcall ReadTabletButtonIndex(unsigned int a1, unsigned int *a2)
{
  unsigned int *v4; // rdi
  NTSTATUS v6; // ebx
  unsigned int v7; // ecx
  unsigned int v8; // edx
  void *KeyHandle; // [rsp+30h] [rbp-D0h] BYREF
  ULONG ResultLength; // [rsp+38h] [rbp-C8h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-C0h] BYREF
  struct _UNICODE_STRING ValueName; // [rsp+50h] [rbp-B0h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-A0h] BYREF
  WCHAR SourceString[264]; // [rsp+90h] [rbp-70h] BYREF

  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  *(_QWORD *)&ValueName.Length = 0LL;
  ValueName.Buffer = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  *a2 = 0;
  v4 = (unsigned int *)Win32AllocPool(548LL, 1984656213LL);
  if ( !v4 )
    return 3221225495LL;
  RtlStringCchPrintfW(
    SourceString,
    261LL,
    L"\\Registry\\Machine\\SYSTEM\\CurrentControlSet\\Control\\TabletPC\\TabletButtons\\%d",
    a1);
  RtlInitUnicodeString(&DestinationString, SourceString);
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v6 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( v6 >= 0 )
  {
    RtlInitUnicodeString(&ValueName, L"ButtonId");
    v6 = ZwQueryValueKey(KeyHandle, &ValueName, KeyValueFullInformation, v4, 0x224u, &ResultLength);
    if ( v6 < 0 || v4[3] != 4 || (v7 = *(unsigned int *)((char *)v4 + v4[2]), ((v7 - 1) & v7) != 0) || v7 - 1 > 0x3FE )
    {
      v6 = -1073741492;
    }
    else
    {
      do
      {
        v7 >>= 1;
        v8 = (*a2)++;
      }
      while ( v7 );
      *a2 = v8;
    }
    ZwClose(KeyHandle);
  }
  Win32FreePool(v4);
  return (unsigned int)v6;
}
