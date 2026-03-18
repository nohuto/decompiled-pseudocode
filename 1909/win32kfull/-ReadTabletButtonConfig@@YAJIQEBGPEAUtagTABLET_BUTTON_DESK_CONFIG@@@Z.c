/*
 * XREFs of ?ReadTabletButtonConfig@@YAJIQEBGPEAUtagTABLET_BUTTON_DESK_CONFIG@@@Z @ 0x1C01DB35C
 * Callers:
 *     ?ReadTabletButtonSettings@@YAXXZ @ 0x1C01DB794 (-ReadTabletButtonSettings@@YAXXZ.c)
 * Callees:
 *     ?RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C007F150 (-RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     memset @ 0x1C0168440 (memset.c)
 */

__int64 __fastcall ReadTabletButtonConfig(
        unsigned int a1,
        const unsigned __int16 *a2,
        struct tagTABLET_BUTTON_DESK_CONFIG *a3)
{
  unsigned int *v6; // rbx
  NTSTATUS v8; // edi
  __int64 v9; // rdi
  __int64 v10; // r14
  NTSTATUS v11; // eax
  int *v12; // r8
  unsigned int v13; // esi
  int v14; // r9d
  unsigned int v15; // ecx
  void *KeyHandle; // [rsp+30h] [rbp-D0h] BYREF
  ULONG ResultLength; // [rsp+38h] [rbp-C8h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-C0h] BYREF
  struct _UNICODE_STRING ValueName; // [rsp+50h] [rbp-B0h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-A0h] BYREF
  PCWSTR v21[8]; // [rsp+90h] [rbp-70h]
  _QWORD v22[8]; // [rsp+D0h] [rbp-30h]
  WCHAR SourceString[264]; // [rsp+110h] [rbp+10h] BYREF

  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  *(_QWORD *)&ValueName.Length = 0LL;
  ValueName.Buffer = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  v6 = (unsigned int *)Win32AllocPool(548LL, 1984656213LL);
  if ( !v6 )
    return 3221225495LL;
  RtlStringCchPrintfW(
    SourceString,
    261LL,
    L"\\Registry\\Machine\\SYSTEM\\CurrentControlSet\\Control\\TabletPC\\TabletButtons\\%d\\%ws",
    a1,
    a2);
  RtlInitUnicodeString(&DestinationString, SourceString);
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v8 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( v8 >= 0 )
  {
    v22[0] = a3;
    v22[1] = (char *)a3 + 4;
    v9 = 0LL;
    v22[2] = (char *)a3 + 8;
    v22[3] = (char *)a3 + 12;
    v22[4] = (char *)a3 + 16;
    v10 = 8LL;
    v22[5] = (char *)a3 + 20;
    v22[6] = (char *)a3 + 24;
    v22[7] = (char *)a3 + 28;
    v21[0] = L"DEFACTION";
    v21[1] = L"DEFACTIONDATA";
    v21[2] = L"DEFHOLDACTION";
    v21[3] = L"DEFHOLDACTIONDATA";
    v21[4] = L"WINLOGONACTION";
    v21[5] = L"WINLOGONACTIONDATA";
    v21[6] = L"WINLOGONHOLDACTION";
    v21[7] = L"WINLOGONHOLDACTIONDATA";
    do
    {
      RtlInitUnicodeString(&ValueName, v21[v9]);
      v11 = ZwQueryValueKey(KeyHandle, &ValueName, KeyValueFullInformation, v6, 0x224u, &ResultLength);
      v12 = (int *)v22[v9];
      v13 = v11;
      if ( v11 < 0 )
      {
        *v12 = 0;
      }
      else
      {
        v14 = *(unsigned int *)((char *)v6 + v6[2]);
        *v12 = v14;
        v15 = v6[3];
        if ( v15 < 4 )
          *v12 = v14 & ((1 << (8 * v15)) - 1);
      }
      ++v9;
      --v10;
    }
    while ( v10 );
    ZwClose(KeyHandle);
    Win32FreePool(v6);
    return v13;
  }
  else
  {
    Win32FreePool(v6);
    return (unsigned int)v8;
  }
}
