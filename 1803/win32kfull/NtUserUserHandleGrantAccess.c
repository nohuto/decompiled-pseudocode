/*
 * XREFs of NtUserUserHandleGrantAccess @ 0x1C01F70F0
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandle @ 0x1C0015A84 (HMValidateHandle.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     memmove @ 0x1C013D380 (memmove.c)
 */

__int64 __fastcall NtUserUserHandleGrantAccess(__int64 a1, void *a2, int a3)
{
  unsigned int v5; // ebx
  NTSTATUS v6; // eax
  __int64 v7; // rdx
  PVOID v8; // rsi
  struct _ERESOURCE *JobLock; // rax
  __int64 v11; // rdx
  __int64 *i; // rdi
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdx
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rdx
  unsigned __int64 v21; // rax
  unsigned int v22; // r9d
  unsigned int v23; // eax
  _QWORD *v24; // r9
  struct _ERESOURCE *v25; // rax
  PVOID Object[2]; // [rsp+58h] [rbp-40h] BYREF
  __int64 v27; // [rsp+68h] [rbp-30h]
  unsigned __int64 v28; // [rsp+70h] [rbp-28h]

  v5 = 0;
  v6 = ObReferenceObjectByHandle(a2, 2u, (POBJECT_TYPE)PsJobType, 1, Object, 0LL);
  v8 = Object[0];
  Object[1] = Object[0];
  if ( v6 < 0 )
  {
    UserSetLastError(87LL, v7);
    return 0LL;
  }
  JobLock = (struct _ERESOURCE *)PsGetJobLock(Object[0]);
  ExEnterCriticalRegionAndAcquireResourceExclusive(JobLock);
  EnterCrit(0LL, 1LL);
  if ( (unsigned int)PsGetJobUIRestrictionsClass(v8) )
  {
    for ( i = (__int64 *)gpJobsList; ; i = (__int64 *)*i )
    {
      if ( !i )
        goto LABEL_10;
      if ( (PVOID)i[1] == v8 )
        break;
    }
    if ( !HMValidateHandle(a1, 255) )
      goto LABEL_10;
    v27 = gSharedInfo[1] + 32LL * (unsigned __int16)a1;
    *(_BYTE *)(v27 + 25) |= 0x20u;
    v16 = i[7];
    if ( a3 )
    {
      v17 = *((_DWORD *)i + 12);
      v18 = *((unsigned int *)i + 13);
      if ( v17 != (_DWORD)v18 )
        goto LABEL_24;
      if ( v17 )
      {
        v21 = 8 * v18;
        v28 = v21;
        v20 = 0xFFFFFFFFLL;
        if ( v21 > 0xFFFFFFFF )
          goto LABEL_21;
        v22 = v21;
        v23 = v21 + 64;
        if ( v22 + 64 >= v22 )
          v20 = v23;
        if ( v23 < v22 )
          goto LABEL_21;
        v19 = UserReAllocPool(v16, v22, (unsigned int)v20, 1751610197LL);
      }
      else
      {
        v19 = Win32AllocPool(64LL, 1751610197LL);
      }
      v16 = v19;
      if ( !v19 )
      {
LABEL_21:
        UserSetLastError(8LL, v20);
        goto LABEL_36;
      }
      i[7] = v19;
      *((_DWORD *)i + 13) += 8;
LABEL_24:
      while ( 1 )
      {
        v15 = *((unsigned int *)i + 12);
        if ( v5 >= (unsigned int)v15 )
          break;
        if ( *(_QWORD *)(v16 + 8LL * v5) == a1 )
        {
          if ( v5 < (unsigned int)v15 )
            goto LABEL_35;
          break;
        }
        ++v5;
      }
      *(_QWORD *)(v16 + 8 * v15) = a1;
      ++*((_DWORD *)i + 12);
    }
    else
    {
      while ( 1 )
      {
        v15 = *((unsigned int *)i + 12);
        if ( v5 >= (unsigned int)v15 )
          goto LABEL_34;
        v24 = (_QWORD *)(v16 + 8LL * v5);
        if ( *v24 == a1 )
          break;
        ++v5;
      }
      memmove((void *)(v16 + 8LL * v5), v24 + 1, 8LL * ((unsigned int)v15 - v5 - 1));
      v15 = (unsigned int)--*((_DWORD *)i + 12);
      if ( v5 >= (unsigned int)v15 )
LABEL_34:
        UserSetLastError(6LL, v15);
    }
LABEL_35:
    v5 = 1;
    goto LABEL_36;
  }
LABEL_10:
  UserSetLastError(87LL, v11);
LABEL_36:
  UserSessionSwitchLeaveCrit(v16, v15, v13, v14);
  v25 = (struct _ERESOURCE *)PsGetJobLock(v8);
  ExReleaseResourceAndLeaveCriticalRegion(v25);
  ObfDereferenceObject(v8);
  return (int)v5;
}
