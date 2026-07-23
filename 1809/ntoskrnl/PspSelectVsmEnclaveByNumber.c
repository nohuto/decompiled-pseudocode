/*
 * XREFs of PspSelectVsmEnclaveByNumber @ 0x14088FA0C
 * Callers:
 *     PsCallEnclave @ 0x14088E7E0 (PsCallEnclave.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x14004EE20 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1400913F0 (ExfReleasePushLockShared.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 */

__int64 __fastcall PspSelectVsmEnclaveByNumber(__int64 a1, __int64 a2, __int64 *a3)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v7; // rsi
  signed __int64 *v8; // rdi
  __int64 v9; // r10
  unsigned int v10; // edx
  __int64 v11; // rbp
  __int64 v12; // r9
  unsigned __int64 v13; // r11
  unsigned __int64 v14; // r8
  unsigned __int64 v15; // rbx
  unsigned __int64 v16; // r15
  __int64 v17; // rdx
  unsigned __int64 v19; // [rsp+78h] [rbp+20h]

  CurrentThread = KeGetCurrentThread();
  v7 = 0LL;
  --CurrentThread->KernelApcDisable;
  v8 = (signed __int64 *)(a1 + 1832);
  ExAcquirePushLockSharedEx(a1 + 1832, 0LL);
  v9 = *(_QWORD *)(a1 + 1816);
  if ( v9 )
  {
    v10 = *(_DWORD *)(v9 + 4);
    v11 = -1LL << (*(_BYTE *)(v9 + 4) & 0x1F);
    v19 = (a2 & (unsigned __int64)v11) >> 8;
    v13 = (a2 & (unsigned __int64)v11) >> 56;
    v12 = a2 & v11;
    v14 = (a2 & (unsigned __int64)v11) >> 48;
    v15 = (a2 & (unsigned __int64)v11) >> 40;
    v16 = (a2 & (unsigned __int64)v11) >> 32;
    if ( v10 < 0x20 )
      goto LABEL_13;
    v17 = *(_QWORD *)(v9 + 8)
        + 8LL
        * (((_DWORD)v13
          + 37
          * ((unsigned __int8)v14
           + 37
           * ((unsigned __int8)v15
            + 37
            * ((unsigned __int8)v16
             + 37
             * (BYTE3(v12) + 37 * (BYTE2(v12) + 37 * ((unsigned __int8)v19 + 37 * ((unsigned __int8)v12 + 11623883)))))))) & ((v10 >> 5) - 1));
    while ( 1 )
    {
      v17 = *(_QWORD *)v17;
      if ( (v17 & 1) != 0 )
        break;
      if ( v12 == (v11 & *(_QWORD *)(v17 + 8)) )
        goto LABEL_8;
    }
  }
  v17 = 0LL;
LABEL_8:
  if ( v17 )
  {
    v7 = v17;
    if ( *(_DWORD *)(v17 + 40) )
    {
      if ( _InterlockedIncrement64((volatile signed __int64 *)(v17 + 16)) <= 1 )
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
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  if ( !v7 )
    return 3221225480LL;
  *a3 = v7;
  return 0LL;
}
