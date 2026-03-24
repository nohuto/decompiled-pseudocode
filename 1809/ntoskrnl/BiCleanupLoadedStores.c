/*
 * XREFs of BiCleanupLoadedStores @ 0x1407116B0
 * Callers:
 *     BiOpenSystemStore @ 0x140712C04 (BiOpenSystemStore.c)
 * Callees:
 *     _wcsnicmp @ 0x140195A70 (_wcsnicmp.c)
 *     wcstoul @ 0x140197CC0 (wcstoul.c)
 *     ZwClose @ 0x1401B8370 (ZwClose.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 *     BcdForciblyUnloadStore @ 0x1406E171C (BcdForciblyUnloadStore.c)
 *     BiUnloadHiveByHandle @ 0x1406E17B0 (BiUnloadHiveByHandle.c)
 *     BiIsWinPEBoot @ 0x1407121EC (BiIsWinPEBoot.c)
 *     BiIsSystemStore @ 0x1407127A8 (BiIsSystemStore.c)
 *     BiEnumerateSubKeys @ 0x140712924 (BiEnumerateSubKeys.c)
 *     BiOpenKey @ 0x140713780 (BiOpenKey.c)
 *     BiCloseKey @ 0x1407138F0 (BiCloseKey.c)
 *     BiOpenKeyNonBcd @ 0x140714BD8 (BiOpenKeyNonBcd.c)
 */

void __fastcall BiCleanupLoadedStores(char a1)
{
  char IsWinPEBoot; // r12
  const wchar_t **v3; // rdi
  __int64 v4; // r14
  __int64 v5; // rdx
  __int64 v6; // r8
  char IsSystemStore; // al
  __int64 v8; // [rsp+48h] [rbp+10h] BYREF
  HANDLE Handle; // [rsp+50h] [rbp+18h] BYREF
  PVOID P; // [rsp+58h] [rbp+20h] BYREF

  P = 0LL;
  Handle = 0LL;
  IsWinPEBoot = BiIsWinPEBoot();
  if ( (int)BiOpenKeyNonBcd(0LL, L"\\Registry\\Machine", 983103LL, &Handle) >= 0 )
  {
    if ( (int)BiEnumerateSubKeys(Handle, &P, &v8) >= 0 && (_DWORD)v8 )
    {
      v3 = (const wchar_t **)P;
      v4 = (unsigned int)v8;
      do
      {
        if ( !wcsnicmp(*v3, L"BCD", 3uLL)
          && wcstoul(*v3 + 3, 0LL, 10) != -1
          && (int)BiOpenKey(Handle, *v3, 131097LL, &v8) >= 0 )
        {
          IsSystemStore = BiIsSystemStore(v8, v5, v6);
          if ( (a1 & 0x10) != 0 && IsSystemStore )
          {
            BcdForciblyUnloadStore(v8);
          }
          else if ( (a1 & 8) != 0 || IsWinPEBoot || !IsSystemStore )
          {
            BiUnloadHiveByHandle(v8, 0);
          }
          else
          {
            BiCloseKey(v8);
          }
        }
        ++v3;
        --v4;
      }
      while ( v4 );
    }
    if ( P )
      ExFreePoolWithTag(P, 0x4B444342u);
  }
  if ( Handle )
    ZwClose(Handle);
}
