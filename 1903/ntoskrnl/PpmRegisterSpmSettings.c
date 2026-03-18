/*
 * XREFs of PpmRegisterSpmSettings @ 0x1408B7020
 * Callers:
 *     <none>
 * Callees:
 *     PpmReleaseLock @ 0x1400EDAA8 (PpmReleaseLock.c)
 *     PpmAcquireLock @ 0x1400EDD3C (PpmAcquireLock.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     ZwClose @ 0x1401C02B0 (ZwClose.c)
 *     ZwOpenKey @ 0x1401C0310 (ZwOpenKey.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     RtlpQueryRegistryValues @ 0x1405C1848 (RtlpQueryRegistryValues.c)
 *     PpmEnableProfile @ 0x1407495E4 (PpmEnableProfile.c)
 *     PpmAllocateQueryTable @ 0x1408B69E8 (PpmAllocateQueryTable.c)
 *     PpmProcessSettingsFromQueryTable @ 0x1408B6E0C (PpmProcessSettingsFromQueryTable.c)
 */

__int64 __fastcall PpmRegisterSpmSettings(void *a1)
{
  char *QueryTable; // rdi
  __int64 v3; // rcx
  const wchar_t *v4; // rax
  __int16 v5; // ax
  __int64 v6; // rcx
  const WCHAR *v7; // rax
  __int16 v8; // ax
  int RegistryValues; // ebx
  unsigned __int8 v10; // r14
  const wchar_t *v11; // rdx
  _QWORD *v12; // r15
  __int64 v13; // rax
  __int64 v14; // rcx
  const wchar_t *v15; // rax
  const wchar_t *v16; // rax
  __int16 v17; // ax
  NTSTATUS v18; // ebx
  char v19; // bl
  char v20; // si
  __int64 v21; // rdx
  __int64 v23; // [rsp+38h] [rbp-99h] BYREF
  const wchar_t *v24; // [rsp+40h] [rbp-91h]
  __int64 v25; // [rsp+48h] [rbp-89h] BYREF
  HANDLE KeyHandle; // [rsp+50h] [rbp-81h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp-79h] BYREF
  HANDLE v28; // [rsp+60h] [rbp-71h] BYREF
  __int64 v29; // [rsp+68h] [rbp-69h] BYREF
  const wchar_t *v30; // [rsp+70h] [rbp-61h]
  __int64 v31; // [rsp+78h] [rbp-59h] BYREF
  const WCHAR *v32; // [rsp+80h] [rbp-51h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+88h] [rbp-49h] BYREF
  OBJECT_ATTRIBUTES v34; // [rsp+B8h] [rbp-19h] BYREF
  __int128 v35; // [rsp+E8h] [rbp+17h] BYREF

  v23 = 0LL;
  LODWORD(v25) = -1;
  v24 = 0LL;
  v29 = 0LL;
  QueryTable = 0LL;
  v30 = 0LL;
  KeyHandle = 0LL;
  v3 = 0x7FFFLL;
  v4 = L"v1";
  do
  {
    if ( !*v4 )
      break;
    ++v4;
    --v3;
  }
  while ( v3 );
  if ( v3 )
    v5 = 0x7FFF - v3;
  else
    v5 = 0;
  if ( v3 )
  {
    v30 = L"v1";
    LOWORD(v29) = 2 * v5;
    WORD1(v29) = 2 * v5 + 2;
  }
  v31 = 0LL;
  v6 = 0x7FFFLL;
  v32 = 0LL;
  v7 = L"Default";
  do
  {
    if ( !*v7 )
      break;
    ++v7;
    --v6;
  }
  while ( v6 );
  if ( v6 )
    v8 = 0x7FFF - v6;
  else
    v8 = 0;
  if ( v6 )
  {
    v32 = L"Default";
    LOWORD(v31) = 2 * v8;
    WORD1(v31) = 2 * v8 + 2;
  }
  ObjectAttributes.RootDirectory = a1;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v29;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  RegistryValues = ZwOpenKey(&KeyHandle, 8u, &ObjectAttributes);
  if ( RegistryValues >= 0 )
  {
    QueryTable = PpmAllocateQueryTable((__int64)&v25);
    if ( !QueryTable )
    {
      RegistryValues = -1073741670;
      goto LABEL_46;
    }
    PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
    v10 = 0;
    if ( PpmProfileCount )
    {
      v11 = L"VideoBatching";
      while ( 1 )
      {
        v12 = (_QWORD *)(PpmProfiles + 5536LL * v10);
        v13 = *(_QWORD *)((char *)v12 + 12) - *(_QWORD *)&GUID_POWER_POLICY_PROFILE_LOW_POWER.Data1;
        v35 = *(_OWORD *)((char *)v12 + 12);
        if ( !v13 )
          v13 = *((_QWORD *)&v35 + 1) - *(_QWORD *)GUID_POWER_POLICY_PROFILE_LOW_POWER.Data4;
        if ( !v13 )
          break;
        v11 = (const wchar_t *)*v12;
        v23 = 0LL;
        v24 = 0LL;
        if ( v11 )
        {
          v14 = 0x7FFFLL;
          v15 = v11;
          do
          {
            if ( !*v15 )
              break;
            ++v15;
            --v14;
          }
          while ( v14 );
          goto LABEL_33;
        }
LABEL_38:
        ObjectAttributes.RootDirectory = KeyHandle;
        *(_QWORD *)&ObjectAttributes.Length = 48LL;
        ObjectAttributes.ObjectName = (PUNICODE_STRING)&v23;
        *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        if ( ZwOpenKey(&Handle, 8u, &ObjectAttributes) >= 0 )
        {
          v34.RootDirectory = Handle;
          *(_QWORD *)&v34.Length = 48LL;
          v34.ObjectName = (PUNICODE_STRING)&v31;
          *(_QWORD *)&v34.Attributes = 576LL;
          *(_OWORD *)&v34.SecurityDescriptor = 0LL;
          v18 = ZwOpenKey(&v28, 8u, &v34);
          ZwClose(Handle);
          if ( v18 >= 0 )
          {
            RegistryValues = RtlpQueryRegistryValues(0x40000000u, (const WCHAR *)v28, (__int64)QueryTable, 0LL);
            ZwClose(v28);
            PpmReleaseLock(&PpmPerfPolicyLock);
            if ( RegistryValues < 0 )
              goto LABEL_46;
            v19 = PpmProcessSettingsFromQueryTable(&v35, 0, (__int64)QueryTable);
            v20 = PpmProcessSettingsFromQueryTable(&v35, 1, (__int64)QueryTable);
            PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
            if ( v19 || v20 )
              PpmEnableProfile((__int64)v12, v21);
          }
        }
        ++v10;
        v11 = L"VideoBatching";
        if ( v10 >= (unsigned __int8)PpmProfileCount )
          goto LABEL_45;
      }
      v23 = 0LL;
      v14 = 0x7FFFLL;
      v24 = 0LL;
      v16 = L"VideoBatching";
      do
      {
        if ( !*v16 )
          break;
        ++v16;
        --v14;
      }
      while ( v14 );
LABEL_33:
      if ( v14 )
        v17 = 0x7FFF - v14;
      else
        v17 = 0;
      if ( v14 )
      {
        v24 = v11;
        LOWORD(v23) = 2 * v17;
        WORD1(v23) = 2 * v17 + 2;
      }
      goto LABEL_38;
    }
LABEL_45:
    PpmReleaseLock(&PpmPerfPolicyLock);
    PpmProfileStatus |= 2u;
    RegistryValues = 0;
  }
LABEL_46:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( QueryTable )
    ExFreePoolWithTag(QueryTable, 0x704D5053u);
  return (unsigned int)RegistryValues;
}
