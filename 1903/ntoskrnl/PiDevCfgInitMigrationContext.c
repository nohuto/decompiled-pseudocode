/*
 * XREFs of PiDevCfgInitMigrationContext @ 0x14071B940
 * Callers:
 *     PiDevCfgMigrateDevice @ 0x14071B85C (PiDevCfgMigrateDevice.c)
 * Callees:
 *     ZwOpenKey @ 0x1401C0310 (ZwOpenKey.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x1405C37DC (_PnpCtxGetCachedContextBaseKey.c)
 *     PiDevCfgFreeMigrationContext @ 0x14071B920 (PiDevCfgFreeMigrationContext.c)
 */

__int64 __fastcall PiDevCfgInitMigrationContext(UNICODE_STRING *a1, void *a2, HANDLE *a3)
{
  int CachedContextBaseKey; // ebx
  NTSTATUS v7; // eax
  NTSTATUS v9; // eax
  void **v10; // rsi
  NTSTATUS v11; // eax
  void *v12; // rax
  __int64 v13; // [rsp+20h] [rbp-40h] BYREF
  const wchar_t *v14; // [rsp+28h] [rbp-38h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-30h] BYREF
  void *v16; // [rsp+90h] [rbp+30h] BYREF

  v13 = 0LL;
  v16 = 0LL;
  v14 = 0LL;
  memset(a3, 0, 0x38uLL);
  a3[5] = a1;
  a3[6] = a2;
  CachedContextBaseKey = PnpCtxGetCachedContextBaseKey(*(__int64 *)&PiPnpRtlCtx, 4, (__int64)&v16);
  if ( CachedContextBaseKey < 0 )
    goto LABEL_17;
  LODWORD(v13) = 3145774;
  v14 = L"Control\\DeviceMigration";
  ObjectAttributes.RootDirectory = v16;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v13;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  *a3 = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v7 = ZwOpenKey(a3, 0x20019u, &ObjectAttributes);
  CachedContextBaseKey = v7;
  if ( v7 == -1073741772 )
    return 0;
  if ( v7 < 0 )
    goto LABEL_17;
  LODWORD(v13) = 1048590;
  v14 = L"Devices";
  ObjectAttributes.RootDirectory = *a3;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v13;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  a3[1] = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v9 = ZwOpenKey(a3 + 1, 0x20019u, &ObjectAttributes);
  CachedContextBaseKey = v9;
  if ( v9 == -1073741772 )
  {
    a3[1] = 0LL;
  }
  else if ( v9 < 0 )
  {
    goto LABEL_17;
  }
  LODWORD(v13) = 1048590;
  v14 = L"Classes";
  v10 = a3 + 2;
  ObjectAttributes.RootDirectory = *a3;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v13;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  a3[2] = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v11 = ZwOpenKey(a3 + 2, 0x20019u, &ObjectAttributes);
  CachedContextBaseKey = v11;
  if ( v11 != -1073741772 )
  {
    if ( v11 >= 0 )
      goto LABEL_12;
LABEL_17:
    PiDevCfgFreeMigrationContext((__int64)a3);
    return (unsigned int)CachedContextBaseKey;
  }
  CachedContextBaseKey = 0;
  *v10 = 0LL;
LABEL_12:
  v12 = *v10;
  if ( *v10 )
  {
    if ( a1 )
    {
      *(_QWORD *)&ObjectAttributes.Length = 48LL;
      *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
      a3[3] = 0LL;
      ObjectAttributes.RootDirectory = v12;
      ObjectAttributes.ObjectName = a1;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      CachedContextBaseKey = ZwOpenKey(a3 + 3, 0x20019u, &ObjectAttributes);
      if ( CachedContextBaseKey == -1073741772 )
      {
        CachedContextBaseKey = 0;
        a3[3] = 0LL;
      }
    }
  }
  if ( CachedContextBaseKey < 0 )
    goto LABEL_17;
  return (unsigned int)CachedContextBaseKey;
}
