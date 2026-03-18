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

__int64 __fastcall NtCreateWnfStateName(
        unsigned __int64 a1,
        unsigned int a2,
        unsigned int a3,
        char a4,
        unsigned __int64 a5,
        unsigned int a6,
        PSECURITY_DESCRIPTOR a7)
{
  _QWORD *v10; // r13
  __int64 v11; // rdx
  struct _KTHREAD *CurrentThread; // rax
  char PreviousMode; // si
  unsigned __int64 v14; // rbx
  struct _KPROCESS *Process; // rdi
  int StateName; // [rsp+34h] [rbp-B4h]
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+40h] [rbp-A8h] BYREF
  unsigned __int64 v19; // [rsp+48h] [rbp-A0h] BYREF
  int v20[2]; // [rsp+50h] [rbp-98h] BYREF
  __int128 *v21; // [rsp+58h] [rbp-90h]
  PSECURITY_DESCRIPTOR v22; // [rsp+60h] [rbp-88h]
  __int64 v23; // [rsp+68h] [rbp-80h] BYREF
  __int128 *v24; // [rsp+70h] [rbp-78h]
  PSECURITY_DESCRIPTOR v25; // [rsp+78h] [rbp-70h]
  struct _EX_RUNDOWN_REF *v26; // [rsp+88h] [rbp-60h] BYREF
  __int128 v27; // [rsp+98h] [rbp-50h] BYREF

  v10 = (_QWORD *)a1;
  v11 = a5;
  v22 = a7;
  v27 = 0uLL;
  v19 = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  v25 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  *(_QWORD *)v20 = 0LL;
  SecurityDescriptor = 0LL;
  v21 = (__int128 *)a5;
  if ( !PreviousMode )
  {
    StateName = SeCaptureSecurityDescriptor((__int64)a7, 0, PagedPool, 1, &SecurityDescriptor);
    if ( StateName < 0 )
      goto LABEL_17;
    goto LABEL_3;
  }
  if ( a1 >= 0x7FFFFFFF0000LL )
    a1 = 0x7FFFFFFF0000LL;
  *(_BYTE *)a1 = *(_BYTE *)a1;
  *(_BYTE *)(a1 + 7) = *(_BYTE *)(a1 + 7);
  if ( a5 )
  {
    if ( a5 >= 0x7FFFFFFF0000LL )
      v11 = 0x7FFFFFFF0000LL;
    v27 = *(_OWORD *)v11;
    v21 = &v27;
  }
  if ( !a7 )
  {
    StateName = -1073741819;
    goto LABEL_17;
  }
  StateName = SeCaptureSecurityDescriptor((__int64)a7, PreviousMode, PagedPool, 1, &SecurityDescriptor);
  if ( StateName >= 0 )
  {
LABEL_3:
    ExpWnfSpecializeSecurityDescriptor(SecurityDescriptor);
    if ( a2 <= 3 && a2 && a3 <= 4 && (!a4 || (a3 & 0xFFFFFFFB) == 0 && a2 == 1) && a6 <= 0x1000 )
    {
      if ( a2 != 3 )
      {
        if ( !SeSinglePrivilegeCheck(SeCreatePermanentPrivilege, PreviousMode) )
        {
          StateName = -1073741727;
          goto LABEL_17;
        }
        goto LABEL_10;
      }
      if ( a3 != 3 )
      {
LABEL_10:
        StateName = ExpWnfGenerateStateName((__int64 *)&v19, a2, a3, a4);
        if ( StateName >= 0 )
        {
          v14 = v19;
          *v10 = v19 ^ 0x41C64E6DA3BC0074LL;
          LODWORD(v23) = a6;
          v24 = v21;
          v25 = SecurityDescriptor;
          if ( a2 == 3 )
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
            StateName = ExpWnfResolveScopeInstance((struct _EX_RUNDOWN_REF **)v20, (__int64)Process, 0LL, a3, 0LL);
            if ( StateName >= 0 )
            {
              StateName = ExpWnfCreateNameInstance(*(unsigned __int64 *)v20, v14, (__int64)&v23, Process, &v26);
              if ( StateName >= 0 )
                ExReleaseRundownProtection_0(v26 + 1);
            }
          }
          else
          {
            StateName = ExpWnfRegisterPermanentName(v14, &v23);
          }
        }
        goto LABEL_17;
      }
    }
    StateName = -1073741811;
  }
LABEL_17:
  if ( *(_QWORD *)v20 )
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(*(_QWORD *)v20 + 8LL));
  if ( SecurityDescriptor && SecurityDescriptor != a7 )
    SeReleaseSecurityDescriptor(SecurityDescriptor, PreviousMode, 1);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return (unsigned int)StateName;
}
