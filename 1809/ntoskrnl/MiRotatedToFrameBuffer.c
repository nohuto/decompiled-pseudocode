/*
 * XREFs of MiRotatedToFrameBuffer @ 0x140094724
 * Callers:
 *     MiGetPageProtection @ 0x14003FFE0 (MiGetPageProtection.c)
 *     MiDeleteVa @ 0x1400696F0 (MiDeleteVa.c)
 *     MiProtectPrivateMemory @ 0x140070DB0 (MiProtectPrivateMemory.c)
 *     MiSetProtectionOnSection @ 0x140071E70 (MiSetProtectionOnSection.c)
 *     MiActOnPte @ 0x14009404C (MiActOnPte.c)
 *     MiGetWorkingSetInfoList @ 0x140096530 (MiGetWorkingSetInfoList.c)
 *     MiRevertValidPte @ 0x1400B22A0 (MiRevertValidPte.c)
 *     NtUnlockVirtualMemory @ 0x1400B3CD0 (NtUnlockVirtualMemory.c)
 *     MiLockStealUserVm @ 0x1400EDC94 (MiLockStealUserVm.c)
 *     MiCheckCommitReleaseFromVad @ 0x1402A3BBC (MiCheckCommitReleaseFromVad.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 */

_BOOL8 __fastcall MiRotatedToFrameBuffer(unsigned __int64 a1)
{
  unsigned __int64 v1; // rax
  unsigned __int64 v2; // r9
  __int64 v3; // r10
  __int64 v4; // r11
  unsigned __int64 v5; // rax
  _BOOL8 result; // rax
  __int64 v7; // [rsp+38h] [rbp+10h] BYREF

  v7 = MI_READ_PTE_LOCK_FREE(a1);
  result = 0;
  if ( (v7 & 1) != 0 )
  {
    v1 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v7);
    v3 = 6 * ((v1 >> 12) & 0xFFFFFFFFFLL);
    if ( ((*(_QWORD *)(48 * ((v1 >> 12) & 0xFFFFFFFFFLL) - 0x57FFFFFFFD8LL) >> 53) & 1) == 0 )
      return 1;
    v4 = *(_QWORD *)(48 * ((v1 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL + 8);
    if ( (v4 | 0x8000000000000000uLL) != v2
      || (v5 = MI_READ_PTE_LOCK_FREE(((v2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL),
          ((*(_QWORD *)(8 * v3 - 0x58000000000LL + 40) ^ (v5 >> 12)) & 0xFFFFFFFFFLL) != 0) )
    {
      if ( (*(_QWORD *)(8 * v3 - 0x58000000000LL + 40) & 0x200000000000000LL) == 0 || v4 < 0 )
        return 1;
    }
  }
  return result;
}
