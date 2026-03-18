/*
 * XREFs of MiSmallVaStillMapsFrame @ 0x140139038
 * Callers:
 *     MiStealPage @ 0x1400A0834 (MiStealPage.c)
 *     MiLockStealUserVm @ 0x1400E22B4 (MiLockStealUserVm.c)
 *     MiLockStealSystemVm @ 0x14012C2F0 (MiLockStealSystemVm.c)
 * Callees:
 *     MiFillPteHierarchy @ 0x14005F010 (MiFillPteHierarchy.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400C5EE0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPageTableStillExists @ 0x140139128 (MiPageTableStillExists.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 */

_BOOL8 __fastcall MiSmallVaStillMapsFrame(unsigned __int64 a1, __int64 a2)
{
  _BOOL8 result; // rax
  unsigned __int64 v5[5]; // [rsp+20h] [rbp-28h] BYREF
  int v6; // [rsp+60h] [rbp+18h] BYREF
  __int64 v7; // [rsp+68h] [rbp+20h] BYREF

  memset(v5, 0, 0x20uLL);
  MiFillPteHierarchy(a1, v5);
  result = 0;
  if ( (unsigned int)MiPageTableStillExists(v5, &v6) )
  {
    if ( !v6 )
    {
      if ( a2 == -1 )
        return 1;
      v7 = MI_READ_PTE_LOCK_FREE(v5[0]);
      if ( (v7 & 1) != 0
        && ((((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v7) >> 12) & 0xFFFFFFFFFLL) == a2
         || v5[0] == 0xFFFFF6FB7DBEDF68uLL
         && (*(_QWORD *)(48 * a2 - 0x57FFFFFFFD8LL) & 0xFFFFFFFFFLL) == a2
         && a2 == KeGetCurrentThread()->ApcState.Process->UserDirectoryTableBase >> 12) )
      {
        return 1;
      }
    }
  }
  return result;
}
