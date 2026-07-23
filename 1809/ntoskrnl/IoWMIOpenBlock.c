/*
 * XREFs of IoWMIOpenBlock @ 0x140612760
 * Callers:
 *     <none>
 * Callees:
 *     RtlStringCchPrintfW @ 0x1400922E8 (RtlStringCchPrintfW.c)
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     WmipOpenBlock @ 0x140612928 (WmipOpenBlock.c)
 */

NTSTATUS __stdcall IoWMIOpenBlock(LPCGUID Guid, ULONG DesiredAccess, PVOID *DataBlockObject)
{
  WCHAR *v5; // rax
  __int64 v7; // rdx
  WCHAR v8; // cx
  int v9; // ecx
  int v10; // edx
  int v11; // r8d
  int v12; // r10d
  int v13; // r11d
  int v14; // ebx
  int v15; // edi
  int Data3; // esi
  int Data2; // ebp
  __int64 Data1; // r9
  int v19; // ecx
  NTSTATUS result; // eax
  void *v21; // [rsp+70h] [rbp-F8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+78h] [rbp-F0h] BYREF
  _QWORD v23[6]; // [rsp+88h] [rbp-E0h] BYREF
  WCHAR SourceString[9]; // [rsp+C0h] [rbp-A8h] BYREF
  wchar_t pszDest[39]; // [rsp+D2h] [rbp-96h] BYREF

  v5 = SourceString;
  v7 = 46LL;
  while ( v7 != -2147483600 )
  {
    v8 = *(WCHAR *)((char *)v5 + (char *)L"\\WmiGuid\\" - (char *)SourceString);
    if ( !v8 )
      break;
    *v5++ = v8;
    if ( !--v7 )
    {
      --v5;
      break;
    }
  }
  v9 = Guid->Data4[6];
  v10 = Guid->Data4[5];
  v11 = Guid->Data4[4];
  v12 = Guid->Data4[3];
  v13 = Guid->Data4[2];
  v14 = Guid->Data4[1];
  v15 = Guid->Data4[0];
  Data3 = Guid->Data3;
  Data2 = Guid->Data2;
  Data1 = Guid->Data1;
  *v5 = 0;
  RtlStringCchPrintfW(
    pszDest,
    0x25uLL,
    L"%08x-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x",
    Data1,
    Data2,
    Data3,
    v15,
    v14,
    v13,
    v12,
    v11,
    v10,
    v9,
    Guid->Data4[7]);
  RtlInitUnicodeString(&DestinationString, SourceString);
  memset(v23, 0, sizeof(v23));
  LODWORD(v23[0]) = 48;
  v23[2] = &DestinationString;
  LODWORD(v23[3]) = 512;
  if ( (DesiredAccess & 4) != 0 )
  {
    v19 = 2244928;
  }
  else
  {
    v19 = 2244924;
    if ( (DesiredAccess & 0x40000) != 0 )
      v19 = 2244872;
  }
  result = WmipOpenBlock(v19, 0, (unsigned int)v23, DesiredAccess, (__int64)&v21);
  if ( result >= 0 )
  {
    *DataBlockObject = v21;
    return 0;
  }
  return result;
}
