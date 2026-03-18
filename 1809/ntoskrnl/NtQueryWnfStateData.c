/*
 * XREFs of NtQueryWnfStateData @ 0x14060F3C0
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14004D2F0 (ExReleaseRundownProtection_0.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B7990 (KiLeaveCriticalRegionUnsafe.c)
 *     __security_check_cookie @ 0x140193FF0 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 *     ExpWnfLookupPermanentName @ 0x1405AA92C (ExpWnfLookupPermanentName.c)
 *     ExpWnfCreateNameInstance @ 0x14060E058 (ExpWnfCreateNameInstance.c)
 *     ExpWnfReleaseCapturedScopeInstanceId @ 0x14060F814 (ExpWnfReleaseCapturedScopeInstanceId.c)
 *     ExpCaptureWnfStateName @ 0x14060F868 (ExpCaptureWnfStateName.c)
 *     ExpWnfLookupNameInstance @ 0x14060F8E0 (ExpWnfLookupNameInstance.c)
 *     ExpWnfResolveScopeInstance @ 0x14060F9EC (ExpWnfResolveScopeInstance.c)
 *     ExpWnfCaptureScopeInstanceId @ 0x14060FE20 (ExpWnfCaptureScopeInstanceId.c)
 *     ExpWnfValidatePubSubPreconditions @ 0x14060FEEC (ExpWnfValidatePubSubPreconditions.c)
 *     ExpWnfReadStateData @ 0x14060FFDC (ExpWnfReadStateData.c)
 *     ProbeForWrite @ 0x140629A60 (ProbeForWrite.c)
 *     ExpWnfCheckCrossScopeAccess @ 0x1406C70B0 (ExpWnfCheckCrossScopeAccess.c)
 */

