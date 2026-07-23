/*
 * XREFs of BiCleanupLoadedStores @ 0x14073D6DC
 * Callers:
 *     BiOpenSystemStore @ 0x14073EE6C (BiOpenSystemStore.c)
 * Callees:
 *     _wcsnicmp @ 0x1401A0960 (_wcsnicmp.c)
 *     wcstoul @ 0x1401A2C30 (wcstoul.c)
 *     ZwClose @ 0x1401C0E30 (ZwClose.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     BcdForciblyUnloadStore @ 0x140729F08 (BcdForciblyUnloadStore.c)
 *     BiUnloadHiveByHandle @ 0x140729F9C (BiUnloadHiveByHandle.c)
 *     BiIsWinPEBoot @ 0x14073E40C (BiIsWinPEBoot.c)
 *     BiIsSystemStore @ 0x14073E9E4 (BiIsSystemStore.c)
 *     BiEnumerateSubKeys @ 0x14073EB60 (BiEnumerateSubKeys.c)
 *     BiOpenKey @ 0x14073FA30 (BiOpenKey.c)
 *     BiCloseKey @ 0x14073FBB4 (BiCloseKey.c)
 *     BiOpenKeyNonBcd @ 0x140740FA0 (BiOpenKeyNonBcd.c)
 */

void __fastcall BiCleanupLoadedStores(char a1)
{
  char IsWinPEBoot; // r12
  const wchar_t **v3; // rdi
  __int64 v4; // r14
  __int64 v5; // rdx
  __int64 v6; // r8
  char IsSystemStore; // al
  HANDLE BcdStoreHandle; // [rsp+48h] [rbp+10h] BYREF
  HANDLE Handle; // [rsp+50h] [rbp+18h] BYREF
  PVOID P; // [rsp+58h] [rbp+20h] BYREF

  P = 0LL;
  Handle = 0LL;
  IsWinPEBoot = BiIsWinPEBoot();
  if ( (int)BiOpenKeyNonBcd(0LL, L"\\Registry\\Machine", 983103LL, &Handle) >= 0 )
  {
    if ( (int)BiEnumerateSubKeys(Handle, &P, &BcdStoreHandle) >= 0 && (_DWORD)BcdStoreHandle )
    {
      v3 = (const wchar_t **)P;
      v4 = (unsigned int)BcdStoreHandle;
      do
      {
        if ( !wcsnicmp(*v3, L"BCD", 3uLL)
          && wcstoul(*v3 + 3, 0LL, 10) != -1
          && (int)BiOpenKey(Handle, *v3, 131097LL, &BcdStoreHandle) >= 0 )
        {
          IsSystemStore = BiIsSystemStore(BcdStoreHandle, v5, v6);
          if ( (a1 & 0x10) != 0 && IsSystemStore )
          {
            BcdForciblyUnloadStore(BcdStoreHandle);
          }
          else if ( (a1 & 8) != 0 || IsWinPEBoot || !IsSystemStore )
          {
            BiUnloadHiveByHandle((__int64)BcdStoreHandle, 0);
          }
          else
          {
            BiCloseKey(BcdStoreHandle);
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
