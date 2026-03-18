/*
 * XREFs of MfgInitSystem @ 0x140A22314
 * Callers:
 *     Phase1InitializationDiscard @ 0x140A07008 (Phase1InitializationDiscard.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140002C70 (RtlInitUnicodeStringEx.c)
 *     RtlStringCbPrintfW @ 0x1400040E8 (RtlStringCbPrintfW.c)
 *     RtlStringCbCopyW @ 0x140099C00 (RtlStringCbCopyW.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     ZwClose @ 0x1401C02B0 (ZwClose.c)
 *     ZwOpenKey @ 0x1401C0310 (ZwOpenKey.c)
 *     ZwCreateKey @ 0x1401C0470 (ZwCreateKey.c)
 *     ZwSetValueKey @ 0x1401C0CD0 (ZwSetValueKey.c)
 *     ZwDeleteKey @ 0x1401C1AB0 (ZwDeleteKey.c)
 *     ZwOpenKeyEx @ 0x1401C2430 (ZwOpenKeyEx.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall MfgInitSystem(__int64 a1)
{
  NTSTATUS inited; // edi
  __int64 v3; // rbx
  unsigned __int16 v4; // ax
  PVOID PoolWithTag; // rax
  __int64 v7; // rax
  HANDLE v8; // [rsp+40h] [rbp-C0h] BYREF
  HANDLE KeyHandle; // [rsp+48h] [rbp-B8h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-B0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+80h] [rbp-80h] BYREF
  HANDLE Handle; // [rsp+90h] [rbp-70h] BYREF
  UNICODE_STRING ValueName; // [rsp+98h] [rbp-68h] BYREF
  WCHAR pszDest[256]; // [rsp+B0h] [rbp-50h] BYREF

  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  ExpManufacturingInformation = 0LL;
  inited = 0;
  qword_140432508 = 0LL;
  qword_140432510 = 0LL;
  v3 = *(_QWORD *)(a1 + 240);
  *(_QWORD *)&ValueName.Length = 0LL;
  ValueName.Buffer = 0LL;
  v8 = 0LL;
  KeyHandle = 0LL;
  v4 = *(_WORD *)(v3 + 2792);
  if ( !v4 )
    return (unsigned int)inited;
  if ( v4 >= 0x80u )
    return (unsigned int)-1073741811;
  LODWORD(qword_140432508) = *(_DWORD *)(v3 + 2792);
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, WORD1(qword_140432508), 0x5067664Du);
  qword_140432510 = PoolWithTag;
  if ( PoolWithTag )
  {
    inited = RtlStringCbCopyW((NTSTRSAFE_PWSTR)PoolWithTag, WORD1(qword_140432508), *(NTSTRSAFE_PCWSTR *)(v3 + 2800));
    if ( inited < 0 )
      goto LABEL_22;
    inited = RtlStringCbPrintfW(
               pszDest,
               0x200uLL,
               L"%s%s",
               L"\\registry\\machine\\",
               L"System\\CurrentControlSet\\Control\\ManufacturingMode\\");
    if ( inited < 0 )
      goto LABEL_22;
    inited = RtlInitUnicodeStringEx(&DestinationString, pszDest);
    if ( inited < 0 )
      goto LABEL_22;
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    inited = ZwOpenKey(&KeyHandle, 0xF003Fu, &ObjectAttributes);
    if ( inited < 0 )
      goto LABEL_22;
    ObjectAttributes.Attributes = 576;
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = KeyHandle;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&qword_140432508;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    inited = ZwOpenKey(&Handle, 0xF003Fu, &ObjectAttributes);
    if ( inited < 0 )
      goto LABEL_22;
    ZwClose(Handle);
    LODWORD(ExpManufacturingInformation) = ExpManufacturingInformation | 1;
    RtlInitUnicodeStringEx(&ValueName, L"LastProfile");
    inited = ZwSetValueKey(KeyHandle, &ValueName, 0, 1u, qword_140432510, WORD1(qword_140432508));
    if ( inited < 0 )
      goto LABEL_22;
    inited = RtlInitUnicodeStringEx(&DestinationString, L"Current");
    if ( inited < 0 )
      goto LABEL_22;
    ObjectAttributes.RootDirectory = KeyHandle;
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Attributes = 832;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenKeyEx(&v8, 0xF003Fu, &ObjectAttributes, 8u) >= 0 )
    {
      inited = ZwDeleteKey(v8);
      if ( inited < 0 )
        goto LABEL_22;
      ZwClose(v8);
      v8 = 0LL;
    }
    inited = ZwCreateKey(&v8, 0xF003Fu, &ObjectAttributes, 0, 0LL, 3u, 0LL);
    if ( inited >= 0 )
    {
      inited = RtlStringCbPrintfW(
                 pszDest,
                 0x200uLL,
                 L"%s%s%wZ",
                 L"\\registry\\machine\\",
                 L"System\\CurrentControlSet\\Control\\ManufacturingMode\\",
                 &qword_140432508);
      if ( inited >= 0 )
      {
        v7 = -1LL;
        do
          ++v7;
        while ( pszDest[v7] );
        inited = ZwSetValueKey(v8, &CmSymbolicLinkValueName, 0, 6u, pszDest, 2 * v7);
      }
    }
    goto LABEL_22;
  }
  inited = -1073741670;
LABEL_22:
  if ( v8 )
    ZwClose(v8);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)inited;
}
