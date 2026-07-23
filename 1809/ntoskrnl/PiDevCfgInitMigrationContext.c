/*
 * XREFs of PiDevCfgInitMigrationContext @ 0x140702094
 * Callers:
 *     PiDevCfgMigrateDevice @ 0x140701FB0 (PiDevCfgMigrateDevice.c)
 * Callees:
 *     ZwOpenKey @ 0x1401B8530 (ZwOpenKey.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x1405C8C40 (_PnpCtxGetCachedContextBaseKey.c)
 *     PiDevCfgFreeMigrationContext @ 0x140702074 (PiDevCfgFreeMigrationContext.c)
 */

__int64 __fastcall PiDevCfgInitMigrationContext(UNICODE_STRING *a1, void *a2, void **a3)
{
  int CachedContextBaseKey; // ebx
  NTSTATUS v7; // eax
  void *v9; // rax
  NTSTATUS v10; // eax
  void **v11; // rsi
  void *v12; // rax
  NTSTATUS v13; // eax
  void *v14; // rax
  int v15; // [rsp+20h] [rbp-40h] BYREF
  const wchar_t *v16; // [rsp+28h] [rbp-38h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-30h] BYREF
  void *v18; // [rsp+80h] [rbp+20h] BYREF

  v18 = 0LL;
  memset(a3, 0, 0x38uLL);
  a3[5] = a1;
  a3[6] = a2;
  CachedContextBaseKey = PnpCtxGetCachedContextBaseKey(*(__int64 *)&PiPnpRtlCtx, 4, (__int64)&v18);
  if ( CachedContextBaseKey < 0 )
    goto LABEL_17;
  *a3 = 0LL;
  v16 = L"Control\\DeviceMigration";
  ObjectAttributes.RootDirectory = v18;
  v15 = 3145774;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v15;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v7 = ZwOpenKey(a3, 0x20019u, &ObjectAttributes);
  CachedContextBaseKey = v7;
  if ( v7 == -1073741772 )
    return 0;
  if ( v7 < 0 )
    goto LABEL_17;
  v15 = 1048590;
  v16 = L"Devices";
  v9 = *a3;
  a3[1] = 0LL;
  ObjectAttributes.RootDirectory = v9;
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v15;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v10 = ZwOpenKey(a3 + 1, 0x20019u, &ObjectAttributes);
  CachedContextBaseKey = v10;
  if ( v10 == -1073741772 )
  {
    a3[1] = 0LL;
  }
  else if ( v10 < 0 )
  {
    goto LABEL_17;
  }
  v15 = 1048590;
  v16 = L"Classes";
  v11 = a3 + 2;
  v12 = *a3;
  a3[2] = 0LL;
  ObjectAttributes.RootDirectory = v12;
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v15;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v13 = ZwOpenKey(a3 + 2, 0x20019u, &ObjectAttributes);
  CachedContextBaseKey = v13;
  if ( v13 != -1073741772 )
  {
    if ( v13 >= 0 )
      goto LABEL_12;
LABEL_17:
    PiDevCfgFreeMigrationContext((__int64)a3);
    return (unsigned int)CachedContextBaseKey;
  }
  CachedContextBaseKey = 0;
  *v11 = 0LL;
LABEL_12:
  v14 = *v11;
  if ( *v11 )
  {
    if ( a1 )
    {
      ObjectAttributes.Length = 48;
      a3[3] = 0LL;
      ObjectAttributes.RootDirectory = v14;
      ObjectAttributes.Attributes = 576;
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
