/*
 * XREFs of MiFlushDirtyBitsToPfn @ 0x14012C2DC
 * Callers:
 *     MmFlushVirtualMemory @ 0x1406B7EBC (MmFlushVirtualMemory.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUnlockWorkingSetShared @ 0x140046970 (MiUnlockWorkingSetShared.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     MiFlushTbList @ 0x1400740B0 (MiFlushTbList.c)
 *     MiLockWorkingSetShared @ 0x140076040 (MiLockWorkingSetShared.c)
 *     MiGetLeafVa @ 0x140076400 (MiGetLeafVa.c)
 *     MiGetNextPageTable @ 0x140084230 (MiGetNextPageTable.c)
 *     MiWriteValidPteNewProtection @ 0x140087960 (MiWriteValidPteNewProtection.c)
 *     MiInsertTbFlushEntry @ 0x1400B3A30 (MiInsertTbFlushEntry.c)
 *     MiUnlockPageTableInternal @ 0x140104B10 (MiUnlockPageTableInternal.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

void __fastcall MiFlushDirtyBitsToPfn(unsigned __int64 a1, unsigned __int64 a2, __int64 a3)
{
  unsigned int v3; // r12d
  unsigned __int64 v4; // rbx
  unsigned __int64 v5; // r15
  __int64 v6; // r13
  char v7; // di
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned __int64 v12; // rdi
  unsigned __int64 v13; // rsi
  unsigned __int64 NextPageTable; // rax
  __int64 v15; // rdx
  __int64 v16; // r8
  unsigned __int64 v17; // r14
  unsigned __int64 v18; // rdi
  __int64 v19; // rdx
  unsigned __int64 v20; // r14
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rdx
  unsigned __int64 v24; // rbx
  __int64 v25; // r8
  unsigned __int64 v26; // rbx
  char i; // [rsp+30h] [rbp-D0h]
  __int64 v28; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v29; // [rsp+40h] [rbp-C0h] BYREF
  int v30; // [rsp+44h] [rbp-BCh] BYREF
  int v31; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v32; // [rsp+50h] [rbp-B0h]
  unsigned __int64 v33; // [rsp+58h] [rbp-A8h]
  int v34; // [rsp+60h] [rbp-A0h] BYREF
  __int16 v35; // [rsp+64h] [rbp-9Ch]
  __int64 v36; // [rsp+68h] [rbp-98h]
  __int64 v37; // [rsp+70h] [rbp-90h]
  __int64 v38; // [rsp+78h] [rbp-88h]

  v3 = 0;
  if ( !byte_14043B13C )
  {
    v36 = 20LL;
    v34 = 1;
    v35 = 0;
    v37 = 0LL;
    v38 = 0LL;
    v4 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v5 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v32 = *(_QWORD *)(a3 + 184) + 1280LL;
    v6 = v32;
    v7 = MiLockWorkingSetShared(v32);
    for ( i = v7; v4 <= v5; v7 = i )
    {
      NextPageTable = MiGetNextPageTable(v4, v5, (__int64)&v34, v7, 0, &v29);
      v4 = NextPageTable;
      if ( !NextPageTable )
        break;
      v13 = ((NextPageTable >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v33 = v13;
      if ( v29 )
      {
        v18 = ((NextPageTable >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        v19 = v29;
        do
        {
          v13 = ((v13 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          --v19;
        }
        while ( v19 );
        v20 = 0x200000LL;
        if ( v29 > 1 )
        {
          v21 = v29 - 1;
          do
          {
            v18 = ((v18 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            v20 <<= 9;
            --v21;
          }
          while ( v21 );
        }
        v22 = MI_READ_PTE_LOCK_FREE(v18);
        v28 = v22;
        if ( (v22 & 1) != 0 && (v22 & 0x42) != 0 )
        {
          v24 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v28) >> 12) & 0xFFFFFFFFFLL) + 24;
          if ( v20 )
          {
            v26 = v24 - 0x58000000000LL;
            do
            {
              v30 = 0;
              while ( _interlockedbittestandset64((volatile signed __int32 *)v26, 0x3FuLL) )
              {
                do
                  KeYieldProcessorEx(&v30, v23, v25);
                while ( *(__int64 *)v26 < 0 );
              }
              *(_BYTE *)(v26 + 10) |= 0x10u;
              _InterlockedAnd64((volatile signed __int64 *)v26, 0x7FFFFFFFFFFFFFFFuLL);
              v3 += 4096;
              v26 += 48LL;
            }
            while ( v3 < v20 );
            v6 = v32;
          }
          v3 = 0;
        }
        v4 = ((MiGetLeafVa(v18 + 8) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      }
      else
      {
        v12 = (__int64)(NextPageTable << 25) >> 16;
        do
        {
          v8 = MI_READ_PTE_LOCK_FREE(v4);
          v28 = v8;
          if ( (v8 & 1) != 0 && (v8 & 0x42) != 0 )
          {
            v17 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v28) >> 12) & 0xFFFFFFFFFLL)
                - 0x58000000000LL;
            v31 = 0;
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v17 + 24), 0x3FuLL) )
            {
              do
                KeYieldProcessorEx(&v31, v15, v16);
              while ( *(__int64 *)(v17 + 24) < 0 );
            }
            *(_BYTE *)(v17 + 34) |= 0x10u;
            _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            MiWriteValidPteNewProtection(v4, v28 & 0xFFFFFFFFFFFFFFBDuLL);
            MiInsertTbFlushEntry((__int64)&v34, v12, 1LL, 0);
          }
          v12 += 4096LL;
          v4 += 8LL;
        }
        while ( (v12 & 0x1FFFFF) != 0 && v4 <= v5 );
        MiFlushTbList(&v34, v9, v10, v11);
        v13 = v33;
        v6 = v32;
      }
      MiUnlockPageTableInternal(v6, v13);
    }
    MiUnlockWorkingSetShared(v6, v7);
  }
}
