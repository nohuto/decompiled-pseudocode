/*
 * XREFs of RtlpLookupUserFunctionTable @ 0x140133C98
 * Callers:
 *     RtlpLookupFunctionEntryForStackWalks @ 0x1400A0410 (RtlpLookupFunctionEntryForStackWalks.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x14004EE20 (ExAcquirePushLockSharedEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14004F090 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1400914B0 (ExfReleasePushLockShared.c)
 *     RtlpImageDirectoryEntryToDataEx @ 0x1400F2C70 (RtlpImageDirectoryEntryToDataEx.c)
 *     RtlpLookupUserFunctionTableInverted @ 0x140134008 (RtlpLookupUserFunctionTableInverted.c)
 *     MmGetImageBase @ 0x1406BA3A4 (MmGetImageBase.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408D65C0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall RtlpLookupUserFunctionTable(unsigned __int64 a1, __int64 a2)
{
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // r15
  _KPROCESS *Process; // r13
  signed __int64 *v7; // rsi
  _DWORD *v8; // rdx
  unsigned int v9; // r12d
  int v10; // r9d
  int v11; // ecx
  int v12; // r11d
  int v13; // r10d
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // r8
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rcx
  __int64 v18; // rdx
  unsigned __int64 v19; // rdx
  PVOID v20; // rsi
  int v21; // eax
  unsigned __int64 v22; // r8
  NTSTATUS v23; // eax
  unsigned int v24; // eax
  __int128 v25; // [rsp+40h] [rbp-88h]
  PVOID BaseAddress; // [rsp+60h] [rbp-68h] BYREF
  __int64 v27[12]; // [rsp+68h] [rbp-60h] BYREF
  __int64 v28; // [rsp+E8h] [rbp+20h] BYREF

  result = RtlpLookupUserFunctionTableInverted();
  if ( !result )
  {
    CurrentThread = KeGetCurrentThread();
    Process = CurrentThread->Process;
    if ( Process[2].Affinity.Bitmap[18] )
    {
      --CurrentThread->SpecialApcDisable;
      v7 = (signed __int64 *)&Process[2].Affinity.Bitmap[19];
      ExAcquirePushLockSharedEx((ULONG_PTR)&Process[2].Affinity.Bitmap[19], 0LL);
      v8 = (_DWORD *)Process[2].Affinity.Bitmap[18];
      if ( v8 && *v8 != 1 )
      {
        v9 = (KiSpeculationFeatures & 0x20000000000LL) != 0 ? dword_140438E74 : 0;
        v10 = (KiSpeculationFeatures & 0x20000000000LL) != 0 ? 0x1000 : 0;
        v11 = 1;
        v12 = *v8 - 1;
        while ( 1 )
        {
          while ( 1 )
          {
            if ( v12 < v11 )
              goto LABEL_26;
            v13 = (v12 + v11) >> 1;
            v14 = *(_QWORD *)&v8[6 * v13 + 6];
            v15 = v14 + (unsigned int)v8[6 * v13 + 8];
            if ( a1 >= v14 )
              break;
            if ( !v13 )
              goto LABEL_26;
            v12 = v13 - 1;
          }
          if ( a1 > 0x7FFFFFFEFFFFLL
            && (KiSpeculationFeatures & 0x20000000000LL) != 0
            && a1 >= v15 + v9
            && a1 < v15 + v10 + v9 )
          {
            break;
          }
          if ( a1 < v15 )
          {
            v25 = *(_OWORD *)&v8[6 * v13 + 4];
            v10 = *(_QWORD *)&v8[6 * v13 + 8];
            v16 = *(_QWORD *)&v8[6 * v13 + 6];
            goto LABEL_18;
          }
          v11 = v13 + 1;
        }
        *(_QWORD *)&v25 = &RtlRetpolineStubsFunctionTable;
        v16 = v15 + v9;
LABEL_18:
        *(_QWORD *)(a2 + 8) = v16;
        *(_DWORD *)(a2 + 16) = v10;
        if ( _InterlockedCompareExchange64(v7, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared(v7);
        KeAbPostRelease((ULONG_PTR)v7);
        KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
        v17 = *(_QWORD *)(v25 + 16);
        *(_QWORD *)a2 = v17;
        v18 = (unsigned int)(12 * *(_DWORD *)(v25 + 84));
        *(_DWORD *)(a2 + 20) = v18;
        if ( (_DWORD)v18 )
        {
          if ( (v17 & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          v19 = v17 + v18;
          if ( v19 > 0x7FFFFFFF0000LL || v19 < v17 )
            MEMORY[0x7FFFFFFF0000] = 0;
        }
        return v17;
      }
LABEL_26:
      if ( _InterlockedCompareExchange64(v7, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v7);
      KeAbPostRelease((ULONG_PTR)v7);
      KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    }
    if ( (int)MmGetImageBase(a1, &BaseAddress, v27) >= 0 )
    {
      v20 = BaseAddress;
      v23 = RtlpImageDirectoryEntryToDataEx((unsigned __int64)BaseAddress, 1, 3u, a2 + 20, &v28);
      v22 = v28;
      if ( v23 < 0 )
        v22 = 0LL;
      v28 = v22;
      if ( v22 )
      {
        v24 = *(_DWORD *)(a2 + 20);
        if ( v24 && v24 == 12 * (v24 / 0xCuLL) )
        {
          if ( (v22 & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          if ( v24 + v22 > 0x7FFFFFFF0000LL || v24 + v22 < v22 )
            MEMORY[0x7FFFFFFF0000] = 0;
        }
        else
        {
          v22 = 0LL;
        }
      }
      v21 = v27[0];
    }
    else
    {
      v20 = 0LL;
      v21 = 0;
      v22 = 0LL;
    }
    *(_QWORD *)(a2 + 8) = v20;
    *(_DWORD *)(a2 + 16) = v21;
    *(_QWORD *)a2 = v22;
    if ( !v22 )
      *(_DWORD *)(a2 + 20) = 0;
    return v22;
  }
  return result;
}
