/*
 * XREFs of PspChangeProcessExecutionState @ 0x1406045AC
 * Callers:
 *     PspExecuteJobFreezeThawCallback @ 0x140108BE0 (PspExecuteJobFreezeThawCallback.c)
 *     PspRemoveProcessFromJobChain @ 0x140601410 (PspRemoveProcessFromJobChain.c)
 *     PspAssignProcessToJob @ 0x140606664 (PspAssignProcessToJob.c)
 *     PspInsertThread @ 0x140622450 (PspInsertThread.c)
 *     PsSwapProcessWorkingSet @ 0x140889A1C (PsSwapProcessWorkingSet.c)
 * Callees:
 *     KiStackAttachProcess @ 0x140016DB0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x140017190 (KiUnstackDetachProcess.c)
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     MmGetSessionIdEx @ 0x14004F060 (MmGetSessionIdEx.c)
 *     MmGetSessionById @ 0x14007E4D0 (MmGetSessionById.c)
 *     MmInSwapWorkingSet @ 0x1400E4F04 (MmInSwapWorkingSet.c)
 *     MmOutSwapWorkingSet @ 0x1400E51A8 (MmOutSwapWorkingSet.c)
 *     ExReleaseExtensionTable @ 0x14010DC6C (ExReleaseExtensionTable.c)
 *     ExGetExtensionTable @ 0x14010DC84 (ExGetExtensionTable.c)
 *     MmDetachSession @ 0x14011A630 (MmDetachSession.c)
 *     MmAttachSession @ 0x14011A6C0 (MmAttachSession.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     PsFreezeProcess @ 0x140589E24 (PsFreezeProcess.c)
 *     PsThawProcess @ 0x14067F4C4 (PsThawProcess.c)
 */

__int64 __fastcall PspChangeProcessExecutionState(PEPROCESS Process)
{
  char v1; // r13
  unsigned int v2; // r14d
  char v3; // r15
  unsigned __int32 DirectoryTableBase; // eax
  _KPROCESS *v6; // rbp
  __int64 DirectoryTableBase_low; // rdx
  unsigned int v8; // ebx
  unsigned int v9; // edi
  unsigned __int32 v11; // ett
  char v12; // r12
  char v13; // di
  unsigned int SessionId; // eax
  _KPROCESS *SessionById; // rax
  unsigned int v16; // r8d
  bool v17; // zf
  unsigned __int32 v18; // eax
  void (__fastcall **ExtensionTable)(PEPROCESS); // rax
  int v20; // eax
  _BYTE v21[48]; // [rsp+28h] [rbp-90h] BYREF
  _BYTE v22[48]; // [rsp+58h] [rbp-60h] BYREF

  v1 = 0;
  v2 = 0;
  v3 = 0;
  _m_prefetchw(&Process[1].DirectoryTableBase);
  DirectoryTableBase = Process[1].DirectoryTableBase;
  v6 = 0LL;
  DirectoryTableBase_low = 0x40000000LL;
  while ( (DirectoryTableBase & 0x40000000) == 0 )
  {
    v8 = (DirectoryTableBase >> 28) & 3;
    v9 = (DirectoryTableBase >> 22) & 3;
    if ( v8 == v9 )
      break;
    v11 = DirectoryTableBase;
    DirectoryTableBase = _InterlockedCompareExchange(
                           (volatile signed __int32 *)&Process[1].DirectoryTableBase,
                           DirectoryTableBase | 0x40000000,
                           DirectoryTableBase);
    if ( v11 == DirectoryTableBase )
    {
LABEL_6:
      v12 = 0;
      v13 = v8 ^ v9;
      if ( !v3 )
      {
        KiStackAttachProcess(Process, 0LL, (__int64)v22);
        SessionId = MmGetSessionIdEx((__int64)Process);
        if ( SessionId != -1 )
        {
          SessionById = (_KPROCESS *)MmGetSessionById(SessionId);
          v6 = SessionById;
          if ( SessionById )
          {
            if ( (int)MmAttachSession(SessionById, (__int64)v21) < 0 )
            {
              ObfDereferenceObject(v6);
              v6 = 0LL;
            }
          }
        }
        v3 = 1;
      }
      if ( (v13 & 2) != 0 )
      {
        if ( (v8 & 2) != 0 )
          v12 = 1;
        else
          MmInSwapWorkingSet(Process);
      }
      if ( (v13 & 1) != 0 )
      {
        v1 = 1;
        LOBYTE(DirectoryTableBase_low) = 1;
        if ( (v8 & 1) != 0 )
          PsFreezeProcess((ULONG_PTR)Process, 1);
        else
          PsThawProcess(Process, DirectoryTableBase_low);
      }
      v9 = v8;
      if ( v12 )
      {
        v20 = MmOutSwapWorkingSet(Process, PspOutSwapSharedPages != 0);
        if ( v20 < 0 )
        {
          if ( v20 == -1073741671 )
            v2 = -1073741671;
          v9 = v8 & 0xFFFFFFFD;
        }
      }
      _m_prefetchw(&Process[1].DirectoryTableBase);
      DirectoryTableBase_low = LODWORD(Process[1].DirectoryTableBase);
      v16 = v8;
      do
      {
        v8 = ((unsigned int)DirectoryTableBase_low >> 28) & 3;
        if ( v8 != v16 && v8 != v9 )
          goto LABEL_6;
        v18 = _InterlockedCompareExchange(
                (volatile signed __int32 *)&Process[1].DirectoryTableBase,
                DirectoryTableBase_low & 0x8F3FFFFF | ((v9 | (v9 << 6)) << 22),
                DirectoryTableBase_low);
        v17 = (_DWORD)DirectoryTableBase_low == v18;
        DirectoryTableBase_low = v18;
      }
      while ( !v17 );
      if ( v6 )
      {
        MmDetachSession((__int64)v6, (__int64)v21);
        ObfDereferenceObject(v6);
      }
      KiUnstackDetachProcess((__int64)v22, 0LL);
      if ( v1 )
      {
        ExtensionTable = (void (__fastcall **)(PEPROCESS))ExGetExtensionTable((struct _EX_RUNDOWN_REF *)PspMmcssExtensionHost);
        if ( ExtensionTable )
        {
          (*ExtensionTable)(Process);
          ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)PspMmcssExtensionHost);
        }
      }
      return v2;
    }
  }
  return v2;
}
