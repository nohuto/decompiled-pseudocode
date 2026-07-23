/*
 * XREFs of LdrLoadAlternateResourceModuleEx @ 0x1400DFAA0
 * Callers:
 *     LdrpLoadResourceFromAlternativeModule @ 0x1400DF9C4 (LdrpLoadResourceFromAlternativeModule.c)
 *     LdrpResSearchResourceMappedFile @ 0x1400E00CC (LdrpResSearchResourceMappedFile.c)
 *     LdrResSearchResource @ 0x1406764C0 (LdrResSearchResource.c)
 * Callees:
 *     LdrpKrnGetDataTableEntry @ 0x1400DF574 (LdrpKrnGetDataTableEntry.c)
 *     LdrpGetFromMUIMemCache @ 0x1400DFCF8 (LdrpGetFromMUIMemCache.c)
 *     DbgPrintEx @ 0x140126B10 (DbgPrintEx.c)
 *     DownLevelLangIDToLanguageName @ 0x140177FB4 (DownLevelLangIDToLanguageName.c)
 *     LdrpSetAlternateResourceModuleHandle @ 0x14017E2F4 (LdrpSetAlternateResourceModuleHandle.c)
 *     LdrpMapResourceFile @ 0x14017FF2C (LdrpMapResourceFile.c)
 *     LdrpGetResourceFileName @ 0x140180200 (LdrpGetResourceFileName.c)
 *     LdrpVerifyAlternateResourceModuleEx @ 0x140181658 (LdrpVerifyAlternateResourceModuleEx.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     ZwClose @ 0x1401C0E30 (ZwClose.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     MmUnmapViewInSystemSpace @ 0x140648600 (MmUnmapViewInSystemSpace.c)
 */

NTSTATUS __cdecl LdrLoadAlternateResourceModuleEx(
        PVOID DllHandle,
        LANGID LanguageId,
        PVOID *ResourceDllBase,
        ULONG_PTR *ResourceOffset,
        ULONG Flags)
{
  unsigned __int64 v9; // rsi
  PVOID *DataTableEntry; // rax
  __int64 v12; // rdx
  ULONG v13; // edi
  const wchar_t *v14; // r8
  NTSTATUS ResourceFileName; // edi
  __int64 v16; // r8
  ULONG_PTR v17; // rsi
  PVOID MappedBase; // [rsp+40h] [rbp-348h] BYREF
  ULONG_PTR v19; // [rsp+48h] [rbp-340h] BYREF
  HANDLE Handle; // [rsp+50h] [rbp-338h] BYREF
  int v21; // [rsp+58h] [rbp-330h]
  __int64 v22; // [rsp+60h] [rbp-328h] BYREF
  char *v23; // [rsp+68h] [rbp-320h]
  PVOID *v24; // [rsp+78h] [rbp-310h]
  _BYTE v25[176]; // [rsp+80h] [rbp-308h] BYREF
  char v26; // [rsp+130h] [rbp-258h] BYREF

  MappedBase = 0LL;
  Handle = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  memset(v25, 0, 0xAAuLL);
  v19 = 0LL;
  if ( !DllHandle || !LanguageId || !ResourceDllBase )
    return -1073741811;
  v9 = LdrpGetFromMUIMemCache(DllHandle);
  if ( v9 == -1LL )
  {
    *ResourceDllBase = 0LL;
    return -1073020922;
  }
  if ( v9 )
  {
    *ResourceDllBase = (PVOID)v9;
    if ( ResourceOffset )
      *ResourceOffset = v19;
    v21 = 0;
    return 0;
  }
  DataTableEntry = LdrpKrnGetDataTableEntry((unsigned __int64)DllHandle);
  v24 = DataTableEntry;
  if ( DataTableEntry )
  {
    v23 = &v26;
    LODWORD(v22) = 34078720;
    v13 = Flags & 0x1000000;
    if ( (Flags & 0x1000000) != 0 )
    {
LABEL_14:
      v14 = L".mun";
      if ( !v13 )
        v14 = L".mui";
      LOBYTE(v12) = v13 != 0;
      ResourceFileName = LdrpGetResourceFileName(DataTableEntry, v12, v14, v25, &v22);
      if ( ResourceFileName >= 0 )
      {
        ResourceFileName = LdrpMapResourceFile(
                             (_DWORD)DllHandle,
                             (unsigned int)&v22,
                             (unsigned int)&Handle,
                             (unsigned int)&MappedBase,
                             (__int64)&v19);
        if ( ResourceFileName >= 0 )
        {
          v9 = (unsigned __int64)MappedBase | 1;
          if ( !(unsigned __int8)LdrpVerifyAlternateResourceModuleEx(
                                   DllHandle,
                                   (unsigned __int64)MappedBase | 1,
                                   v16,
                                   v25,
                                   Flags) )
          {
            MmUnmapViewInSystemSpace(MappedBase);
            ZwClose(Handle);
            Handle = 0LL;
            v9 = 0LL;
            ResourceFileName = -1073020926;
          }
        }
      }
      goto LABEL_18;
    }
    if ( (int)DownLevelLangIDToLanguageName(LanguageId, v25, 85LL, 2LL) >= 0 )
    {
      DataTableEntry = v24;
      goto LABEL_14;
    }
    DbgPrintEx(0x55u, 1u, "LDR: No Locale name for LangId %d \n", LanguageId);
  }
  ResourceFileName = -1073020927;
LABEL_18:
  if ( !v9 )
    v9 = -1LL;
  MappedBase = (PVOID)v9;
  v17 = v19;
  LdrpSetAlternateResourceModuleHandle(
    (_DWORD)DllHandle,
    (unsigned int)&MappedBase,
    (unsigned int)&Handle,
    0,
    LanguageId,
    1,
    ResourceFileName,
    v19);
  if ( MappedBase == (PVOID)-1LL )
  {
    *ResourceDllBase = 0LL;
  }
  else
  {
    *ResourceDllBase = MappedBase;
    if ( ResourceOffset )
      *ResourceOffset = v17;
    return 0;
  }
  return ResourceFileName;
}
