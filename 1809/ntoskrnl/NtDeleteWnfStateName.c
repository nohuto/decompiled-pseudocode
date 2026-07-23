/*
 * XREFs of NtDeleteWnfStateName @ 0x1406AC580
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14004D2F0 (ExReleaseRundownProtection_0.c)
 *     SeAccessCheck @ 0x140051640 (SeAccessCheck.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     ExpWnfLookupPermanentName @ 0x1405AB92C (ExpWnfLookupPermanentName.c)
 *     SeReleaseSubjectContext @ 0x1405E2240 (SeReleaseSubjectContext.c)
 *     ExpCaptureWnfStateName @ 0x140610868 (ExpCaptureWnfStateName.c)
 *     ExpWnfLookupNameInstance @ 0x1406108E0 (ExpWnfLookupNameInstance.c)
 *     ExpWnfResolveScopeInstance @ 0x1406109EC (ExpWnfResolveScopeInstance.c)
 *     ExpWnfNotifyNameSubscribers @ 0x1406119F8 (ExpWnfNotifyNameSubscribers.c)
 *     SeCaptureSubjectContext @ 0x140632AA0 (SeCaptureSubjectContext.c)
 *     ExpWnfDeleteNameInstance @ 0x1406AC968 (ExpWnfDeleteNameInstance.c)
 *     ExpWnfEnumerateScopeInstances @ 0x1406ACD38 (ExpWnfEnumerateScopeInstances.c)
 *     ExpWnfDeletePermanentName @ 0x1406ACE34 (ExpWnfDeletePermanentName.c)
 *     ExpWnfDeletePermanentStateData @ 0x1408DC7E0 (ExpWnfDeletePermanentStateData.c)
 */

