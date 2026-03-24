/*
 * XREFs of NtUpdateWnfStateData @ 0x14060EBB0
 * Callers:
 *     PfSnPowerBoostUpdate @ 0x1406CDAB8 (PfSnPowerBoostUpdate.c)
 *     SepSecureBootCheckForUpdates @ 0x1409F83AC (SepSecureBootCheckForUpdates.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14004D2F0 (ExReleaseRundownProtection_0.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B79B0 (KiLeaveCriticalRegionUnsafe.c)
 *     __security_check_cookie @ 0x140194010 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 *     ExpWnfLookupPermanentName @ 0x1405AA92C (ExpWnfLookupPermanentName.c)
 *     ExpWnfCreateNameInstance @ 0x14060E058 (ExpWnfCreateNameInstance.c)
 *     ExpWnfReleaseCapturedScopeInstanceId @ 0x14060F814 (ExpWnfReleaseCapturedScopeInstanceId.c)
 *     ExpCaptureWnfStateName @ 0x14060F868 (ExpCaptureWnfStateName.c)
 *     ExpWnfLookupNameInstance @ 0x14060F8E0 (ExpWnfLookupNameInstance.c)
 *     ExpWnfResolveScopeInstance @ 0x14060F9EC (ExpWnfResolveScopeInstance.c)
 *     ExpWnfCaptureScopeInstanceId @ 0x14060FE20 (ExpWnfCaptureScopeInstanceId.c)
 *     ExpWnfValidatePubSubPreconditions @ 0x14060FEEC (ExpWnfValidatePubSubPreconditions.c)
 *     ExpWnfNotifyNameSubscribers @ 0x1406109F8 (ExpWnfNotifyNameSubscribers.c)
 *     ExpWnfWriteStateData @ 0x140610CD0 (ExpWnfWriteStateData.c)
 *     ExpWnfCheckCrossScopeAccess @ 0x1406C7090 (ExpWnfCheckCrossScopeAccess.c)
 */

__int64 __fastcall NtUpdateWnfStateData(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int128 *a4,
        __int64 a5,
        unsigned int a6,
        int a7)
{
  __int64 v7; // r13
  struct _KTHREAD *CurrentThread; // rax
  char PreviousMode; // si
  __int64 v10; // rdi
  struct _KTHREAD *v11; // r8
  unsigned __int64 v12; // r9
  unsigned __int64 v13; // r10
  struct _KPROCESS *Process; // r12
  unsigned __int64 v15; // rbx
  unsigned __int64 v16; // r15
  int v17; // eax
  PVOID v19; // r14
  int v20; // [rsp+30h] [rbp-C8h]
  int v21; // [rsp+38h] [rbp-C0h]
  struct _EX_RUNDOWN_REF *v22; // [rsp+40h] [rbp-B8h] BYREF
  PVOID P; // [rsp+48h] [rbp-B0h] BYREF
  int v24; // [rsp+50h] [rbp-A8h]
  unsigned __int64 v25; // [rsp+58h] [rbp-A0h] BYREF
  __int128 *v26; // [rsp+60h] [rbp-98h]
  int v27[2]; // [rsp+68h] [rbp-90h] BYREF
  PSID Sid; // [rsp+70h] [rbp-88h] BYREF
  __int64 v29; // [rsp+78h] [rbp-80h]
  _QWORD v30[2]; // [rsp+90h] [rbp-68h] BYREF
  __int128 v31; // [rsp+A0h] [rbp-58h] BYREF

  v7 = (unsigned int)a3;
  v29 = a2;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  P = 0LL;
  *(_QWORD *)v27 = 0LL;
  v22 = 0LL;
  LODWORD(v10) = 0;
  v30[0] = 0LL;
  v30[1] = 0LL;
  v26 = a4;
  LOBYTE(a3) = PreviousMode;
  v20 = ExpCaptureWnfStateName(a1, &v25, a3);
  if ( v20 >= 0 )
  {
    v24 = (v25 >> 4) & 3;
    v10 = (v25 >> 6) & 0xF;
    v21 = (v25 >> 6) & 0xF;
    if ( PreviousMode )
    {
      if ( (_DWORD)v7 && (v13 + v7 > 0x7FFFFFFF0000LL || v13 + v7 < v13) )
        MEMORY[0x7FFFFFFF0000] = 0;
      if ( v12 )
      {
        if ( v12 >= 0x7FFFFFFF0000LL )
          v12 = 0x7FFFFFFF0000LL;
        v31 = *(_OWORD *)v12;
        v26 = &v31;
      }
    }
    LOBYTE(v11) = PreviousMode;
    v20 = ExpWnfCaptureScopeInstanceId((v25 >> 6) & 0xF, a5, v11, &Sid, v30);
    if ( v20 >= 0 )
    {
      if ( PreviousMode )
      {
        if ( a5 )
        {
          v20 = ExpWnfCheckCrossScopeAccess(v25);
          if ( v20 < 0 )
            goto LABEL_24;
        }
        v11 = KeGetCurrentThread();
        Process = v11->ApcState.Process;
        LODWORD(v10) = v21;
        if ( v21 == 3 && (!Sid || Process == *(struct _KPROCESS **)Sid) )
        {
          v20 = -1073741811;
          goto LABEL_24;
        }
      }
      else
      {
        LODWORD(v11) = 0;
        Process = PsInitialSystemProcess;
      }
      v20 = ExpWnfResolveScopeInstance((int)v27, (int)Process, (int)v11, v10, Sid);
      if ( v20 < 0 )
        goto LABEL_24;
      v15 = v25;
      v16 = *(_QWORD *)v27;
      v17 = ExpWnfLookupNameInstance(*(_QWORD *)v27, v25, &v22);
      v20 = v17;
      if ( v17 != -1073741772 || v24 == 3 )
      {
        if ( v17 < 0 )
          goto LABEL_24;
        v20 = ExpWnfValidatePubSubPreconditions(2u, PreviousMode == 0);
        if ( v20 < 0 )
          goto LABEL_24;
      }
      else
      {
        v20 = ExpWnfLookupPermanentName(v15, &P);
        if ( v20 < 0 )
          goto LABEL_24;
        v19 = P;
        v20 = ExpWnfValidatePubSubPreconditions(2u, PreviousMode == 0);
        if ( v20 < 0 )
          goto LABEL_24;
        v20 = ExpWnfCreateNameInstance(v16, v15, (__int64)v19, Process, &v22);
        ExFreePoolWithTag(v19, 0x20666E57u);
        P = 0LL;
        if ( v20 < 0 )
          goto LABEL_24;
      }
      v20 = ExpWnfWriteStateData(v22, v29, (unsigned int)v7, a6, a7);
      if ( v20 >= 0 )
      {
        ExpWnfNotifyNameSubscribers(v22, 1LL, 1LL);
        v20 = 0;
      }
    }
  }
LABEL_24:
  if ( v22 )
    ExReleaseRundownProtection_0(v22 + 1);
  if ( *(_QWORD *)v27 )
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(*(_QWORD *)v27 + 8LL));
  if ( P )
    ExFreePoolWithTag(P, 0x20666E57u);
  LOBYTE(v11) = PreviousMode;
  ExpWnfReleaseCapturedScopeInstanceId((unsigned int)v10, v30, v11);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return (unsigned int)v20;
}
