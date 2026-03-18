/*
 * XREFs of PspChangeProcessExecutionState @ 0x140694A24
 * Callers:
 *     PspExecuteJobFreezeThawCallback @ 0x1400E5F90 (PspExecuteJobFreezeThawCallback.c)
 *     PspInsertThread @ 0x1405E8D54 (PspInsertThread.c)
 *     PspRemoveProcessFromJobChain @ 0x140613394 (PspRemoveProcessFromJobChain.c)
 *     PspAssignProcessToJob @ 0x140695C0C (PspAssignProcessToJob.c)
 *     PsSwapProcessWorkingSet @ 0x1408C673C (PsSwapProcessWorkingSet.c)
 * Callees:
 *     MmGetSessionById @ 0x1400023F0 (MmGetSessionById.c)
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     MmGetSessionIdEx @ 0x14003F4F0 (MmGetSessionIdEx.c)
 *     MmDetachSession @ 0x14008BB30 (MmDetachSession.c)
 *     MmAttachSession @ 0x14008BBD0 (MmAttachSession.c)
 *     KiUnstackDetachProcess @ 0x140090690 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140090AF0 (KiStackAttachProcess.c)
 *     MmInSwapWorkingSet @ 0x1400F3B7C (MmInSwapWorkingSet.c)
 *     MmOutSwapWorkingSet @ 0x1400F3E2C (MmOutSwapWorkingSet.c)
 *     ExReleaseExtensionTable @ 0x1400FB6A8 (ExReleaseExtensionTable.c)
 *     ExGetExtensionTable @ 0x1400FB6C0 (ExGetExtensionTable.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     PsFreezeProcess @ 0x1406A34C4 (PsFreezeProcess.c)
 *     PsThawProcess @ 0x1406A3778 (PsThawProcess.c)
 */

__int64 __fastcall PspChangeProcessExecutionState(PEPROCESS Process)
{
  char v2; // r13
  unsigned int v3; // r15d
  char v4; // r12
  unsigned __int32 DirectoryTableBase; // eax
  void *v6; // rbp
  int v7; // ebx
  unsigned int v8; // edi
  unsigned __int32 v10; // ett
  char v11; // r14
  char v12; // di
  unsigned int SessionId; // eax
  ULONG_PTR SessionById; // rax
  unsigned __int32 v15; // edx
  int v16; // r8d
  bool v17; // zf
  signed __int32 v18; // eax
  void (__fastcall **ExtensionTable)(PEPROCESS); // rax
  int v20; // eax
  _BYTE v21[48]; // [rsp+28h] [rbp-90h] BYREF
  _BYTE v22[48]; // [rsp+58h] [rbp-60h] BYREF

  memset(v22, 0, sizeof(v22));
  memset(v21, 0, sizeof(v21));
  v2 = 0;
  v3 = 0;
  v4 = 0;
  _m_prefetchw(&Process[1].DirectoryTableBase);
  DirectoryTableBase = Process[1].DirectoryTableBase;
  v6 = 0LL;
  while ( (DirectoryTableBase & 0x40000000) == 0 )
  {
    v7 = (DirectoryTableBase >> 28) & 3;
    v8 = (DirectoryTableBase >> 22) & 3;
    if ( v7 == v8 )
      break;
    v10 = DirectoryTableBase;
    DirectoryTableBase = _InterlockedCompareExchange(
                           (volatile signed __int32 *)&Process[1].DirectoryTableBase,
                           DirectoryTableBase | 0x40000000,
                           DirectoryTableBase);
    if ( v10 == DirectoryTableBase )
    {
LABEL_6:
      v11 = 0;
      v12 = v7 ^ v8;
      if ( !v4 )
      {
        KiStackAttachProcess(Process, 0, (__int64)v22);
        SessionId = MmGetSessionIdEx((__int64)Process);
        if ( SessionId != -1 )
        {
          SessionById = MmGetSessionById(SessionId);
          v6 = (void *)SessionById;
          if ( SessionById )
          {
            if ( (int)MmAttachSession(SessionById) < 0 )
            {
              ObfDereferenceObject(v6);
              v6 = 0LL;
            }
          }
        }
        v4 = 1;
      }
      if ( (v12 & 2) != 0 )
      {
        if ( (v7 & 2) != 0 )
          v11 = 1;
        else
          MmInSwapWorkingSet(Process);
      }
      if ( (v12 & 1) != 0 )
      {
        v2 = 1;
        if ( (v7 & 1) != 0 )
          PsFreezeProcess((ULONG_PTR)Process);
        else
          PsThawProcess((ULONG_PTR)Process);
      }
      v8 = v7;
      if ( v11 )
      {
        v20 = MmOutSwapWorkingSet(Process, PspOutSwapSharedPages != 0);
        if ( v20 < 0 )
        {
          if ( v20 == -1073741671 )
            v3 = -1073741671;
          v8 = v7 & 0xFFFFFFFD;
        }
      }
      _m_prefetchw(&Process[1].DirectoryTableBase);
      v15 = Process[1].DirectoryTableBase;
      v16 = v7;
      do
      {
        v7 = (v15 >> 28) & 3;
        if ( v7 != v16 && v7 != v8 )
          goto LABEL_6;
        v18 = _InterlockedCompareExchange(
                (volatile signed __int32 *)&Process[1].DirectoryTableBase,
                v15 & 0x8F3FFFFF | ((v8 | (v8 << 6)) << 22),
                v15);
        v17 = v15 == v18;
        v15 = v18;
      }
      while ( !v17 );
      if ( v6 )
      {
        MmDetachSession((__int64)v6, (__int64)v21);
        ObfDereferenceObject(v6);
      }
      KiUnstackDetachProcess((struct _KTHREAD *)v22, 0);
      if ( v2 )
      {
        ExtensionTable = (void (__fastcall **)(PEPROCESS))ExGetExtensionTable((struct _EX_RUNDOWN_REF *)PspMmcssExtensionHost);
        if ( ExtensionTable )
        {
          (*ExtensionTable)(Process);
          ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)PspMmcssExtensionHost);
        }
      }
      return v3;
    }
  }
  return v3;
}
