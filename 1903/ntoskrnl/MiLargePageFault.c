/*
 * XREFs of MiLargePageFault @ 0x1402D2D08
 * Callers:
 *     MiInPagePageTable @ 0x14005D730 (MiInPagePageTable.c)
 *     MiUserFault @ 0x1400CADF0 (MiUserFault.c)
 * Callees:
 *     MiFlushTbList @ 0x14004FFE0 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x140058CD0 (MiInsertTbFlushEntry.c)
 *     MiWriteValidPteNewProtection @ 0x14005E7F0 (MiWriteValidPteNewProtection.c)
 *     MiNoFaultFound @ 0x140075DA0 (MiNoFaultFound.c)
 *     KeFlushSingleTb @ 0x14009F7D4 (KeFlushSingleTb.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400C5EE0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiCheckSystemNxFault @ 0x1401341C4 (MiCheckSystemNxFault.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     MiCanGrantExecute @ 0x1402D22EC (MiCanGrantExecute.c)
 *     MiGetVirtualFaultPageInfo @ 0x1402D2A3C (MiGetVirtualFaultPageInfo.c)
 *     MiValidVirtualizationFault @ 0x1402D30A4 (MiValidVirtualizationFault.c)
 */

__int64 __fastcall MiLargePageFault(__int64 a1, unsigned __int64 a2)
{
  int v4; // r15d
  __int64 v5; // r14
  unsigned __int64 v6; // rcx
  signed __int64 v7; // rax
  __int64 v8; // r9
  signed __int64 v9; // rdi
  unsigned __int64 v10; // r14
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rbx
  _BYTE *v15; // rbx
  unsigned __int64 v16; // rax
  _QWORD *v17; // r11
  unsigned __int64 v18; // r10
  unsigned __int64 v19; // r10
  __int64 v20; // rcx
  __int64 i; // r9
  __int16 v22; // ax
  __int64 v23; // rax
  _QWORD v25[2]; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v26[24]; // [rsp+40h] [rbp-C0h] BYREF

  memset(v26, 0, 0xB8uLL);
  v4 = 1;
  v5 = 0x200000LL;
  v6 = (__int64)(a2 << 25) >> 16 << 25 >> 16;
  while ( v6 >= 0xFFFFF68000000000uLL && v6 <= 0xFFFFF6FFFFFFFFFFuLL )
  {
    ++v4;
    v6 = (__int64)(v6 << 25) >> 16;
    v5 <<= 9;
  }
  v7 = MI_READ_PTE_LOCK_FREE(a2);
  v8 = *(_QWORD *)(a1 + 16);
  v9 = v7;
  v25[0] = v7;
  if ( (v8 & 1) != 0 && *(_BYTE *)(v8 & 0xFFFFFFFFFFFFFFFEuLL) == 1 )
    return 0LL;
  if ( (*(_DWORD *)(a1 + 80) & 0x20) == 0 )
  {
    if ( (*(_BYTE *)(a1 + 8) & 2) != 0 )
    {
      if ( (v7 & 0x800) == 0 )
        return 3221225477LL;
      if ( (unsigned int)MiNoFaultFound(a1, (volatile signed __int64 *)a2, *(_QWORD *)a1, v8, 0, v7) )
      {
        WORD2(v26[0]) = 0;
        v10 = *(_QWORD *)a1 & -v5;
        v26[2] = 0LL;
        v26[3] = 0LL;
        LODWORD(v26[0]) = 1;
        v26[1] = 20LL;
        MiInsertTbFlushEntry((__int64)v26, v10, 1LL, v4);
        MiFlushTbList((int *)v26, v11, v12, v13);
      }
    }
    if ( (*(_BYTE *)(a1 + 8) & 0x10) == 0 )
    {
LABEL_22:
      v14 = *(_QWORD *)(a1 + 16);
      if ( (v14 & 1) != 0 )
      {
        v15 = (_BYTE *)(v14 & 0xFFFFFFFFFFFFFFFEuLL);
        if ( *v15 == 5 )
        {
          if ( (unsigned int)MiValidVirtualizationFault(a1, v15, a2) )
          {
            MiGetVirtualFaultPageInfo((__int64)v15, *(_QWORD *)a1);
            v16 = MI_READ_PTE_LOCK_FREE((unsigned __int64)v25);
            v19 = v18 >> 12;
            v20 = 1LL;
            for ( i = (v16 >> 12) & 0xFFFFFFFFFLL; v4; --v4 )
            {
              v22 = v19;
              v19 >>= 9;
              v23 = v20 * (v22 & 0x1FF);
              v20 <<= 9;
              i += v23;
            }
            *v17 ^= (i ^ *v17) & 0xFFFFFFFFFFFFFLL;
          }
        }
      }
      return 0LL;
    }
    if ( v9 >= 0 )
    {
      if ( (*(_DWORD *)(a1 + 80) & 0x40) == 0 )
        MiCheckSystemNxFault(a1, v9, 7u);
      goto LABEL_22;
    }
    if ( MiCanGrantExecute((__int64)KeGetCurrentThread()->ApcState.Process, *(_QWORD *)a1)
      && ((*(_QWORD *)(48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)v25) >> 12) & 0xFFFFFFFFFLL)
                     - 0x57FFFFFFFD8LL) >> 53) & 1) != 0 )
    {
      v25[0] = v9 & 0x7FFFFFFFFFFFFFFFLL;
      if ( (MiFlags & 0x100) != 0 || (MiFlags & 0x200) != 0 )
        v25[0] = v9 & 0x7FFFFFFFFFFFFFDFLL | 0x20;
      MiWriteValidPteNewProtection(a2);
      if ( (MiFlags & 0x100) == 0 && (MiFlags & 0x200) == 0 )
        KeFlushSingleTb(*(_QWORD *)a1, 1u, 0);
      goto LABEL_22;
    }
  }
  return 3221225477LL;
}
