/*
 * XREFs of LdrpGetDataModulePath @ 0x180054B9C
 * Callers:
 *     LdrLoadAlternateResourceModuleEx @ 0x180017900 (LdrLoadAlternateResourceModuleEx.c)
 * Callees:
 *     LdrpGetLoadAsEntry @ 0x180054D14 (LdrpGetLoadAsEntry.c)
 *     LdrFindEntryForAddress @ 0x180054DE0 (LdrFindEntryForAddress.c)
 *     wcsrchr @ 0x180092BC0 (wcsrchr.c)
 *     memmove @ 0x1800A3A80 (memmove.c)
 *     memset @ 0x1800A3DC0 (memset.c)
 */

__int64 __fastcall LdrpGetDataModulePath(
        PVOID DllHandle,
        void *a2,
        __int64 a3,
        unsigned int *a4,
        wchar_t **a5,
        _DWORD *a6,
        wchar_t **a7)
{
  NTSTATUS EntryForAddress; // ebx
  wchar_t *v11; // rdi
  wchar_t *v12; // rcx
  wchar_t *v13; // rcx
  __int64 v14; // r8
  unsigned int v15; // ecx
  wchar_t **v16; // rcx
  wchar_t *EntryPointActivationContext; // rax
  PLDR_DATA_TABLE_ENTRY v19; // rdi
  unsigned int v20; // eax
  wchar_t *v21[6]; // [rsp+20h] [rbp-48h] BYREF
  PLDR_DATA_TABLE_ENTRY Entry; // [rsp+70h] [rbp+8h] BYREF

  Entry = 0LL;
  memset(v21, 0, sizeof(v21));
  if ( ((unsigned __int8)DllHandle & 3) == 0 )
  {
    EntryForAddress = LdrFindEntryForAddress(DllHandle, &Entry);
    if ( EntryForAddress < 0 )
      return (unsigned int)EntryForAddress;
    v19 = Entry;
    v20 = Entry->FullDllName.Length - Entry->BaseDllName.Length;
    *a4 = v20;
    if ( v20 <= v19->FullDllName.Length && v20 < 0x2BE )
    {
      memmove(a2, v19->FullDllName.Buffer, v20);
      *a5 = v19->BaseDllName.Buffer;
      *a6 = v19->BaseDllName.Length;
      v16 = a7;
      if ( !a7 )
        return (unsigned int)EntryForAddress;
      EntryPointActivationContext = (wchar_t *)v19->EntryPointActivationContext;
      goto LABEL_9;
    }
    return (unsigned int)-2147483643;
  }
  EntryForAddress = LdrpGetLoadAsEntry(DllHandle, v21);
  if ( EntryForAddress < 0 )
    return (unsigned int)EntryForAddress;
  v11 = v21[1];
  v12 = wcsrchr(v21[1], 0x5Cu);
  if ( !v12 )
    return (unsigned int)-1073741767;
  v13 = v12 + 1;
  v14 = -1LL;
  *a5 = v13;
  do
    ++v14;
  while ( v13[v14] );
  v15 = 2 * (v13 - v11);
  *a6 = 2 * v14;
  *a4 = v15;
  if ( v15 >= 0x2BE )
    return (unsigned int)-2147483643;
  memmove(a2, v11, v15);
  v16 = a7;
  if ( a7 )
  {
    EntryPointActivationContext = v21[5];
    if ( v21[5] != (wchar_t *)-1LL )
LABEL_9:
      *v16 = EntryPointActivationContext;
  }
  return (unsigned int)EntryForAddress;
}
