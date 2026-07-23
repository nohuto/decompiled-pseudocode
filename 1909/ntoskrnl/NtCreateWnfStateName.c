/*
 * XREFs of NtCreateWnfStateName @ 0x140658540
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseRundownProtection_0 @ 0x140043C20 (ExReleaseRundownProtection_0.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     SeCaptureSecurityDescriptor @ 0x1405DD2F0 (SeCaptureSecurityDescriptor.c)
 *     SeReleaseSecurityDescriptor @ 0x1405DE240 (SeReleaseSecurityDescriptor.c)
 *     ExpWnfCreateNameInstance @ 0x140653EBC (ExpWnfCreateNameInstance.c)
 *     ExpWnfResolveScopeInstance @ 0x140655E08 (ExpWnfResolveScopeInstance.c)
 *     ExpWnfGenerateStateName @ 0x140658450 (ExpWnfGenerateStateName.c)
 *     ExpWnfSpecializeSecurityDescriptor @ 0x14065888C (ExpWnfSpecializeSecurityDescriptor.c)
 *     SeSinglePrivilegeCheck @ 0x140678440 (SeSinglePrivilegeCheck.c)
 *     ExpWnfRegisterPermanentName @ 0x1406EEDC0 (ExpWnfRegisterPermanentName.c)
 */

NTSTATUS __cdecl NtCreateWnfStateName(
        PWNF_STATE_NAME StateName,
        WNF_STATE_NAME_LIFETIME NameLifetime,
        WNF_DATA_SCOPE DataScope,
        BOOLEAN PersistData,
        PCWNF_TYPE_ID TypeId,
        ULONG MaximumStateSize,
        PSECURITY_DESCRIPTOR SecurityDescriptor)
{
  PWNF_STATE_NAME v10; // r13
  __int64 v11; // rdx
  struct _KTHREAD *CurrentThread; // rax
  char PreviousMode; // si
  unsigned __int64 v14; // rbx
  struct _KPROCESS *Process; // rdi
  NTSTATUS v17; // [rsp+34h] [rbp-B4h]
  PSECURITY_DESCRIPTOR v18; // [rsp+40h] [rbp-A8h] BYREF
  unsigned __int64 v19; // [rsp+48h] [rbp-A0h] BYREF
  int v20[2]; // [rsp+50h] [rbp-98h] BYREF
  PCWNF_TYPE_ID v21; // [rsp+58h] [rbp-90h]
  PSECURITY_DESCRIPTOR v22; // [rsp+60h] [rbp-88h]
  __int64 v23; // [rsp+68h] [rbp-80h] BYREF
  PCWNF_TYPE_ID v24; // [rsp+70h] [rbp-78h]
  PSECURITY_DESCRIPTOR v25; // [rsp+78h] [rbp-70h]
  struct _EX_RUNDOWN_REF *v26; // [rsp+88h] [rbp-60h] BYREF
  __int128 v27; // [rsp+98h] [rbp-50h] BYREF

  v10 = StateName;
  v11 = (__int64)TypeId;
  v22 = SecurityDescriptor;
  v27 = 0uLL;
  v19 = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  v25 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  *(_QWORD *)v20 = 0LL;
  v18 = 0LL;
  v21 = TypeId;
  if ( !PreviousMode )
  {
    v17 = SeCaptureSecurityDescriptor((__int64)SecurityDescriptor, 0, PagedPool, 1, &v18);
    if ( v17 < 0 )
      goto LABEL_17;
    goto LABEL_3;
  }
  if ( (unsigned __int64)StateName >= 0x7FFFFFFF0000LL )
    StateName = (PWNF_STATE_NAME)0x7FFFFFFF0000LL;
  LOBYTE(StateName->Data[0]) = StateName->Data[0];
  HIBYTE(StateName->Data[1]) = HIBYTE(StateName->Data[1]);
  if ( TypeId )
  {
    if ( (unsigned __int64)TypeId >= 0x7FFFFFFF0000LL )
      v11 = 0x7FFFFFFF0000LL;
    v27 = *(_OWORD *)v11;
    v21 = (PCWNF_TYPE_ID)&v27;
  }
  if ( !SecurityDescriptor )
  {
    v17 = -1073741819;
    goto LABEL_17;
  }
  v17 = SeCaptureSecurityDescriptor((__int64)SecurityDescriptor, PreviousMode, PagedPool, 1, &v18);
  if ( v17 >= 0 )
  {
LABEL_3:
    ExpWnfSpecializeSecurityDescriptor(v18);
    if ( (unsigned int)NameLifetime <= WnfTemporaryStateName
      && NameLifetime
      && (unsigned int)DataScope <= WnfDataScopeMachine
      && (!PersistData || (DataScope & 0xFFFFFFFB) == 0 && NameLifetime == WnfPermanentStateName)
      && MaximumStateSize <= 0x1000 )
    {
      if ( NameLifetime != WnfTemporaryStateName )
      {
        if ( !SeSinglePrivilegeCheck(SeCreatePermanentPrivilege, PreviousMode) )
        {
          v17 = -1073741727;
          goto LABEL_17;
        }
        goto LABEL_10;
      }
      if ( DataScope != WnfDataScopeProcess )
      {
LABEL_10:
        v17 = ExpWnfGenerateStateName((__int64 *)&v19, NameLifetime, DataScope, PersistData);
        if ( v17 >= 0 )
        {
          v14 = v19;
          *v10 = (_WNF_STATE_NAME)(v19 ^ 0x41C64E6DA3BC0074LL);
          LODWORD(v23) = MaximumStateSize;
          v24 = v21;
          v25 = v18;
          if ( NameLifetime == WnfTemporaryStateName )
          {
            if ( PreviousMode )
            {
              Process = KeGetCurrentThread()->ApcState.Process;
              v14 = v19;
            }
            else
            {
              Process = PsInitialSystemProcess;
            }
            v17 = ExpWnfResolveScopeInstance((struct _EX_RUNDOWN_REF **)v20, (__int64)Process, 0LL, DataScope, 0LL);
            if ( v17 >= 0 )
            {
              v17 = ExpWnfCreateNameInstance(*(unsigned __int64 *)v20, v14, (__int64)&v23, Process, &v26);
              if ( v17 >= 0 )
                ExReleaseRundownProtection_0(v26 + 1);
            }
          }
          else
          {
            v17 = ExpWnfRegisterPermanentName(v14, &v23);
          }
        }
        goto LABEL_17;
      }
    }
    v17 = -1073741811;
  }
LABEL_17:
  if ( *(_QWORD *)v20 )
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(*(_QWORD *)v20 + 8LL));
  if ( v18 && v18 != SecurityDescriptor )
    SeReleaseSecurityDescriptor(v18, PreviousMode, 1);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v17;
}
