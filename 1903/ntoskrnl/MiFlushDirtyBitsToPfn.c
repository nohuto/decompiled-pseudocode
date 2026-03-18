/*
 * XREFs of MiFlushDirtyBitsToPfn @ 0x1400EC148
 * Callers:
 *     MmFlushVirtualMemory @ 0x14069E9FC (MmFlushVirtualMemory.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002D3D0 (KeYieldProcessorEx.c)
 *     MiFlushTbList @ 0x14004FFE0 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x140058CD0 (MiInsertTbFlushEntry.c)
 *     MiGetLeafVa @ 0x14005A9F0 (MiGetLeafVa.c)
 *     MiLockWorkingSetShared @ 0x14005D630 (MiLockWorkingSetShared.c)
 *     MiGetNextPageTable @ 0x14005DF80 (MiGetNextPageTable.c)
 *     MiWriteValidPteNewProtection @ 0x14005E7F0 (MiWriteValidPteNewProtection.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400C5EE0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUnlockWorkingSetShared @ 0x1400CCAA0 (MiUnlockWorkingSetShared.c)
 *     MiUnlockPageTableInternal @ 0x1400FDF40 (MiUnlockPageTableInternal.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 */

void *__fastcall MiFlushDirtyBitsToPfn(unsigned __int64 a1, unsigned __int64 a2, __int64 a3)
{
  void *result; // rax
  unsigned int v7; // r12d
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // r15
  __int64 v10; // r13
  char v11; // di
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned __int64 v16; // rdi
  unsigned __int64 NextPageTable; // rax
  unsigned __int64 v18; // rsi
  unsigned __int64 v19; // r14
  unsigned __int64 v20; // rdi
  __int64 v21; // rdx
  unsigned __int64 v22; // r14
  __int64 v23; // rcx
  __int64 v24; // rax
  unsigned __int64 v25; // rbx
  unsigned __int64 v26; // rbx
  char i; // [rsp+30h] [rbp-D0h]
  __int64 v28; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v29; // [rsp+40h] [rbp-C0h] BYREF
  int v30; // [rsp+44h] [rbp-BCh] BYREF
  int v31; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v32; // [rsp+50h] [rbp-B0h]
  unsigned __int64 v33; // [rsp+58h] [rbp-A8h]
  _QWORD v34[24]; // [rsp+60h] [rbp-A0h] BYREF

  result = memset(v34, 0, 0xB8uLL);
  v7 = 0;
  if ( !byte_140465AA0 )
  {
    LODWORD(v34[0]) = 1;
    WORD2(v34[0]) = 0;
    v34[2] = 0LL;
    LODWORD(v34[1]) = 20;
    v34[3] = 0LL;
    v8 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v9 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v32 = *(_QWORD *)(a3 + 184) + 1280LL;
    v10 = v32;
    v11 = MiLockWorkingSetShared(v32);
    for ( i = v11; v8 <= v9; v11 = i )
    {
      NextPageTable = MiGetNextPageTable(v8, v9, (__int64)v34, v11, 0, &v29);
      v8 = NextPageTable;
      if ( !NextPageTable )
        break;
      v18 = ((NextPageTable >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v33 = v18;
      if ( v29 )
      {
        v20 = ((NextPageTable >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        v21 = v29;
        do
        {
          v18 = ((v18 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          --v21;
        }
        while ( v21 );
        v22 = 0x200000LL;
        if ( v29 > 1 )
        {
          v23 = v29 - 1;
          do
          {
            v20 = ((v20 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            v22 <<= 9;
            --v23;
          }
          while ( v23 );
        }
        v24 = MI_READ_PTE_LOCK_FREE(v20);
        v28 = v24;
        if ( (v24 & 1) != 0 && (v24 & 0x42) != 0 )
        {
          v25 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v28) >> 12) & 0xFFFFFFFFFLL) + 24;
          if ( v22 )
          {
            v26 = v25 - 0x58000000000LL;
            do
            {
              v30 = 0;
              while ( _interlockedbittestandset64((volatile signed __int32 *)v26, 0x3FuLL) )
              {
                do
                  KeYieldProcessorEx(&v30);
                while ( *(__int64 *)v26 < 0 );
              }
              *(_BYTE *)(v26 + 10) |= 0x10u;
              _InterlockedAnd64((volatile signed __int64 *)v26, 0x7FFFFFFFFFFFFFFFuLL);
              v7 += 4096;
              v26 += 48LL;
            }
            while ( v7 < v22 );
            v10 = v32;
          }
          v7 = 0;
        }
        v8 = ((MiGetLeafVa(v20 + 8) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      }
      else
      {
        v16 = (__int64)(NextPageTable << 25) >> 16;
        do
        {
          v12 = MI_READ_PTE_LOCK_FREE(v8);
          v28 = v12;
          if ( (v12 & 1) != 0 && (v12 & 0x42) != 0 )
          {
            v19 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v28) >> 12) & 0xFFFFFFFFFLL)
                - 0x58000000000LL;
            v31 = 0;
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v19 + 24), 0x3FuLL) )
            {
              do
                KeYieldProcessorEx(&v31);
              while ( *(__int64 *)(v19 + 24) < 0 );
            }
            *(_BYTE *)(v19 + 34) |= 0x10u;
            _InterlockedAnd64((volatile signed __int64 *)(v19 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            MiWriteValidPteNewProtection(v8);
            MiInsertTbFlushEntry((__int64)v34, v16, 1LL, 0);
          }
          v16 += 4096LL;
          v8 += 8LL;
        }
        while ( (v16 & 0x1FFFFF) != 0 && v8 <= v9 );
        MiFlushTbList((int *)v34, v13, v14, v15);
        v10 = v32;
      }
      MiUnlockPageTableInternal(v10);
    }
    return (void *)MiUnlockWorkingSetShared(v10, v11);
  }
  return result;
}
