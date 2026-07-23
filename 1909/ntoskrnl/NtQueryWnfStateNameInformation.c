/*
 * XREFs of NtQueryWnfStateNameInformation @ 0x1406D69C0
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseRundownProtection_0 @ 0x140043C20 (ExReleaseRundownProtection_0.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     ProbeForWrite @ 0x1405F10D0 (ProbeForWrite.c)
 *     ExpWnfLookupPermanentName @ 0x14063F6C4 (ExpWnfLookupPermanentName.c)
 *     ExpWnfReleaseCapturedScopeInstanceId @ 0x140655C3C (ExpWnfReleaseCapturedScopeInstanceId.c)
 *     ExpCaptureWnfStateName @ 0x140655C90 (ExpCaptureWnfStateName.c)
 *     ExpWnfLookupNameInstance @ 0x140655D08 (ExpWnfLookupNameInstance.c)
 *     ExpWnfResolveScopeInstance @ 0x140655E08 (ExpWnfResolveScopeInstance.c)
 *     ExpWnfCaptureScopeInstanceId @ 0x140656250 (ExpWnfCaptureScopeInstanceId.c)
 *     ExpWnfCheckCallerAccess @ 0x14065637C (ExpWnfCheckCallerAccess.c)
 *     ExpWnfCheckCrossScopeAccess @ 0x1406E7FE0 (ExpWnfCheckCrossScopeAccess.c)
 */

NTSTATUS __cdecl NtQueryWnfStateNameInformation(
        PCWNF_STATE_NAME StateName,
        WNF_STATE_NAME_INFORMATION NameInfoClass,
        const void *ExplicitScope,
        PVOID InfoBuffer,
        ULONG InfoBufferSize)
{
  struct _KTHREAD *CurrentThread; // rax
  char PreviousMode; // r15
  int v10; // eax
  char v11; // r8
  __int64 v12; // rbx
  int v13; // esi
  int v14; // r12d
  int v15; // ecx
  struct _KTHREAD *v16; // r8
  _KPROCESS *Process; // rdx
  int v18; // ecx
  void *v19; // rcx
  __int64 v20; // r9
  NTSTATUS v22; // [rsp+30h] [rbp-A8h]
  int v23; // [rsp+38h] [rbp-A0h]
  ACCESS_MASK DesiredAccess; // [rsp+3Ch] [rbp-9Ch]
  int v25; // [rsp+40h] [rbp-98h]
  __int64 v26; // [rsp+48h] [rbp-90h] BYREF
  unsigned __int64 v27; // [rsp+50h] [rbp-88h] BYREF
  int v28; // [rsp+58h] [rbp-80h]
  int v29[2]; // [rsp+60h] [rbp-78h] BYREF
  PVOID P; // [rsp+68h] [rbp-70h] BYREF
  unsigned __int64 v31; // [rsp+70h] [rbp-68h]
  PSID Sid[4]; // [rsp+78h] [rbp-60h] BYREF
  PVOID v33[8]; // [rsp+98h] [rbp-40h] BYREF

  v27 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  P = 0LL;
  *(_QWORD *)v29 = 0LL;
  v26 = 0LL;
  v23 = 0;
  v33[0] = 0LL;
  v33[1] = 0LL;
  v10 = ExpCaptureWnfStateName((__int64 *)StateName, &v27, PreviousMode);
  v22 = v10;
  if ( v10 >= 0 )
  {
    v12 = v27;
    v28 = (v27 >> 4) & 3;
    v31 = (v27 >> 6) & 0xF;
    v23 = (v27 >> 6) & 0xF;
    v10 = ExpWnfCaptureScopeInstanceId(v23, ExplicitScope, v11, (__int64 *)Sid, (__int64)v33);
    v22 = v10;
    if ( v10 >= 0 )
    {
      if ( (unsigned int)NameInfoClass > WnfInfoIsQuiescent )
      {
        v10 = -1073741821;
        v22 = -1073741821;
        goto LABEL_39;
      }
      if ( InfoBufferSize < 4 )
      {
        v10 = -1073741811;
        v22 = -1073741811;
        goto LABEL_39;
      }
      if ( PreviousMode )
        ProbeForWrite(InfoBuffer, InfoBufferSize, 4u);
      v13 = 1;
      if ( NameInfoClass )
      {
        v25 = 0;
      }
      else
      {
        v25 = 1;
        if ( ExplicitScope )
        {
          v10 = -1073741811;
          v22 = -1073741811;
          goto LABEL_39;
        }
      }
      if ( PreviousMode && NameInfoClass )
      {
        v14 = 0;
        if ( ExplicitScope )
        {
          v10 = ExpWnfCheckCrossScopeAccess(v12);
          v22 = v10;
          if ( v10 < 0 )
            goto LABEL_39;
        }
      }
      else
      {
        v14 = 1;
      }
      v15 = 0;
      DesiredAccess = 0;
      if ( !v14 )
      {
        if ( (unsigned int)(NameInfoClass - 1) <= 1 )
          v15 = 2;
        DesiredAccess = v15;
      }
      v16 = 0LL;
      if ( PreviousMode )
      {
        if ( v25 )
        {
          Process = KeGetCurrentThread()->ApcState.Process;
        }
        else
        {
          v16 = KeGetCurrentThread();
          Process = v16->ApcState.Process;
        }
        v18 = v23;
        v12 = v27;
      }
      else
      {
        Process = PsInitialSystemProcess;
        v18 = v31;
      }
      v10 = ExpWnfResolveScopeInstance((struct _EX_RUNDOWN_REF **)v29, (__int64)Process, (__int64)v16, v18, Sid[0]);
      v22 = v10;
      if ( v10 >= 0 )
      {
        v10 = ExpWnfLookupNameInstance(*(__int64 *)v29, v12, &v26);
        v22 = v10;
        if ( v10 != -1073741772 || v28 == 3 )
        {
          if ( v10 < 0 )
            goto LABEL_39;
          if ( v14 )
          {
LABEL_31:
            if ( NameInfoClass )
            {
              if ( NameInfoClass == WnfInfoSubscribersPresent )
              {
                if ( v26 && *(_DWORD *)(v26 + 160) )
                  goto LABEL_38;
              }
              else if ( !v26 || !*(_DWORD *)(v26 + 164) )
              {
                goto LABEL_38;
              }
              v13 = 0;
            }
LABEL_38:
            *(_DWORD *)InfoBuffer = v13;
            v10 = 0;
            v22 = 0;
            goto LABEL_39;
          }
          v19 = *(void **)(v26 + 72);
        }
        else
        {
          v10 = ExpWnfLookupPermanentName(v12, &P);
          v22 = v10;
          if ( v10 < 0 )
            goto LABEL_39;
          if ( v14 )
            goto LABEL_31;
          v19 = (void *)*((_QWORD *)P + 2);
        }
        v10 = ExpWnfCheckCallerAccess(v19, DesiredAccess);
        v22 = v10;
        if ( v10 < 0 )
          goto LABEL_39;
        goto LABEL_31;
      }
    }
  }
LABEL_39:
  if ( v10 == -1073741772 && NameInfoClass == WnfInfoStateNameExist )
  {
    *(_DWORD *)InfoBuffer = 0;
    v22 = 0;
  }
  if ( v26 )
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(v26 + 8));
  if ( *(_QWORD *)v29 )
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(*(_QWORD *)v29 + 8LL));
  if ( P )
    ExFreePoolWithTag(P, 0x20666E57u);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  ExpWnfReleaseCapturedScopeInstanceId(v23, v33, PreviousMode, v20);
  return v22;
}
