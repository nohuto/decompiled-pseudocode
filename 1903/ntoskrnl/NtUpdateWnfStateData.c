/*
 * XREFs of NtUpdateWnfStateData @ 0x140641450
 * Callers:
 *     PfSnPowerBoostUpdate @ 0x1406EC18C (PfSnPowerBoostUpdate.c)
 *     SepSecureBootCheckForUpdates @ 0x140A3DED4 (SepSecureBootCheckForUpdates.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x14003E220 (KeLeaveCriticalRegion.c)
 *     ExReleaseRundownProtection_0 @ 0x140043820 (ExReleaseRundownProtection_0.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     ExpWnfLookupPermanentName @ 0x14063C614 (ExpWnfLookupPermanentName.c)
 *     ExpWnfCheckCrossScopeAccess @ 0x14063E584 (ExpWnfCheckCrossScopeAccess.c)
 *     ExpWnfCreateNameInstance @ 0x14064036C (ExpWnfCreateNameInstance.c)
 *     ExpWnfWriteStateData @ 0x140640DCC (ExpWnfWriteStateData.c)
 *     ExpWnfNotifyNameSubscribers @ 0x140641174 (ExpWnfNotifyNameSubscribers.c)
 *     ExpWnfReleaseCapturedScopeInstanceId @ 0x1406420EC (ExpWnfReleaseCapturedScopeInstanceId.c)
 *     ExpCaptureWnfStateName @ 0x140642140 (ExpCaptureWnfStateName.c)
 *     ExpWnfLookupNameInstance @ 0x1406421B8 (ExpWnfLookupNameInstance.c)
 *     ExpWnfResolveScopeInstance @ 0x1406422B8 (ExpWnfResolveScopeInstance.c)
 *     ExpWnfCaptureScopeInstanceId @ 0x140642700 (ExpWnfCaptureScopeInstanceId.c)
 *     ExpWnfValidatePubSubPreconditions @ 0x1406427CC (ExpWnfValidatePubSubPreconditions.c)
 */

