/*
 * XREFs of NtCreateWnfStateName @ 0x14060DD20
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14004D2F0 (ExReleaseRundownProtection_0.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B7990 (KiLeaveCriticalRegionUnsafe.c)
 *     __security_check_cookie @ 0x140193FF0 (__security_check_cookie.c)
 *     ExpWnfSpecializeSecurityDescriptor @ 0x14060DC2C (ExpWnfSpecializeSecurityDescriptor.c)
 *     ExpWnfCreateNameInstance @ 0x14060E058 (ExpWnfCreateNameInstance.c)
 *     ExpWnfGenerateStateName @ 0x14060E3A8 (ExpWnfGenerateStateName.c)
 *     ExpWnfResolveScopeInstance @ 0x14060F9EC (ExpWnfResolveScopeInstance.c)
 *     SeSinglePrivilegeCheck @ 0x140612160 (SeSinglePrivilegeCheck.c)
 *     SeCaptureSecurityDescriptor @ 0x140630CC0 (SeCaptureSecurityDescriptor.c)
 *     SeReleaseSecurityDescriptor @ 0x140631850 (SeReleaseSecurityDescriptor.c)
 *     ExpWnfRegisterPermanentName @ 0x1406CEB54 (ExpWnfRegisterPermanentName.c)
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
  KPROCESSOR_MODE PreviousMode; // si
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rbx
  _KPROCESS *Process; // rdi
  int StateName; // [rsp+34h] [rbp-B4h]
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+40h] [rbp-A8h] BYREF
  int v21[2]; // [rsp+48h] [rbp-A0h] BYREF
  __int128 *v22; // [rsp+50h] [rbp-98h]
  _QWORD v23[3]; // [rsp+58h] [rbp-90h] BYREF
  struct _EX_RUNDOWN_REF *v24; // [rsp+70h] [rbp-78h] BYREF
  unsigned int v25; // [rsp+80h] [rbp-68h] BYREF
  __int128 *v26; // [rsp+88h] [rbp-60h]
  PSECURITY_DESCRIPTOR v27; // [rsp+90h] [rbp-58h]
  __int128 v28; // [rsp+98h] [rbp-50h] BYREF

  v10 = (_QWORD *)a1;
  v11 = a5;
  v23[1] = a7;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  *(_QWORD *)v21 = 0LL;
  SecurityDescriptor = 0LL;
  v22 = (__int128 *)a5;
  if ( !PreviousMode )
  {
    StateName = SeCaptureSecurityDescriptor((_DWORD)a7, 0, 1, 1, (__int64)&SecurityDescriptor);
    if ( StateName < 0 )
      goto LABEL_17;
    goto LABEL_3;
  }
  v14 = 0x7FFFFFFF0000LL;
  if ( a1 >= 0x7FFFFFFF0000LL )
    a1 = 0x7FFFFFFF0000LL;
  *(_BYTE *)a1 = *(_BYTE *)a1;
  *(_BYTE *)(a1 + 7) = *(_BYTE *)(a1 + 7);
  if ( a5 )
  {
    if ( a5 >= 0x7FFFFFFF0000LL )
      v11 = 0x7FFFFFFF0000LL;
    v28 = *(_OWORD *)v11;
    v22 = &v28;
  }
  if ( !a7 )
  {
    StateName = -1073741819;
    goto LABEL_17;
  }
  LOBYTE(v11) = PreviousMode;
  StateName = SeCaptureSecurityDescriptor((_DWORD)a7, v11, 1, 1, (__int64)&SecurityDescriptor);
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
        LOBYTE(v15) = a4;
        StateName = ExpWnfGenerateStateName(v23, a2, a3, v15);
        if ( StateName >= 0 )
        {
          v16 = v23[0];
          *v10 = v23[0] ^ 0x41C64E6DA3BC0074LL;
          v25 = a6;
          v26 = v22;
          v27 = SecurityDescriptor;
          if ( a2 == 3 )
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
            StateName = ExpWnfResolveScopeInstance((int)v21, (int)Process, 0, a3, 0LL);
            if ( StateName >= 0 )
            {
              StateName = ExpWnfCreateNameInstance(v21[0], v16, (unsigned int)&v25, (_DWORD)Process, (__int64)&v24);
              if ( StateName >= 0 )
                ExReleaseRundownProtection_0(v24 + 1);
            }
          }
          else
          {
            StateName = ExpWnfRegisterPermanentName(v16, &v25);
          }
        }
        goto LABEL_17;
      }
    }
    StateName = -1073741811;
  }
LABEL_17:
  if ( *(_QWORD *)v21 )
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(*(_QWORD *)v21 + 8LL));
  if ( SecurityDescriptor && SecurityDescriptor != a7 )
  {
    LOBYTE(v14) = 1;
    LOBYTE(v11) = PreviousMode;
    SeReleaseSecurityDescriptor(SecurityDescriptor, v11, v14);
  }
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return (unsigned int)StateName;
}