NTSTATUS __cdecl NtDeleteWnfStateName(PCWNF_STATE_NAME StateName)
{
  struct _KTHREAD *CurrentThread; // rax
  struct _EX_RUNDOWN_REF *v2; // r14
  int v3; // edi
  char v4; // r8
  __int64 v5; // rbx
  unsigned __int64 v6; // r13
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // r15
  _BOOL8 v9; // r12
  _KPROCESS *Process; // rax
  int v11; // r13d
  __int64 v12; // r8
  void *Ptr; // rdi
  void *v15; // rdi
  struct _EX_RUNDOWN_REF *v16; // [rsp+58h] [rbp-C0h] BYREF
  NTSTATUS v17; // [rsp+60h] [rbp-B8h]
  unsigned __int64 v18; // [rsp+68h] [rbp-B0h]
  int v19[2]; // [rsp+70h] [rbp-A8h] BYREF
  NTSTATUS AccessStatus; // [rsp+78h] [rbp-A0h] BYREF
  PVOID P; // [rsp+80h] [rbp-98h] BYREF
  unsigned __int64 v22; // [rsp+88h] [rbp-90h] BYREF
  ACCESS_MASK v23; // [rsp+90h] [rbp-88h] BYREF
  ACCESS_MASK GrantedAccess[3]; // [rsp+94h] [rbp-84h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectSecurityContext; // [rsp+A0h] [rbp-78h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+C0h] [rbp-58h] BYREF
  char PreviousMode; // [rsp+128h] [rbp+10h]
  int v28; // [rsp+130h] [rbp+18h]
  _KPROCESS *v29; // [rsp+138h] [rbp+20h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v28 = 0;
  P = 0LL;
  v2 = 0LL;
  *(_QWORD *)v19 = 0LL;
  v16 = 0LL;
  v3 = ExpCaptureWnfStateName((__int64 *)StateName, &v22, PreviousMode);
  v17 = v3;
  if ( v3 >= 0 )
  {
    v5 = v22;
    v6 = v22 >> 4;
    v7 = (v22 >> 6) & 0xF;
    v18 = v7;
    v8 = (v22 >> 4) & 3;
    if ( ((v22 >> 4) & 3) == 0 )
    {
      v3 = -1073741811;
      goto LABEL_19;
    }
    v9 = v4 == 0;
    if ( (_DWORD)v8 != 3 )
    {
      if ( v4 )
      {
        v3 = ExpWnfLookupPermanentName(v22, &P);
        if ( v3 < 0 )
          goto LABEL_19;
        v15 = (void *)*((_QWORD *)P + 2);
        SeCaptureSubjectContext(&SubjectSecurityContext);
        SeAccessCheck(
          v15,
          &SubjectSecurityContext,
          0,
          0x10000u,
          0,
          0LL,
          (PGENERIC_MAPPING)&ExpWnfNotificationMapping,
          1,
          &v23,
          (PNTSTATUS)&v29);
        SeReleaseSubjectContext(&SubjectSecurityContext);
        v3 = (int)v29;
        if ( (int)v29 < 0 )
          goto LABEL_19;
        LODWORD(v9) = 1;
      }
      v3 = ExpWnfDeletePermanentName(v5);
      if ( v3 < 0 )
        goto LABEL_19;
      v28 = 1;
      v7 = v18;
      v4 = PreviousMode;
    }
    if ( v4 )
    {
      Process = KeGetCurrentThread()->ApcState.Process;
      v5 = v22;
    }
    else
    {
      Process = PsInitialSystemProcess;
    }
    v29 = Process;
    if ( (_DWORD)v8 == 3 )
    {
      v3 = ExpWnfResolveScopeInstance((struct _EX_RUNDOWN_REF **)v19, (__int64)Process, 0LL, v7, 0LL);
      v2 = *(struct _EX_RUNDOWN_REF **)v19;
      if ( v3 < 0 )
        goto LABEL_19;
    }
    else
    {
      v3 = 0;
      v2 = (struct _EX_RUNDOWN_REF *)ExpWnfEnumerateScopeInstances(v7, 0LL);
    }
    if ( v2 )
    {
      v11 = v6 & 3;
      while ( 1 )
      {
        v3 = ExpWnfLookupNameInstance((__int64)v2, v5, (__int64 *)&v16);
        if ( v3 >= 0 )
        {
          if ( !v9 )
          {
            Ptr = v16[9].Ptr;
            SeCaptureSubjectContext(&SubjectContext);
            SeAccessCheck(
              Ptr,
              &SubjectContext,
              0,
              0x10000u,
              0,
              0LL,
              (PGENERIC_MAPPING)&ExpWnfNotificationMapping,
              1,
              GrantedAccess,
              &AccessStatus);
            SeReleaseSubjectContext(&SubjectContext);
            v3 = AccessStatus;
            if ( AccessStatus < 0 )
              goto LABEL_19;
            LODWORD(v9) = 1;
          }
          if ( v11 == 3LL && (_KPROCESS *)v16[19].Count != v29 )
          {
            v3 = -1073741790;
            goto LABEL_19;
          }
          ExpWnfNotifyNameSubscribers((__int64)v16, 0x10u, 1, PreviousMode != 0);
          LOBYTE(v12) = 1;
          if ( (unsigned int)ExpWnfDeleteNameInstance(v2, v16, v12) )
            v16 = 0LL;
          else
            v3 = -1073741772;
        }
        if ( v11 != 3LL )
        {
          if ( v16 )
          {
            ExReleaseRundownProtection_0(v16 + 1);
            v16 = 0LL;
          }
          v2 = (struct _EX_RUNDOWN_REF *)ExpWnfEnumerateScopeInstances((unsigned int)v18, v2);
          if ( v2 )
            continue;
        }
        break;
      }
    }
    if ( (v5 & 0x400) != 0 )
      ExpWnfDeletePermanentStateData(0LL, v5);
  }
LABEL_19:
  if ( v28 )
    v3 = 0;
  v17 = v3;
  if ( v16 )
    ExReleaseRundownProtection_0(v16 + 1);
  if ( v2 )
    ExReleaseRundownProtection_0(v2 + 1);
  if ( P )
    ExFreePoolWithTag(P, 0x20666E57u);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return v17;
}
