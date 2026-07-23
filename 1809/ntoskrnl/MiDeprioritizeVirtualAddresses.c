/*
 * XREFs of MiDeprioritizeVirtualAddresses @ 0x1402AB8AC
 * Callers:
 *     MiDeprioritizeVad @ 0x140136EBC (MiDeprioritizeVad.c)
 *     HvTrimHive @ 0x1406BEFC0 (HvTrimHive.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUnlockWorkingSetShared @ 0x140046970 (MiUnlockWorkingSetShared.c)
 *     MiDemoteCombinedPte @ 0x14006C1F0 (MiDemoteCombinedPte.c)
 *     MiLockLowestValidPageTable @ 0x14006C590 (MiLockLowestValidPageTable.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     MiLockWorkingSetShared @ 0x140076040 (MiLockWorkingSetShared.c)
 *     MiUpdatePfnPriority @ 0x140082AA8 (MiUpdatePfnPriority.c)
 *     MiGetPfnPriority @ 0x140082B60 (MiGetPfnPriority.c)
 *     MiGetWsleContents @ 0x140085F30 (MiGetWsleContents.c)
 *     MI_WSLE_LOG_ACCESS @ 0x140088034 (MI_WSLE_LOG_ACCESS.c)
 *     MiFreeWsleList @ 0x1400B29F0 (MiFreeWsleList.c)
 *     MiInsertTbFlushEntry @ 0x1400B3A30 (MiInsertTbFlushEntry.c)
 *     MiTbFlushType @ 0x1400EDC24 (MiTbFlushType.c)
 *     MiUnlockPageTableInternal @ 0x140104B10 (MiUnlockPageTableInternal.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

__int64 __fastcall MiDeprioritizeVirtualAddresses(unsigned __int64 a1, __int64 a2, __int64 a3, char a4)
{
  unsigned __int64 v7; // rdi
  unsigned __int64 valid; // r15
  __int64 v9; // rdx
  unsigned __int64 v10; // rsi
  __int64 v11; // rcx
  unsigned __int8 v12; // al
  __int64 v13; // r9
  unsigned __int64 v14; // rsi
  __int64 v15; // rsi
  char v16; // r13
  __int64 v17; // r8
  __int64 v18; // rdx
  __int64 v19; // r8
  unsigned __int8 v21; // [rsp+20h] [rbp-E0h]
  int v22; // [rsp+24h] [rbp-DCh]
  int v23; // [rsp+28h] [rbp-D8h] BYREF
  int v24; // [rsp+2Ch] [rbp-D4h]
  unsigned __int64 v25; // [rsp+30h] [rbp-D0h]
  unsigned __int64 v26; // [rsp+38h] [rbp-C8h] BYREF
  int v27; // [rsp+40h] [rbp-C0h] BYREF
  __int16 v28; // [rsp+44h] [rbp-BCh]
  int v29; // [rsp+48h] [rbp-B8h]
  int v30; // [rsp+4Ch] [rbp-B4h]
  __int64 v31; // [rsp+50h] [rbp-B0h]
  __int64 v32; // [rsp+58h] [rbp-A8h]

  v30 = 0;
  v22 = a4 & 7;
  v31 = 0LL;
  v32 = 0LL;
  v27 = MiTbFlushType(a3);
  v24 = dword_14043B9A8;
  v28 = 4;
  v29 = 20;
  v7 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  valid = 0LL;
  v10 = v7 + 8 * v9;
  v25 = v10;
  v12 = MiLockWorkingSetShared(v11);
  v21 = v12;
  if ( v7 < v10 )
  {
    do
    {
      v14 = v7 >> 9;
      if ( valid )
      {
        if ( valid != (v14 & 0x7FFFFFFFF8LL) - 0x98000000000LL )
        {
          if ( v30 )
            MiFreeWsleList(a3, (__int64)&v27, 0);
          MiUnlockPageTableInternal(a3, valid);
          valid = 0LL;
        }
        if ( valid )
          goto LABEL_35;
      }
      valid = MiLockLowestValidPageTable(a3, v7, &v26, v13);
      if ( valid == (v14 & 0x7FFFFFFFF8LL) - 0x98000000000LL )
      {
LABEL_35:
        if ( (*(_DWORD *)v7 & 1) != 0 )
        {
          v15 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(v7) >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
          v16 = MiGetWsleContents(0xFFFFFFFFFLL, (__int64)(v7 << 25) >> 16) & 0xF;
          if ( v16 != 9 )
          {
            v17 = *(_QWORD *)(v15 + 8);
            if ( v17 >= 0 )
              MiDemoteCombinedPte(a3, v7, v17 | 0x8000000000000000uLL);
            if ( (a4 & 8) == 0 && v22 != (unsigned int)MiGetPfnPriority(v15) )
            {
              v23 = 0;
              while ( _interlockedbittestandset64((volatile signed __int32 *)(v15 + 24), 0x3FuLL) )
              {
                do
                  KeYieldProcessorEx(&v23, v18, v19);
                while ( *(__int64 *)(v15 + 24) < 0 );
              }
              MiUpdatePfnPriority(v15);
              _InterlockedAnd64((volatile signed __int64 *)(v15 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            }
            if ( (a4 & 0x10) != 0 && v16 != 8 )
            {
              if ( v24 )
                MI_WSLE_LOG_ACCESS(a3, (_BYTE *)v7);
              MiInsertTbFlushEntry((__int64)&v27, (__int64)(v7 << 25) >> 16, 1LL, 0);
              if ( v30 == v29 )
                MiFreeWsleList(a3, (__int64)&v27, 0);
            }
          }
        }
      }
      else
      {
        MiUnlockPageTableInternal(a3, valid);
        valid = 0LL;
        v7 = (v7 & 0xFFFFFFFFFFFFF000uLL) + 4088;
      }
      v7 += 8LL;
    }
    while ( v7 < v25 );
    if ( valid )
    {
      if ( v30 )
        MiFreeWsleList(a3, (__int64)&v27, 0);
      MiUnlockPageTableInternal(a3, valid);
    }
    v12 = v21;
  }
  return MiUnlockWorkingSetShared(a3, v12);
}
