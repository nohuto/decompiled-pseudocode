/*
 * XREFs of MiSetPagingOfDriver @ 0x1400DAE7C
 * Callers:
 *     MmPageEntireDriver @ 0x140654B30 (MmPageEntireDriver.c)
 *     MiEnablePagingOfDriver @ 0x14072C760 (MiEnablePagingOfDriver.c)
 * Callees:
 *     MiGetAnyMultiplexedVm @ 0x140028884 (MiGetAnyMultiplexedVm.c)
 *     MiPteInShadowRange @ 0x14003D740 (MiPteInShadowRange.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUnlockWorkingSetShared @ 0x140046970 (MiUnlockWorkingSetShared.c)
 *     MiLockPageTableInternal @ 0x14006CA10 (MiLockPageTableInternal.c)
 *     MiFlushTbList @ 0x1400740B0 (MiFlushTbList.c)
 *     MiLockWorkingSetShared @ 0x140076040 (MiLockWorkingSetShared.c)
 *     MiGetWsleContents @ 0x140085F30 (MiGetWsleContents.c)
 *     MiInsertTbFlushEntry @ 0x1400B3A30 (MiInsertTbFlushEntry.c)
 *     MiDriverPageMustStayResident @ 0x1400DB198 (MiDriverPageMustStayResident.c)
 *     MiWriteWsle @ 0x1400DB218 (MiWriteWsle.c)
 *     MiTrimSystemImagePages @ 0x1400DB254 (MiTrimSystemImagePages.c)
 *     MiUnlockLoaderEntry @ 0x1400DBBAC (MiUnlockLoaderEntry.c)
 *     MiLockLoaderEntry @ 0x1400DBDE4 (MiLockLoaderEntry.c)
 *     MiUnlockPageTableInternal @ 0x140104B10 (MiUnlockPageTableInternal.c)
 *     MiWritePteShadow @ 0x140120F40 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

PVOID __fastcall MiSetPagingOfDriver(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rdi
  __int64 v4; // r14
  unsigned __int64 v5; // r12
  unsigned __int64 v6; // r15
  __int64 v7; // rbx
  unsigned __int64 v8; // rsi
  char *AnyMultiplexedVm; // r13
  unsigned __int8 v10; // al
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rax
  __int64 v15; // r14
  char WsleContents; // al
  __int16 v17; // r10
  PVOID result; // rax
  __int16 v19; // cx
  unsigned __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx
  int v23; // r8d
  unsigned __int8 v24; // [rsp+20h] [rbp-E0h]
  unsigned __int64 v27; // [rsp+38h] [rbp-C8h] BYREF
  int v28; // [rsp+40h] [rbp-C0h] BYREF
  __int16 v29; // [rsp+44h] [rbp-BCh]
  __int64 v30; // [rsp+48h] [rbp-B8h]
  __int64 v31; // [rsp+50h] [rbp-B0h]
  __int64 v32; // [rsp+58h] [rbp-A8h]

  v3 = a2;
  v4 = a1;
  v30 = 20LL;
  v5 = (__int64)(a2 << 25) >> 16;
  v6 = 0LL;
  v28 = 0;
  v29 = 0;
  v7 = 0LL;
  v31 = 0LL;
  v8 = 0LL;
  v32 = 0LL;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
  MiLockLoaderEntry(v4 + 160, 2LL);
  v10 = MiLockWorkingSetShared((__int64)AnyMultiplexedVm);
  v24 = v10;
  if ( v3 <= a3 )
  {
    do
    {
      if ( !v8 || (v3 & 0xFFF) == 0 )
      {
        if ( v6 )
        {
          MiFlushTbList(&v28, v11, v12, v13);
          v7 += MiTrimSystemImagePages(v6, v3 - 8);
          v6 = 0LL;
        }
        if ( v8 )
          MiUnlockPageTableInternal(AnyMultiplexedVm, v8);
        v8 = ((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        MiLockPageTableInternal((__int64)AnyMultiplexedVm, v8, 0);
      }
      if ( !(unsigned __int8)MiDriverPageMustStayResident(v4, v3) )
      {
        v14 = MI_READ_PTE_LOCK_FREE(v3);
        v27 = v14;
        v15 = v14;
        if ( (v14 & 1) != 0 )
        {
          MI_READ_PTE_LOCK_FREE((unsigned __int64)&v27);
          WsleContents = MiGetWsleContents(0xFFFFFFFFFLL, v5);
          if ( (WsleContents & 0xF) == 9 )
          {
            v19 = *(_WORD *)(v13 + 32);
            if ( v19 == v17 || (v11 = 2LL, v19 == 2) && (*(_BYTE *)(v13 + 34) & 8) != 0 )
            {
              v20 = v3;
              if ( v6 )
                v20 = v6;
              v6 = v20;
              LOBYTE(v12) = WsleContents & 0xF0 | 0xA;
              MiWriteWsle(v20, v5, v12);
              v27 = v15 & 0xFFFFFFFFFFFFFBFEuLL | 0x400;
              if ( MiPteInShadowRange(v3) && (unsigned int)MiPteHasShadow(v22, v21) )
                v23 = 1;
              *(_QWORD *)v3 = v21;
              if ( v23 )
                MiWritePteShadow(v3);
              MiInsertTbFlushEntry((__int64)&v28, v5, 1LL, 0);
            }
          }
        }
        else if ( (v14 & 0x400) != 0 && v6 )
        {
          MiFlushTbList(&v28, v11, v12, v13);
          v7 += MiTrimSystemImagePages(v6, v3 - 8);
          v6 = 0LL;
        }
        v4 = a1;
      }
      v3 += 8LL;
      v5 += 4096LL;
    }
    while ( v3 <= a3 );
    if ( v6 )
    {
      MiFlushTbList(&v28, v11, v12, v13);
      v7 += MiTrimSystemImagePages(v6, a3);
    }
    if ( v8 )
      MiUnlockPageTableInternal(AnyMultiplexedVm, v8);
    v10 = v24;
  }
  MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v10);
  result = (PVOID)MiUnlockLoaderEntry(v4 + 160, 2LL);
  if ( v7 )
  {
    result = *(PVOID *)(v4 + 48);
    if ( result == PsNtosImageBase || result == PsHalImageBase )
      _InterlockedExchangeAdd((_DWORD *)&xmmword_140439FE0 + 2, v7);
    else
      _InterlockedExchangeAdd((_DWORD *)&xmmword_140439FE0 + 3, v7);
  }
  return result;
}
