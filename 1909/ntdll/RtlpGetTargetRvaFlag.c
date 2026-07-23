/*
 * XREFs of RtlpGetTargetRvaFlag @ 0x1800553F8
 * Callers:
 *     RtlGuardIsExportSuppressedAddress @ 0x1800553CC (RtlGuardIsExportSuppressedAddress.c)
 *     RtlpGuardIsSuppressedAddress @ 0x1800F7590 (RtlpGuardIsSuppressedAddress.c)
 * Callees:
 *     LdrImageDirectoryEntryToLoadConfig @ 0x18001F450 (LdrImageDirectoryEntryToLoadConfig.c)
 *     __security_check_cookie @ 0x18008CE50 (__security_check_cookie.c)
 *     bsearch_s @ 0x18008F9C0 (bsearch_s.c)
 *     ZwQueryVirtualMemory @ 0x18009D2F0 (ZwQueryVirtualMemory.c)
 */

char __fastcall RtlpGetTargetRvaFlag(PVOID BaseAddress, _BYTE *a2)
{
  int v4; // ebx
  _DWORD *Config; // rax
  unsigned int v6; // ecx
  rsize_t v7; // r8
  const void *v8; // rdx
  unsigned int v9; // ecx
  _BYTE *v10; // rax
  char v11; // cl
  char result; // al
  int v13[2]; // [rsp+30h] [rbp-38h] BYREF
  char v14; // [rsp+40h] [rbp-28h]
  _QWORD Key[2]; // [rsp+48h] [rbp-20h] BYREF

  Key[0] = 0LL;
  Key[1] = 0LL;
  if ( ZwQueryVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress, MemoryImageInformation, v13, 0x18uLL, 0LL) < 0 )
    return 0;
  v4 = v13[0];
  if ( !*(_QWORD *)v13 )
    return 0;
  if ( (v14 & 2) != 0 )
    return 0;
  if ( (v14 & 1) != 0 )
    return 0;
  if ( (unsigned __int64)BaseAddress < *(_QWORD *)v13 )
    return 0;
  Config = LdrImageDirectoryEntryToLoadConfig(*(void **)v13);
  if ( !Config )
    return 0;
  if ( *Config < 0x94u )
    return 0;
  v6 = Config[36];
  v7 = (unsigned int)Config[34];
  if ( (v6 & 0x400) == 0 )
    return 0;
  v8 = (const void *)*((_QWORD *)Config + 16);
  if ( !v8 )
    return 0;
  v9 = (v6 >> 28) + 4;
  if ( v9 <= 4 )
    return 0;
  LODWORD(Key[0]) = (_DWORD)BaseAddress - v4;
  v10 = bsearch_s(Key, v8, v7, v9, RtlpTargetCompare, 0LL);
  if ( !v10 )
    return 0;
  v11 = v10[4];
  result = 1;
  *a2 = v11;
  return result;
}
