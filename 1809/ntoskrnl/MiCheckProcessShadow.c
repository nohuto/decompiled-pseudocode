/*
 * XREFs of MiCheckProcessShadow @ 0x140046A70
 * Callers:
 *     MiUnlockWorkingSetShared @ 0x140046970 (MiUnlockWorkingSetShared.c)
 *     MiUnlockWorkingSetExclusive @ 0x140063CD0 (MiUnlockWorkingSetExclusive.c)
 *     MiDeleteVad @ 0x140065E00 (MiDeleteVad.c)
 *     MiFinishVadDeletion @ 0x140067760 (MiFinishVadDeletion.c)
 *     MiGetVadWakeList @ 0x140068260 (MiGetVadWakeList.c)
 *     MiTrimOrAgeWorkingSet @ 0x14006D570 (MiTrimOrAgeWorkingSet.c)
 *     MiMakeHyperRangeAccessible @ 0x14006E3C0 (MiMakeHyperRangeAccessible.c)
 *     MiMoveDirtyBitsToPfns @ 0x140074A30 (MiMoveDirtyBitsToPfns.c)
 *     NtGetWriteWatch @ 0x140086AC0 (NtGetWriteWatch.c)
 *     MmCheckProcessShadow @ 0x140135CD0 (MmCheckProcessShadow.c)
 *     MmRemoveSystemCacheFromDump @ 0x1402AE89C (MmRemoveSystemCacheFromDump.c)
 * Callees:
 *     MiLockPageTableInternal @ 0x14006CA10 (MiLockPageTableInternal.c)
 *     MiWorkingSetIsContended @ 0x1400991E0 (MiWorkingSetIsContended.c)
 *     MiUnlockPageTableInternal @ 0x140104B10 (MiUnlockPageTableInternal.c)
 *     MiCheckRelevantKernelShadows @ 0x14012B1AC (MiCheckRelevantKernelShadows.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 */

