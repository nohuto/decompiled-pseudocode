/*
 * XREFs of MiLargePageFault @ 0x1402BC5C8
 * Callers:
 *     MiUserFault @ 0x140044870 (MiUserFault.c)
 *     MiInPagePageTable @ 0x140098720 (MiInPagePageTable.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MiFlushTbList @ 0x1400740B0 (MiFlushTbList.c)
 *     MiWriteValidPteNewProtection @ 0x140087960 (MiWriteValidPteNewProtection.c)
 *     MiInsertTbFlushEntry @ 0x1400B3A30 (MiInsertTbFlushEntry.c)
 *     MiNoFaultFound @ 0x1400E9414 (MiNoFaultFound.c)
 *     MiCheckSystemNxFault @ 0x1400E9508 (MiCheckSystemNxFault.c)
 *     KeFlushSingleTb @ 0x1400ECE74 (KeFlushSingleTb.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     MiCanGrantExecute @ 0x1402BBD50 (MiCanGrantExecute.c)
 *     MiGetVirtualFaultPageInfo @ 0x1402BC3F0 (MiGetVirtualFaultPageInfo.c)
 *     MiValidVirtualizationFault @ 0x1402BC950 (MiValidVirtualizationFault.c)
 */

__int64 __fastcall MiLargePageFault(__int64 a1, unsigned __int64 a2)
{
  int v2; // r15d
  __int64 v5; // r14
  unsigned __int64 v6; // rdx
  signed __int64 v7; // rax
  __int64 v8; // r9
  signed __int64 v9; // rdi
  unsigned __int64 v10; // r14
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rbx
  __int64 v15; // rbx
  _BYTE *v16; // rbx
  unsigned __int64 v17; // rax
  _QWORD *v18; // r11
  unsigned __int64 v19; // r10
  unsigned __int64 v20; // r10
  __int64 v21; // rcx
  __int64 i; // r9
  __int16 v23; // ax
  __int64 v24; // rax
  _QWORD v26[2]; // [rsp+30h] [rbp-D0h] BYREF
  int v27; // [rsp+40h] [rbp-C0h] BYREF
  __int16 v28; // [rsp+44h] [rbp-BCh]
  int v29; // [rsp+48h] [rbp-B8h]
  int v30; // [rsp+4Ch] [rbp-B4h]
  __int64 v31; // [rsp+50h] [rbp-B0h]
  __int64 v32; // [rsp+58h] [rbp-A8h]

  v2 = 1;
  v5 = 0x200000LL;
  v6 = (__int64)(a2 << 25) >> 16 << 25 >> 16;
  while ( v6 >= 0xFFFFF68000000000uLL && v6 <= 0xFFFFF6FFFFFFFFFFuLL )
  {
    ++v2;
    v6 = (__int64)(v6 << 25) >> 16;
    v5 <<= 9;
  }
  v7 = MI_READ_PTE_LOCK_FREE(a2);
  v8 = *(_QWORD *)(a1 + 16);
  v9 = v7;
  v26[0] = v7;
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
        v30 = 0;
        v28 = 0;
        v10 = *(_QWORD *)a1 & -v5;
        v31 = 0LL;
        v32 = 0LL;
        v27 = 1;
        v29 = 20;
        MiInsertTbFlushEntry((__int64)&v27, v10, 1LL, v2);
        MiFlushTbList(&v27, v11, v12, v13);
      }
    }
    if ( (*(_BYTE *)(a1 + 8) & 0x10) == 0 )
    {
LABEL_22:
      v15 = *(_QWORD *)(a1 + 16);
      if ( (v15 & 1) != 0 )
      {
        v16 = (_BYTE *)(v15 & 0xFFFFFFFFFFFFFFFEuLL);
        if ( *v16 == 5 )
        {
          if ( (unsigned int)MiValidVirtualizationFault(a1, v16, a2) )
          {
            MiGetVirtualFaultPageInfo((__int64)v16, *(_QWORD *)a1);
            v17 = MI_READ_PTE_LOCK_FREE((unsigned __int64)v26);
            v20 = v19 >> 12;
            v21 = 1LL;
            for ( i = (v17 >> 12) & 0xFFFFFFFFFLL; v2; --v2 )
            {
              v23 = v20;
              v20 >>= 9;
              v24 = v21 * (v23 & 0x1FF);
              v21 <<= 9;
              i += v24;
            }
            *v18 ^= (i ^ *v18) & 0xFFFFFFFFFFFFFLL;
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
      && ((*(_QWORD *)(48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)v26) >> 12) & 0xFFFFFFFFFLL)
                     - 0x57FFFFFFFD8LL) >> 53) & 1) != 0 )
    {
      v14 = v9 & 0x7FFFFFFFFFFFFFFFLL;
      v26[0] = v9 & 0x7FFFFFFFFFFFFFFFLL;
      if ( (MiFlags & 0x100) != 0 || (MiFlags & 0x200) != 0 )
      {
        v14 = v9 & 0x7FFFFFFFFFFFFFDFLL | 0x20;
        v26[0] = v14;
      }
      MiWriteValidPteNewProtection(a2, v14);
      if ( (MiFlags & 0x100) == 0 && (MiFlags & 0x200) == 0 )
        KeFlushSingleTb(*(_QWORD *)a1, 1u, 0);
      goto LABEL_22;
    }
  }
  return 3221225477LL;
}
