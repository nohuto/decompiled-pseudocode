/*
 * XREFs of PpmRegisterSpmSettings @ 0x14087BCA0
 * Callers:
 *     <none>
 * Callees:
 *     PpmAcquireLock @ 0x140006020 (PpmAcquireLock.c)
 *     PpmReleaseLock @ 0x14008BC20 (PpmReleaseLock.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     ZwOpenKey @ 0x1401B8530 (ZwOpenKey.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     RtlpQueryRegistryValues @ 0x1405C68AC (RtlpQueryRegistryValues.c)
 *     PpmEnableProfile @ 0x14075800C (PpmEnableProfile.c)
 *     PpmAllocateQueryTable @ 0x14087B694 (PpmAllocateQueryTable.c)
 *     PpmProcessSettingsFromQueryTable @ 0x14087BA90 (PpmProcessSettingsFromQueryTable.c)
 */

__int64 __fastcall PpmRegisterSpmSettings(void *a1)
{
  char *QueryTable; // rdi
  const wchar_t *v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  const WCHAR *v6; // rax
  int RegistryValues; // ebx
  unsigned __int8 i; // si
  _QWORD *v9; // r15
  __int64 v10; // rax
  _WORD *v11; // rdx
  __int64 v12; // rcx
  _WORD *v13; // rax
  const wchar_t *v14; // rax
  NTSTATUS v15; // ebx
  char v16; // bl
  char v17; // r14
  __int64 v18; // rdx
  __int64 v20; // [rsp+30h] [rbp-D0h] BYREF
  const wchar_t *v21; // [rsp+38h] [rbp-C8h]
  int v22; // [rsp+40h] [rbp-C0h] BYREF
  HANDLE KeyHandle; // [rsp+48h] [rbp-B8h] BYREF
  HANDLE Handle; // [rsp+50h] [rbp-B0h] BYREF
  HANDLE v25; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v26; // [rsp+60h] [rbp-A0h] BYREF
  const wchar_t *v27; // [rsp+68h] [rbp-98h]
  __int64 v28; // [rsp+70h] [rbp-90h] BYREF
  const WCHAR *v29; // [rsp+78h] [rbp-88h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+80h] [rbp-80h] BYREF
  OBJECT_ATTRIBUTES v31; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v32; // [rsp+E0h] [rbp-20h] BYREF

  QueryTable = 0LL;
  v22 = -1;
  KeyHandle = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  v3 = L"v1";
  v4 = 0x7FFFLL;
  while ( *v3 )
  {
    ++v3;
    if ( !--v4 )
      goto LABEL_6;
  }
  v27 = L"v1";
  LOWORD(v26) = 2 * (0x7FFF - v4);
  WORD1(v26) = v26 + 2;
LABEL_6:
  v28 = 0LL;
  v5 = 0x7FFFLL;
  v29 = 0LL;
  v6 = L"Default";
  while ( *v6 )
  {
    ++v6;
    if ( !--v5 )
      goto LABEL_11;
  }
  v29 = L"Default";
  LOWORD(v28) = 2 * (0x7FFF - v5);
  WORD1(v28) = v28 + 2;
LABEL_11:
  ObjectAttributes.RootDirectory = a1;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v26;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  RegistryValues = ZwOpenKey(&KeyHandle, 8u, &ObjectAttributes);
  if ( RegistryValues >= 0 )
  {
    QueryTable = PpmAllocateQueryTable((__int64)&v22);
    if ( !QueryTable )
    {
      RegistryValues = -1073741670;
      goto LABEL_38;
    }
    PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
    for ( i = 0; i < (unsigned __int8)PpmProfileCount; ++i )
    {
      v9 = (_QWORD *)(PpmProfiles + 5536LL * i);
      v10 = *(_QWORD *)((char *)v9 + 12) - *(_QWORD *)&GUID_POWER_POLICY_PROFILE_LOW_POWER.Data1;
      v32 = *(_OWORD *)((char *)v9 + 12);
      if ( !v10 )
        v10 = *((_QWORD *)&v32 + 1) - *(_QWORD *)GUID_POWER_POLICY_PROFILE_LOW_POWER.Data4;
      if ( v10 )
      {
        v11 = (_WORD *)*v9;
        v20 = 0LL;
        v21 = 0LL;
        if ( !v11 )
          goto LABEL_30;
        v12 = 0x7FFFLL;
        v13 = v11;
        while ( *v13 )
        {
          ++v13;
          if ( !--v12 )
            goto LABEL_30;
        }
        v21 = v11;
      }
      else
      {
        v20 = 0LL;
        v12 = 0x7FFFLL;
        v21 = 0LL;
        v14 = L"VideoBatching";
        while ( *v14 )
        {
          ++v14;
          if ( !--v12 )
            goto LABEL_30;
        }
        v21 = L"VideoBatching";
      }
      LOWORD(v20) = 2 * (0x7FFF - v12);
      WORD1(v20) = v20 + 2;
LABEL_30:
      ObjectAttributes.RootDirectory = KeyHandle;
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = (PUNICODE_STRING)&v20;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      if ( ZwOpenKey(&Handle, 8u, &ObjectAttributes) >= 0 )
      {
        v31.RootDirectory = Handle;
        v31.Length = 48;
        v31.ObjectName = (PUNICODE_STRING)&v28;
        v31.Attributes = 576;
        *(_OWORD *)&v31.SecurityDescriptor = 0LL;
        v15 = ZwOpenKey(&v25, 8u, &v31);
        ZwClose(Handle);
        if ( v15 >= 0 )
        {
          RegistryValues = RtlpQueryRegistryValues(0x40000000LL, (const WCHAR *)v25, (__int64)QueryTable, 0LL);
          ZwClose(v25);
          PpmReleaseLock(&PpmPerfPolicyLock);
          if ( RegistryValues < 0 )
            goto LABEL_38;
          v16 = PpmProcessSettingsFromQueryTable(&v32, 0, (__int64)QueryTable);
          v17 = PpmProcessSettingsFromQueryTable(&v32, 1, (__int64)QueryTable);
          PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
          if ( v16 || v17 )
            PpmEnableProfile((__int64)v9, v18);
        }
      }
    }
    PpmReleaseLock(&PpmPerfPolicyLock);
    PpmProfileStatus |= 2u;
    RegistryValues = 0;
  }
LABEL_38:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( QueryTable )
    ExFreePoolWithTag(QueryTable, 0x704D5053u);
  return (unsigned int)RegistryValues;
}
