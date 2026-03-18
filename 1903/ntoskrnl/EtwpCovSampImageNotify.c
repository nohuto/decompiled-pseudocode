/*
 * XREFs of EtwpCovSampImageNotify @ 0x140903F10
 * Callers:
 *     EtwpCovSampEnumerateDriver @ 0x1409038F0 (EtwpCovSampEnumerateDriver.c)
 *     EtwpCovSampEnumerateProcess @ 0x140903950 (EtwpCovSampEnumerateProcess.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x14003E220 (KeLeaveCriticalRegion.c)
 *     ExReleaseRundownProtection_0 @ 0x140043820 (ExReleaseRundownProtection_0.c)
 *     EtwpCovSampAcquireSamplerRundown @ 0x140900B88 (EtwpCovSampAcquireSamplerRundown.c)
 *     EtwpCovSampContextGetModule @ 0x1409020A4 (EtwpCovSampContextGetModule.c)
 *     EtwpCovSampModuleDereference @ 0x140904194 (EtwpCovSampModuleDereference.c)
 *     EtwpCovSampProcessAddModule @ 0x140904348 (EtwpCovSampProcessAddModule.c)
 *     EtwpCovSampProcessEnsureContext @ 0x140904644 (EtwpCovSampProcessEnsureContext.c)
 */

void __fastcall EtwpCovSampImageNotify(__int64 FullImageName, HANDLE ProcessId, char *ImageInfo)
{
  char *v6; // r14
  struct _KTHREAD *CurrentThread; // rax
  __int64 v8; // rsi
  __int64 Process; // rdi
  __int64 v10; // rbp
  int Module; // eax
  __int64 v12; // rdi
  __int64 v13; // [rsp+80h] [rbp+18h] BYREF
  __int64 v14; // [rsp+88h] [rbp+20h] BYREF

  v13 = 0LL;
  v14 = 0LL;
  if ( (*(_DWORD *)ImageInfo & 0x400) != 0 )
  {
    v6 = ImageInfo - 8;
    if ( (int)EtwpCovSampAcquireSamplerRundown(&v14) >= 0 )
    {
      CurrentThread = KeGetCurrentThread();
      v8 = qword_140432578 + 16;
      Process = (__int64)CurrentThread->ApcState.Process;
      if ( ProcessId )
      {
        if ( ProcessId == *(HANDLE *)(Process + 744)
          && (int)EtwpCovSampProcessEnsureContext(CurrentThread->ApcState.Process) >= 0 )
        {
          v10 = *(_QWORD *)(Process + 2160);
LABEL_9:
          Module = EtwpCovSampContextGetModule(v8, Process, v10, FullImageName, (__int64)v6, 0, &v13);
          v12 = v13;
          if ( Module >= 0 )
            EtwpCovSampProcessAddModule(v10, v8, v13, *((_QWORD *)ImageInfo + 1));
          if ( v12 )
            EtwpCovSampModuleDereference(v8, v12);
        }
      }
      else if ( (*(_DWORD *)ImageInfo & 0x100) != 0 )
      {
        v10 = qword_140432578 + 752;
        goto LABEL_9;
      }
    }
    if ( v14 )
    {
      ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&stru_140432580);
      KeLeaveCriticalRegion();
    }
  }
}
