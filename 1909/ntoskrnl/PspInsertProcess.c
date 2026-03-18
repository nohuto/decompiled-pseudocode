/*
 * XREFs of PspInsertProcess @ 0x140677BB8
 * Callers:
 *     NtCreateUserProcess @ 0x140617920 (NtCreateUserProcess.c)
 *     PsCreateMinimalProcess @ 0x1407580C4 (PsCreateMinimalProcess.c)
 *     PspCreateProcess @ 0x140787730 (PspCreateProcess.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x14000D8E0 (ObfReferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x14003F860 (ObfDereferenceObjectWithTag.c)
 *     PspUnlockProcessListExclusive @ 0x1400E4080 (PspUnlockProcessListExclusive.c)
 *     PspLockProcessListExclusive @ 0x1400E4270 (PspLockProcessListExclusive.c)
 *     PspUnlockProcessExclusive @ 0x140139A28 (PspUnlockProcessExclusive.c)
 *     ObInsertObjectEx @ 0x1405D9D60 (ObInsertObjectEx.c)
 *     ObReferenceObjectByHandle @ 0x1405FB4B0 (ObReferenceObjectByHandle.c)
 *     ObCheckRefTraceProcess @ 0x140677E14 (ObCheckRefTraceProcess.c)
 *     DbgkCopyProcessDebugPort @ 0x140677E60 (DbgkCopyProcessDebugPort.c)
 *     SeCreateAccessStateEx @ 0x140678640 (SeCreateAccessStateEx.c)
 *     SeAuditingWithTokenForSubcategory @ 0x1406787B0 (SeAuditingWithTokenForSubcategory.c)
 *     PspImplicitAssignProcessToJob @ 0x140687DF0 (PspImplicitAssignProcessToJob.c)
 *     PspValidateJobAffinityState @ 0x1406E4620 (PspValidateJobAffinityState.c)
 *     SeAuditProcessCreation @ 0x14074A0D0 (SeAuditProcessCreation.c)
 *     PspDeleteObjectAccessState @ 0x1408C85AC (PspDeleteObjectAccessState.c)
 */

__int64 __fastcall PspInsertProcess(
        char *Object,
        struct _KPROCESS *a2,
        int a3,
        unsigned int a4,
        HANDLE Handle,
        char a6,
        __int64 a7,
        PACCESS_STATE AccessState)
{
  struct _KTHREAD *CurrentThread; // r14
  _KPROCESS *Process; // r13
  int inserted; // edi
  _QWORD *v14; // rcx
  _QWORD *v15; // rax
  PVOID v16; // rbp
  char v17; // bp
  struct _KPROCESS *v18; // rdx
  struct _ACCESS_STATE *v19; // rsi
  ACCESS_MASK v20; // r12d
  __int64 v21; // rcx
  NTSTATUS v23; // eax
  char v24; // [rsp+80h] [rbp+8h]
  PVOID v25; // [rsp+88h] [rbp+10h] BYREF
  int v26; // [rsp+90h] [rbp+18h]

  v26 = a3;
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  *(_DWORD *)(*((_QWORD *)Object + 131) + 40LL) = *((_DWORD *)Object + 186);
  if ( (unsigned __int8)SeAuditingWithTokenForSubcategory(133LL, 0LL) )
    SeAuditProcessCreation((ULONG_PTR)Object);
  if ( a2 )
  {
    if ( a2[1].Affinity.Bitmap[16] )
    {
      inserted = PspImplicitAssignProcessToJob(a2[1].Affinity.Bitmap[16], Object, a4);
      if ( inserted < 0 )
        goto LABEL_34;
    }
  }
  PspLockProcessListExclusive((__int64)CurrentThread);
  v14 = (_QWORD *)qword_140436B28;
  v15 = Object + 752;
  if ( *(__int64 **)qword_140436B28 != &PsActiveProcessHead )
    __fastfail(3u);
  *((_QWORD *)Object + 95) = qword_140436B28;
  *v15 = &PsActiveProcessHead;
  *v14 = v15;
  qword_140436B28 = (__int64)(Object + 752);
  *((_QWORD *)Object + 239) = ++PspProcessSequenceNumber;
  PspUnlockProcessListExclusive((__int64)CurrentThread);
  if ( (Process[1].DirectoryTableBase & 0x800000000LL) != 0 )
  {
    inserted = -1073741558;
  }
  else
  {
    if ( Handle )
    {
      v23 = ObReferenceObjectByHandle(Handle, 2u, DbgkDebugObjectType, KeGetCurrentThread()->PreviousMode, &v25, 0LL);
      v16 = v25;
      inserted = v23;
      if ( v23 < 0 )
        goto LABEL_34;
    }
    else
    {
      v16 = 0LL;
    }
    inserted = DbgkCopyProcessDebugPort((ULONG_PTR)Object);
    if ( v16 )
      ObfDereferenceObject(v16);
    if ( inserted >= 0 )
    {
      if ( v24 && (a4 & 2) != 0 )
        _InterlockedOr((volatile signed __int32 *)Object + 195, 2u);
      v17 = 0;
      if ( !a2 || (v18 = PsInitialSystemProcess, a2 != PsInitialSystemProcess) )
      {
        if ( (a6 & 2) != 0 )
        {
          v18 = (struct _KPROCESS *)Object;
          v17 = 1;
        }
        else
        {
          v18 = Process;
        }
      }
      v19 = AccessState;
      v20 = v26;
      inserted = SeCreateAccessStateEx(0LL, v18, v26, (__int64)PsProcessType + 76);
      if ( inserted >= 0 )
      {
        ObfReferenceObjectWithTag(Object, 0x72437350u);
        inserted = ObInsertObjectEx(Object, v19, v20, 0, v17, 0LL, 0LL);
        if ( inserted >= 0 )
        {
          ObfDereferenceObjectWithTag(Object, 0x72437350u);
          v21 = *((_QWORD *)Object + 119);
          if ( !v21 )
          {
            _InterlockedOr((volatile signed __int32 *)Object + 195, 0x4000000u);
            goto LABEL_22;
          }
          inserted = PspValidateJobAffinityState(v21, Object);
          if ( inserted >= 0 )
          {
LABEL_22:
            ObCheckRefTraceProcess(Object);
            if ( (a6 & 1) != 0 )
              PspUnlockProcessExclusive((__int64)Object, (__int64)CurrentThread);
            return 0LL;
          }
        }
        PspDeleteObjectAccessState(v19);
      }
    }
  }
LABEL_34:
  if ( (a6 & 1) != 0 )
    PspUnlockProcessExclusive((__int64)Object, (__int64)CurrentThread);
  return (unsigned int)inserted;
}
