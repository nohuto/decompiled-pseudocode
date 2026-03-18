/*
 * XREFs of NtUserUserHandleGrantAccess @ 0x1C021EC60
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandle @ 0x1C006CDAC (HMValidateHandle.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     memmove @ 0x1C0163300 (memmove.c)
 */

__int64 __fastcall NtUserUserHandleGrantAccess(__int64 a1, void *a2, int a3)
{
  unsigned int v5; // ebx
  NTSTATUS v6; // eax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  PVOID v10; // rsi
  struct _ERESOURCE *JobLock; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 *i; // rdi
  __int64 v17; // rdx
  __int64 v18; // rcx
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rdx
  unsigned __int64 v23; // rax
  unsigned int v24; // eax
  struct _ERESOURCE *v25; // rax
  PVOID Object[2]; // [rsp+58h] [rbp-40h] BYREF
  __int64 v27; // [rsp+68h] [rbp-30h]
  unsigned __int64 v28; // [rsp+70h] [rbp-28h]

  v5 = 0;
  v6 = ObReferenceObjectByHandle(a2, 2u, (POBJECT_TYPE)PsJobType, 1, Object, 0LL);
  v10 = Object[0];
  Object[1] = Object[0];
  if ( v6 < 0 )
  {
    UserSetLastError(87LL, v7, v8, v9);
    return 0LL;
  }
  JobLock = (struct _ERESOURCE *)PsGetJobLock(Object[0]);
  ExEnterCriticalRegionAndAcquireResourceExclusive(JobLock);
  EnterCrit(0LL, 1LL);
  if ( (unsigned int)PsGetJobUIRestrictionsClass(v10) )
  {
    for ( i = (__int64 *)gpJobsList; ; i = (__int64 *)*i )
    {
      if ( !i )
        goto LABEL_10;
      if ( (PVOID)i[1] == v10 )
        break;
    }
    LOBYTE(v13) = -1;
    if ( !HMValidateHandle(a1, v13) )
      goto LABEL_10;
    v27 = gSharedInfo[1] + 32LL * (unsigned __int16)a1;
    *(_BYTE *)(v27 + 25) |= 0x20u;
    v18 = i[7];
    if ( a3 )
    {
      v19 = *((_DWORD *)i + 12);
      v20 = *((unsigned int *)i + 13);
      if ( v19 != (_DWORD)v20 )
        goto LABEL_24;
      if ( v19 )
      {
        v23 = 8 * v20;
        v28 = v23;
        v22 = 0xFFFFFFFFLL;
        v15 = 0xFFFFFFFFLL;
        if ( v23 > 0xFFFFFFFF )
          goto LABEL_21;
        v15 = (unsigned int)v23;
        v24 = v23 + 64;
        if ( (int)v15 + 64 >= (unsigned int)v15 )
          v22 = v24;
        if ( v24 < (unsigned int)v15 )
          goto LABEL_21;
        v21 = UserReAllocPool(v18, (unsigned int)v15, (unsigned int)v22, 1751610197LL);
      }
      else
      {
        v21 = Win32AllocPool(64LL, 1751610197LL);
      }
      v18 = v21;
      if ( !v21 )
      {
LABEL_21:
        UserSetLastError(8LL, v22, v14, v15);
        goto LABEL_36;
      }
      i[7] = v21;
      *((_DWORD *)i + 13) += 8;
LABEL_24:
      while ( 1 )
      {
        v17 = *((unsigned int *)i + 12);
        if ( v5 >= (unsigned int)v17 )
          break;
        if ( *(_QWORD *)(v18 + 8LL * v5) == a1 )
        {
          if ( v5 < (unsigned int)v17 )
            goto LABEL_35;
          break;
        }
        ++v5;
      }
      *(_QWORD *)(v18 + 8 * v17) = a1;
      ++*((_DWORD *)i + 12);
    }
    else
    {
      while ( 1 )
      {
        v17 = *((unsigned int *)i + 12);
        if ( v5 >= (unsigned int)v17 )
          goto LABEL_34;
        v15 = v18 + 8LL * v5;
        if ( *(_QWORD *)v15 == a1 )
          break;
        ++v5;
      }
      memmove((void *)(v18 + 8LL * v5), (const void *)(v15 + 8), 8LL * ((unsigned int)v17 - v5 - 1));
      v17 = (unsigned int)--*((_DWORD *)i + 12);
      if ( v5 >= (unsigned int)v17 )
LABEL_34:
        UserSetLastError(6LL, v17, v14, v15);
    }
LABEL_35:
    v5 = 1;
    goto LABEL_36;
  }
LABEL_10:
  UserSetLastError(87LL, v13, v14, v15);
LABEL_36:
  UserSessionSwitchLeaveCrit(v18, v17, v14, v15);
  v25 = (struct _ERESOURCE *)PsGetJobLock(v10);
  ExReleaseResourceAndLeaveCriticalRegion(v25);
  ObfDereferenceObject(v10);
  return (int)v5;
}
