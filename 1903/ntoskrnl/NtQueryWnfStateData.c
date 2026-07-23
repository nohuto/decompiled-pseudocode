/*
 * XREFs of NtQueryWnfStateData @ 0x140641CA0
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseRundownProtection_0 @ 0x140043820 (ExReleaseRundownProtection_0.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     ProbeForWrite @ 0x1405F07E0 (ProbeForWrite.c)
 *     ExpWnfLookupPermanentName @ 0x14063C614 (ExpWnfLookupPermanentName.c)
 *     ExpWnfCheckCrossScopeAccess @ 0x14063E584 (ExpWnfCheckCrossScopeAccess.c)
 *     ExpWnfCreateNameInstance @ 0x14064036C (ExpWnfCreateNameInstance.c)
 *     ExpWnfReleaseCapturedScopeInstanceId @ 0x1406420EC (ExpWnfReleaseCapturedScopeInstanceId.c)
 *     ExpCaptureWnfStateName @ 0x140642140 (ExpCaptureWnfStateName.c)
 *     ExpWnfLookupNameInstance @ 0x1406421B8 (ExpWnfLookupNameInstance.c)
 *     ExpWnfResolveScopeInstance @ 0x1406422B8 (ExpWnfResolveScopeInstance.c)
 *     ExpWnfCaptureScopeInstanceId @ 0x140642700 (ExpWnfCaptureScopeInstanceId.c)
 *     ExpWnfValidatePubSubPreconditions @ 0x1406427CC (ExpWnfValidatePubSubPreconditions.c)
 *     ExpWnfReadStateData @ 0x1406428CC (ExpWnfReadStateData.c)
 */

