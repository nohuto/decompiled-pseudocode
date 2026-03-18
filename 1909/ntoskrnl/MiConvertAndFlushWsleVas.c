/*
 * XREFs of MiConvertAndFlushWsleVas @ 0x1400CAD14
 * Callers:
 *     MiEliminateZeroPages @ 0x1405ECDD0 (MiEliminateZeroPages.c)
 * Callees:
 *     MiFreeWsleList @ 0x140025040 (MiFreeWsleList.c)
 *     MiLockLowestValidPageTable @ 0x14004AE30 (MiLockLowestValidPageTable.c)
 *     MiLockWorkingSetShared @ 0x14005D6D0 (MiLockWorkingSetShared.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400A5D60 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUnlockWorkingSetShared @ 0x1400AC920 (MiUnlockWorkingSetShared.c)
 *     MiGetWsleContents @ 0x1400CAFE0 (MiGetWsleContents.c)
 *     MiUnlockPageTableInternal @ 0x1401000D0 (MiUnlockPageTableInternal.c)
 */

void __fastcall MiConvertAndFlushWsleVas(__int64 a1, __int64 a2)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rbp
  unsigned __int8 v6; // r15
  __int64 i; // r9
  __int64 v8; // rcx
  __int64 v9; // r9
  __int64 v10; // r10
  __int64 v11; // [rsp+58h] [rbp+10h] BYREF

  if ( *(_DWORD *)(a2 + 12) )
  {
    v4 = *(_QWORD *)(a2 + 24);
    v5 = 0LL;
    v6 = MiLockWorkingSetShared(a1);
    if ( MiLockLowestValidPageTable(a1, ((v4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, (unsigned __int64 *)&v11) == ((v4 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL )
    {
      for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a2 + 12); i = (unsigned int)(v9 + 1) )
      {
        v11 = MI_READ_PTE_LOCK_FREE(((*(_QWORD *)(a2 + 8 * i + 24) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
        if ( (v11 & 1) != 0
          && (MiGetWsleContents(v8, v10) & 0xF) != 0xA
          && *(__int64 *)(48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v11) >> 12) & 0xFFFFFFFFFLL)
                        - 0x57FFFFFFFF8LL) < 0 )
        {
          *(_QWORD *)(a2 + 8 * v5 + 24) = *(_QWORD *)(a2 + 8 * v9 + 24);
          v5 = (unsigned int)(v5 + 1);
        }
      }
      if ( (_DWORD)v5 )
      {
        *(_DWORD *)(a2 + 12) = v5;
        MiFreeWsleList(a1, a2, 0);
      }
      else
      {
        *(_DWORD *)(a2 + 12) = 0;
      }
    }
    else
    {
      *(_DWORD *)(a2 + 12) = 0;
    }
    MiUnlockPageTableInternal(a1);
    MiUnlockWorkingSetShared(a1, v6);
  }
}
