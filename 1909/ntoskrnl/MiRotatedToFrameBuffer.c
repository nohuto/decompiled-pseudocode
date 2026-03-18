/*
 * XREFs of MiRotatedToFrameBuffer @ 0x1400C02A0
 * Callers:
 *     MiProtectPrivateMemory @ 0x140021350 (MiProtectPrivateMemory.c)
 *     MiDeleteVa @ 0x14004B520 (MiDeleteVa.c)
 *     MiRevertValidPte @ 0x14004F990 (MiRevertValidPte.c)
 *     NtUnlockVirtualMemory @ 0x1400A40B0 (NtUnlockVirtualMemory.c)
 *     MiGetPageProtection @ 0x1400A5DD0 (MiGetPageProtection.c)
 *     MiActOnPte @ 0x1400BE5C0 (MiActOnPte.c)
 *     MiLockStealUserVm @ 0x1400C2478 (MiLockStealUserVm.c)
 *     MiGetWorkingSetInfoList @ 0x14011DB2C (MiGetWorkingSetInfoList.c)
 *     MiMakeVaRangeNoAccess @ 0x140131C14 (MiMakeVaRangeNoAccess.c)
 *     MiCheckCommitReleaseFromVad @ 0x1402BAAEC (MiCheckCommitReleaseFromVad.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x1400A5D60 (MI_READ_PTE_LOCK_FREE.c)
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
