/*
 * XREFs of KiOpPatchCode @ 0x1402B38F0
 * Callers:
 *     KiOp_MOVAPS @ 0x1402B3B10 (KiOp_MOVAPS.c)
 *     KiOp_MOVDQA @ 0x1402B3B90 (KiOp_MOVDQA.c)
 * Callees:
 *     MmMapLockedPagesSpecifyCache @ 0x14002FA50 (MmMapLockedPagesSpecifyCache.c)
 *     ExAcquireFastMutex @ 0x14003E460 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x14003F810 (KeReleaseGuardedMutex.c)
 *     MmUnlockPages @ 0x14006A390 (MmUnlockPages.c)
 *     MiProbeAndLockPages @ 0x14008E9A0 (MiProbeAndLockPages.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     ZwProtectVirtualMemory @ 0x1401C0AD0 (ZwProtectVirtualMemory.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 */

__int64 __fastcall KiOpPatchCode(__int64 a1, unsigned __int64 a2, char a3)
{
  NTSTATUS v5; // edi
  _BYTE *v6; // rax
  ULONG NewAccessProtection; // [rsp+30h] [rbp-78h] BYREF
  SIZE_T NumberOfBytesToProtect; // [rsp+38h] [rbp-70h] BYREF
  PVOID BaseAddress; // [rsp+40h] [rbp-68h] BYREF
  _BYTE MemoryDescriptorList[56]; // [rsp+48h] [rbp-60h] BYREF

  memset(MemoryDescriptorList, 0, sizeof(MemoryDescriptorList));
  BaseAddress = (PVOID)a2;
  NumberOfBytesToProtect = 1LL;
  ExAcquireFastMutex(&KiUserCodePatchMutex);
  v5 = ZwProtectVirtualMemory(
         (HANDLE)0xFFFFFFFFFFFFFFFFLL,
         &BaseAddress,
         &NumberOfBytesToProtect,
         0x40u,
         &NewAccessProtection);
  if ( v5 >= 0 )
  {
    *(_DWORD *)&MemoryDescriptorList[52] = 0;
    *(_WORD *)&MemoryDescriptorList[8] = 8 * (((unsigned __int16)((a2 & 0xFFF) + 4096) >> 12) + 6);
    memset(&MemoryDescriptorList[10], 0, 22);
    *(_QWORD *)&MemoryDescriptorList[32] = a2 & 0xFFFFFFFFFFFFF000uLL;
    *(_QWORD *)&MemoryDescriptorList[44] = a2 & 0xFFF;
    *(_DWORD *)&MemoryDescriptorList[40] = 1;
    v5 = 0;
    MiProbeAndLockPages(MemoryDescriptorList, 1, 1);
    if ( (MemoryDescriptorList[10] & 5) != 0 )
      v6 = *(_BYTE **)&MemoryDescriptorList[24];
    else
      v6 = MmMapLockedPagesSpecifyCache((PMDL)MemoryDescriptorList, 0, MmCached, 0LL, 0, 0x40000010u);
    if ( v6 )
      *v6 = a3;
    else
      v5 = -1073741670;
    MmUnlockPages((PMDL)MemoryDescriptorList);
    ZwProtectVirtualMemory(
      (HANDLE)0xFFFFFFFFFFFFFFFFLL,
      &BaseAddress,
      &NumberOfBytesToProtect,
      NewAccessProtection,
      &NewAccessProtection);
  }
  KeReleaseGuardedMutex(&KiUserCodePatchMutex);
  return (unsigned int)v5;
}