NTSTATUS __cdecl NtQueryWnfStateData(
        PCWNF_STATE_NAME StateName,
        PCWNF_TYPE_ID TypeId,
        const void *ExplicitScope,
        PWNF_CHANGE_STAMP ChangeStamp,
        PVOID Buffer,
        PULONG BufferSize)
{
  const void *v6; // r15
  struct _KTHREAD *CurrentThread; // rax
  char PreviousMode; // r14
  __int64 v9; // r8
  unsigned __int64 v10; // r9
  unsigned int *v11; // r10
  unsigned __int64 v12; // r11
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rcx
  unsigned __int64 v16; // rbx
  __int64 v17; // r12
  __int64 v18; // rsi
  int v19; // r13d
  struct _KTHREAD *v20; // r8
  struct _KPROCESS *Process; // rcx
  unsigned __int64 v22; // r15
  int v23; // eax
  PULONG v24; // rax
  __int64 v25; // r8
  PVOID v27; // rsi
  NTSTATUS StateData; // [rsp+30h] [rbp-E8h]
  unsigned int v29; // [rsp+38h] [rbp-E0h]
  struct _EX_RUNDOWN_REF *v30; // [rsp+40h] [rbp-D8h] BYREF
  unsigned int v31; // [rsp+48h] [rbp-D0h]
  PVOID P; // [rsp+50h] [rbp-C8h] BYREF
  int v33; // [rsp+58h] [rbp-C0h]
  unsigned __int64 v34; // [rsp+60h] [rbp-B8h] BYREF
  PCWNF_TYPE_ID v35; // [rsp+68h] [rbp-B0h]
  int v36[2]; // [rsp+70h] [rbp-A8h] BYREF
  struct _KPROCESS *v37; // [rsp+78h] [rbp-A0h]
  PULONG v38; // [rsp+80h] [rbp-98h]
  PWNF_CHANGE_STAMP v39; // [rsp+88h] [rbp-90h]
  PSID Sid; // [rsp+90h] [rbp-88h] BYREF
  PVOID v41; // [rsp+98h] [rbp-80h]
  _QWORD v42[2]; // [rsp+B0h] [rbp-68h] BYREF
  __int128 v43; // [rsp+C0h] [rbp-58h] BYREF

  v39 = ChangeStamp;
  v6 = ExplicitScope;
  v41 = Buffer;
  v38 = BufferSize;
  v34 = 0LL;
  v43 = 0uLL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  P = 0LL;
  *(_QWORD *)v36 = 0LL;
  v30 = 0LL;
  v29 = 0;
  v42[0] = 0LL;
  v42[1] = 0LL;
  v35 = TypeId;
  LOBYTE(ExplicitScope) = PreviousMode;
  StateData = ExpCaptureWnfStateName(StateName, &v34, ExplicitScope);
  if ( StateData >= 0 )
  {
    if ( PreviousMode )
    {
      if ( v10 )
      {
        if ( v10 >= 0x7FFFFFFF0000LL )
          v10 = 0x7FFFFFFF0000LL;
        v43 = *(_OWORD *)v10;
        v35 = (PCWNF_TYPE_ID)&v43;
      }
      v13 = v12;
      if ( v12 >= 0x7FFFFFFF0000LL )
        v13 = 0x7FFFFFFF0000LL;
      *(_DWORD *)v13 = *(_DWORD *)v13;
      v14 = (__int64)v11;
      if ( (unsigned __int64)v11 >= 0x7FFFFFFF0000LL )
        v14 = 0x7FFFFFFF0000LL;
      v9 = *(unsigned int *)v14;
      v31 = *(_DWORD *)v14;
      v15 = (__int64)v11;
      if ( (unsigned __int64)v11 >= 0x7FFFFFFF0000LL )
        v15 = 0x7FFFFFFF0000LL;
      *(_DWORD *)v15 = *(_DWORD *)v15;
      if ( (_DWORD)v9 )
        ProbeForWrite(Buffer, (unsigned int)v9, 1u);
    }
    else
    {
      v31 = *v11;
    }
    v16 = v34;
    v17 = (v34 >> 4) & 3;
    v33 = (v34 >> 4) & 3;
    v18 = (v34 >> 6) & 0xF;
    v29 = (v34 >> 6) & 0xF;
    LOBYTE(v9) = PreviousMode;
    StateData = ExpWnfCaptureScopeInstanceId(v18, v6, v9, &Sid, v42);
    if ( StateData >= 0 )
    {
      if ( PreviousMode )
      {
        v19 = 0;
        if ( v6 )
        {
          StateData = ExpWnfCheckCrossScopeAccess(v16);
          if ( StateData < 0 )
            goto LABEL_31;
        }
      }
      else
      {
        v19 = 1;
      }
      if ( PreviousMode )
      {
        v20 = KeGetCurrentThread();
        Process = v20->ApcState.Process;
        v16 = v34;
        LODWORD(v18) = v29;
        LODWORD(v17) = v33;
      }
      else
      {
        LODWORD(v20) = 0;
        Process = PsInitialSystemProcess;
      }
      v37 = Process;
      StateData = ExpWnfResolveScopeInstance((int)v36, (int)Process, (int)v20, v18, Sid);
      if ( StateData >= 0 )
      {
        v22 = *(_QWORD *)v36;
        v23 = ExpWnfLookupNameInstance(*(_QWORD *)v36, v16, &v30);
        StateData = v23;
        if ( v23 != -1073741772 || (_DWORD)v17 == 3 )
        {
          if ( v23 < 0 )
            goto LABEL_31;
          StateData = ExpWnfValidatePubSubPreconditions(1u, v19);
          if ( StateData < 0 )
            goto LABEL_31;
        }
        else
        {
          StateData = ExpWnfLookupPermanentName(v16, &P);
          if ( StateData < 0 )
            goto LABEL_31;
          v27 = P;
          StateData = ExpWnfValidatePubSubPreconditions(1u, v19);
          if ( StateData < 0 )
            goto LABEL_31;
          if ( (v16 & 0x400) != 0 )
          {
            StateData = ExpWnfCreateNameInstance(v22, v16, (__int64)v27, v37, &v30);
            ExFreePoolWithTag(v27, 0x20666E57u);
            P = 0LL;
            if ( StateData < 0 )
              goto LABEL_31;
          }
        }
        v24 = v38;
        if ( v30 )
        {
          StateData = ExpWnfReadStateData(v30, v39, v41, v31, v38);
        }
        else
        {
          *v39 = 0;
          *v24 = 0;
          StateData = 0;
        }
      }
    }
  }
LABEL_31:
  if ( v30 )
    ExReleaseRundownProtection_0(v30 + 1);
  if ( *(_QWORD *)v36 )
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(*(_QWORD *)v36 + 8LL));
  if ( P )
    ExFreePoolWithTag(P, 0x20666E57u);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  LOBYTE(v25) = PreviousMode;
  ExpWnfReleaseCapturedScopeInstanceId(v29, v42, v25);
  return StateData;
}
