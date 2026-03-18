/*
 * XREFs of LdrLoadAlternateResourceModuleEx @ 0x1400F404C
 * Callers:
 *     LdrpLoadResourceFromAlternativeModule @ 0x1400F3BCC (LdrpLoadResourceFromAlternativeModule.c)
 *     LdrpResSearchResourceMappedFile @ 0x1400FD9EC (LdrpResSearchResourceMappedFile.c)
 * Callees:
 *     LdrpKrnGetDataTableEntry @ 0x1400F3830 (LdrpKrnGetDataTableEntry.c)
 *     LdrpGetFromMUIMemCache @ 0x1400F4260 (LdrpGetFromMUIMemCache.c)
 *     DbgPrintEx @ 0x140160440 (DbgPrintEx.c)
 *     DownLevelLangIDToLanguageName @ 0x140161010 (DownLevelLangIDToLanguageName.c)
 *     LdrpSetAlternateResourceModuleHandle @ 0x140174B20 (LdrpSetAlternateResourceModuleHandle.c)
 *     LdrpMapResourceFile @ 0x140176BDC (LdrpMapResourceFile.c)
 *     LdrpGetResourceFileName @ 0x1401779A0 (LdrpGetResourceFileName.c)
 *     LdrpVerifyAlternateResourceModuleEx @ 0x140177BD8 (LdrpVerifyAlternateResourceModuleEx.c)
 *     __security_check_cookie @ 0x140193FF0 (__security_check_cookie.c)
 *     ZwClose @ 0x1401B8350 (ZwClose.c)
 *     memset @ 0x1401D1780 (memset.c)
 *     MmUnmapViewInSystemSpace @ 0x1405DF390 (MmUnmapViewInSystemSpace.c)
 */

__int64 __fastcall LdrLoadAlternateResourceModuleEx(
        unsigned __int64 a1,
        unsigned __int16 a2,
        _QWORD *a3,
        __int64 *a4,
        int a5)
{
  unsigned __int64 v9; // rsi
  PVOID *DataTableEntry; // rdi
  __int64 v12; // rdx
  int ResourceFileName; // edi
  __int64 v14; // r8
  __int64 v15; // rsi
  PVOID MappedBase; // [rsp+40h] [rbp-348h] BYREF
  __int64 v17; // [rsp+48h] [rbp-340h] BYREF
  HANDLE Handle; // [rsp+50h] [rbp-338h] BYREF
  int v19; // [rsp+58h] [rbp-330h]
  int v20; // [rsp+60h] [rbp-328h] BYREF
  char *v21; // [rsp+68h] [rbp-320h]
  _BYTE v22[176]; // [rsp+80h] [rbp-308h] BYREF
  char v23; // [rsp+130h] [rbp-258h] BYREF

  MappedBase = 0LL;
  Handle = 0LL;
  memset(v22, 0, 0xAAuLL);
  v17 = 0LL;
  if ( !a1 || !a2 || !a3 )
    return 3221225485LL;
  v9 = LdrpGetFromMUIMemCache(a1, a2, &v17, 4LL);
  if ( v9 == -1LL )
  {
    *a3 = 0LL;
    return 3221946374LL;
  }
  if ( v9 )
  {
    *a3 = v9;
    if ( a4 )
      *a4 = v17;
    v19 = 0;
    return 0LL;
  }
  DataTableEntry = LdrpKrnGetDataTableEntry(a1);
  if ( DataTableEntry )
  {
    v21 = &v23;
    v20 = 34078720;
    if ( (int)DownLevelLangIDToLanguageName(a2, v22, 85LL) >= 0 )
    {
      ResourceFileName = LdrpGetResourceFileName(DataTableEntry, v12, v22, &v20);
      if ( ResourceFileName >= 0 )
      {
        ResourceFileName = LdrpMapResourceFile(
                             a1,
                             (unsigned int)&v20,
                             (unsigned int)&Handle,
                             (unsigned int)&MappedBase,
                             (__int64)&v17);
        if ( ResourceFileName >= 0 )
        {
          v9 = (unsigned __int64)MappedBase | 1;
          if ( !(unsigned __int8)LdrpVerifyAlternateResourceModuleEx(a1, (unsigned __int64)MappedBase | 1, v14, v22, a5) )
          {
            MmUnmapViewInSystemSpace(MappedBase);
            ZwClose(Handle);
            Handle = 0LL;
            v9 = 0LL;
            ResourceFileName = -1073020926;
          }
        }
      }
      goto LABEL_16;
    }
    DbgPrintEx(0x55u, 1u, "LDR: No Locale name for LangId %d \n", a2);
  }
  ResourceFileName = -1073020927;
LABEL_16:
  if ( !v9 )
    v9 = -1LL;
  MappedBase = (PVOID)v9;
  v15 = v17;
  LdrpSetAlternateResourceModuleHandle(
    a1,
    (unsigned int)&MappedBase,
    (unsigned int)&Handle,
    0,
    a2,
    1,
    ResourceFileName,
    v17);
  if ( MappedBase == (PVOID)-1LL )
  {
    *a3 = 0LL;
  }
  else
  {
    *a3 = MappedBase;
    if ( a4 )
      *a4 = v15;
    return 0;
  }
  return (unsigned int)ResourceFileName;
}
