/*
 * XREFs of MiFlushDirtyBitsToPfn @ 0x140088BA8
 * Callers:
 *     MmFlushVirtualMemory @ 0x14062450C (MmFlushVirtualMemory.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002D7C0 (KeYieldProcessorEx.c)
 *     MiFlushTbList @ 0x140050080 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x140058D70 (MiInsertTbFlushEntry.c)
 *     MiGetLeafVa @ 0x14005AA90 (MiGetLeafVa.c)
 *     MiLockWorkingSetShared @ 0x14005D6D0 (MiLockWorkingSetShared.c)
 *     MiGetNextPageTable @ 0x14005E020 (MiGetNextPageTable.c)
 *     MiWriteValidPteNewProtection @ 0x14005E890 (MiWriteValidPteNewProtection.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400A5D60 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUnlockWorkingSetShared @ 0x1400AC920 (MiUnlockWorkingSetShared.c)
 *     MiUnlockPageTableInternal @ 0x1401000D0 (MiUnlockPageTableInternal.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 */

void *__fastcall MiFlushDirtyBitsToPfn(unsigned __int64 a1, unsigned __int64 a2, __int64 a3)
{
  void *result; // rax
  unsigned int v7; // r12d
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // r15
  __int64 v10; // r13
  __int64 v11; // rdx
  char v12; // di
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned __int64 v17; // rdi
  unsigned __int64 NextPageTable; // rax
  unsigned __int64 v19; // rsi
  unsigned __int64 v20; // r14
  unsigned __int64 v21; // rdi
  __int64 v22; // rdx
  unsigned __int64 v23; // r14
  __int64 v24; // rcx
  __int64 v25; // rax
  unsigned __int64 v26; // rbx
  unsigned __int64 v27; // rbx
  char i; // [rsp+30h] [rbp-D0h]
  __int64 v29; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v30; // [rsp+40h] [rbp-C0h] BYREF
  int v31; // [rsp+44h] [rbp-BCh] BYREF
  int v32; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v33; // [rsp+50h] [rbp-B0h]
  unsigned __int64 v34; // [rsp+58h] [rbp-A8h]
  _QWORD v35[24]; // [rsp+60h] [rbp-A0h] BYREF

  result = memset(v35, 0, 0xB8uLL);
  v7 = 0;
  if ( !byte_1404657A0 )
  {
    LODWORD(v35[0]) = 1;
    WORD2(v35[0]) = 0;
    v35[2] = 0LL;
    LODWORD(v35[1]) = 20;
    v35[3] = 0LL;
    v8 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v9 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v33 = *(_QWORD *)(a3 + 184) + 1280LL;
    v10 = v33;
    v12 = MiLockWorkingSetShared(v33);
    for ( i = v12; v8 <= v9; v12 = i )
    {
      NextPageTable = MiGetNextPageTable(v8, v9, (__int64)v35, v12, 0, &v30);
      v8 = NextPageTable;
      if ( !NextPageTable )
        break;
      v19 = ((NextPageTable >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v34 = v19;
      if ( v30 )
      {
        v21 = ((NextPageTable >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        v22 = v30;
        do
        {
          v19 = ((v19 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          --v22;
        }
        while ( v22 );
        v23 = 0x200000LL;
        if ( v30 > 1 )
        {
          v24 = v30 - 1;
          do
          {
            v21 = ((v21 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            v23 <<= 9;
            --v24;
          }
          while ( v24 );
        }
        v25 = MI_READ_PTE_LOCK_FREE(v21);
        v29 = v25;
        if ( (v25 & 1) != 0 && (v25 & 0x42) != 0 )
        {
          v26 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v29) >> 12) & 0xFFFFFFFFFLL) + 24;
          if ( v23 )
          {
            v27 = v26 - 0x58000000000LL;
            do
            {
              v31 = 0;
              while ( _interlockedbittestandset64((volatile signed __int32 *)v27, 0x3FuLL) )
              {
                do
                  KeYieldProcessorEx(&v31);
                while ( *(__int64 *)v27 < 0 );
              }
              *(_BYTE *)(v27 + 10) |= 0x10u;
              _InterlockedAnd64((volatile signed __int64 *)v27, 0x7FFFFFFFFFFFFFFFuLL);
              v7 += 4096;
              v27 += 48LL;
            }
            while ( v7 < v23 );
            v10 = v33;
          }
          v7 = 0;
        }
        v8 = ((MiGetLeafVa(v21 + 8) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      }
      else
      {
        v17 = (__int64)(NextPageTable << 25) >> 16;
        do
        {
          v13 = MI_READ_PTE_LOCK_FREE(v8);
          v29 = v13;
          if ( (v13 & 1) != 0 && (v13 & 0x42) != 0 )
          {
            v20 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v29) >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
            v32 = 0;
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v20 + 24), 0x3FuLL) )
            {
              do
                KeYieldProcessorEx(&v32);
              while ( *(__int64 *)(v20 + 24) < 0 );
            }
            *(_BYTE *)(v20 + 34) |= 0x10u;
            _InterlockedAnd64((volatile signed __int64 *)(v20 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            MiWriteValidPteNewProtection(v8);
            MiInsertTbFlushEntry((__int64)v35, v17, 1LL, 0);
          }
          v17 += 4096LL;
          v8 += 8LL;
        }
        while ( (v17 & 0x1FFFFF) != 0 && v8 <= v9 );
        MiFlushTbList((int *)v35, v14, v15, v16);
        v10 = v33;
      }
      MiUnlockPageTableInternal(v10);
    }
    LOBYTE(v11) = v12;
    return (void *)MiUnlockWorkingSetShared(v10, v11);
  }
  return result;
}