__int64 __fastcall NtQueryWnfStateData(__int64 a1, __int128 *a2, __int64 a3, _DWORD *a4, __int64 a5, unsigned int *a6)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int8 v8; // di
  int v9; // r15d
  __int64 v10; // r14
  unsigned __int64 v11; // r9
  unsigned __int64 v12; // r10
  volatile void *v13; // r11
  __int64 v14; // rdx
  __int64 v15; // rax
  SIZE_T v16; // rdx
  __int64 v17; // r8
  unsigned __int64 v18; // rbx
  __int64 v19; // r13
  struct _KTHREAD *v20; // r8
  struct _KPROCESS *Process; // rcx
  unsigned __int64 v22; // rsi
  int v23; // eax
  PVOID v25; // r15
  int Sid; // [rsp+20h] [rbp-E8h]
  int StateData; // [rsp+30h] [rbp-D8h]
  int v28; // [rsp+38h] [rbp-D0h]
  struct _EX_RUNDOWN_REF *v29; // [rsp+40h] [rbp-C8h] BYREF
  unsigned int v30; // [rsp+48h] [rbp-C0h]
  PVOID P; // [rsp+50h] [rbp-B8h] BYREF
  int v32; // [rsp+58h] [rbp-B0h]
  __int128 *v33; // [rsp+60h] [rbp-A8h]
  int v34[2]; // [rsp+68h] [rbp-A0h] BYREF
  unsigned __int64 v35; // [rsp+70h] [rbp-98h] BYREF
  struct _KPROCESS *v36; // [rsp+78h] [rbp-90h]
  _DWORD *v37; // [rsp+80h] [rbp-88h]
  PSID v38; // [rsp+88h] [rbp-80h] BYREF
  __int64 v39; // [rsp+90h] [rbp-78h]
  _QWORD v40[2]; // [rsp+A8h] [rbp-60h] BYREF
  __int128 v41; // [rsp+B8h] [rbp-50h] BYREF

  v37 = a4;
  v39 = a5;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v8 = KeGetCurrentThread()->$86A1A36C0FEBA810544B2F2B35F40C82::gap0[10];
  v9 = 0;
  P = 0LL;
  *(_QWORD *)v34 = 0LL;
  v29 = 0LL;
  LODWORD(v10) = 0;
  v40[0] = 0LL;
  v40[1] = 0LL;
  v33 = a2;
  StateData = ExpCaptureWnfStateName(a1, &v35, v8);
  if ( StateData >= 0 )
  {
    if ( v8 )
    {
      if ( v11 )
      {
        if ( v11 >= 0x7FFFFFFF0000LL )
          v11 = 0x7FFFFFFF0000LL;
        v41 = *(_OWORD *)v11;
        v33 = &v41;
      }
      v14 = v12;
      if ( v12 >= 0x7FFFFFFF0000LL )
        v14 = 0x7FFFFFFF0000LL;
      *(_DWORD *)v14 = *(_DWORD *)v14;
      v15 = (__int64)a6;
      if ( (unsigned __int64)a6 >= 0x7FFFFFFF0000LL )
        v15 = 0x7FFFFFFF0000LL;
      v16 = *(unsigned int *)v15;
      v30 = *(_DWORD *)v15;
      v17 = (__int64)a6;
      if ( (unsigned __int64)a6 >= 0x7FFFFFFF0000LL )
        v17 = 0x7FFFFFFF0000LL;
      *(_DWORD *)v17 = *(_DWORD *)v17;
      if ( (_DWORD)v16 )
        ProbeForWrite(v13, v16, 1u);
    }
    else
    {
      v30 = *a6;
    }
    v18 = v35;
    v19 = (v35 >> 4) & 3;
    v32 = (v35 >> 4) & 3;
    v10 = (v35 >> 6) & 0xF;
    v28 = (v35 >> 6) & 0xF;
    StateData = ExpWnfCaptureScopeInstanceId(v10, a3, v8, &v38, v40);
    if ( StateData >= 0 )
    {
      LOBYTE(v9) = v8 == 0;
      if ( v8 )
      {
        if ( a3 )
        {
          StateData = ExpWnfCheckCrossScopeAccess(v18);
          if ( StateData < 0 )
            goto LABEL_30;
        }
        v20 = KeGetCurrentThread();
        Process = v20->ApcState.Process;
        LODWORD(v10) = v28;
        v18 = v35;
        LODWORD(v19) = v32;
      }
      else
      {
        LODWORD(v20) = 0;
        Process = PsInitialSystemProcess;
      }
      v36 = Process;
      StateData = ExpWnfResolveScopeInstance((int)v34, (int)Process, (int)v20, v10, v38);
      if ( StateData < 0 )
        goto LABEL_30;
      v22 = *(_QWORD *)v34;
      v23 = ExpWnfLookupNameInstance(*(_QWORD *)v34, v18, &v29);
      StateData = v23;
      if ( v23 != -1073741772 || (_DWORD)v19 == 3 )
      {
        if ( v23 < 0 )
          goto LABEL_30;
        StateData = ExpWnfValidatePubSubPreconditions(1u, v9);
        if ( StateData < 0 )
          goto LABEL_30;
      }
      else
      {
        StateData = ExpWnfLookupPermanentName(v18, &P);
        if ( StateData < 0 )
          goto LABEL_30;
        Sid = v9;
        v25 = P;
        StateData = ExpWnfValidatePubSubPreconditions(1u, Sid);
        if ( StateData < 0 )
          goto LABEL_30;
        if ( (v18 & 0x400) != 0 )
        {
          StateData = ExpWnfCreateNameInstance(v22, v18, (__int64)v25, v36, &v29);
          ExFreePoolWithTag(v25, 0x20666E57u);
          P = 0LL;
          if ( StateData < 0 )
            goto LABEL_30;
        }
      }
      if ( v29 )
      {
        StateData = ExpWnfReadStateData(v29, v37, v39, v30, a6);
      }
      else
      {
        *v37 = 0;
        *a6 = 0;
        StateData = 0;
      }
    }
  }
LABEL_30:
  if ( v29 )
    ExReleaseRundownProtection_0(v29 + 1);
  if ( *(_QWORD *)v34 )
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(*(_QWORD *)v34 + 8LL));
  if ( P )
    ExFreePoolWithTag(P, 0x20666E57u);
  ExpWnfReleaseCapturedScopeInstanceId((unsigned int)v10, v40, v8);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return (unsigned int)StateData;
}
