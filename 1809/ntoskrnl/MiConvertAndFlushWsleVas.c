/*
 * XREFs of MiConvertAndFlushWsleVas @ 0x1400EEC60
 * Callers:
 *     MiEliminateZeroPages @ 0x14066D070 (MiEliminateZeroPages.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUnlockWorkingSetShared @ 0x140046970 (MiUnlockWorkingSetShared.c)
 *     MiLockLowestValidPageTable @ 0x14006C590 (MiLockLowestValidPageTable.c)
 *     MiLockWorkingSetShared @ 0x140076040 (MiLockWorkingSetShared.c)
 *     MiGetWsleContents @ 0x140085F30 (MiGetWsleContents.c)
 *     MiFreeWsleList @ 0x1400B29F0 (MiFreeWsleList.c)
 *     MiUnlockPageTableInternal @ 0x140104B10 (MiUnlockPageTableInternal.c)
 */

void __fastcall MiConvertAndFlushWsleVas(__int64 a1, __int64 a2)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rbp
  unsigned __int8 v6; // r15
  __int64 v7; // r9
  unsigned __int64 valid; // r14
  __int64 i; // r9
  __int64 v10; // rcx
  __int64 v11; // r9
  unsigned __int64 v12; // r10
  __int64 v13; // [rsp+58h] [rbp+10h] BYREF

  if ( *(_DWORD *)(a2 + 12) )
  {
    v4 = *(_QWORD *)(a2 + 24);
    v5 = 0LL;
    v6 = MiLockWorkingSetShared(a1);
    valid = MiLockLowestValidPageTable(a1, ((v4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, (unsigned __int64 *)&v13, v7);
    if ( valid == ((v4 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL )
    {
      for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a2 + 12); i = (unsigned int)(v11 + 1) )
      {
        v13 = MI_READ_PTE_LOCK_FREE(((*(_QWORD *)(a2 + 8 * i + 24) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
        if ( (v13 & 1) != 0
          && (MiGetWsleContents(v10, v12) & 0xF) != 0xA
          && *(__int64 *)(48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v13) >> 12) & 0xFFFFFFFFFLL)
                        - 0x57FFFFFFFF8LL) < 0 )
        {
          *(_QWORD *)(a2 + 8 * v5 + 24) = *(_QWORD *)(a2 + 8 * v11 + 24);
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
    MiUnlockPageTableInternal(a1, valid);
    MiUnlockWorkingSetShared(a1, v6);
  }
}
