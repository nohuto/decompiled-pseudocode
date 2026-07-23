/*
 * XREFs of NtDeleteWnfStateData @ 0x1407851A0
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseRundownProtection_0 @ 0x140043820 (ExReleaseRundownProtection_0.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     ExpWnfLookupPermanentName @ 0x14063C614 (ExpWnfLookupPermanentName.c)
 *     ExpWnfCheckCrossScopeAccess @ 0x14063E584 (ExpWnfCheckCrossScopeAccess.c)
 *     ExpWnfDeleteStateData @ 0x14063F7BC (ExpWnfDeleteStateData.c)
 *     ExpWnfReleaseCapturedScopeInstanceId @ 0x1406420EC (ExpWnfReleaseCapturedScopeInstanceId.c)
 *     ExpCaptureWnfStateName @ 0x140642140 (ExpCaptureWnfStateName.c)
 *     ExpWnfLookupNameInstance @ 0x1406421B8 (ExpWnfLookupNameInstance.c)
 *     ExpWnfResolveScopeInstance @ 0x1406422B8 (ExpWnfResolveScopeInstance.c)
 *     ExpWnfCaptureScopeInstanceId @ 0x140642700 (ExpWnfCaptureScopeInstanceId.c)
 *     ExpWnfCheckCallerAccess @ 0x14064282C (ExpWnfCheckCallerAccess.c)
 *     ExpWnfDeletePermanentStateData @ 0x1409192DC (ExpWnfDeletePermanentStateData.c)
 */

NTSTATUS __cdecl NtDeleteWnfStateData(PCWNF_STATE_NAME StateName, const void *ExplicitScope)
{
  struct _KTHREAD *CurrentThread; // rax
  char PreviousMode; // si
  char v5; // r8
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // r15
  unsigned __int64 v8; // r13
  int v9; // r14d
  struct _KTHREAD *v10; // r8
  PEPROCESS Process; // r12
  int v12; // eax
  __int64 v13; // r9
  NTSTATUS v15; // eax
  NTSTATUS v16; // [rsp+30h] [rbp-78h]
  int v17; // [rsp+38h] [rbp-70h]
  int v18[2]; // [rsp+40h] [rbp-68h] BYREF
  int v19; // [rsp+48h] [rbp-60h]
  unsigned __int64 v20; // [rsp+50h] [rbp-58h] BYREF
  PVOID P; // [rsp+58h] [rbp-50h] BYREF
  PSID Sid[2]; // [rsp+60h] [rbp-48h] BYREF
  PVOID v23[7]; // [rsp+70h] [rbp-38h] BYREF
  struct _EX_RUNDOWN_REF *v24; // [rsp+C8h] [rbp+20h] BYREF

  v20 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  P = 0LL;
  *(_QWORD *)v18 = 0LL;
  v24 = 0LL;
  v17 = 0;
  v23[0] = 0LL;
  v23[1] = 0LL;
  v16 = ExpCaptureWnfStateName((__int64 *)StateName, &v20, PreviousMode);
  if ( v16 >= 0 )
  {
    v6 = v20;
    v7 = (v20 >> 4) & 3;
    v19 = (v20 >> 4) & 3;
    v8 = (v20 >> 6) & 0xF;
    v17 = (v20 >> 6) & 0xF;
    v16 = ExpWnfCaptureScopeInstanceId(v17, ExplicitScope, v5, (__int64 *)Sid, (__int64)v23);
    if ( v16 >= 0 )
    {
      if ( PreviousMode )
      {
        v9 = 0;
        if ( ExplicitScope )
        {
          v16 = ExpWnfCheckCrossScopeAccess(v6);
          if ( v16 < 0 )
            goto LABEL_19;
        }
      }
      else
      {
        v9 = 1;
      }
      if ( PreviousMode )
      {
        v10 = KeGetCurrentThread();
        Process = v10->ApcState.Process;
        v6 = v20;
        LODWORD(v8) = v17;
        LODWORD(v7) = v19;
      }
      else
      {
        v10 = 0LL;
        Process = PsInitialSystemProcess;
      }
      v16 = ExpWnfResolveScopeInstance((struct _EX_RUNDOWN_REF **)v18, (__int64)Process, (__int64)v10, v8, Sid[0]);
      if ( v16 >= 0 )
      {
        v12 = ExpWnfLookupNameInstance(*(__int64 *)v18, v6, (__int64 *)&v24);
        v16 = v12;
        if ( v12 != -1073741772 || (_DWORD)v7 == 3 )
        {
          if ( v12 >= 0 )
          {
            if ( v9 || (v16 = ExpWnfCheckCallerAccess(v24[9].Ptr, 2u), v16 >= 0) )
            {
              if ( (_DWORD)v7 != 3 || (PEPROCESS)v24[19].Count == Process )
              {
                if ( (v6 & 0x400) == 0
                  || (v15 = ExpWnfDeletePermanentStateData(*(_QWORD *)v18, v6), v16 = v15, (int)(v15 + 0x80000000) < 0)
                  || v15 == -1073741772 )
                {
                  ExpWnfDeleteStateData((__int64)v24);
LABEL_18:
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
          v16 = ExpWnfLookupPermanentName(v6, &P);
          if ( v16 >= 0 )
          {
            if ( v9 || (v16 = ExpWnfCheckCallerAccess(*((PSECURITY_DESCRIPTOR *)P + 2), 2u), v16 >= 0) )
            {
              if ( (v6 & 0x400) == 0 )
                goto LABEL_18;
              v16 = ExpWnfDeletePermanentStateData(*(_QWORD *)v18, v6);
              if ( v16 == -1073741772 )
                goto LABEL_18;
            }
          }
        }
      }
    }
  }
LABEL_19:
  if ( v24 )
    ExReleaseRundownProtection_0(v24 + 1);
  if ( *(_QWORD *)v18 )
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(*(_QWORD *)v18 + 8LL));
  if ( P )
    ExFreePoolWithTag(P, 0x20666E57u);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  ExpWnfReleaseCapturedScopeInstanceId(v17, v23, PreviousMode, v13);
  return v16;
}
