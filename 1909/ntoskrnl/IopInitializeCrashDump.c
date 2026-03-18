/*
 * XREFs of IopInitializeCrashDump @ 0x140774CF4
 * Callers:
 *     IoConfigureCrashDump @ 0x1401938E0 (IoConfigureCrashDump.c)
 *     IoInitializeCrashDump @ 0x140774C60 (IoInitializeCrashDump.c)
 *     IopInitCrashDumpRegCallback @ 0x140A16DD0 (IopInitCrashDumpRegCallback.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     IopLoadCrashdumpDriver @ 0x140182104 (IopLoadCrashdumpDriver.c)
 *     SecureDump_GetSecureDumpSettings @ 0x140193A04 (SecureDump_GetSecureDumpSettings.c)
 *     IopReadDumpRegistry @ 0x140193A50 (IopReadDumpRegistry.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     ObReferenceObjectByHandle @ 0x1405FB4B0 (ObReferenceObjectByHandle.c)
 *     FsRtlIssueFileNotificationFsctl @ 0x14074843C (FsRtlIssueFileNotificationFsctl.c)
 */

char __fastcall IopInitializeCrashDump(unsigned int *Handle, __int128 *a2)
{
  unsigned int *v4; // rcx
  __int64 v5; // rdx
  __int128 v7; // [rsp+30h] [rbp-40h] BYREF
  _QWORD v8[4]; // [rsp+40h] [rbp-30h] BYREF
  char v9; // [rsp+60h] [rbp-10h]
  int v10; // [rsp+61h] [rbp-Fh]
  __int16 v11; // [rsp+65h] [rbp-Bh]
  char v12; // [rsp+67h] [rbp-9h]
  PVOID Object; // [rsp+90h] [rbp+20h] BYREF

  LODWORD(Object) = 0;
  *(_QWORD *)&v7 = 0LL;
  DWORD2(v7) = 0;
  if ( !ForceDumpDisabled )
  {
    IopReadDumpRegistry(Handle, &Object);
    if ( CrashdmpImageEntry && CrashdmpDumpBlock && CrashdmpInitialized || !(_DWORD)Object )
      return 1;
    if ( (CrashdmpImageEntry || (int)IopLoadCrashdumpDriver() >= 0)
      && (int)SecureDump_GetSecureDumpSettings((__int64)&v7) >= 0 )
    {
      if ( !(_BYTE)v7 )
        goto LABEL_9;
      if ( qword_140468098 )
      {
        v8[3] = *(_QWORD *)((char *)&v7 + 4);
        v9 = BYTE1(v7);
        v8[1] = SecureDump_Get_SecureDumpHeader;
        v8[2] = SecureDump_Encrypt_DmpData;
        v8[0] = 40LL;
        v10 = 0;
        v11 = 0;
        v12 = 0;
        if ( (int)qword_140468098(v8) >= 0 )
        {
LABEL_9:
          v7 = *a2;
          if ( (int)((__int64 (__fastcall *)(unsigned int *, __int64 *, __int128 *))qword_140468038)(
                      Handle,
                      &CrashdmpDumpBlock,
                      &v7) >= 0 )
          {
            CrashdmpInitialized = 1;
            v4 = *(unsigned int **)(CrashdmpDumpBlock + 1352);
            if ( !v4 )
            {
              if ( !Handle )
                return 1;
              v4 = Handle;
            }
            if ( ObReferenceObjectByHandle(v4, 0, (POBJECT_TYPE)IoFileObjectType, 0, &Object, 0LL) >= 0 )
            {
              FsRtlIssueFileNotificationFsctl(
                (PFILE_OBJECT)Object,
                v5,
                (__int128 *)&FILE_TYPE_NOTIFICATION_GUID_CRASHDUMP_FILE);
              ObfDereferenceObject(Object);
            }
            return 1;
          }
          CrashdmpDumpBlock = 0LL;
        }
      }
    }
  }
  return 0;
}
