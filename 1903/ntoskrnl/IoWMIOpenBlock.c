/*
 * XREFs of IoWMIOpenBlock @ 0x14070B840
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x1400438D0 (RtlInitUnicodeString.c)
 *     RtlStringCchPrintfW @ 0x140087CC8 (RtlStringCchPrintfW.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     WmipOpenBlock @ 0x1405C0778 (WmipOpenBlock.c)
 */

NTSTATUS __stdcall IoWMIOpenBlock(LPCGUID Guid, ULONG DesiredAccess, PVOID *DataBlockObject)
{
  WCHAR *v6; // rcx
  __int64 v7; // rdx
  WCHAR v8; // ax
  int v9; // r8d
  WCHAR *v10; // rax
  int v11; // r10d
  bool v12; // zf
  int v13; // edx
  int v14; // r11d
  int v15; // ecx
  int v16; // ebx
  int v17; // edi
  int Data3; // esi
  int Data2; // r14d
  int v20; // ecx
  NTSTATUS result; // eax
  int v22; // [rsp+20h] [rbp-E0h]
  int v23; // [rsp+28h] [rbp-D8h]
  int v24; // [rsp+30h] [rbp-D0h]
  int v25; // [rsp+38h] [rbp-C8h]
  int v26; // [rsp+40h] [rbp-C0h]
  int v27; // [rsp+48h] [rbp-B8h]
  int v28; // [rsp+50h] [rbp-B0h]
  int v29; // [rsp+58h] [rbp-A8h]
  int v30; // [rsp+60h] [rbp-A0h]
  int v31; // [rsp+68h] [rbp-98h]
  void *v32; // [rsp+70h] [rbp-90h] BYREF
  UNICODE_STRING DestinationString; // [rsp+78h] [rbp-88h] BYREF
  _QWORD v34[7]; // [rsp+88h] [rbp-78h] BYREF
  WCHAR SourceString[9]; // [rsp+C0h] [rbp-40h] BYREF
  wchar_t pszDest[39]; // [rsp+D2h] [rbp-2Eh] BYREF

  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  v6 = SourceString;
  v7 = 46LL;
  do
  {
    if ( v7 == -2147483600 )
      break;
    v8 = *(WCHAR *)((char *)v6 + (char *)L"\\WmiGuid\\" - (char *)SourceString);
    if ( !v8 )
      break;
    *v6++ = v8;
    --v7;
  }
  while ( v7 );
  v9 = Guid->Data4[4];
  v10 = v6 - 1;
  v11 = Guid->Data4[3];
  v12 = v7 == 0;
  v13 = Guid->Data4[5];
  v14 = Guid->Data4[2];
  if ( !v12 )
    v10 = v6;
  v15 = Guid->Data4[6];
  v16 = Guid->Data4[1];
  v17 = Guid->Data4[0];
  Data3 = Guid->Data3;
  Data2 = Guid->Data2;
  *v10 = 0;
  v31 = Guid->Data4[7];
  v30 = v15;
  v29 = v13;
  v28 = v9;
  v27 = v11;
  v26 = v14;
  v25 = v16;
  v24 = v17;
  v23 = Data3;
  v22 = Data2;
  RtlStringCchPrintfW(
    pszDest,
    0x25uLL,
    L"%08x-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x",
    Guid->Data1,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  RtlInitUnicodeString(&DestinationString, SourceString);
  memset(v34, 0, 0x30uLL);
  LODWORD(v34[0]) = 48;
  v34[2] = &DestinationString;
  LODWORD(v34[3]) = 512;
  if ( (DesiredAccess & 4) != 0 )
    v20 = 2244928;
  else
    v20 = (DesiredAccess & 0x40000) != 0 ? 2244872 : 2244924;
  result = WmipOpenBlock(v20, 0LL, (__int64)v34, DesiredAccess, &v32);
  if ( result >= 0 )
  {
    *DataBlockObject = v32;
    return 0;
  }
  return result;
}