NTSTATUS __cdecl NtUpdateWnfStateData(
        PCWNF_STATE_NAME StateName,
        const void *Buffer,
        ULONG Length,
        PCWNF_TYPE_ID TypeId,
        const void *ExplicitScope,
        WNF_CHANGE_STAMP MatchingChangeStamp,
        LOGICAL CheckStamp)
{
  struct _KTHREAD *CurrentThread; // rax
  char PreviousMode; // r14
  unsigned __int64 v9; // rsi
  NTSTATUS v10; // edi
  __int64 v11; // r8
  unsigned __int64 v12; // r9
  __int64 v13; // r10
  unsigned __int64 v14; // r11
  int v15; // r15d
  struct _KTHREAD *v16; // r8
  struct _KPROCESS *Process; // r12
  unsigned __int64 v18; // rbx
  unsigned __int64 v19; // r13
  int v20; // eax
  unsigned int v21; // ebx
  __int64 v22; // r8
  PVOID v24; // r15
  int Sid; // [rsp+20h] [rbp-D8h]
  int v26; // [rsp+38h] [rbp-C0h]
  ULONG v27; // [rsp+3Ch] [rbp-BCh]
  struct _EX_RUNDOWN_REF *v28; // [rsp+40h] [rbp-B8h] BYREF
  unsigned __int64 v29; // [rsp+48h] [rbp-B0h] BYREF
  PVOID P; // [rsp+50h] [rbp-A8h] BYREF
  int v31; // [rsp+58h] [rbp-A0h]
  PCWNF_TYPE_ID v32; // [rsp+60h] [rbp-98h]
  int v33[2]; // [rsp+68h] [rbp-90h] BYREF
  PSID v34; // [rsp+70h] [rbp-88h] BYREF
  const void *v35; // [rsp+78h] [rbp-80h]
  _QWORD v36[2]; // [rsp+90h] [rbp-68h] BYREF
  __int128 v37; // [rsp+A0h] [rbp-58h] BYREF

  v27 = Length;
  v35 = Buffer;
  v29 = 0LL;
  v37 = 0uLL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  P = 0LL;
  *(_QWORD *)v33 = 0LL;
  v28 = 0LL;
  LODWORD(v9) = 0;
  v36[0] = 0LL;
  v36[1] = 0LL;
  v32 = TypeId;
  LOBYTE(Length) = PreviousMode;
  v10 = ExpCaptureWnfStateName(StateName, &v29, Length);
  if ( v10 >= 0 )
  {
    v31 = (v29 >> 4) & 3;
    v9 = (v29 >> 6) & 0xF;
    v26 = (v29 >> 6) & 0xF;
    if ( PreviousMode )
    {
      if ( (_DWORD)v13 && (v14 + v13 > 0x7FFFFFFF0000LL || v14 + v13 < v14) )
        MEMORY[0x7FFFFFFF0000] = 0;
      if ( v12 )
      {
        if ( v12 >= 0x7FFFFFFF0000LL )
          v12 = 0x7FFFFFFF0000LL;
        v37 = *(_OWORD *)v12;
        v32 = (PCWNF_TYPE_ID)&v37;
      }
    }
    LOBYTE(v11) = PreviousMode;
    v10 = ExpWnfCaptureScopeInstanceId((v29 >> 6) & 0xF, ExplicitScope, v11, &v34, v36);
    if ( v10 >= 0 )
    {
      if ( PreviousMode )
      {
        v15 = 0;
        if ( ExplicitScope )
        {
          v10 = ExpWnfCheckCrossScopeAccess(v29);
          if ( v10 < 0 )
            goto LABEL_25;
        }
      }
      else
      {
        v15 = 1;
      }
      if ( PreviousMode )
      {
        v16 = KeGetCurrentThread();
        Process = v16->ApcState.Process;
        LODWORD(v9) = v26;
        if ( v26 == 3 && (!v34 || Process == *(struct _KPROCESS **)v34) )
        {
          v10 = -1073741811;
          goto LABEL_25;
        }
      }
      else
      {
        LODWORD(v16) = 0;
        Process = PsInitialSystemProcess;
      }
      v10 = ExpWnfResolveScopeInstance((int)v33, (int)Process, (int)v16, v9, v34);
      if ( v10 < 0 )
        goto LABEL_25;
      v18 = v29;
      v19 = *(_QWORD *)v33;
      v20 = ExpWnfLookupNameInstance(*(_QWORD *)v33, v29, &v28);
      v10 = v20;
      if ( v20 != -1073741772 || v31 == 3 )
      {
        if ( v20 < 0 )
          goto LABEL_25;
        v21 = v27;
        v10 = ExpWnfValidatePubSubPreconditions(2u, v15);
        if ( v10 < 0 )
          goto LABEL_25;
      }
      else
      {
        v10 = ExpWnfLookupPermanentName(v18, &P);
        if ( v10 < 0 )
          goto LABEL_25;
        Sid = v15;
        v24 = P;
        v10 = ExpWnfValidatePubSubPreconditions(2u, Sid);
        if ( v10 < 0 )
          goto LABEL_25;
        v10 = ExpWnfCreateNameInstance(v19, v18, (__int64)v24, Process, &v28);
        ExFreePoolWithTag(v24, 0x20666E57u);
        P = 0LL;
        if ( v10 < 0 )
          goto LABEL_25;
        v21 = v27;
      }
      v10 = ExpWnfWriteStateData((__int64)v28, v35, v21, MatchingChangeStamp, CheckStamp);
      if ( v10 >= 0 )
      {
        ExpWnfNotifyNameSubscribers((__int64)v28, 1u, 1, PreviousMode != 0);
        v10 = 0;
      }
    }
  }
LABEL_25:
  if ( v28 )
    ExReleaseRundownProtection_0(v28 + 1);
  if ( *(_QWORD *)v33 )
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(*(_QWORD *)v33 + 8LL));
  if ( P )
    ExFreePoolWithTag(P, 0x20666E57u);
  KeLeaveCriticalRegion();
  LOBYTE(v22) = PreviousMode;
  ExpWnfReleaseCapturedScopeInstanceId((unsigned int)v9, v36, v22);
  return v10;
}
