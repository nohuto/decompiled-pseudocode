/*
 * XREFs of PspSelectVsmEnclaveByNumber @ 0x1408CCEE4
 * Callers:
 *     PsCallEnclave @ 0x1408CBB10 (PsCallEnclave.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x14003EF30 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLockShared @ 0x14009E3E0 (ExfReleasePushLockShared.c)
 */

__int64 __fastcall PspSelectVsmEnclaveByNumber(__int64 a1, __int64 a2, __int64 *a3)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v7; // rsi
  signed __int64 *v8; // rdi
  __int64 v9; // r10
  __int64 v10; // rbp
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v14; // [rsp+50h] [rbp+8h]

  CurrentThread = KeGetCurrentThread();
  v7 = 0LL;
  --CurrentThread->KernelApcDisable;
  v8 = (signed __int64 *)(a1 + 1880);
  ExAcquirePushLockSharedEx(a1 + 1880, 0LL);
  v9 = *(_QWORD *)(a1 + 1864);
  if ( v9 )
  {
    v10 = -1LL << (*(_BYTE *)(v9 + 4) & 0x1F);
    v11 = a2 & v10;
    if ( *(_DWORD *)(v9 + 4) < 0x20u )
      goto LABEL_13;
    v14 = a2 & v10;
    v12 = *(_QWORD *)(v9 + 8)
        + 8LL
        * ((37
          * (BYTE6(v14)
           + 37
           * (BYTE5(v14)
            + 37
            * (BYTE4(v14)
             + 37 * (BYTE3(v14) + 37 * (BYTE2(v14) + 37 * (BYTE1(v14) + 37 * ((unsigned __int8)v11 + 11623883)))))))
          + HIBYTE(v14)) & (unsigned int)((*(_DWORD *)(v9 + 4) >> 5) - 1));
    while ( 1 )
    {
      v12 = *(_QWORD *)v12;
      if ( (v12 & 1) != 0 )
        break;
      if ( v11 == (v10 & *(_QWORD *)(v12 + 8)) )
        goto LABEL_8;
    }
  }
  v12 = 0LL;
LABEL_8:
  if ( v12 )
  {
    v7 = v12;
    if ( *(_DWORD *)(v12 + 40) )
    {
      if ( _InterlockedIncrement64((volatile signed __int64 *)(v12 + 16)) <= 1 )
        __fastfail(0xEu);
    }
    else
    {
      v7 = 0LL;
    }
  }
LABEL_13:
  if ( _InterlockedCompareExchange64(v8, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v8);
  KeAbPostRelease((ULONG_PTR)v8);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( !v7 )
    return 3221225480LL;
  *a3 = v7;
  return 0LL;
}
