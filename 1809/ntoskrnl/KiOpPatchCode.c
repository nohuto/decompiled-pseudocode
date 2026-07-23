/*
 * XREFs of KiOpPatchCode @ 0x14029C7D8
 * Callers:
 *     KiOp_MOVAPS @ 0x14029C9E0 (KiOp_MOVAPS.c)
 *     KiOp_MOVDQA @ 0x14029CA60 (KiOp_MOVDQA.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140014E30 (KeReleaseGuardedMutex.c)
 *     MmUnlockPages @ 0x140033580 (MmUnlockPages.c)
 *     MiProbeAndLockPages @ 0x140040CF0 (MiProbeAndLockPages.c)
 *     ExAcquireFastMutex @ 0x14004E530 (ExAcquireFastMutex.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14005C0C0 (MmMapLockedPagesSpecifyCache.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ZwProtectVirtualMemory @ 0x1401B8CF0 (ZwProtectVirtualMemory.c)
 *     memset @ 0x1401D1980 (memset.c)
 */

__int64 __fastcall KiOpPatchCode(__int64 a1, unsigned __int64 a2, char a3)
{
  NTSTATUS v5; // edi
  _BYTE *v6; // rax
  ULONG NewAccessProtection; // [rsp+30h] [rbp-78h] BYREF
  SIZE_T NumberOfBytesToProtect; // [rsp+38h] [rbp-70h] BYREF
  PVOID BaseAddress; // [rsp+40h] [rbp-68h] BYREF
  _BYTE MemoryDescriptorList[56]; // [rsp+48h] [rbp-60h] BYREF

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
    memset(MemoryDescriptorList, 0, sizeof(MemoryDescriptorList));
    *(_QWORD *)MemoryDescriptorList = 0LL;
    *(_WORD *)&MemoryDescriptorList[8] = 8 * (((unsigned __int16)((a2 & 0xFFF) + 4096) >> 12) + 6);
    *(_WORD *)&MemoryDescriptorList[10] = 0;
    *(_QWORD *)&MemoryDescriptorList[32] = a2 & 0xFFFFFFFFFFFFF000uLL;
    *(_DWORD *)&MemoryDescriptorList[44] = a2 & 0xFFF;
    *(_DWORD *)&MemoryDescriptorList[40] = 1;
    v5 = 0;
    MiProbeAndLockPages((__int64)MemoryDescriptorList, 1, 1);
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
