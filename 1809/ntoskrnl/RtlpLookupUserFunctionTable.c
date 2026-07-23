/*
 * XREFs of RtlpLookupUserFunctionTable @ 0x140133D68
 * Callers:
 *     RtlpLookupFunctionEntryForStackWalks @ 0x1400A0350 (RtlpLookupFunctionEntryForStackWalks.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x14004EE20 (ExAcquirePushLockSharedEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14004F090 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1400913F0 (ExfReleasePushLockShared.c)
 *     RtlpImageDirectoryEntryToDataEx @ 0x1400F2CF0 (RtlpImageDirectoryEntryToDataEx.c)
 *     RtlpLookupUserFunctionTableInverted @ 0x1401340D8 (RtlpLookupUserFunctionTableInverted.c)
 *     MmGetImageBase @ 0x1406BB644 (MmGetImageBase.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408D7880 (ExRaiseDatatypeMisalignment.c)
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
  __int64 v20; // rdx
  PVOID v21; // rsi
  int v22; // eax
  unsigned __int64 v23; // r8
  NTSTATUS v24; // eax
  unsigned int v25; // eax
  __int128 v26; // [rsp+40h] [rbp-88h]
  PVOID BaseOfImage; // [rsp+60h] [rbp-68h] BYREF
  __int64 v28[12]; // [rsp+68h] [rbp-60h] BYREF
  __int64 v29; // [rsp+E8h] [rbp+20h] BYREF

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
        v9 = (KiSpeculationFeatures & 0x20000000000LL) != 0 ? dword_140439F34 : 0;
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
            v26 = *(_OWORD *)&v8[6 * v13 + 4];
            v10 = *(_QWORD *)&v8[6 * v13 + 8];
            v16 = *(_QWORD *)&v8[6 * v13 + 6];
            goto LABEL_18;
          }
          v11 = v13 + 1;
        }
        *(_QWORD *)&v26 = &RtlRetpolineStubsFunctionTable;
        v16 = v15 + v9;
LABEL_18:
        *(_QWORD *)(a2 + 8) = v16;
        *(_DWORD *)(a2 + 16) = v10;
        if ( _InterlockedCompareExchange64(v7, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared(v7);
        KeAbPostRelease((ULONG_PTR)v7);
        KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
        v17 = *(_QWORD *)(v26 + 16);
        *(_QWORD *)a2 = v17;
        v18 = (unsigned int)(12 * *(_DWORD *)(v26 + 84));
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
    if ( (int)MmGetImageBase(a1, &BaseOfImage, v28) >= 0 )
    {
      LOBYTE(v20) = 1;
      v21 = BaseOfImage;
      v24 = RtlpImageDirectoryEntryToDataEx((unsigned __int64)BaseOfImage, v20, 3LL, a2 + 20, &v29);
      v23 = v29;
      if ( v24 < 0 )
        v23 = 0LL;
      v29 = v23;
      if ( v23 )
      {
        v25 = *(_DWORD *)(a2 + 20);
        if ( v25 && v25 == 12 * (v25 / 0xCuLL) )
        {
          if ( (v23 & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          if ( v25 + v23 > 0x7FFFFFFF0000LL || v25 + v23 < v23 )
            MEMORY[0x7FFFFFFF0000] = 0;
        }
        else
        {
          v23 = 0LL;
        }
      }
      v22 = v28[0];
    }
    else
    {
      v21 = 0LL;
      v22 = 0;
      v23 = 0LL;
    }
    *(_QWORD *)(a2 + 8) = v21;
    *(_DWORD *)(a2 + 16) = v22;
    *(_QWORD *)a2 = v23;
    if ( !v23 )
      *(_DWORD *)(a2 + 20) = 0;
    return v23;
  }
  return result;
}
