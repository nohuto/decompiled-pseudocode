/*
 * XREFs of ?ReadTabletButtonConfig@@YAJIQEBGPEAUtagTABLET_BUTTON_DESK_CONFIG@@@Z @ 0x1C01C7FD8
 * Callers:
 *     ?ReadTabletButtonSettings@@YAXXZ @ 0x1C01C83B8 (-ReadTabletButtonSettings@@YAXXZ.c)
 * Callees:
 *     RtlStringCchPrintfW @ 0x1C00F0EE8 (RtlStringCchPrintfW.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 */

__int64 __fastcall ReadTabletButtonConfig(
        unsigned int a1,
        const unsigned __int16 *a2,
        struct tagTABLET_BUTTON_DESK_CONFIG *a3)
{
  unsigned int *v6; // rbx
  NTSTATUS v8; // esi
  __int64 v9; // rdi
  __int64 v10; // r14
  int *v11; // r8
  int v12; // r9d
  unsigned int v13; // ecx
  void *KeyHandle; // [rsp+30h] [rbp-D0h] BYREF
  ULONG ResultLength; // [rsp+38h] [rbp-C8h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-C0h] BYREF
  struct _UNICODE_STRING ValueName; // [rsp+50h] [rbp-B0h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v19[8]; // [rsp+90h] [rbp-70h]
  PCWSTR SourceString[8]; // [rsp+D0h] [rbp-30h]
  wchar_t pszDest[264]; // [rsp+110h] [rbp+10h] BYREF

  v6 = (unsigned int *)Win32AllocPool(548LL, 1984656213LL);
  if ( !v6 )
    return 3221225495LL;
  RtlStringCchPrintfW(
    pszDest,
    0x105uLL,
    L"\\Registry\\Machine\\SYSTEM\\CurrentControlSet\\Control\\TabletPC\\TabletButtons\\%d\\%ws",
    a1,
    a2);
  RtlInitUnicodeString(&DestinationString, pszDest);
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v8 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( v8 >= 0 )
  {
    v19[0] = a3;
    v19[1] = (char *)a3 + 4;
    v19[2] = (char *)a3 + 8;
    v19[3] = (char *)a3 + 12;
    v19[4] = (char *)a3 + 16;
    v19[5] = (char *)a3 + 20;
    v19[6] = (char *)a3 + 24;
    v19[7] = (char *)a3 + 28;
    v9 = 0LL;
    SourceString[0] = L"DEFACTION";
    SourceString[1] = L"DEFACTIONDATA";
    SourceString[2] = L"DEFHOLDACTION";
    v10 = 8LL;
    SourceString[3] = L"DEFHOLDACTIONDATA";
    SourceString[4] = L"WINLOGONACTION";
    SourceString[5] = L"WINLOGONACTIONDATA";
    SourceString[6] = L"WINLOGONHOLDACTION";
    SourceString[7] = L"WINLOGONHOLDACTIONDATA";
    do
    {
      RtlInitUnicodeString(&ValueName, SourceString[v9]);
      v8 = ZwQueryValueKey(KeyHandle, &ValueName, KeyValueFullInformation, v6, 0x224u, &ResultLength);
      if ( v8 < 0 )
      {
        *(_DWORD *)v19[v9] = 0;
      }
      else
      {
        v11 = (int *)v19[v9];
        v12 = *(unsigned int *)((char *)v6 + v6[2]);
        *v11 = v12;
        v13 = v6[3];
        if ( v13 < 4 )
          *v11 = v12 & ((1 << (8 * v13)) - 1);
      }
      ++v9;
      --v10;
    }
    while ( v10 );
    ZwClose(KeyHandle);
  }
  Win32FreePool(v6);
  return (unsigned int)v8;
}
