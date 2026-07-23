/*
 * XREFs of MiHotPatchImage @ 0x14088DFC4
 * Callers:
 *     MiHotPatchProcess @ 0x14088E2E0 (MiHotPatchProcess.c)
 *     MiSetImageHotPatchAllowed @ 0x140891400 (MiSetImageHotPatchAllowed.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14003EEB0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     ExReleaseRundownProtection_0 @ 0x140043C20 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x140043CA0 (ExAcquireRundownProtection_0.c)
 *     RtlInitUnicodeString @ 0x140043CD0 (RtlInitUnicodeString.c)
 *     MiVadDeleted @ 0x1400539D0 (MiVadDeleted.c)
 *     MiLockVadShared @ 0x1400539E0 (MiLockVadShared.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 *     MiUnlockVadShared @ 0x1401162B4 (MiUnlockVadShared.c)
 *     RtlFreeAnsiString @ 0x14060D250 (RtlFreeAnsiString.c)
 *     MiDeleteHotPatchEntry @ 0x14088D7B0 (MiDeleteHotPatchEntry.c)
 *     MiDeleteImageHotPatchState @ 0x14088D96C (MiDeleteImageHotPatchState.c)
 *     MiFindProcessImageHotPatchRecord @ 0x14088DAA4 (MiFindProcessImageHotPatchRecord.c)
 *     MiGetHotPatchEntry @ 0x14088DC74 (MiGetHotPatchEntry.c)
 *     MiGetProcessHotPatchContext @ 0x14088DE88 (MiGetProcessHotPatchContext.c)
 *     MiLogHotPatchOperation @ 0x14088F15C (MiLogHotPatchOperation.c)
 *     MiLogHotPatchOperationStatus @ 0x14088F418 (MiLogHotPatchOperationStatus.c)
 *     MiPerformImageHotPatch @ 0x14088FDF8 (MiPerformImageHotPatch.c)
 */

