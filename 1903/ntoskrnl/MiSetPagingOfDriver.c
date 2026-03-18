/*
 * XREFs of MiSetPagingOfDriver @ 0x1400F661C
 * Callers:
 *     MmPageEntireDriver @ 0x1406A5E10 (MmPageEntireDriver.c)
 *     MiEnablePagingOfDriver @ 0x14074EE1C (MiEnablePagingOfDriver.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14002A860 (MiPteInShadowRange.c)
 *     MiFlushTbList @ 0x14004FFE0 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x140058CD0 (MiInsertTbFlushEntry.c)
 *     MiLockWorkingSetShared @ 0x14005D630 (MiLockWorkingSetShared.c)
 *     MiGetAnyMultiplexedVm @ 0x14008D9C0 (MiGetAnyMultiplexedVm.c)
 *     MiGetWsleContents @ 0x14008DDD0 (MiGetWsleContents.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400C5EE0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiLockPageTableInternal @ 0x1400CBB80 (MiLockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x1400CCAA0 (MiUnlockWorkingSetShared.c)
 *     MiDriverPageMustStayResident @ 0x1400F6938 (MiDriverPageMustStayResident.c)
 *     MiWriteWsle @ 0x1400F6984 (MiWriteWsle.c)
 *     MiTrimSystemImagePages @ 0x1400F6A48 (MiTrimSystemImagePages.c)
 *     MiUnlockLoaderEntry @ 0x1400F7668 (MiUnlockLoaderEntry.c)
 *     MiLockLoaderEntry @ 0x1400F78A4 (MiLockLoaderEntry.c)
 *     MiUnlockPageTableInternal @ 0x1400FDF40 (MiUnlockPageTableInternal.c)
 *     MiWritePteShadow @ 0x1401223FC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14012245C (MiPteHasShadow.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 */

PVOID __fastcall MiSetPagingOfDriver(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  __int64 v5; // rbx
  unsigned __int64 v6; // r14
  unsigned __int64 v7; // r15
  unsigned __int64 v8; // rsi
  char *AnyMultiplexedVm; // r12
  unsigned __int8 v10; // al
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rax
  __int64 v15; // rbp
  char WsleContents; // al
  __int16 v17; // r10
  PVOID result; // rax
  __int16 v19; // cx
  unsigned __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx
  int v23; // r8d
  unsigned __int8 v24; // [rsp+20h] [rbp-128h]
  unsigned __int64 v26; // [rsp+30h] [rbp-118h] BYREF
  _QWORD v27[24]; // [rsp+40h] [rbp-108h] BYREF

  memset(v27, 0, 0xB8uLL);
  v5 = 0LL;
  LODWORD(v27[1]) = 20;
  v6 = 0LL;
  v7 = (__int64)(a2 << 25) >> 16;
  v27[3] = 0LL;
  v8 = 0LL;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
  MiLockLoaderEntry(a1 + 160, 2LL);
  v10 = MiLockWorkingSetShared((__int64)AnyMultiplexedVm);
  v24 = v10;
  if ( a2 <= a3 )
  {
    do
    {
      if ( !v8 || (a2 & 0xFFF) == 0 )
      {
        if ( v6 )
        {
          MiFlushTbList((int *)v27, v11, v12, v13);
          v5 += MiTrimSystemImagePages(v6, a2 - 8);
          v6 = 0LL;
        }
        if ( v8 )
          MiUnlockPageTableInternal(AnyMultiplexedVm);
        v8 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        MiLockPageTableInternal((__int64)AnyMultiplexedVm, v8, 0LL);
      }
      if ( !(unsigned __int8)MiDriverPageMustStayResident(a1, a2) )
      {
        v14 = MI_READ_PTE_LOCK_FREE(a2);
        v26 = v14;
        v15 = v14;
        if ( (v14 & 1) != 0 )
        {
          MI_READ_PTE_LOCK_FREE((unsigned __int64)&v26);
          WsleContents = MiGetWsleContents(0xFFFFFFFFFLL, v7);
          if ( (WsleContents & 0xF) == 9 )
          {
            v19 = *(_WORD *)(v13 + 32);
            if ( v19 == v17 || (v11 = 2LL, v19 == 2) && (*(_BYTE *)(v13 + 34) & 8) != 0 )
            {
              v20 = a2;
              if ( v6 )
                v20 = v6;
              v6 = v20;
              LOBYTE(v12) = WsleContents & 0xF0 | 0xA;
              MiWriteWsle(v20, v7, v12);
              v26 = v15 & 0xFFFFFFFFFFFFFBFEuLL | 0x400;
              if ( MiPteInShadowRange(a2) && (unsigned int)MiPteHasShadow(v22) )
                v23 = 1;
              *(_QWORD *)a2 = v21;
              if ( v23 )
                MiWritePteShadow(a2, v21);
              MiInsertTbFlushEntry((__int64)v27, v7, 1LL, 0);
            }
          }
        }
        else if ( (v14 & 0x400) != 0 && v6 )
        {
          MiFlushTbList((int *)v27, v11, v12, v13);
          v5 += MiTrimSystemImagePages(v6, a2 - 8);
          v6 = 0LL;
        }
      }
      a2 += 8LL;
      v7 += 4096LL;
    }
    while ( a2 <= a3 );
    if ( v6 )
    {
      MiFlushTbList((int *)v27, v11, v12, v13);
      v5 += MiTrimSystemImagePages(v6, a3);
    }
    if ( v8 )
      MiUnlockPageTableInternal(AnyMultiplexedVm);
    v10 = v24;
  }
  MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v10);
  result = (PVOID)MiUnlockLoaderEntry(a1 + 160, 2LL);
  if ( v5 )
  {
    result = *(PVOID *)(a1 + 48);
    if ( result == PsNtosImageBase || result == PsHalImageBase )
      _InterlockedExchangeAdd((_DWORD *)&xmmword_140464940 + 2, v5);
    else
      _InterlockedExchangeAdd((_DWORD *)&xmmword_140464940 + 3, v5);
  }
  return result;
}
