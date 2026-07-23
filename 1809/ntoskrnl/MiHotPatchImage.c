/*
 * XREFs of MiHotPatchImage @ 0x140856590
 * Callers:
 *     MiHotPatchProcess @ 0x140856864 (MiHotPatchProcess.c)
 *     MiSetImageHotPatchAllowed @ 0x140859224 (MiSetImageHotPatchAllowed.c)
 * Callees:
 *     MiUnlockVadShared @ 0x14001AF48 (MiUnlockVadShared.c)
 *     ExReleaseRundownProtection_0 @ 0x14004D2F0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14004D320 (ExAcquireRundownProtection_0.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14004F090 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     MiVadDeleted @ 0x140075550 (MiVadDeleted.c)
 *     MiLockVadShared @ 0x140075560 (MiLockVadShared.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     RtlFreeAnsiString @ 0x140624790 (RtlFreeAnsiString.c)
 *     MiDeleteHotPatchEntry @ 0x140855D98 (MiDeleteHotPatchEntry.c)
 *     MiDeleteImageHotPatchState @ 0x140855F3C (MiDeleteImageHotPatchState.c)
 *     MiFindProcessImageHotPatchRecord @ 0x140856078 (MiFindProcessImageHotPatchRecord.c)
 *     MiGetHotPatchEntry @ 0x140856238 (MiGetHotPatchEntry.c)
 *     MiGetProcessHotPatchContext @ 0x140856450 (MiGetProcessHotPatchContext.c)
 *     MiLogHotPatchOperation @ 0x1408575F8 (MiLogHotPatchOperation.c)
 *     MiPerformImageHotPatch @ 0x140857EE0 (MiPerformImageHotPatch.c)
 */

__int64 __fastcall MiHotPatchImage(__int64 a1, int a2, _RTL_BALANCED_NODE *a3, int a4, int a5, char a6, int a7)
{
  int v7; // edi
  struct _KTHREAD *CurrentThread; // r13
  __int64 Process; // rbx
  unsigned int v11; // edi
  _QWORD *ProcessHotPatchContext; // r15
  int ProcessImageHotPatchRecord; // eax
  int v15; // edi
  unsigned __int64 HotPatchEntry; // rax
  int v17; // r8d
  unsigned __int64 v18; // rsi
  int v19; // ebx
  UNICODE_STRING v20; // xmm1
  int v21; // ebx
  int v22; // r12d
  int v23; // ebx
  int v25; // [rsp+58h] [rbp-31h] BYREF
  int v26; // [rsp+5Ch] [rbp-2Dh] BYREF
  int v27; // [rsp+60h] [rbp-29h]
  __int64 v28; // [rsp+68h] [rbp-21h] BYREF
  __int64 v29; // [rsp+70h] [rbp-19h]
  PEX_RUNDOWN_REF RunRef; // [rsp+78h] [rbp-11h]
  UNICODE_STRING DestinationString; // [rsp+88h] [rbp-1h] BYREF
  int v32; // [rsp+D8h] [rbp+4Fh]

  v7 = a4;
  RtlInitUnicodeString(&DestinationString, 0LL);
  CurrentThread = KeGetCurrentThread();
  v32 = 0;
  Process = (__int64)CurrentThread->ApcState.Process;
  v29 = Process;
  RunRef = (PEX_RUNDOWN_REF)(Process + 760);
  if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(Process + 760)) )
  {
    ProcessHotPatchContext = 0LL;
    while ( 1 )
    {
      ProcessImageHotPatchRecord = MiFindProcessImageHotPatchRecord(
                                     (PEPROCESS)Process,
                                     v7,
                                     a5,
                                     &DestinationString,
                                     &v26);
      v25 = ProcessImageHotPatchRecord;
      v11 = ProcessImageHotPatchRecord;
      if ( ProcessImageHotPatchRecord >= 0 )
      {
        v15 = v26;
      }
      else
      {
        if ( ProcessImageHotPatchRecord != -1073741275 )
          goto LABEL_25;
        if ( a7 || !MiGetProcessHotPatchContext(Process, 0) )
        {
          v11 = 1075380276;
          goto LABEL_25;
        }
        v15 = 0;
        v26 = 0;
      }
      if ( !ProcessHotPatchContext )
      {
        ProcessHotPatchContext = MiGetProcessHotPatchContext(Process, 1);
        if ( !ProcessHotPatchContext )
        {
          v11 = -1073741670;
          goto LABEL_25;
        }
      }
      HotPatchEntry = MiGetHotPatchEntry((PRTL_RB_TREE)ProcessHotPatchContext, a3, v15, &v25);
      v18 = HotPatchEntry;
      if ( !HotPatchEntry )
        break;
      v32 = 1;
      v19 = MiPerformImageHotPatch(
              (_DWORD)ProcessHotPatchContext,
              HotPatchEntry,
              v17,
              a2,
              (__int64)a3,
              (__int64)&DestinationString,
              a4,
              a5,
              a6,
              (__int64)&v28);
      v25 = v19;
      --CurrentThread->SpecialApcDisable;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)(ProcessHotPatchContext + 2), 0LL);
      MiLogHotPatchOperation(v18, a4, a5, v15, (__int64)&v28, (__int64)&DestinationString, v19);
      *(_DWORD *)(v18 + 92) &= ~1u;
      v27 = *(_DWORD *)(v18 + 92);
      if ( v19 < 0 )
      {
        LOBYTE(v21) = v27;
      }
      else
      {
        v20 = *(UNICODE_STRING *)(v18 + 64);
        *(_DWORD *)(v18 + 48) = a4;
        *(_DWORD *)(v18 + 52) = a5;
        *(_QWORD *)(v18 + 80) = v28;
        *(_DWORD *)(v18 + 88) = v15;
        *(UNICODE_STRING *)(v18 + 64) = DestinationString;
        DestinationString = v20;
        v21 = *(_DWORD *)(v18 + 92);
      }
      if ( (_InterlockedExchangeAdd64(ProcessHotPatchContext + 2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(ProcessHotPatchContext + 2);
      KeAbPostRelease((ULONG_PTR)(ProcessHotPatchContext + 2));
      KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
      v11 = v25;
      if ( v25 < 0 )
        goto LABEL_27;
      if ( (v21 & 2) != 0 )
      {
        MiDeleteHotPatchEntry((UNICODE_STRING *)v18);
        v22 = 0;
        goto LABEL_26;
      }
      a7 = 0;
      RtlFreeAnsiString(&DestinationString);
      RtlInitUnicodeString(&DestinationString, 0LL);
      Process = v29;
      v7 = a4;
    }
    v11 = v25;
LABEL_25:
    v22 = v32;
LABEL_26:
    if ( !v22 )
      goto LABEL_29;
LABEL_27:
    MiLockVadShared((__int64)CurrentThread, (__int64)a3);
    v23 = MiVadDeleted((__int64)a3);
    MiUnlockVadShared((__int64)CurrentThread, (__int64)a3);
    if ( v23 )
      MiDeleteImageHotPatchState((__int64)a3);
LABEL_29:
    ExReleaseRundownProtection_0(RunRef);
  }
  else
  {
    v11 = -1073741558;
  }
  RtlFreeAnsiString(&DestinationString);
  return v11;
}
