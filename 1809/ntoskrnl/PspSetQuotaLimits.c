/*
 * XREFs of PspSetQuotaLimits @ 0x1406D2398
 * Callers:
 *     NtSetInformationProcess @ 0x140672E00 (NtSetInformationProcess.c)
 * Callees:
 *     KiStackAttachProcess @ 0x140016DB0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x140017190 (KiUnstackDetachProcess.c)
 *     ObFastDereferenceObject @ 0x14004D9D0 (ObFastDereferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14004F090 (KiLeaveGuardedRegionUnsafe.c)
 *     ExReleaseResourceLite @ 0x14004F590 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400505F0 (ExAcquireResourceExclusiveLite.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     MmEnforceWorkingSetLimit @ 0x14008FA70 (MmEnforceWorkingSetLimit.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     MmAdjustWorkingSetSizeEx @ 0x14013C164 (MmAdjustWorkingSetSizeEx.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     PsReferencePrimaryToken @ 0x1405DE640 (PsReferencePrimaryToken.c)
 *     SeReleaseSubjectContext @ 0x1405E2240 (SeReleaseSubjectContext.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1405E9390 (ObpReferenceObjectByHandleWithTag.c)
 *     SeSinglePrivilegeCheck @ 0x140613160 (SeSinglePrivilegeCheck.c)
 *     SePrivilegedServiceAuditAlarm @ 0x14062DE88 (SePrivilegedServiceAuditAlarm.c)
 *     PspAssignProcessQuotaBlock @ 0x14065B2F4 (PspAssignProcessQuotaBlock.c)
 *     PspSinglePrivCheck @ 0x1406D2774 (PspSinglePrivCheck.c)
 */

