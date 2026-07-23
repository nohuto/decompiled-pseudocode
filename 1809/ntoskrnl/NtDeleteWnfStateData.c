/*
 * XREFs of NtDeleteWnfStateData @ 0x14075F710
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14004D2F0 (ExReleaseRundownProtection_0.c)
 *     SeAccessCheck @ 0x140051640 (SeAccessCheck.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     ExpWnfLookupPermanentName @ 0x1405AB92C (ExpWnfLookupPermanentName.c)
 *     SeReleaseSubjectContext @ 0x1405E2240 (SeReleaseSubjectContext.c)
 *     ExpWnfReleaseCapturedScopeInstanceId @ 0x140610814 (ExpWnfReleaseCapturedScopeInstanceId.c)
 *     ExpCaptureWnfStateName @ 0x140610868 (ExpCaptureWnfStateName.c)
 *     ExpWnfLookupNameInstance @ 0x1406108E0 (ExpWnfLookupNameInstance.c)
 *     ExpWnfResolveScopeInstance @ 0x1406109EC (ExpWnfResolveScopeInstance.c)
 *     ExpWnfCaptureScopeInstanceId @ 0x140610E20 (ExpWnfCaptureScopeInstanceId.c)
 *     SeCaptureSubjectContext @ 0x140632AA0 (SeCaptureSubjectContext.c)
 *     ExpWnfDeleteStateData @ 0x1406ACCA8 (ExpWnfDeleteStateData.c)
 *     ExpWnfCheckCrossScopeAccess @ 0x1406C8330 (ExpWnfCheckCrossScopeAccess.c)
 *     ExpWnfDeletePermanentStateData @ 0x1408DC7E0 (ExpWnfDeletePermanentStateData.c)
 */

NTSTATUS __cdecl NtDeleteWnfStateData(PCWNF_STATE_NAME StateName, const void *ExplicitScope)
{
  struct _KTHREAD *CurrentThread; // rax
  char PreviousMode; // r14
  unsigned __int64 v5; // r15
  char v6; // r8
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // r12
  struct _KTHREAD *v9; // r8
  PEPROCESS Process; // r13
  int v11; // eax
  void *Ptr; // rdi
  void *v14; // rdi
  NTSTATUS v15; // eax
  NTSTATUS v16; // [rsp+50h] [rbp-C8h]
  int v17; // [rsp+58h] [rbp-C0h]
  struct _EX_RUNDOWN_REF *v18; // [rsp+60h] [rbp-B8h] BYREF
  int v19[2]; // [rsp+68h] [rbp-B0h] BYREF
  int v20; // [rsp+70h] [rbp-A8h]
  NTSTATUS AccessStatus; // [rsp+74h] [rbp-A4h] BYREF
  PVOID P; // [rsp+78h] [rbp-A0h] BYREF
  unsigned __int64 v23; // [rsp+80h] [rbp-98h] BYREF
  ACCESS_MASK v24; // [rsp+88h] [rbp-90h] BYREF
  ACCESS_MASK GrantedAccess; // [rsp+8Ch] [rbp-8Ch] BYREF
  ACCESS_MASK v26[2]; // [rsp+90h] [rbp-88h] BYREF
  PVOID v27[2]; // [rsp+A0h] [rbp-78h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectSecurityContext; // [rsp+B0h] [rbp-68h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+D0h] [rbp-48h] BYREF
  NTSTATUS v30; // [rsp+138h] [rbp+20h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  P = 0LL;
  *(_QWORD *)v19 = 0LL;
  v18 = 0LL;
  LODWORD(v5) = 0;
  v27[0] = 0LL;
  v27[1] = 0LL;
  v16 = ExpCaptureWnfStateName((__int64 *)StateName, &v23, PreviousMode);
  if ( v16 >= 0 )
  {
    v7 = v23;
    v8 = (v23 >> 4) & 3;
    v20 = (v23 >> 4) & 3;
    v5 = (v23 >> 6) & 0xF;
    v17 = (v23 >> 6) & 0xF;
    v16 = ExpWnfCaptureScopeInstanceId(v17, ExplicitScope, v6, (__int64 *)v26, (__int64)v27);
    if ( v16 >= 0 )
    {
      if ( PreviousMode )
      {
        if ( ExplicitScope )
        {
          v16 = ExpWnfCheckCrossScopeAccess(v7);
          if ( v16 < 0 )
            goto LABEL_18;
        }
        v9 = KeGetCurrentThread();
        Process = v9->ApcState.Process;
        LODWORD(v5) = v17;
        v7 = v23;
        LODWORD(v8) = v20;
      }
      else
      {
        v9 = 0LL;
        Process = PsInitialSystemProcess;
      }
      v16 = ExpWnfResolveScopeInstance((struct _EX_RUNDOWN_REF **)v19, (__int64)Process, (__int64)v9, v5, *(PSID *)v26);
      if ( v16 < 0 )
        goto LABEL_18;
      v11 = ExpWnfLookupNameInstance(*(__int64 *)v19, v7, (__int64 *)&v18);
      v16 = v11;
      if ( v11 != -1073741772 || (_DWORD)v8 == 3 )
      {
        if ( v11 >= 0 )
        {
          if ( !PreviousMode
            || (Ptr = v18[9].Ptr,
                SeCaptureSubjectContext(&SubjectContext),
                SeAccessCheck(
                  Ptr,
                  &SubjectContext,
                  0,
                  2u,
                  0,
                  0LL,
                  (PGENERIC_MAPPING)&ExpWnfNotificationMapping,
                  1,
                  &GrantedAccess,
                  &AccessStatus),
                SeReleaseSubjectContext(&SubjectContext),
                v16 = AccessStatus,
                AccessStatus >= 0) )
          {
            if ( (_DWORD)v8 != 3 || (PEPROCESS)v18[19].Count == Process )
            {
              if ( (v7 & 0x400) == 0
                || (v15 = ExpWnfDeletePermanentStateData(*(_QWORD *)v19, v7), v16 = v15, (int)(v15 + 0x80000000) < 0)
                || v15 == -1073741772 )
              {
                ExpWnfDeleteStateData((__int64)v18);
LABEL_17:
                v16 = 0;
              }
            }
            else
            {
              v16 = -1073741790;
            }
          }
        }
      }
      else
      {
        v16 = ExpWnfLookupPermanentName(v7, &P);
        if ( v16 >= 0 )
        {
          if ( !PreviousMode
            || (v14 = (void *)*((_QWORD *)P + 2),
                SeCaptureSubjectContext(&SubjectSecurityContext),
                SeAccessCheck(
                  v14,
                  &SubjectSecurityContext,
                  0,
                  2u,
                  0,
                  0LL,
                  (PGENERIC_MAPPING)&ExpWnfNotificationMapping,
                  1,
                  &v24,
                  &v30),
                SeReleaseSubjectContext(&SubjectSecurityContext),
                v16 = v30,
                v30 >= 0) )
          {
            if ( (v7 & 0x400) == 0 )
              goto LABEL_17;
            v16 = ExpWnfDeletePermanentStateData(*(_QWORD *)v19, v7);
            if ( v16 == -1073741772 )
              goto LABEL_17;
          }
        }
      }
    }
  }
LABEL_18:
  if ( v18 )
    ExReleaseRundownProtection_0(v18 + 1);
  if ( *(_QWORD *)v19 )
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(*(_QWORD *)v19 + 8LL));
  if ( P )
    ExFreePoolWithTag(P, 0x20666E57u);
  ExpWnfReleaseCapturedScopeInstanceId(v5, v27, PreviousMode);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return v16;
}