__int64 __fastcall MiCheckProcessShadow(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v7; // r14
  bool v8; // zf
  __int64 v9; // rdx
  __int64 v10; // r9
  int v11; // r15d
  __int64 v12; // rbp
  ULONG_PTR v13; // r10
  int v14; // r11d
  unsigned __int64 Process; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  ULONG_PTR v18; // rcx
  ULONG_PTR v19; // r9
  ULONG_PTR v20; // rcx
  ULONG_PTR v21; // r9
  ULONG_PTR BugCheckParameter4; // rcx
  unsigned __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rdx
  unsigned __int64 v26; // r8
  __int64 v27; // rax
  __int64 v28; // r8
  __int64 v29; // rax
  __int64 v30; // rax

  if ( (MiFlags & 0xC00000) == 0
    || (*(_BYTE *)(a1 + 184) & 7) != 0
    || *(_BYTE *)(a1 - 640) == 1
    || (a2 & 4) == 0 && (__rdtsc() & 0x3FF0) != 0 )
  {
    return 0xFFFFFFFFLL;
  }
  v7 = *(_QWORD *)(a1 + 264);
  v8 = (a2 & 4) != 0 ? (*(_DWORD *)(a1 - 508) & 0x4000000) == 0 : v7 == 0;
  if ( v8 || !*(_QWORD *)(a1 + 16) )
    return 0xFFFFFFFFLL;
  if ( (a2 & 4) == 0 )
  {
    if ( !(unsigned int)MiWorkingSetIsContended(a1) )
    {
      v11 = a2 & 1;
      if ( (a2 & 1) == 0 || (unsigned int)MiLockPageTableInternal(a1, v9, 1LL, v10) )
        goto LABEL_15;
    }
    return 0xFFFFFFFFLL;
  }
  v11 = a2 & 1;
  if ( (a2 & 1) != 0 )
    MiLockPageTableInternal(a1, 0xFFFFF6FB7DBEDF68uLL, 0LL, a4);
LABEL_15:
  v12 = 0LL;
  v13 = 0xFFFFF6FB7DBED000uLL;
  v14 = 256;
  Process = 0x8000000000000000uLL;
  v16 = 0xCFFFFFFFFFFFFFFFuLL;
  do
  {
    v17 = *(_QWORD *)v13;
    if ( v13 >= 0xFFFFF6FB7DBED000uLL
      && v13 <= 0xFFFFF6FB7DBED7F8uLL
      && (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v17 & 1) != 0
      && ((v17 & 0x20) == 0 || (v17 & 0x42) == 0) )
    {
      v23 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
      if ( v23 )
      {
        v24 = *(_QWORD *)(v23 + 8 * ((v13 >> 3) & 0x1FF));
        v25 = v17 | 0x20;
        if ( (v24 & 0x20) == 0 )
          v25 = *(_QWORD *)v13;
        v17 = v25;
        if ( (v24 & 0x42) != 0 )
          v17 = v25 | 0x42;
      }
      Process = 0x8000000000000000uLL;
    }
    v18 = *(_QWORD *)v7;
    if ( v7 >= 0xFFFFF6FB7DBED000uLL && v7 <= 0xFFFFF6FB7DBED7F8uLL && (MiFlags & 0xC00000) != 0 )
    {
      if ( KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v18 & 1) != 0
        && ((v18 & 0x20) == 0 || (v18 & 0x42) == 0) )
      {
        v26 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
        if ( v26 )
        {
          v27 = *(_QWORD *)(v26 + 8 * ((v7 >> 3) & 0x1FF));
          v28 = v18 | 0x20;
          if ( (v27 & 0x20) == 0 )
            v28 = *(_QWORD *)v7;
          v18 = v28;
          if ( (v27 & 0x42) != 0 )
            v18 = v28 | 0x42;
        }
        v16 = 0xCFFFFFFFFFFFFFFFuLL;
      }
      Process = 0x8000000000000000uLL;
    }
    if ( (v17 & 1) != 0 )
    {
      v21 = v17 & 0xCFFFFFFFFFFFFFDFuLL | 0x20;
      if ( !HIBYTE(word_14043B26C) )
        v18 |= 0x8000000000000000uLL;
      BugCheckParameter4 = v18 | 0x20;
      if ( v21 != BugCheckParameter4 )
      {
        if ( (a2 & 8) == 0 )
          KeBugCheckEx(0x1Au, 0x3600uLL, v13, v21, BugCheckParameter4);
        goto LABEL_35;
      }
    }
    else if ( v18 )
    {
      if ( (a2 & 8) == 0 )
        KeBugCheckEx(0x1Au, 0x3601uLL, v13, v18, v18);
      goto LABEL_35;
    }
    v13 += 8LL;
    v7 += 8LL;
    ++v12;
    --v14;
  }
  while ( v14 );
  if ( BBTBuffer || (v13 & 0xFFF) == 0 )
    goto LABEL_34;
  while ( 1 )
  {
    v19 = *(_QWORD *)v13;
    if ( v13 >= 0xFFFFF6FB7DBED000uLL
      && v13 <= 0xFFFFF6FB7DBED7F8uLL
      && (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v19 & 1) != 0
      && ((v19 & 0x20) == 0 || (v19 & 0x42) == 0) )
    {
      Process = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
      if ( Process )
      {
        v29 = *(_QWORD *)(Process + 8 * ((v13 >> 3) & 0x1FF));
        Process = v19 | 0x20;
        if ( (v29 & 0x20) == 0 )
          Process = *(_QWORD *)v13;
        v19 = Process;
        if ( (v29 & 0x42) != 0 )
          v19 = Process | 0x42;
      }
    }
    v20 = *(_QWORD *)v7;
    if ( v7 >= 0xFFFFF6FB7DBED000uLL && v7 <= 0xFFFFF6FB7DBED7F8uLL && (MiFlags & 0xC00000) != 0 )
    {
      Process = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
      if ( *(_BYTE *)(Process + 640) != 1 && (v20 & 1) != 0 && ((v20 & 0x20) == 0 || (v20 & 0x42) == 0) )
      {
        Process = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
        v16 = *(_QWORD *)(Process + 1544);
        if ( v16 )
        {
          v30 = *(_QWORD *)(v16 + 8 * ((v7 >> 3) & 0x1FF));
          v16 = v20 | 0x20;
          Process = (unsigned __int8)v30;
          LOBYTE(Process) = v30 & 0x20;
          if ( (v30 & 0x20) == 0 )
            v16 = *(_QWORD *)v7;
          v20 = v16;
          if ( (v30 & 0x42) != 0 )
            v20 = v16 | 0x42;
        }
      }
    }
    if ( (v19 & 1) != 0 && (v19 & 4) != 0 )
    {
      if ( (a2 & 8) == 0 )
        KeBugCheckEx(0x1Au, 0x3604uLL, v13, v19, v20);
      goto LABEL_33;
    }
    if ( (v20 & 1) != 0 && (v20 & 4) != 0 )
      break;
    v13 += 8LL;
    v7 += 8LL;
    ++v12;
    if ( (v13 & 0xFFF) == 0 )
      goto LABEL_33;
  }
  if ( (a2 & 8) == 0 )
    KeBugCheckEx(0x1Au, 0x3605uLL, v13, v19, v20);
LABEL_33:
  if ( (v13 & 0xFFF) == 0 )
LABEL_34:
    v12 = 0xFFFFFFFFLL;
LABEL_35:
  if ( v11 )
    MiUnlockPageTableInternal(a1, 0xFFFFF6FB7DBEDF68uLL);
  if ( v12 == 0xFFFFFFFFLL && (a2 & 0x10) != 0 )
    return MiCheckRelevantKernelShadows(a2, Process, v16);
  return v12;
}
