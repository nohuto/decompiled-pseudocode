/*
 * XREFs of RaidInsertDeviceQueue @ 0x1C000AC00
 * Callers:
 *     RaidStartIoPacket @ 0x1C0009C40 (RaidStartIoPacket.c)
 * Callees:
 *     RiGetEnqueueReason @ 0x1C000D1E8 (RiGetEnqueueReason.c)
 *     RiPeekDeviceQueue @ 0x1C000D6B0 (RiPeekDeviceQueue.c)
 *     RiEnqueueDeviceQueue @ 0x1C000D718 (RiEnqueueDeviceQueue.c)
 *     __security_check_cookie @ 0x1C0026060 (__security_check_cookie.c)
 *     McTemplateK0pquuqqd @ 0x1C003CA80 (McTemplateK0pquuqqd.c)
 */

char __fastcall RaidInsertDeviceQueue(
        __int64 a1,
        __int64 a2,
        char a3,
        __int64 a4,
        char a5,
        LARGE_INTEGER *a6,
        _DWORD *a7,
        _DWORD *a8)
{
  __int64 v8; // rsi
  char v11; // cl
  char v13; // r8
  char v14; // dl
  char v15; // r8
  char v16; // dl
  char v17; // r9
  char v18; // r8
  char v19; // r8
  char v20; // cl
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // rax
  char v24; // al
  char result; // al
  char v26; // r14
  bool v27; // zf
  LARGE_INTEGER PerformanceCounter; // rbx
  KIRQL v29; // r11
  int EnqueueReason; // r15d
  char v31; // bp
  char v32; // [rsp+50h] [rbp-68h]
  _QWORD v33[2]; // [rsp+68h] [rbp-50h] BYREF

  v8 = a2 + 120;
  v11 = *(_BYTE *)(a2 + 142);
  v33[0] = 0LL;
  v33[1] = 0LL;
  v27 = (a3 & 2) == 0;
  v13 = v11 | 2;
  if ( v27 )
    v13 = v11 & 0xFD;
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
  v18 = v17 | 0x40;
  if ( (a3 & 0x20) == 0 )
    v18 = v17 & 0xBF;
  v19 = ((16 * a5) ^ v18) & 0x10;
  v20 = v17 | 0x40;
  if ( (a3 & 0x20) == 0 )
    v20 = v17 & 0xBF;
  *(_BYTE *)(v8 + 22) = v20 ^ v19;
  v22 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(a1 + 72));
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 76));
  if ( !*(_DWORD *)(a1 + 32)
    && *(_DWORD *)(a1 + 76) <= *(_DWORD *)(a1 + 4)
    && (!*(_BYTE *)(a1 + 37) || (*(_BYTE *)(v8 + 22) & 4) != 0)
    && (!*(_BYTE *)(a1 + 36) || (*(_BYTE *)(v8 + 22) & 2) != 0)
    && *(int *)(a1 + 28) <= 0
    && !*(_BYTE *)(a1 + 38) )
  {
    if ( !*(_DWORD *)(a1 + 20) && !*(_DWORD *)(a1 + 16)
      || (v23 = RiPeekDeviceQueue(a1, v21, v22), v8 == v23)
      || (*(_BYTE *)(v23 + 22) & 1) == 0
      || (*(_BYTE *)(v8 + 22) & 6) != 0 )
    {
      v24 = *(_BYTE *)(v8 + 22);
      if ( ((v24 & 1) == 0 || *(int *)(a1 + 76) < 1)
        && (!*(_BYTE *)(a1 + 39) || (v24 & 8) != 0)
        && (v24 & 0x10) == 0
        && (v24 & 0x40) == 0
        && (v24 & 1) == 0 )
      {
        ExReleaseSpinLockShared((PEX_SPIN_LOCK)(a1 + 72), v22);
        result = 0;
        *(_BYTE *)(v8 + 20) = 0;
        return result;
      }
    }
  }
  _InterlockedDecrement((volatile signed __int32 *)(a1 + 76));
  ExReleaseSpinLockShared((PEX_SPIN_LOCK)(a1 + 72), v22);
  if ( byte_1C00617E2 >= 0 )
  {
    v26 = v32;
  }
  else
  {
    IoGetActivityIdIrp(a2, v33);
    v26 = ((*(_BYTE *)(v8 + 22) & 6) != 0) + 1;
  }
  if ( StorEtwLoggingEnabled )
  {
    v27 = UseQPCTime == 0;
  }
  else
  {
    if ( !g_StorpTraceLoggingPerformanceEnabled )
    {
      PerformanceCounter.QuadPart = 0LL;
      goto LABEL_48;
    }
    if ( !UseQPCTime )
      goto LABEL_46;
    v27 = g_StorpTraceLoggingPerformanceHighResolutionTimer == 0;
  }
  if ( v27 )
  {
LABEL_46:
    PerformanceCounter.QuadPart = KeQueryUnbiasedInterruptTime();
    goto LABEL_48;
  }
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
LABEL_48:
  ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
  EnqueueReason = RiGetEnqueueReason(a1, v8, 0LL);
  if ( EnqueueReason )
  {
    RiEnqueueDeviceQueue(a1, v8);
    v31 = 1;
  }
  else
  {
    ++*(_DWORD *)(a1 + 76);
    v31 = 0;
    if ( (*(_BYTE *)(v8 + 22) & 1) != 0 )
      *(_BYTE *)(a1 + 38) = 1;
  }
  *(_BYTE *)(v8 + 20) = v31;
  ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72), v29);
  if ( v31 )
  {
    *a6 = PerformanceCounter;
    *a7 = EnqueueReason;
    *a8 = *(_DWORD *)(a1 + 16);
    if ( byte_1C00617E2 < 0 )
      McTemplateK0pquuqqd(
        *(_DWORD *)(a1 + 76),
        *(_DWORD *)(a1 + 16) + *(_DWORD *)(a1 + 20),
        (unsigned int)v33,
        a1,
        v26,
        3,
        EnqueueReason,
        *(_BYTE *)(a1 + 16) + *(_BYTE *)(a1 + 20),
        *(_DWORD *)(a1 + 76));
  }
  return v31;
}
