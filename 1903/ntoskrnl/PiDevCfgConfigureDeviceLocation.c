/*
 * XREFs of PiDevCfgConfigureDeviceLocation @ 0x14071CFF8
 * Callers:
 *     PiDevCfgConfigureDevice @ 0x140704004 (PiDevCfgConfigureDevice.c)
 *     PpDevCfgProcessDeviceClass @ 0x14086C08C (PpDevCfgProcessDeviceClass.c)
 * Callees:
 *     PnpDuplicateUnicodeString @ 0x14014506C (PnpDuplicateUnicodeString.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     ZwClose @ 0x1401C02B0 (ZwClose.c)
 *     ZwOpenKey @ 0x1401C0310 (ZwOpenKey.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x1405C37DC (_PnpCtxGetCachedContextBaseKey.c)
 *     NtQueryKey @ 0x1405FF6B0 (NtQueryKey.c)
 *     RtlFreeAnsiString @ 0x14060B740 (RtlFreeAnsiString.c)
 *     IopReplaceSeperatorWithPound @ 0x140712C5C (IopReplaceSeperatorWithPound.c)
 *     PiDevCfgConfigureDeviceKeys @ 0x1407153A8 (PiDevCfgConfigureDeviceKeys.c)
 *     PnpOpenFirstMatchingSubKey @ 0x140862300 (PnpOpenFirstMatchingSubKey.c)
 */

__int64 __fastcall PiDevCfgConfigureDeviceLocation(__int64 a1, __int64 a2, _DWORD *a3, _DWORD *a4)
{
  unsigned int v4; // edi
  wchar_t *Buffer; // r15
  int CachedContextBaseKey; // ebx
  NTSTATUS v11; // eax
  int v12; // eax
  _QWORD *v13; // rsi
  int v14; // eax
  int v15; // eax
  NTSTATUS v16; // eax
  NTSTATUS v17; // eax
  HANDLE v18; // [rsp+30h] [rbp-A9h] BYREF
  __int64 v19; // [rsp+38h] [rbp-A1h] BYREF
  const wchar_t *v20; // [rsp+40h] [rbp-99h]
  HANDLE KeyHandle; // [rsp+48h] [rbp-91h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+50h] [rbp-89h] BYREF
  HANDLE Handle; // [rsp+60h] [rbp-79h] BYREF
  HANDLE v24; // [rsp+68h] [rbp-71h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-69h] BYREF
  ULONG ResultLength; // [rsp+A0h] [rbp-39h] BYREF
  void *v27; // [rsp+A8h] [rbp-31h] BYREF
  int v28[2]; // [rsp+B0h] [rbp-29h]
  _DWORD KeyInformation[10]; // [rsp+B8h] [rbp-21h] BYREF

  v4 = 0;
  *(_QWORD *)v28 = a1;
  KeyHandle = 0LL;
  v24 = 0LL;
  v18 = 0LL;
  Handle = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  memset(KeyInformation, 0, sizeof(KeyInformation));
  *(_QWORD *)&UnicodeString.Length = 0LL;
  Buffer = 0LL;
  UnicodeString.Buffer = 0LL;
  if ( a3 )
    *a3 = 0;
  if ( a4 )
    *a4 = 0;
  if ( !*(_QWORD *)(a2 + 64) )
    goto LABEL_6;
  CachedContextBaseKey = PnpCtxGetCachedContextBaseKey(*(__int64 *)&PiPnpRtlCtx, 4, (__int64)&v27);
  if ( CachedContextBaseKey < 0 )
    goto LABEL_7;
  LODWORD(v19) = 3145774;
  v20 = L"Control\\DeviceLocations";
  ObjectAttributes.RootDirectory = v27;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v19;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  KeyHandle = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v11 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  CachedContextBaseKey = v11;
  if ( v11 == -1073741772 )
    goto LABEL_6;
  if ( v11 < 0 )
    goto LABEL_7;
  CachedContextBaseKey = NtQueryKey(KeyHandle, KeyCachedInformation, KeyInformation, 0x28u, &ResultLength);
  if ( CachedContextBaseKey < 0 )
    goto LABEL_7;
  if ( !KeyInformation[3] )
    goto LABEL_6;
  v12 = PnpOpenFirstMatchingSubKey(*(PCWSTR *)(a2 + 64), &v24);
  CachedContextBaseKey = v12;
  if ( v12 == -1073741772 )
    goto LABEL_6;
  if ( v12 < 0 )
    goto LABEL_7;
  v13 = (_QWORD *)(a2 + 32);
  while ( 1 )
  {
    if ( !*v13 )
      goto LABEL_34;
    if ( Buffer )
      RtlFreeAnsiString(&UnicodeString);
    if ( !PnpDuplicateUnicodeString((__int64)&UnicodeString, 16LL * v4 + a2 + 24) )
      break;
    v14 = IopReplaceSeperatorWithPound((__int64)&UnicodeString, (__int16 *)&UnicodeString);
    Buffer = UnicodeString.Buffer;
    if ( v14 >= 0 )
    {
      v15 = PnpOpenFirstMatchingSubKey(UnicodeString.Buffer, &v18);
      CachedContextBaseKey = v15;
      if ( v15 == -1073741772 )
      {
        CachedContextBaseKey = 0;
      }
      else if ( v15 < 0 )
      {
        goto LABEL_7;
      }
      if ( v18 )
        goto LABEL_37;
    }
    else
    {
      CachedContextBaseKey = 0;
    }
LABEL_34:
    ++v4;
    v13 += 2;
    if ( v4 >= 2 )
      goto LABEL_37;
  }
  CachedContextBaseKey = -1073741670;
LABEL_37:
  if ( CachedContextBaseKey >= 0 )
  {
    if ( v18 )
      goto LABEL_41;
    LODWORD(v19) = 262146;
    v20 = L"*";
    ObjectAttributes.RootDirectory = v24;
    *(_QWORD *)&ObjectAttributes.Length = 48LL;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&v19;
    *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
    v18 = 0LL;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v16 = ZwOpenKey(&v18, 0x20019u, &ObjectAttributes);
    CachedContextBaseKey = v16;
    if ( v16 != -1073741772 )
    {
      if ( v16 < 0 )
        goto LABEL_7;
LABEL_41:
      LODWORD(v19) = 1835034;
      v20 = L"Configuration";
      ObjectAttributes.RootDirectory = v18;
      *(_QWORD *)&ObjectAttributes.Length = 48LL;
      ObjectAttributes.ObjectName = (PUNICODE_STRING)&v19;
      *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
      Handle = 0LL;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v17 = ZwOpenKey(&Handle, 0x20019u, &ObjectAttributes);
      CachedContextBaseKey = v17;
      if ( v17 != -1073741772 )
      {
        if ( v17 >= 0 )
          CachedContextBaseKey = PiDevCfgConfigureDeviceKeys(*(__int64 *)v28, a2, Handle, -1, a3, a4);
        goto LABEL_7;
      }
    }
LABEL_6:
    CachedContextBaseKey = 0;
  }
LABEL_7:
  RtlFreeAnsiString(&UnicodeString);
  if ( Handle )
    ZwClose(Handle);
  if ( v18 )
    ZwClose(v18);
  if ( v24 )
    ZwClose(v24);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)CachedContextBaseKey;
}
