/*
 * XREFs of RaidInsertDeviceQueue @ 0x1C0009090
 * Callers:
 *     RaidStartIoPacket @ 0x1C00081C0 (RaidStartIoPacket.c)
 * Callees:
 *     RiPeekDeviceQueue @ 0x1C000B314 (RiPeekDeviceQueue.c)
 *     RiGetEnqueueReason @ 0x1C000B33C (RiGetEnqueueReason.c)
 *     RiEnqueueDeviceQueue @ 0x1C000B478 (RiEnqueueDeviceQueue.c)
 *     __security_check_cookie @ 0x1C00232C0 (__security_check_cookie.c)
 *     McTemplateK0pquuqqd @ 0x1C0038450 (McTemplateK0pquuqqd.c)
 */

char __fastcall RaidInsertDeviceQueue(
        __int64 a1,
        __int64 a2,
        char a3,
        __int64 a4,
        char a5,
        LARGE_INTEGER *a6,
        _DWORD *a7)
{
  __int64 v7; // rsi
  char v10; // cl
  char v13; // r8
  char v14; // dl
  char v15; // r8
  char v16; // dl
  char v17; // r8
  char v18; // r8
  __int64 v19; // rdx
  __int64 v20; // r8
  char v21; // al
  char result; // al
  char v23; // r12
  bool v24; // zf
  LARGE_INTEGER PerformanceCounter; // rbx
  KIRQL v26; // r11
  int EnqueueReason; // r15d
  char v28; // r14
  __int64 v29; // rax
  char v30; // [rsp+50h] [rbp-68h]
  _QWORD v31[2]; // [rsp+60h] [rbp-58h] BYREF

  v7 = a2 + 120;
  v10 = *(_BYTE *)(a2 + 142);
  v31[0] = 0LL;
  v31[1] = 0LL;
  v13 = v10 | 2;
  if ( (a3 & 2) == 0 )
    v13 = v10 & 0xFD;
  v14 = v13 | 4;
  if ( (a3 & 4) == 0 )
    v14 = v13 & 0xFB;
  v15 = v14 | 1;
  if ( (a3 & 1) == 0 )
    v15 = v14 & 0xFE;
  v16 = v15 | 8;
  if ( (a3 & 8) == 0 )
    v16 = v15 & 0xF7;
  v17 = v16 | 0x20;
  if ( (a3 & 0x10) == 0 )
    v17 = v16 & 0xDF;
  if ( (a3 & 0x20) != 0 )
    v18 = v17 | 0x40;
  else
    v18 = v17 & 0xBF;
  *(_BYTE *)(v7 + 22) = v18 ^ (v18 ^ (16 * a5)) & 0x10;
  v20 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(a1 + 72));
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 76));
  if ( !*(_DWORD *)(a1 + 32)
    && *(_DWORD *)(a1 + 76) <= *(_DWORD *)(a1 + 4)
    && (!*(_BYTE *)(a1 + 37) || (*(_BYTE *)(v7 + 22) & 4) != 0)
    && (!*(_BYTE *)(a1 + 36) || (*(_BYTE *)(v7 + 22) & 2) != 0)
    && *(int *)(a1 + 28) <= 0
    && !*(_BYTE *)(a1 + 38) )
  {
    if ( !*(_DWORD *)(a1 + 20) && !*(_DWORD *)(a1 + 16)
      || (v29 = RiPeekDeviceQueue(a1, v19, v20), v7 == v29)
      || (*(_BYTE *)(v29 + 22) & 1) == 0
      || (*(_BYTE *)(v7 + 22) & 6) != 0 )
    {
      v21 = *(_BYTE *)(v7 + 22);
      if ( ((v21 & 1) == 0 || *(int *)(a1 + 76) < 1)
        && (!*(_BYTE *)(a1 + 39) || (v21 & 8) != 0)
        && (v21 & 0x10) == 0
        && (v21 & 0x40) == 0
        && (v21 & 1) == 0 )
      {
        ExReleaseSpinLockShared((PEX_SPIN_LOCK)(a1 + 72), v20);
        result = 0;
        *(_BYTE *)(v7 + 20) = 0;
        return result;
      }
    }
  }
  _InterlockedDecrement((volatile signed __int32 *)(a1 + 76));
  ExReleaseSpinLockShared((PEX_SPIN_LOCK)(a1 + 72), v20);
  if ( byte_1C0061742 < 0 )
  {
    IoGetActivityIdIrp(a2, v31);
    v23 = ((*(_BYTE *)(v7 + 22) & 6) != 0) + 1;
  }
  else
  {
    v23 = v30;
  }
  if ( StorEtwLoggingEnabled )
  {
    v24 = UseQPCTime == 0;
  }
  else
  {
    if ( !g_StorpTraceLoggingPerformanceEnabled )
    {
      PerformanceCounter.QuadPart = 0LL;
      goto LABEL_34;
    }
    if ( !UseQPCTime )
      goto LABEL_58;
    v24 = g_StorpTraceLoggingPerformanceHighResolutionTimer == 0;
  }
  if ( v24 )
  {
LABEL_58:
    PerformanceCounter.QuadPart = KeQueryUnbiasedInterruptTime();
    goto LABEL_34;
  }
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
LABEL_34:
  ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
  EnqueueReason = RiGetEnqueueReason(a1, v7, 0LL);
  if ( EnqueueReason )
  {
    RiEnqueueDeviceQueue(a1, v7);
    v28 = 1;
  }
  else
  {
    ++*(_DWORD *)(a1 + 76);
    v28 = 0;
    if ( (*(_BYTE *)(v7 + 22) & 1) != 0 )
      *(_BYTE *)(a1 + 38) = 1;
  }
  *(_BYTE *)(v7 + 20) = v28;
  ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72), v26);
  if ( v28 )
  {
    *a6 = PerformanceCounter;
    *a7 = EnqueueReason;
    if ( byte_1C0061742 < 0 )
      McTemplateK0pquuqqd(
        *(_DWORD *)(a1 + 76),
        *(_DWORD *)(a1 + 16) + *(_DWORD *)(a1 + 20),
        (unsigned int)v31,
        a1,
        v23,
        3,
        EnqueueReason,
        *(_BYTE *)(a1 + 16) + *(_BYTE *)(a1 + 20),
        *(_DWORD *)(a1 + 76));
  }
  return v28;
}
