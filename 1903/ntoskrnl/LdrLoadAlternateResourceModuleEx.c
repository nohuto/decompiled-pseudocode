/*
 * XREFs of LdrLoadAlternateResourceModuleEx @ 0x14011D79C
 * Callers:
 *     LdrpResSearchResourceMappedFile @ 0x1400AFFDC (LdrpResSearchResourceMappedFile.c)
 *     LdrpLoadResourceFromAlternativeModule @ 0x14011D6C0 (LdrpLoadResourceFromAlternativeModule.c)
 *     LdrResSearchResource @ 0x14067B1D0 (LdrResSearchResource.c)
 * Callees:
 *     LdrpKrnGetDataTableEntry @ 0x14011D270 (LdrpKrnGetDataTableEntry.c)
 *     LdrpGetFromMUIMemCache @ 0x14011D9F4 (LdrpGetFromMUIMemCache.c)
 *     DbgPrintEx @ 0x1401264A0 (DbgPrintEx.c)
 *     DownLevelLangIDToLanguageName @ 0x1401778C4 (DownLevelLangIDToLanguageName.c)
 *     LdrpSetAlternateResourceModuleHandle @ 0x14017DC04 (LdrpSetAlternateResourceModuleHandle.c)
 *     LdrpMapResourceFile @ 0x14017F83C (LdrpMapResourceFile.c)
 *     LdrpGetResourceFileName @ 0x14017FB10 (LdrpGetResourceFileName.c)
 *     LdrpVerifyAlternateResourceModuleEx @ 0x140180F68 (LdrpVerifyAlternateResourceModuleEx.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     ZwClose @ 0x1401C02B0 (ZwClose.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     MmUnmapViewInSystemSpace @ 0x14066EBA0 (MmUnmapViewInSystemSpace.c)
 */

__int64 __fastcall LdrLoadAlternateResourceModuleEx(
        unsigned __int64 a1,
        unsigned __int16 a2,
        _QWORD *a3,
        __int64 *a4,
        int a5)
{
  unsigned __int64 v9; // rsi
  PVOID *DataTableEntry; // rax
  __int64 v12; // rdx
  int v13; // edi
  const wchar_t *v14; // r8
  int ResourceFileName; // edi
  __int64 v16; // r8
  __int64 v17; // rsi
  PVOID MappedBase; // [rsp+40h] [rbp-348h] BYREF
  __int64 v19; // [rsp+48h] [rbp-340h] BYREF
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
  if ( !a1 || !a2 || !a3 )
    return 3221225485LL;
  v9 = LdrpGetFromMUIMemCache(a1, a2, &v19, 4LL);
  if ( v9 == -1LL )
  {
    *a3 = 0LL;
    return 3221946374LL;
  }
  if ( v9 )
  {
    *a3 = v9;
    if ( a4 )
      *a4 = v19;
    v21 = 0;
    return 0LL;
  }
  DataTableEntry = LdrpKrnGetDataTableEntry(a1);
  v24 = DataTableEntry;
  if ( DataTableEntry )
  {
    v23 = &v26;
    LODWORD(v22) = 34078720;
    v13 = a5 & 0x1000000;
    if ( (a5 & 0x1000000) != 0 )
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
                             a1,
                             (unsigned int)&v22,
                             (unsigned int)&Handle,
                             (unsigned int)&MappedBase,
                             (__int64)&v19);
        if ( ResourceFileName >= 0 )
        {
          v9 = (unsigned __int64)MappedBase | 1;
          if ( !(unsigned __int8)LdrpVerifyAlternateResourceModuleEx(a1, (unsigned __int64)MappedBase | 1, v16, v25, a5) )
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
    if ( (int)DownLevelLangIDToLanguageName(a2, v25, 85LL) >= 0 )
    {
      DataTableEntry = v24;
      goto LABEL_14;
    }
    DbgPrintEx(0x55u, 1u, "LDR: No Locale name for LangId %d \n", a2);
  }
  ResourceFileName = -1073020927;
LABEL_18:
  if ( !v9 )
    v9 = -1LL;
  MappedBase = (PVOID)v9;
  v17 = v19;
  LdrpSetAlternateResourceModuleHandle(
    a1,
    (unsigned int)&MappedBase,
    (unsigned int)&Handle,
    0,
    a2,
    1,
    ResourceFileName,
    v19);
  if ( MappedBase == (PVOID)-1LL )
  {
    *a3 = 0LL;
  }
  else
  {
    *a3 = MappedBase;
    if ( a4 )
      *a4 = v17;
    return 0;
  }
  return (unsigned int)ResourceFileName;
}
