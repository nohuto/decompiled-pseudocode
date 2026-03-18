/*
 * XREFs of MiDeprioritizeVirtualAddresses @ 0x1402C482C
 * Callers:
 *     MiDeprioritizeVad @ 0x14013B5DC (MiDeprioritizeVad.c)
 *     HvTrimHive @ 0x140714C30 (HvTrimHive.c)
 * Callees:
 *     MiTbFlushType @ 0x140023DD0 (MiTbFlushType.c)
 *     MiFreeWsleList @ 0x140024C50 (MiFreeWsleList.c)
 *     KeYieldProcessorEx @ 0x14002D3D0 (KeYieldProcessorEx.c)
 *     MiLockLowestValidPageTable @ 0x14004AD90 (MiLockLowestValidPageTable.c)
 *     MiInsertTbFlushEntry @ 0x140058CD0 (MiInsertTbFlushEntry.c)
 *     MiLockWorkingSetShared @ 0x14005D630 (MiLockWorkingSetShared.c)
 *     MI_WSLE_LOG_ACCESS @ 0x14005DF18 (MI_WSLE_LOG_ACCESS.c)
 *     MiUpdatePfnPriority @ 0x14008DD04 (MiUpdatePfnPriority.c)
 *     MiGetWsleContents @ 0x14008DDD0 (MiGetWsleContents.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400C5EE0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUnlockWorkingSetShared @ 0x1400CCAA0 (MiUnlockWorkingSetShared.c)
 *     MiGetPfnPriority @ 0x1400DBC80 (MiGetPfnPriority.c)
 *     MiUnlockPageTableInternal @ 0x1400FDF40 (MiUnlockPageTableInternal.c)
 *     MiDemoteCombinedPte @ 0x140141270 (MiDemoteCombinedPte.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 */

__int64 __fastcall MiDeprioritizeVirtualAddresses(unsigned __int64 a1, __int64 a2, __int64 a3, char a4)
{
  int v8; // eax
  unsigned __int64 v9; // rsi
  unsigned __int64 valid; // r15
  __int64 v11; // rcx
  unsigned __int8 v12; // al
  unsigned __int64 v13; // rdi
  unsigned __int64 v14; // rdi
  char v15; // r13
  __int64 v16; // r8
  unsigned __int8 v18; // [rsp+20h] [rbp-E0h]
  unsigned int v19; // [rsp+24h] [rbp-DCh]
  int v20; // [rsp+28h] [rbp-D8h] BYREF
  int v21; // [rsp+2Ch] [rbp-D4h]
  unsigned __int64 v22; // [rsp+30h] [rbp-D0h]
  unsigned __int64 v23; // [rsp+38h] [rbp-C8h] BYREF
  _QWORD v24[24]; // [rsp+40h] [rbp-C0h] BYREF

  memset(v24, 0, 0xB8uLL);
  v19 = a4 & 7;
  v8 = MiTbFlushType(a3);
  v24[2] = 0LL;
  v24[3] = 0LL;
  LODWORD(v24[0]) = v8;
  v21 = dword_140466368;
  WORD2(v24[0]) = 4;
  LODWORD(v24[1]) = 20;
  v9 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  valid = 0LL;
  v22 = v9 + 8 * a2;
  v12 = MiLockWorkingSetShared(v11);
  v18 = v12;
  if ( v9 < v22 )
  {
    do
    {
      v13 = v9 >> 9;
      if ( valid )
      {
        if ( valid != (v13 & 0x7FFFFFFFF8LL) - 0x98000000000LL )
        {
          if ( HIDWORD(v24[1]) )
            MiFreeWsleList(a3, (__int64)v24, 0);
          MiUnlockPageTableInternal(a3, valid);
          valid = 0LL;
        }
        if ( valid )
          goto LABEL_35;
      }
      valid = MiLockLowestValidPageTable(a3, v9, &v23);
      if ( valid == (v13 & 0x7FFFFFFFF8LL) - 0x98000000000LL )
      {
LABEL_35:
        if ( (*(_BYTE *)v9 & 1) != 0 )
        {
          v14 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(v9) >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
          v15 = MiGetWsleContents(0xFFFFFFFFFLL, (__int64)(v9 << 25) >> 16) & 0xF;
          if ( v15 != 9 )
          {
            v16 = *(_QWORD *)(v14 + 8);
            if ( v16 >= 0 )
              MiDemoteCombinedPte(a3, v9, v16 | 0x8000000000000000uLL);
            if ( (a4 & 8) == 0 && v19 != (unsigned int)MiGetPfnPriority(v14) )
            {
              v20 = 0;
              while ( _interlockedbittestandset64((volatile signed __int32 *)(v14 + 24), 0x3FuLL) )
              {
                do
                  KeYieldProcessorEx(&v20);
                while ( *(__int64 *)(v14 + 24) < 0 );
              }
              MiUpdatePfnPriority(v14, v19, 1);
              _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            }
            if ( (a4 & 0x10) != 0 && v15 != 8 )
            {
              if ( v21 )
                MI_WSLE_LOG_ACCESS(a3, (_BYTE *)v9);
              MiInsertTbFlushEntry((__int64)v24, (__int64)(v9 << 25) >> 16, 1LL, 0);
              if ( HIDWORD(v24[1]) == LODWORD(v24[1]) )
                MiFreeWsleList(a3, (__int64)v24, 0);
            }
          }
        }
      }
      else
      {
        MiUnlockPageTableInternal(a3, valid);
        valid = 0LL;
        v9 = (v9 & 0xFFFFFFFFFFFFF000uLL) + 4088;
      }
      v9 += 8LL;
    }
    while ( v9 < v22 );
    if ( valid )
    {
      if ( HIDWORD(v24[1]) )
        MiFreeWsleList(a3, (__int64)v24, 0);
      MiUnlockPageTableInternal(a3, valid);
    }
    v12 = v18;
  }
  return MiUnlockWorkingSetShared(a3, v12);
}