__int64 __fastcall MiHotPatchImage(__int64 a1, __int64 a2, _RTL_BALANCED_NODE *a3, int a4, int a5, char a6, int a7)
{
  int v7; // edi
  struct _KTHREAD *CurrentThread; // r12
  __int64 Process; // rbx
  unsigned int v11; // edi
  int v12; // r14d
  _QWORD *ProcessHotPatchContext; // r13
  int v14; // esi
  int ProcessImageHotPatchRecord; // eax
  int v16; // edi
  unsigned __int64 HotPatchEntry; // rax
  int v18; // r8d
  unsigned __int64 v19; // r14
  int v20; // ebx
  UNICODE_STRING v21; // xmm1
  int v22; // ebx
  int v23; // ebx
  int v25; // [rsp+58h] [rbp-51h]
  __int64 v26; // [rsp+5Ch] [rbp-4Dh] BYREF
  UNICODE_STRING DestinationString; // [rsp+68h] [rbp-41h] BYREF
  int v28; // [rsp+78h] [rbp-31h]
  __int64 v29; // [rsp+80h] [rbp-29h] BYREF
  struct _KTHREAD *v30; // [rsp+88h] [rbp-21h]
  __int64 v31; // [rsp+90h] [rbp-19h]
  PEX_RUNDOWN_REF RunRef; // [rsp+98h] [rbp-11h]
  UNICODE_STRING v33; // [rsp+A8h] [rbp-1h]
  __int64 v34; // [rsp+F8h] [rbp+4Fh] BYREF
  __int64 v35; // [rsp+100h] [rbp+57h]
  int v36; // [rsp+110h] [rbp+67h]

  v36 = a4;
  v35 = a2;
  v34 = a1;
  v29 = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  v7 = a4;
  DestinationString.Buffer = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  CurrentThread = KeGetCurrentThread();
  v25 = 0;
  v30 = CurrentThread;
  Process = (__int64)CurrentThread->ApcState.Process;
  v31 = Process;
  RunRef = (PEX_RUNDOWN_REF)(Process + 768);
  if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(Process + 768)) )
  {
    v12 = a7;
    ProcessHotPatchContext = 0LL;
    v14 = 1;
    while ( 1 )
    {
      ProcessImageHotPatchRecord = MiFindProcessImageHotPatchRecord(
                                     (PEPROCESS)Process,
                                     v7,
                                     a5,
                                     &DestinationString,
                                     &v26);
      LODWORD(v34) = ProcessImageHotPatchRecord;
      v11 = ProcessImageHotPatchRecord;
      if ( ProcessImageHotPatchRecord >= 0 )
      {
        v16 = v26;
      }
      else
      {
        if ( ProcessImageHotPatchRecord != -1073741275 )
          goto LABEL_27;
        if ( v12 || !MiGetProcessHotPatchContext(Process, 0) )
        {
          v11 = 1075380276;
LABEL_26:
          v14 = 0;
          goto LABEL_27;
        }
        v16 = 0;
        LODWORD(v26) = 0;
      }
      if ( !ProcessHotPatchContext )
      {
        ProcessHotPatchContext = MiGetProcessHotPatchContext(Process, 1);
        if ( !ProcessHotPatchContext )
        {
          v11 = -1073741670;
          goto LABEL_27;
        }
      }
      HotPatchEntry = MiGetHotPatchEntry((PRTL_RB_TREE)ProcessHotPatchContext, a3, v16, (int *)&v34);
      v19 = HotPatchEntry;
      if ( !HotPatchEntry )
        break;
      v25 = 1;
      v20 = MiPerformImageHotPatch(
              (_DWORD)ProcessHotPatchContext,
              HotPatchEntry,
              v18,
              v35,
              (__int64)a3,
              (__int64)&DestinationString,
              v36,
              a5,
              a6,
              (__int64)&v29);
      LODWORD(v34) = v20;
      --CurrentThread->SpecialApcDisable;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)(ProcessHotPatchContext + 2), 0LL);
      MiLogHotPatchOperation(v19, v36, a5, v16, (__int64)&v29, (__int64)&DestinationString, v20);
      *(_DWORD *)(v19 + 92) &= ~1u;
      v28 = *(_DWORD *)(v19 + 92);
      if ( v20 < 0 )
      {
        LOBYTE(v22) = v28;
      }
      else
      {
        v21 = *(UNICODE_STRING *)(v19 + 64);
        *(_DWORD *)(v19 + 48) = v36;
        *(_DWORD *)(v19 + 52) = a5;
        *(_QWORD *)(v19 + 80) = v29;
        *(_DWORD *)(v19 + 88) = v16;
        *(UNICODE_STRING *)(v19 + 64) = DestinationString;
        DestinationString = v21;
        v22 = *(_DWORD *)(v19 + 92);
        v33 = v21;
      }
      if ( (_InterlockedExchangeAdd64(ProcessHotPatchContext + 2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(ProcessHotPatchContext + 2);
      KeAbPostRelease((ULONG_PTR)(ProcessHotPatchContext + 2));
      CurrentThread = v30;
      KiLeaveGuardedRegionUnsafe((__int64)v30);
      v11 = v34;
      if ( (int)v34 < 0 )
        goto LABEL_26;
      if ( (v22 & 2) != 0 )
      {
        MiDeleteHotPatchEntry((UNICODE_STRING *)v19);
        v25 = 0;
        goto LABEL_26;
      }
      v12 = 0;
      RtlFreeAnsiString(&DestinationString);
      RtlInitUnicodeString(&DestinationString, 0LL);
      Process = v31;
      v7 = v36;
    }
    v11 = v34;
    if ( (int)v34 >= 0 && (_DWORD)v34 != 259 )
      goto LABEL_26;
LABEL_27:
    if ( v25 )
    {
      MiLockVadShared((__int64)CurrentThread, (__int64)a3);
      v23 = MiVadDeleted((__int64)a3);
      MiUnlockVadShared((__int64)CurrentThread, (__int64)a3);
      if ( v23 )
        MiDeleteImageHotPatchState((__int64)a3);
    }
    if ( v14 )
      MiLogHotPatchOperationStatus(v36, a5, (unsigned int)&DestinationString, v11, 0);
    ExReleaseRundownProtection_0(RunRef);
  }
  else
  {
    v11 = -1073741558;
  }
  RtlFreeAnsiString(&DestinationString);
  return v11;
}