__int64 __fastcall PspSetQuotaLimits(ULONG_PTR BugCheckParameter1, __int64 a2, int a3, char a4)
{
  __int64 result; // rax
  int v7; // edi
  __int64 v8; // rdx
  __int64 v9; // r8
  int v10; // r12d
  char v11; // r15
  _QWORD *v12; // r14
  char v13; // r13
  __int64 v14; // r14
  bool v15; // zf
  int v16; // r14d
  signed __int64 *v17; // rdi
  PACCESS_TOKEN v18; // rbx
  char v19; // [rsp+40h] [rbp-118h]
  char v20; // [rsp+41h] [rbp-117h]
  char v21; // [rsp+42h] [rbp-116h]
  char v22; // [rsp+43h] [rbp-115h] BYREF
  int v23; // [rsp+44h] [rbp-114h]
  PVOID Object; // [rsp+48h] [rbp-110h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+50h] [rbp-108h]
  _QWORD *v26; // [rsp+58h] [rbp-100h]
  _OWORD v27[6]; // [rsp+60h] [rbp-F8h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+C0h] [rbp-98h] BYREF
  int v29[5]; // [rsp+E0h] [rbp-78h] BYREF
  char v30; // [rsp+F4h] [rbp-64h]
  char v31; // [rsp+F5h] [rbp-63h]
  _BYTE v32[48]; // [rsp+F8h] [rbp-60h] BYREF

  if ( a3 == 48 )
  {
    v27[0] = *(_OWORD *)a2;
    v27[1] = *(_OWORD *)(a2 + 16);
    v27[2] = *(_OWORD *)(a2 + 32);
    memset(&v27[3], 0, 0x28uLL);
    v19 = 1;
  }
  else
  {
    if ( a3 != 88 )
      return 3221225476LL;
    v19 = 0;
    v27[0] = *(_OWORD *)a2;
    v27[1] = *(_OWORD *)(a2 + 16);
    v27[2] = *(_OWORD *)(a2 + 32);
    v27[3] = *(_OWORD *)(a2 + 48);
    v27[4] = *(_OWORD *)(a2 + 64);
    *(_QWORD *)&v27[5] = *(_QWORD *)(a2 + 80);
  }
  if ( (v27[5] & 0xFFFFFFE0) != 0 || (v27[5] & 3) == 3 || (v27[5] & 0xC) == 0xC )
    return 3221225485LL;
  if ( (v27[5] & 1) != 0 )
  {
    v7 = 4;
  }
  else
  {
    v7 = 0;
    if ( (v27[5] & 2) != 0 )
      v7 = 8;
  }
  if ( (v27[5] & 4) != 0 )
  {
    v7 |= 1u;
  }
  else if ( (v27[5] & 8) != 0 )
  {
    v7 |= 2u;
  }
  if ( *((_QWORD *)&v27[3] + 1) | *(_QWORD *)&v27[4] | *((_QWORD *)&v27[4] + 1) | DWORD1(v27[5]) )
    return 3221225485LL;
  result = ObpReferenceObjectByHandleWithTag(
             BugCheckParameter1,
             256,
             (__int64)PsProcessType,
             a4,
             0x79517350u,
             &Object,
             0LL,
             0LL);
  if ( (int)result >= 0 )
  {
    CurrentThread = KeGetCurrentThread();
    v10 = 0;
    if ( *((_UNKNOWN **)Object + 130) != &PspSystemQuotaBlock || *(_QWORD *)&v27[1] && *((_QWORD *)&v27[1] + 1) )
    {
      if ( *(_QWORD *)&v27[1] && *((_QWORD *)&v27[1] + 1) )
      {
        if ( v27[1] == __PAIR128__(-1LL, -1LL) )
        {
          v20 = 1;
          LOBYTE(v23) = 0;
          v21 = 0;
        }
        else
        {
          v20 = 0;
          LOBYTE(v9) = a4;
          v23 = PspSinglePrivCheck(&PspSystemQuotaBlock, v8, v9, &SubjectContext);
          v21 = 1;
        }
        v11 = 0;
        v12 = Object;
        v26 = Object;
        do
        {
          v13 = 0;
          KiStackAttachProcess((_KPROCESS *)Object, 0LL, (__int64)v32);
          --CurrentThread->SpecialApcDisable;
          v14 = v12[118];
          if ( v14 )
          {
            ExAcquireResourceExclusiveLite((PERESOURCE)(v14 + 56), 1u);
            if ( (*(_DWORD *)(v14 + 848) & 1) != 0 )
            {
              v7 = 1;
              LOBYTE(v23) = 1;
              v13 = 1;
              if ( !v20 )
                v27[1] = *(_OWORD *)(v14 + 792);
            }
            ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140406830, 0LL);
            ExReleaseResourceLite((PERESOURCE)(v14 + 56));
          }
          v10 = MmAdjustWorkingSetSizeEx(
                  *(unsigned __int64 *)&v27[1],
                  *((unsigned __int64 *)&v27[1] + 1),
                  0,
                  v23,
                  v7,
                  &v22);
          if ( v10 < 0 && v13 == 1 )
            MmEnforceWorkingSetLimit((_KPROCESS *)Object, v7);
          if ( v14 )
          {
            if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140406830, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock((volatile signed __int64 *)&qword_140406830);
            KeAbPostRelease((ULONG_PTR)&qword_140406830);
          }
          KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
          KiUnstackDetachProcess((__int64)v32, 0LL);
          if ( v22 == 1 && !v13 )
            v11 = 1;
          v15 = v26[118] == v14;
          v12 = v26;
        }
        while ( !v15 );
        if ( v21 == 1 && v30 )
        {
          if ( v11 == 1 )
            SePrivilegedServiceAuditAlarm(L"$&", (__int64 *)&SubjectContext, v29, v31);
          SeReleaseSubjectContext(&SubjectContext);
        }
      }
      goto LABEL_40;
    }
    if ( v19 == 1 )
    {
      memset(v27, 0, 0x58uLL);
      LODWORD(v27[5]) = 16;
    }
    if ( SeSinglePrivilegeCheck(SeIncreaseQuotaPrivilege, a4) )
    {
      v17 = (signed __int64 *)Object;
      v18 = PsReferencePrimaryToken((PEPROCESS)Object);
      v16 = PspAssignProcessQuotaBlock((__int64)v27, (__int64)v17, (__int64)v18);
      ObFastDereferenceObject(v17 + 107, (unsigned __int64)v18);
      if ( v16 >= 0 )
      {
LABEL_40:
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        return (unsigned int)v10;
      }
    }
    else
    {
      v16 = -1073741727;
    }
    ObfDereferenceObjectWithTag(Object, 0x79517350u);
    return (unsigned int)v16;
  }
  return result;
}
