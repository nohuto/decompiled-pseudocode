/*
 * XREFs of MiSetPagingOfDriver @ 0x1400FA0BC
 * Callers:
 *     MmPageEntireDriver @ 0x1406A56A0 (MmPageEntireDriver.c)
 *     MiEnablePagingOfDriver @ 0x14074F8AC (MiEnablePagingOfDriver.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14002AC50 (MiPteInShadowRange.c)
 *     MiFlushTbList @ 0x140050080 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x140058D70 (MiInsertTbFlushEntry.c)
 *     MiLockWorkingSetShared @ 0x14005D6D0 (MiLockWorkingSetShared.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400A5D60 (MI_READ_PTE_LOCK_FREE.c)
 *     MiLockPageTableInternal @ 0x1400ABA00 (MiLockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x1400AC920 (MiUnlockWorkingSetShared.c)
 *     MiGetAnyMultiplexedVm @ 0x1400CA970 (MiGetAnyMultiplexedVm.c)
 *     MiGetWsleContents @ 0x1400CAFE0 (MiGetWsleContents.c)
 *     MiWritePteShadow @ 0x1400F8750 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1400F87B0 (MiPteHasShadow.c)
 *     MiDriverPageMustStayResident @ 0x1400FA3D8 (MiDriverPageMustStayResident.c)
 *     MiWriteWsle @ 0x1400FA424 (MiWriteWsle.c)
 *     MiTrimSystemImagePages @ 0x1400FA4E8 (MiTrimSystemImagePages.c)
 *     MiUnlockLoaderEntry @ 0x1400FB108 (MiUnlockLoaderEntry.c)
 *     MiLockLoaderEntry @ 0x1400FB344 (MiLockLoaderEntry.c)
 *     MiUnlockPageTableInternal @ 0x1401000D0 (MiUnlockPageTableInternal.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
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
  int v22; // r8d
  unsigned __int8 v23; // [rsp+20h] [rbp-128h]
  unsigned __int64 v25; // [rsp+30h] [rbp-118h] BYREF
  _QWORD v26[24]; // [rsp+40h] [rbp-108h] BYREF

  memset(v26, 0, 0xB8uLL);
  v5 = 0LL;
  LODWORD(v26[1]) = 20;
  v6 = 0LL;
  v7 = (__int64)(a2 << 25) >> 16;
  v26[3] = 0LL;
  v8 = 0LL;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
  MiLockLoaderEntry(a1 + 160, 2LL);
  v10 = MiLockWorkingSetShared((__int64)AnyMultiplexedVm);
  v23 = v10;
  if ( a2 <= a3 )
  {
    do
    {
      if ( !v8 || (a2 & 0xFFF) == 0 )
      {
        if ( v6 )
        {
          MiFlushTbList((int *)v26, v11, v12, v13);
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
        v25 = v14;
        v15 = v14;
        if ( (v14 & 1) != 0 )
        {
          MI_READ_PTE_LOCK_FREE((unsigned __int64)&v25);
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
              v25 = v15 & 0xFFFFFFFFFFFFFBFEuLL | 0x400;
              if ( MiPteInShadowRange(a2) && (unsigned int)MiPteHasShadow() )
                v22 = 1;
              *(_QWORD *)a2 = v21;
              if ( v22 )
                MiWritePteShadow(a2);
              MiInsertTbFlushEntry((__int64)v26, v7, 1LL, 0);
            }
          }
        }
        else if ( (v14 & 0x400) != 0 && v6 )
        {
          MiFlushTbList((int *)v26, v11, v12, v13);
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
      MiFlushTbList((int *)v26, v11, v12, v13);
      v5 += MiTrimSystemImagePages(v6, a3);
    }
    if ( v8 )
      MiUnlockPageTableInternal(AnyMultiplexedVm);
    v10 = v23;
  }
  MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v10);
  result = (PVOID)MiUnlockLoaderEntry(a1 + 160, 2LL);
  if ( v5 )
  {
    result = *(PVOID *)(a1 + 48);
    if ( result == PsNtosImageBase || result == PsHalImageBase )
      _InterlockedExchangeAdd((_DWORD *)&xmmword_140464640 + 2, v5);
    else
      _InterlockedExchangeAdd((_DWORD *)&xmmword_140464640 + 3, v5);
  }
  return result;
}
