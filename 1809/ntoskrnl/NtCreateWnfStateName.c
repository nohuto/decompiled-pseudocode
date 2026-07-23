/*
 * XREFs of NtCreateWnfStateName @ 0x14060ED20
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14004D2F0 (ExReleaseRundownProtection_0.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ExpWnfSpecializeSecurityDescriptor @ 0x14060EC2C (ExpWnfSpecializeSecurityDescriptor.c)
 *     ExpWnfCreateNameInstance @ 0x14060F058 (ExpWnfCreateNameInstance.c)
 *     ExpWnfGenerateStateName @ 0x14060F3A8 (ExpWnfGenerateStateName.c)
 *     ExpWnfResolveScopeInstance @ 0x1406109EC (ExpWnfResolveScopeInstance.c)
 *     SeSinglePrivilegeCheck @ 0x140613160 (SeSinglePrivilegeCheck.c)
 *     SeCaptureSecurityDescriptor @ 0x140631CE0 (SeCaptureSecurityDescriptor.c)
 *     SeReleaseSecurityDescriptor @ 0x140632870 (SeReleaseSecurityDescriptor.c)
 *     ExpWnfRegisterPermanentName @ 0x1406CFDD4 (ExpWnfRegisterPermanentName.c)
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
  KPROCESSOR_MODE PreviousMode; // si
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rbx
  _KPROCESS *Process; // rdi
  NTSTATUS NameInstance; // [rsp+34h] [rbp-B4h]
  PSECURITY_DESCRIPTOR v20; // [rsp+40h] [rbp-A8h] BYREF
  int v21[2]; // [rsp+48h] [rbp-A0h] BYREF
  PCWNF_TYPE_ID v22; // [rsp+50h] [rbp-98h]
  _QWORD v23[3]; // [rsp+58h] [rbp-90h] BYREF
  struct _EX_RUNDOWN_REF *v24; // [rsp+70h] [rbp-78h] BYREF
  ULONG v25; // [rsp+80h] [rbp-68h] BYREF
  PCWNF_TYPE_ID v26; // [rsp+88h] [rbp-60h]
  PSECURITY_DESCRIPTOR v27; // [rsp+90h] [rbp-58h]
  __int128 v28; // [rsp+98h] [rbp-50h] BYREF

  v10 = StateName;
  v11 = (__int64)TypeId;
  v23[1] = SecurityDescriptor;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  *(_QWORD *)v21 = 0LL;
  v20 = 0LL;
  v22 = TypeId;
  if ( !PreviousMode )
  {
    NameInstance = SeCaptureSecurityDescriptor((_DWORD)SecurityDescriptor, 0, 1, 1, (__int64)&v20);
    if ( NameInstance < 0 )
      goto LABEL_17;
    goto LABEL_3;
  }
  v14 = 0x7FFFFFFF0000LL;
  if ( (unsigned __int64)StateName >= 0x7FFFFFFF0000LL )
    StateName = (PWNF_STATE_NAME)0x7FFFFFFF0000LL;
  LOBYTE(StateName->Data[0]) = StateName->Data[0];
  HIBYTE(StateName->Data[1]) = HIBYTE(StateName->Data[1]);
  if ( TypeId )
  {
    if ( (unsigned __int64)TypeId >= 0x7FFFFFFF0000LL )
      v11 = 0x7FFFFFFF0000LL;
    v28 = *(_OWORD *)v11;
    v22 = (PCWNF_TYPE_ID)&v28;
  }
  if ( !SecurityDescriptor )
  {
    NameInstance = -1073741819;
    goto LABEL_17;
  }
  LOBYTE(v11) = PreviousMode;
  NameInstance = SeCaptureSecurityDescriptor((_DWORD)SecurityDescriptor, v11, 1, 1, (__int64)&v20);
  if ( NameInstance >= 0 )
  {
LABEL_3:
    ExpWnfSpecializeSecurityDescriptor(v20);
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
          NameInstance = -1073741727;
          goto LABEL_17;
        }
        goto LABEL_10;
      }
      if ( DataScope != WnfDataScopeProcess )
      {
LABEL_10:
        LOBYTE(v15) = PersistData;
        NameInstance = ExpWnfGenerateStateName(v23, (unsigned int)NameLifetime, (unsigned int)DataScope, v15);
        if ( NameInstance >= 0 )
        {
          v16 = v23[0];
          *v10 = (_WNF_STATE_NAME)(v23[0] ^ 0x41C64E6DA3BC0074LL);
          v25 = MaximumStateSize;
          v26 = v22;
          v27 = v20;
          if ( NameLifetime == WnfTemporaryStateName )
          {
            if ( PreviousMode )
            {
              Process = KeGetCurrentThread()->ApcState.Process;
              LODWORD(v16) = v23[0];
            }
            else
            {
              LODWORD(Process) = (_DWORD)PsInitialSystemProcess;
            }
            NameInstance = ExpWnfResolveScopeInstance((int)v21, (int)Process, 0, DataScope, 0LL);
            if ( NameInstance >= 0 )
            {
              NameInstance = ExpWnfCreateNameInstance(v21[0], v16, (unsigned int)&v25, (_DWORD)Process, (__int64)&v24);
              if ( NameInstance >= 0 )
                ExReleaseRundownProtection_0(v24 + 1);
            }
          }
          else
          {
            NameInstance = ExpWnfRegisterPermanentName(v16, &v25);
          }
        }
        goto LABEL_17;
      }
    }
    NameInstance = -1073741811;
  }
LABEL_17:
  if ( *(_QWORD *)v21 )
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(*(_QWORD *)v21 + 8LL));
  if ( v20 && v20 != SecurityDescriptor )
  {
    LOBYTE(v14) = 1;
    LOBYTE(v11) = PreviousMode;
    SeReleaseSecurityDescriptor(v20, v11, v14);
  }
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return NameInstance;
}
