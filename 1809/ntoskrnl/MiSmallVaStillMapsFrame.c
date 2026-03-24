/*
 * XREFs of MiSmallVaStillMapsFrame @ 0x1401349F4
 * Callers:
 *     MiLockStealSystemVm @ 0x1400E9978 (MiLockStealSystemVm.c)
 *     MiStealPage @ 0x1400EBF44 (MiStealPage.c)
 *     MiLockStealUserVm @ 0x1400EDC14 (MiLockStealUserVm.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MiFillPteHierarchy @ 0x1400990E0 (MiFillPteHierarchy.c)
 *     MiPageTableStillExists @ 0x140134AC4 (MiPageTableStillExists.c)
 */

_BOOL8 __fastcall MiSmallVaStillMapsFrame(unsigned __int64 a1)
{
  __int64 v1; // r11
  unsigned __int64 v2; // rax
  __int64 v3; // r11
  _BOOL8 result; // rax
  unsigned __int64 v5[5]; // [rsp+20h] [rbp-28h] BYREF
  int v6; // [rsp+60h] [rbp+18h] BYREF
  __int64 v7; // [rsp+68h] [rbp+20h] BYREF

  MiFillPteHierarchy(a1, v5);
  result = 0;
  if ( (unsigned int)MiPageTableStillExists(v5, &v6) )
  {
    if ( !v6 )
    {
      if ( v1 == -1 )
        return 1;
      v7 = MI_READ_PTE_LOCK_FREE(v5[0]);
      if ( (v7 & 1) != 0 )
      {
        v2 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v7);
        if ( ((v2 >> 12) & 0xFFFFFFFFFLL) == v3
          || v5[0] == 0xFFFFF6FB7DBEDF68uLL
          && (*(_QWORD *)(48 * v3 - 0x57FFFFFFFD8LL) & 0xFFFFFFFFFLL) == v3
          && v3 == KeGetCurrentThread()->ApcState.Process->UserDirectoryTableBase >> 12 )
        {
          return 1;
        }
      }
    }
  }
  return result;
}
