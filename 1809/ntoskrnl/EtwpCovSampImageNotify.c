/*
 * XREFs of EtwpCovSampImageNotify @ 0x1408C7D70
 * Callers:
 *     EtwpCovSampEnumerateDriver @ 0x1408C7760 (EtwpCovSampEnumerateDriver.c)
 *     EtwpCovSampEnumerateProcess @ 0x1408C77C0 (EtwpCovSampEnumerateProcess.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14004D2F0 (ExReleaseRundownProtection_0.c)
 *     KeLeaveCriticalRegion @ 0x14004F410 (KeLeaveCriticalRegion.c)
 *     EtwpCovSampAcquireSamplerRundown @ 0x1408C4C2C (EtwpCovSampAcquireSamplerRundown.c)
 *     EtwpCovSampContextGetModule @ 0x1408C6144 (EtwpCovSampContextGetModule.c)
 *     EtwpCovSampModuleDereference @ 0x1408C7FD4 (EtwpCovSampModuleDereference.c)
 *     EtwpCovSampProcessAddModule @ 0x1408C817C (EtwpCovSampProcessAddModule.c)
 *     EtwpCovSampProcessEnsureContext @ 0x1408C8478 (EtwpCovSampProcessEnsureContext.c)
 */

void __fastcall EtwpCovSampImageNotify(__int64 FullImageName, struct _LIST_ENTRY *ProcessId, PIMAGE_INFO ImageInfo)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v7; // rdi
  _KPROCESS *Process; // rsi
  __int64 v9; // rbp
  int Module; // eax
  __int64 v11; // rsi
  __int64 v12; // [rsp+60h] [rbp+18h] BYREF
  __int64 v13; // [rsp+68h] [rbp+20h] BYREF

  v12 = 0LL;
  v13 = 0LL;
  if ( (ImageInfo->Properties & 0x400) != 0 )
  {
    if ( (int)EtwpCovSampAcquireSamplerRundown(&v13) >= 0 )
    {
      CurrentThread = KeGetCurrentThread();
      v7 = qword_14040AE38 + 16;
      Process = CurrentThread->ApcState.Process;
      if ( ProcessId )
      {
        if ( ProcessId == Process[1].Header.WaitListHead.Flink
          && (int)EtwpCovSampProcessEnsureContext(CurrentThread->ApcState.Process) >= 0 )
        {
          v9 = *(_QWORD *)&Process[2].Spare2[15];
LABEL_9:
          Module = EtwpCovSampContextGetModule(v7, FullImageName, (__int64)&ImageInfo[-1].ImageSectionNumber, &v12);
          v11 = v12;
          if ( Module >= 0 )
            EtwpCovSampProcessAddModule(v9, v7, v12, ImageInfo->ImageBase);
          if ( v11 )
            EtwpCovSampModuleDereference(v7, v11);
        }
      }
      else if ( (ImageInfo->Properties & 0x100) != 0 )
      {
        v9 = qword_14040AE38 + 752;
        goto LABEL_9;
      }
    }
    if ( v13 )
    {
      ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&stru_14040AE40);
      KeLeaveCriticalRegion();
    }
  }
}
