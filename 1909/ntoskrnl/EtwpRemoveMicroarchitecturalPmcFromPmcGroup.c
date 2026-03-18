/*
 * XREFs of EtwpRemoveMicroarchitecturalPmcFromPmcGroup @ 0x1408F80EC
 * Callers:
 *     EtwpRemoveMicroarchitecturalPmcFromRegistry @ 0x1408F8378 (EtwpRemoveMicroarchitecturalPmcFromRegistry.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x140004178 (RtlStringCbPrintfW.c)
 *     RtlInitUnicodeString @ 0x140043CD0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     wcsncmp @ 0x1401A2770 (wcsncmp.c)
 *     ZwClose @ 0x1401C0E30 (ZwClose.c)
 *     ZwOpenKey @ 0x1401C0E90 (ZwOpenKey.c)
 *     ZwQueryKey @ 0x1401C0F10 (ZwQueryKey.c)
 *     ZwEnumerateKey @ 0x1401C1290 (ZwEnumerateKey.c)
 *     ZwDeleteKey @ 0x1401C2630 (ZwDeleteKey.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpRemoveMicroarchitecturalPmcFromPmcGroup(PCWSTR SourceString, wchar_t *Str1, size_t MaxCount)
{
  size_t v4; // r12
  __int64 v6; // rax
  SIZE_T v7; // r14
  wchar_t *PoolWithTag; // rdi
  NTSTATUS v10; // ebx
  int v11; // esi
  HANDLE KeyHandle; // [rsp+30h] [rbp-D0h] BYREF
  ULONG ResultLength; // [rsp+38h] [rbp-C8h] BYREF
  HANDLE Handle; // [rsp+40h] [rbp-C0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-B8h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp-A8h] BYREF
  _DWORD v17[10]; // [rsp+88h] [rbp-78h] BYREF
  _DWORD KeyInformation[136]; // [rsp+B0h] [rbp-50h] BYREF

  v4 = (unsigned int)MaxCount;
  memset(v17, 0, sizeof(v17));
  memset(KeyInformation, 0, 0x218uLL);
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  v6 = -1LL;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  do
    ++v6;
  while ( SourceString[v6] );
  v7 = 2LL * (unsigned int)(v6 + v4 + 2);
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
    if ( v10 < 0 || KeyInformation[3] != 2 * v4 )
    {
      if ( v10 == -1073741789 || v10 == -2147483643 )
        v10 = 0;
      goto LABEL_15;
    }
    *((_WORD *)&KeyInformation[4] + v4) = 0;
    if ( !wcsncmp(Str1, (const wchar_t *)&KeyInformation[4], v4) )
      break;
LABEL_15:
    if ( v10 < 0 )
      goto LABEL_16;
  }
  RtlStringCbPrintfW(PoolWithTag, v7, L"%ws\\%ws", SourceString, &KeyInformation[4]);
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
    if ( v10 >= 0 && !v17[3] )
      ZwDeleteKey(KeyHandle);
  }
LABEL_20:
  ZwClose(KeyHandle);
LABEL_21:
  ExFreePoolWithTag(PoolWithTag, 0x50777445u);
  return (unsigned int)v10;
}
