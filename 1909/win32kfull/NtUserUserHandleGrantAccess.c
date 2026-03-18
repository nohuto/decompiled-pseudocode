/*
 * XREFs of NtUserUserHandleGrantAccess @ 0x1C02369A0
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandle @ 0x1C0024F2C (HMValidateHandle.c)
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     ??0?$CLockDomainExclusive@VDLT_JOB@@@@QEAA@XZ @ 0x1C00EF30C (--0-$CLockDomainExclusive@VDLT_JOB@@@@QEAA@XZ.c)
 *     memmove @ 0x1C0168100 (memmove.c)
 */

__int64 __fastcall NtUserUserHandleGrantAccess(unsigned __int64 a1, void *a2, int a3)
{
  unsigned int v5; // ebx
  NTSTATUS v6; // eax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  PVOID v10; // rsi
  struct _ERESOURCE *JobLock; // rax
  unsigned int DLT; // eax
  __int64 v14; // rdx
  __int64 v15; // r8
  _QWORD *v16; // r9
  __int64 *i; // rdi
  __int64 v18; // rcx
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rdx
  unsigned __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rdx
  struct _ERESOURCE *v26; // rax
  PVOID *Object; // [rsp+20h] [rbp-88h]
  __int64 v28; // [rsp+28h] [rbp-80h]
  PVOID v29[2]; // [rsp+50h] [rbp-58h] BYREF
  __int64 v30; // [rsp+60h] [rbp-48h]
  unsigned __int64 v31; // [rsp+68h] [rbp-40h]
  _BYTE v32[24]; // [rsp+78h] [rbp-30h] BYREF

  v5 = 0;
  v6 = ObReferenceObjectByHandle(a2, 2u, (POBJECT_TYPE)PsJobType, 1, v29, 0LL);
  v10 = v29[0];
  v29[1] = v29[0];
  if ( v6 < 0 )
  {
    UserSetLastError(87LL, v7, v8, v9);
    return 0LL;
  }
  JobLock = (struct _ERESOURCE *)PsGetJobLock(v29[0]);
  ExEnterCriticalRegionAndAcquireResourceExclusive(JobLock);
  EnterCrit(0LL, 1LL);
  DLT = DLT_HANDLEMANAGER::getDLT();
  GetDomainLockRef(DLT);
  CLockDomainExclusive<DLT_JOB>::CLockDomainExclusive<DLT_JOB>((__int64)v32);
  if ( (unsigned int)PsGetJobUIRestrictionsClass(v10) )
  {
    for ( i = (__int64 *)gpJobsList; ; i = (__int64 *)*i )
    {
      if ( !i )
        goto LABEL_10;
      if ( (PVOID)i[1] == v10 )
        break;
    }
    if ( !HMValidateHandle(a1, 255) )
      goto LABEL_10;
    v30 = gSharedInfo[1] + 32LL * (unsigned __int16)a1;
    *(_BYTE *)(v30 + 25) |= 0x20u;
    v18 = i[7];
    if ( a3 )
    {
      v19 = *((_DWORD *)i + 12);
      v20 = *((unsigned int *)i + 13);
      if ( v19 != (_DWORD)v20 )
        goto LABEL_22;
      if ( v19 )
      {
        v23 = 8 * v20;
        v31 = v23;
        v22 = 0xFFFFFFFFLL;
        if ( v23 > 0xFFFFFFFF )
          goto LABEL_19;
        v22 = (unsigned int)(v23 + 64);
        if ( (unsigned int)v22 < (unsigned int)v23 )
          goto LABEL_19;
        v21 = UserReAllocPool(
                v18,
                (unsigned int)v23,
                (unsigned int)v22,
                1751610197LL,
                Object,
                v28,
                (unsigned __int16)a1);
      }
      else
      {
        v21 = Win32AllocPool(64LL, 1751610197LL);
      }
      v18 = v21;
      if ( !v21 )
      {
LABEL_19:
        UserSetLastError(8LL, v22, v15, (__int64)v16);
        goto LABEL_34;
      }
      i[7] = v21;
      *((_DWORD *)i + 13) += 8;
LABEL_22:
      while ( 1 )
      {
        v24 = *((unsigned int *)i + 12);
        if ( v5 >= (unsigned int)v24 )
          break;
        if ( *(_QWORD *)(v18 + 8LL * v5) == a1 )
        {
          if ( v5 < (unsigned int)v24 )
            goto LABEL_33;
          break;
        }
        ++v5;
      }
      *(_QWORD *)(v18 + 8 * v24) = a1;
      ++*((_DWORD *)i + 12);
    }
    else
    {
      while ( 1 )
      {
        v25 = *((unsigned int *)i + 12);
        if ( v5 >= (unsigned int)v25 )
          goto LABEL_32;
        v16 = (_QWORD *)(v18 + 8LL * v5);
        if ( *v16 == a1 )
          break;
        ++v5;
      }
      memmove((void *)(v18 + 8LL * v5), v16 + 1, 8LL * ((unsigned int)v25 - v5 - 1));
      v25 = (unsigned int)--*((_DWORD *)i + 12);
      if ( v5 >= (unsigned int)v25 )
LABEL_32:
        UserSetLastError(6LL, v25, v15, (__int64)v16);
    }
LABEL_33:
    v5 = 1;
    goto LABEL_34;
  }
LABEL_10:
  UserSetLastError(87LL, v14, v15, (__int64)v16);
LABEL_34:
  UserSessionSwitchLeaveCrit(v18);
  v26 = (struct _ERESOURCE *)PsGetJobLock(v10);
  ExReleaseResourceAndLeaveCriticalRegion(v26);
  ObfDereferenceObject(v10);
  return (int)v5;
}
