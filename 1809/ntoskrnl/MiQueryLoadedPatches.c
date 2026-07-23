/*
 * XREFs of MiQueryLoadedPatches @ 0x140858B68
 * Callers:
 *     NtManageHotPatch @ 0x1408596B0 (NtManageHotPatch.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x14004EE20 (ExAcquirePushLockSharedEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14004F090 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1400913F0 (ExfReleasePushLockShared.c)
 *     RtlCopyUnicodeString @ 0x1400B97D0 (RtlCopyUnicodeString.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     RtlCopySid @ 0x14064A350 (RtlCopySid.c)
 *     MiFindUserSidHotPatchContext @ 0x1408561C0 (MiFindUserSidHotPatchContext.c)
 */

__int64 __fastcall MiQueryLoadedPatches(PSID SourceSid, _QWORD *a2, _DWORD *a3, __int64 a4, unsigned int a5)
{
  struct _KTHREAD *CurrentThread; // r13
  _DWORD *v6; // r14
  int *v9; // rdi
  unsigned __int64 v10; // rbx
  _QWORD *UserSidHotPatchContext; // rax
  unsigned __int64 v12; // rdx
  unsigned int v13; // ebp
  _QWORD *i; // rax
  unsigned __int64 j; // rcx
  unsigned __int64 v16; // r8
  _QWORD **v17; // rax
  _QWORD *v18; // r8
  unsigned int v19; // ebx
  int v20; // r15d
  char *PoolWithTag; // rax
  char *v22; // rdi
  __int64 v23; // rax
  UNICODE_STRING *v24; // r14
  char *v25; // rbp
  char *v26; // rsi
  wchar_t *v27; // r12
  unsigned __int16 v28; // ax
  __int64 Length; // rax
  _QWORD **v30; // rcx
  unsigned __int64 v31; // rax
  _QWORD *k; // rcx

  CurrentThread = KeGetCurrentThread();
  v6 = a3;
  v9 = 0LL;
  v10 = 0LL;
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&MiHotPatchListLock, 0LL);
  if ( SourceSid )
  {
    UserSidHotPatchContext = MiFindUserSidHotPatchContext(SourceSid);
    if ( UserSidHotPatchContext )
      v9 = (int *)(UserSidHotPatchContext + 3);
  }
  else
  {
    v9 = &MiGlobalHotPatchList;
  }
  v12 = 96LL;
  v13 = 0;
  if ( v9 )
  {
    for ( i = *(_QWORD **)v9; i; i = (_QWORD *)*i )
      v10 = (unsigned __int64)i;
    j = v10;
    while ( j )
    {
      ++v13;
      v16 = j;
      v12 += *(unsigned __int16 *)(j + 32) + 24LL;
      v17 = *(_QWORD ***)(j + 8);
      if ( v17 )
      {
        v18 = *v17;
        for ( j = *(_QWORD *)(j + 8); v18; v18 = (_QWORD *)*v18 )
          j = (unsigned __int64)v18;
      }
      else
      {
        while ( 1 )
        {
          j = *(_QWORD *)(j + 16) & 0xFFFFFFFFFFFFFFFCuLL;
          if ( !j || *(_QWORD *)j == v16 )
            break;
          v16 = j;
        }
      }
    }
  }
  if ( a5 >= v12 )
  {
    v20 = v12;
    PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, (unsigned int)v12, 0x71486D4Du);
    v22 = PoolWithTag;
    if ( !PoolWithTag )
    {
      v19 = -1073741670;
      goto LABEL_40;
    }
    memset(PoolWithTag, 0, 0x60uLL);
    *(_DWORD *)v22 = 2;
    if ( SourceSid )
      RtlCopySid(0x44u, v22 + 4, SourceSid);
    if ( v13 )
    {
      v23 = v13;
      v24 = (UNICODE_STRING *)(v22 + 96);
      *((_QWORD *)v22 + 10) = v22 + 96;
      v25 = &v22[-a4];
      v26 = &v22[16 * v23 + 96];
      *((_QWORD *)v22 + 11) = v26;
      v27 = (wchar_t *)&v26[8 * v23];
      if ( v10 )
      {
        do
        {
          *(_DWORD *)v26 = *(_DWORD *)(v10 + 24);
          *((_DWORD *)v26 + 1) = *(_DWORD *)(v10 + 28);
          v28 = *(_WORD *)(v10 + 32);
          v24->Length = v28;
          v24->MaximumLength = v28;
          v24->Buffer = v27;
          RtlCopyUnicodeString(v24, (PCUNICODE_STRING)(v10 + 32));
          v24->Buffer = (wchar_t *)((char *)v24->Buffer - v25);
          v26 += 8;
          ++*((_DWORD *)v22 + 18);
          Length = v24->Length;
          ++v24;
          v30 = *(_QWORD ***)(v10 + 8);
          v27 = (wchar_t *)((char *)v27 + Length);
          v31 = v10;
          if ( v30 )
          {
            v10 = *(_QWORD *)(v10 + 8);
            for ( k = *v30; k; k = (_QWORD *)*k )
              v10 = (unsigned __int64)k;
          }
          else
          {
            while ( 1 )
            {
              v10 = *(_QWORD *)(v10 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
              if ( !v10 || *(_QWORD *)v10 == v31 )
                break;
              v31 = v10;
            }
          }
        }
        while ( v10 );
        v26 = (char *)*((_QWORD *)v22 + 11);
        v24 = (UNICODE_STRING *)*((_QWORD *)v22 + 10);
      }
      *((_QWORD *)v22 + 10) = (char *)v24 - v25;
      v6 = a3;
      *((_QWORD *)v22 + 11) = v26 - v25;
    }
    *a2 = v22;
    *v6 = v20;
  }
  else
  {
    if ( v12 > 0xFFFFFFFF )
    {
      v19 = -1073741675;
      goto LABEL_40;
    }
    *a2 = 0LL;
    *v6 = v12;
  }
  v19 = 0;
LABEL_40:
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&MiHotPatchListLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&MiHotPatchListLock);
  KeAbPostRelease((ULONG_PTR)&MiHotPatchListLock);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  return v19;
}
