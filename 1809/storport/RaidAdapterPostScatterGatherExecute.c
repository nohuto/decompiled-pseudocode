/*
 * XREFs of RaidAdapterPostScatterGatherExecute @ 0x1C00049A0
 * Callers:
 *     RaidAdapterExecuteXrb @ 0x1C0002F58 (RaidAdapterExecuteXrb.c)
 *     RaidpAdapterContinueScatterGather @ 0x1C0003360 (RaidpAdapterContinueScatterGather.c)
 *     RaUnitStartIo @ 0x1C0003430 (RaUnitStartIo.c)
 * Callees:
 *     RaidAdapterReleaseStartIoLock @ 0x1C0005000 (RaidAdapterReleaseStartIoLock.c)
 *     RaidLogGetParm4 @ 0x1C0005270 (RaidLogGetParm4.c)
 *     RaidAdapterRequestComplete @ 0x1C0005DE0 (RaidAdapterRequestComplete.c)
 *     DbgGetAddressLongFromXrb @ 0x1C0006148 (DbgGetAddressLongFromXrb.c)
 *     RaidAdapterAcquireInterruptLock @ 0x1C0006E60 (RaidAdapterAcquireInterruptLock.c)
 *     RaAllocateConcurrentChannelToken @ 0x1C002587C (RaAllocateConcurrentChannelToken.c)
 *     RaidUpdateZoneIoMetadata @ 0x1C002727C (RaidUpdateZoneIoMetadata.c)
 *     _guard_dispatch_icall_nop @ 0x1C002C060 (_guard_dispatch_icall_nop.c)
 *     RaFreeConcurrentChannelToken @ 0x1C0036F74 (RaFreeConcurrentChannelToken.c)
 */

__int64 __fastcall RaidAdapterPostScatterGatherExecute(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebp
  __int64 v4; // rdx
  __int64 ConcurrentChannelToken; // r15
  unsigned __int64 v7; // r12
  __int64 v8; // r13
  __int64 v9; // rcx
  int v10; // eax
  int v11; // r8d
  int v12; // eax
  bool v13; // zf
  LARGE_INTEGER PerformanceCounter; // rax
  bool v15; // zf
  __int64 v17; // r10
  unsigned __int8 v18; // al
  int v19; // r15d
  char *v20; // rsi
  unsigned int v21; // r14d
  unsigned int v22; // r11d
  __int64 v23; // rcx
  unsigned __int64 v24; // rdx
  __int64 v25; // r9
  __int64 v26; // r8
  int v27; // ecx
  int v28; // ecx
  unsigned __int64 v29; // rcx
  char v30; // al
  char v31; // al
  __int64 Parm4; // rsi
  __int64 v33; // rdx
  unsigned int AddressLongFromXrb; // eax
  __int64 v35; // r8
  __int64 v36; // r10
  __int64 v37; // r9
  __int64 v38; // rcx
  __int64 v39; // rax
  __int64 v40; // rcx
  __int64 (__fastcall *v41)(__int64, _QWORD); // rax
  char v42; // si
  LARGE_INTEGER v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rax
  char v47; // si
  LARGE_INTEGER v48; // rax
  __int64 v49; // rax
  __int64 v50; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-58h] BYREF
  __int64 v52; // [rsp+80h] [rbp+8h]
  __int64 v53; // [rsp+88h] [rbp+10h]
  __int64 v54; // [rsp+90h] [rbp+18h]

  v2 = 0;
  *(_QWORD *)(a2 + 216) = a1;
  v52 = 0LL;
  v4 = *(_QWORD *)(a2 + 224);
  ConcurrentChannelToken = 0LL;
  v53 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  v9 = *(_QWORD *)(a2 + 168);
  LOBYTE(v10) = *(_BYTE *)(v9 + 2);
  if ( (_BYTE)v10 == 40 )
  {
    v10 = *(_DWORD *)(v9 + 20);
    v11 = *(_DWORD *)(v9 + 24);
  }
  else
  {
    v11 = *(_DWORD *)(v9 + 12);
    v10 = (unsigned __int8)v10;
  }
  if ( !v4 )
  {
    if ( !*(_DWORD *)(a1 + 876) || (unsigned int)(v10 - 36) <= 1 )
      goto LABEL_10;
    v15 = (*(_BYTE *)(a2 + 17) & 8) == 0;
    goto LABEL_21;
  }
  if ( *(int *)(v4 + 684) <= 0 )
  {
    if ( *(_BYTE *)(v4 + 692) && (v11 & 0x10) == 0 )
      goto LABEL_22;
    if ( !*(_BYTE *)(v4 + 693) )
      goto LABEL_10;
    v15 = (v11 & 0x80000) == 0;
LABEL_21:
    if ( !v15 )
      goto LABEL_10;
LABEL_22:
    *(_BYTE *)(v9 + 3) = 5;
    RaidUpdateZoneIoMetadata(*(_QWORD *)(a2 + 224), 0LL, a2);
    RaidAdapterRequestComplete(a1, a2, 1LL);
    return 0LL;
  }
  if ( v10 == 32 || (v13 = v10 == 19, v12 = 1, v13) )
    v12 = 0;
  if ( v12 )
    goto LABEL_22;
