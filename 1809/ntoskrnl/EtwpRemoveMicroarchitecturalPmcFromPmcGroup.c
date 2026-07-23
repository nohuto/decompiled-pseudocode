/*
 * XREFs of EtwpRemoveMicroarchitecturalPmcFromPmcGroup @ 0x1408BCDDC
 * Callers:
 *     EtwpRemoveMicroarchitecturalPmcFromRegistry @ 0x1408BD034 (EtwpRemoveMicroarchitecturalPmcFromRegistry.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x1400161B0 (RtlStringCbPrintfW.c)
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     wcsncmp @ 0x140197940 (wcsncmp.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     ZwOpenKey @ 0x1401B8530 (ZwOpenKey.c)
 *     ZwQueryKey @ 0x1401B85B0 (ZwQueryKey.c)
 *     ZwEnumerateKey @ 0x1401B8930 (ZwEnumerateKey.c)
 *     ZwDeleteKey @ 0x1401B9CB0 (ZwDeleteKey.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpRemoveMicroarchitecturalPmcFromPmcGroup(PCWSTR SourceString, wchar_t *Str1, size_t MaxCount)
{
  __int64 v3; // rax
  size_t v4; // r12
  SIZE_T v7; // r14
  wchar_t *PoolWithTag; // rdi
  NTSTATUS v10; // ebx
  int v11; // esi
  HANDLE KeyHandle; // [rsp+30h] [rbp-D0h] BYREF
  ULONG ResultLength; // [rsp+38h] [rbp-C8h] BYREF
  HANDLE Handle; // [rsp+40h] [rbp-C0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-B8h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v17[12]; // [rsp+88h] [rbp-78h] BYREF
  int v18; // [rsp+94h] [rbp-6Ch]
  _BYTE KeyInformation[12]; // [rsp+B0h] [rbp-50h] BYREF
  int v20; // [rsp+BCh] [rbp-44h]
  wchar_t Str2[264]; // [rsp+C0h] [rbp-40h] BYREF

  v3 = -1LL;
  v4 = (unsigned int)MaxCount;
  do
    ++v3;
  while ( SourceString[v3] );
  v7 = 2LL * (unsigned int)(v3 + MaxCount + 2);
  PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v7, 0x50777445u);
  if ( !PoolWithTag )
    return 3221225495LL;
  RtlInitUnicodeString(&DestinationString, SourceString);
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v10 = ZwOpenKey(&KeyHandle, 0xF003Fu, &ObjectAttributes);
  if ( v10 < 0 )
    goto LABEL_21;
  v11 = -1;
  while ( 1 )
  {
    v10 = ZwEnumerateKey(KeyHandle, ++v11, KeyBasicInformation, KeyInformation, 0x216u, &ResultLength);
    if ( v10 < 0 || v20 != 2 * v4 )
    {
      if ( v10 == -1073741789 || v10 == -2147483643 )
        v10 = 0;
      goto LABEL_15;
    }
    Str2[v4] = 0;
    if ( !wcsncmp(Str1, Str2, v4) )
      break;
LABEL_15:
    if ( v10 < 0 )
      goto LABEL_16;
  }
  RtlStringCbPrintfW(PoolWithTag, v7, L"%ws\\%ws", SourceString, Str2);
  RtlInitUnicodeString(&DestinationString, PoolWithTag);
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.RootDirectory = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v10 = ZwOpenKey(&Handle, 0xF003Fu, &ObjectAttributes);
  if ( v10 < 0 )
    goto LABEL_20;
  ZwDeleteKey(Handle);
  ZwClose(Handle);
LABEL_16:
  if ( v10 >= 0 )
  {
    v10 = ZwQueryKey(KeyHandle, KeyCachedInformation, v17, 0x28u, &ResultLength);
    if ( v10 >= 0 && !v18 )
      ZwDeleteKey(KeyHandle);
  }
LABEL_20:
  ZwClose(KeyHandle);
LABEL_21:
  ExFreePoolWithTag(PoolWithTag, 0x50777445u);
  return (unsigned int)v10;
}
