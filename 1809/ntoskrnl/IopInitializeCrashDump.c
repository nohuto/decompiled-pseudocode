/*
 * XREFs of IopInitializeCrashDump @ 0x14074D054
 * Callers:
 *     IoConfigureCrashDump @ 0x14018848C (IoConfigureCrashDump.c)
 *     IoInitializeCrashDump @ 0x14074CFC0 (IoInitializeCrashDump.c)
 *     IopInitCrashDumpRegCallback @ 0x1409D2F70 (IopInitCrashDumpRegCallback.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     IopLoadCrashdumpDriver @ 0x14017815C (IopLoadCrashdumpDriver.c)
 *     SecureDump_GetSecureDumpSettings @ 0x1401885A8 (SecureDump_GetSecureDumpSettings.c)
 *     IopReadDumpRegistry @ 0x1401885F4 (IopReadDumpRegistry.c)
 *     _guard_dispatch_icall @ 0x1401C5EB0 (_guard_dispatch_icall.c)
 *     ObReferenceObjectByHandle @ 0x1405E8350 (ObReferenceObjectByHandle.c)
 *     FsRtlIssueFileNotificationFsctl @ 0x14071DEA0 (FsRtlIssueFileNotificationFsctl.c)
 */

char __fastcall IopInitializeCrashDump(unsigned int *Handle, __int128 *a2)
{
  unsigned int *v4; // rcx
  __int64 v5; // rdx
  __int128 v7; // [rsp+30h] [rbp-40h] BYREF
  int v8; // [rsp+40h] [rbp-30h] BYREF
  __int64 (__fastcall *v9)(__int64, _DWORD *, unsigned int); // [rsp+48h] [rbp-28h]
  __int64 (__fastcall *v10)(__int64, unsigned __int64, __int64, unsigned __int64, unsigned __int64 *); // [rsp+50h] [rbp-20h]
  __int64 v11; // [rsp+58h] [rbp-18h]
  char v12; // [rsp+60h] [rbp-10h]
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
      if ( !(_BYTE)v7
        || qword_14043C828
        && (v11 = *(_QWORD *)((char *)&v7 + 4),
            v12 = BYTE1(v7),
            v9 = SecureDump_Get_SecureDumpHeader,
            v10 = SecureDump_Encrypt_DmpData,
            v8 = 40,
            (int)qword_14043C828(&v8) >= 0) )
      {
        v7 = *a2;
        if ( (int)((__int64 (__fastcall *)(unsigned int *, __int64 *, __int128 *))qword_14043C7C8)(
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
  return 0;
}