LABEL_10:
  if ( StorEtwLoggingEnabled )
  {
    v13 = UseQPCTime == 0;
    goto LABEL_12;
  }
  if ( g_StorpTraceLoggingPerformanceEnabled )
  {
    if ( !UseQPCTime )
    {
LABEL_26:
      PerformanceCounter.QuadPart = KeQueryUnbiasedInterruptTime();
      goto LABEL_28;
    }
    v13 = g_StorpTraceLoggingPerformanceHighResolutionTimer == 0;
LABEL_12:
    if ( !v13 )
    {
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
      goto LABEL_28;
    }
    goto LABEL_26;
  }
  PerformanceCounter.QuadPart = 0LL;
LABEL_28:
  v13 = FUAEnabled == 0;
  v17 = *(_QWORD *)(a2 + 168);
  *(LARGE_INTEGER *)(a2 + 696) = PerformanceCounter;
  if ( !v13 || !v17 )
    goto LABEL_58;
  v18 = *(_BYTE *)(v17 + 2);
  if ( v18 != 40 )
  {
    v19 = v18;
    v20 = (char *)(v17 + 72);
    goto LABEL_50;
  }
  v19 = *(_DWORD *)(v17 + 20);
  v20 = 0LL;
  if ( v19 )
    goto LABEL_50;
  v21 = *(_DWORD *)(v17 + 56);
  v22 = 0;
  if ( !v21 )
    goto LABEL_50;
  while ( 1 )
  {
    v23 = *(unsigned int *)(v17 + 4LL * v22 + 120);
    if ( (unsigned int)v23 < 0x80 )
      goto LABEL_45;
    v24 = *(unsigned int *)(v17 + 16);
    if ( (unsigned int)v23 >= (unsigned int)v24 )
      goto LABEL_45;
    v25 = v23 + v17;
    v26 = (unsigned int)v23;
    v27 = *(_DWORD *)(v23 + v17) - 64;
    if ( !v27 )
      break;
    v28 = v27 - 1;
    if ( !v28 )
    {
      v29 = v26 + 56;
      goto LABEL_44;
    }
    if ( v28 == 1 && v26 + 40 <= v24 )
    {
      v20 = (char *)(v25 + 32);
      if ( !*(_DWORD *)(v25 + 12) )
        v20 = 0LL;
      goto LABEL_50;
    }
LABEL_45:
    if ( ++v22 >= v21 )
      goto LABEL_50;
  }
  v29 = v26 + 40;
LABEL_44:
  if ( v29 > v24 )
    goto LABEL_45;
  if ( *(_BYTE *)(v25 + 10) )
    v20 = (char *)(v25 + 24);
LABEL_50:
  if ( v20 && !v19 && ((v30 = *v20, *v20 == 42) || v30 == -86 || v30 == -118) )
  {
    v31 = v20[1];
    ConcurrentChannelToken = 0LL;
    if ( (v31 & 8) != 0 )
      v20[1] = v31 & 0xF7;
  }
  else
  {
    ConcurrentChannelToken = 0LL;
  }
LABEL_58:
  if ( *(_BYTE *)(a1 + 4514) )
  {
    if ( (qword_1C00612B0 & 1) != 0 )
    {
      Parm4 = RaidLogGetParm4(a2);
      AddressLongFromXrb = DbgGetAddressLongFromXrb(a2, v33, *(_QWORD *)(a2 + 168));
      v37 = *(_QWORD *)(a2 + 216);
      if ( v37 )
      {
        if ( *(_DWORD *)(v37 + 5124) && *(_QWORD *)(v37 + 5128) )
        {
          v38 = *(_QWORD *)(v37 + 5128)
              + 48LL
              * ((unsigned int)_InterlockedIncrement((volatile signed __int32 *)(v37 + 5120)) % *(_DWORD *)(v37 + 5124));
          *(_DWORD *)v38 = 36;
          *(_QWORD *)(v38 + 40) = MEMORY[0xFFFFF78000000014];
          *(_QWORD *)(v38 + 8) = v36;
          *(_QWORD *)(v38 + 16) = AddressLongFromXrb;
          *(_QWORD *)(v38 + 24) = v35;
          *(_QWORD *)(v38 + 32) = Parm4;
        }
      }
    }
    v39 = *(_QWORD *)(a2 + 160);
    if ( v39 )
      *(_BYTE *)(v39 + 141) = -82;
    v40 = *(_QWORD *)(a2 + 216);
    v41 = *(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(v40 + 544) + 128LL);
    if ( v41 )
      v42 = v41(*(_QWORD *)(v40 + 552) + 16LL, *(_QWORD *)(a2 + 168));
    else
      v42 = 1;
    if ( StorEtwLoggingEnabled && ((byte_1C00617E1 & 1) != 0 || (byte_1C00617E3 & 2) != 0) )
    {
      if ( UseQPCTime )
        v43 = KeQueryPerformanceCounter(0LL);
      else
        v43.QuadPart = KeQueryUnbiasedInterruptTime();
      *(LARGE_INTEGER *)(a2 + 704) = v43;
    }
    if ( !v42 )
    {
      RaidUpdateZoneIoMetadata(*(_QWORD *)(a2 + 224), 0LL, a2);
      return 0LL;
    }
    if ( *(int *)(a1 + 4808) <= 1 )
    {
      if ( *(_DWORD *)(a1 + 712) )
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 704), &LockHandle);
      else
        LOBYTE(LockHandle.LockQueue.Next) = RaidAdapterAcquireInterruptLock(a1);
    }
    else if ( *(_DWORD *)(a1 + 4808) >= KeQueryActiveProcessorCountEx(0xFFFFu) )
    {
      *(_DWORD *)(a2 + 24) = HIDWORD(KeGetPcr()[1].LockArray);
    }
    else
    {
      ConcurrentChannelToken = RaAllocateConcurrentChannelToken(a1);
      *(_DWORD *)(a2 + 24) = *(_DWORD *)(ConcurrentChannelToken + 20);
    }
  }
  if ( (qword_1C00612B0 & 4) != 0 )
  {
    v44 = *(_QWORD *)(a2 + 224);
    if ( v44 )
      v7 = (unsigned __int8)BYTE2(*(_DWORD *)(v44 + 96)) | ((((unsigned __int64)(unsigned __int8)*(_DWORD *)(v44 + 96) << 8) | (unsigned __int8)BYTE1(*(_DWORD *)(v44 + 96))) << 8);
    v45 = RaidLogGetParm4(a2);
    v8 = *(_QWORD *)(a2 + 168);
    v53 = v45;
    if ( *(_QWORD *)(a2 + 160) )
    {
      v52 = *(_QWORD *)(a2 + 160);
    }
    else if ( v8 )
    {
      if ( *(_BYTE *)(v8 + 2) == 40 )
        v52 = *(_QWORD *)(v8 + 80);
      else
        v52 = *(_QWORD *)(v8 + 48);
    }
  }
  RaidUpdateZoneIoMetadata(*(_QWORD *)(a2 + 224), 0LL, a2);
  v46 = *(_QWORD *)(a2 + 160);
  if ( v46 )
    *(_BYTE *)(v46 + 141) = -86;
  *(_BYTE *)(a2 + 16) = *(_BYTE *)(a2 + 16) & 0xE3 | 0xC;
  v54 = MEMORY[0xFFFFF78000000014];
  v47 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(a1 + 544) + 16LL))(
          *(_QWORD *)(a1 + 552) + 16LL,
          *(_QWORD *)(a2 + 168));
  if ( StorEtwLoggingEnabled && ((byte_1C00617E1 & 1) != 0 || (byte_1C00617E3 & 2) != 0) )
  {
    if ( UseQPCTime )
      v48 = KeQueryPerformanceCounter(0LL);
    else
      v48.QuadPart = KeQueryUnbiasedInterruptTime();
    *(LARGE_INTEGER *)(a2 + 712) = v48;
  }
  if ( *(_BYTE *)(a1 + 4514) )
  {
    if ( *(int *)(a1 + 4808) <= 1 )
    {
      RaidAdapterReleaseStartIoLock(a1, &LockHandle);
    }
    else if ( ConcurrentChannelToken )
    {
      RaFreeConcurrentChannelToken(a1, ConcurrentChannelToken);
    }
  }
  if ( (qword_1C00612B0 & 4) != 0 && *(_DWORD *)(a1 + 5124) && *(_QWORD *)(a1 + 5128) )
  {
    v49 = v54;
    v50 = *(_QWORD *)(a1 + 5128)
        + 48LL * ((unsigned int)_InterlockedIncrement((volatile signed __int32 *)(a1 + 5120)) % *(_DWORD *)(a1 + 5124));
    *(_DWORD *)v50 = 0;
    if ( !v54 )
      v49 = MEMORY[0xFFFFF78000000014];
    *(_QWORD *)(v50 + 40) = v49;
    *(_QWORD *)(v50 + 8) = v52;
    *(_QWORD *)(v50 + 32) = v53;
    *(_QWORD *)(v50 + 16) = v7;
    *(_QWORD *)(v50 + 24) = v8;
  }
  if ( !v47 )
    return (unsigned int)-1073741823;
  return v2;
}
