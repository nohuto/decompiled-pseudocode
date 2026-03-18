/*
 * XREFs of MiQueryLoadedPatches @ 0x14089131C
 * Callers:
 *     NtManageHotPatch @ 0x1408920D0 (NtManageHotPatch.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x14003EF30 (ExAcquirePushLockSharedEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14003F170 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     RtlCopyUnicodeString @ 0x140043E20 (RtlCopyUnicodeString.c)
 *     ExfReleasePushLockShared @ 0x14009E3E0 (ExfReleasePushLockShared.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     RtlCopySid @ 0x140644850 (RtlCopySid.c)
 *     MiFindUserSidHotPatchContext @ 0x14088E3DC (MiFindUserSidHotPatchContext.c)
 */

__int64 __fastcall MiQueryLoadedPatches(PSID SourceSid, _QWORD *a2, _DWORD *a3, __int64 a4, unsigned int a5)
{
  struct _KTHREAD *CurrentThread; // r14
  int *v6; // rdi
  unsigned __int64 j; // rbx
  _QWORD *v10; // r12
  _QWORD *UserSidHotPatchContext; // rax
  unsigned __int64 v13; // rdx
  unsigned int v14; // ebp
  _QWORD *v15; // rax
  unsigned __int64 i; // rcx
  unsigned __int64 v17; // r8
  _QWORD **v18; // rax
  _QWORD *v19; // r8
  unsigned int v20; // ebx
  int v21; // r15d
  char *PoolWithTag; // rax
  char *v23; // rdi
  __int64 v24; // rax
  UNICODE_STRING *v25; // r14
  char *v26; // rbp
  char *v27; // rsi
  wchar_t *v28; // r12
  unsigned __int16 v29; // ax
  unsigned __int64 v30; // rcx
  _QWORD **v31; // rax
  _QWORD *v32; // rcx
  struct _KTHREAD *v34; // [rsp+60h] [rbp+8h]

  CurrentThread = KeGetCurrentThread();
  v6 = 0LL;
  j = 0LL;
  v34 = CurrentThread;
  v10 = a2;
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&MiHotPatchListLock, 0LL);
  if ( SourceSid )
  {
    UserSidHotPatchContext = MiFindUserSidHotPatchContext(SourceSid);
    if ( UserSidHotPatchContext )
      v6 = (int *)(UserSidHotPatchContext + 3);
  }
  else
  {
    v6 = &MiGlobalHotPatchList;
  }
  v13 = 96LL;
  v14 = 0;
  if ( v6 )
  {
    v15 = *(_QWORD **)v6;
    j = 0LL;
    while ( v15 )
    {
      j = (unsigned __int64)v15;
      v15 = (_QWORD *)*v15;
    }
    i = j;
    while ( i )
    {
      ++v14;
      v17 = i;
      v13 += *(unsigned __int16 *)(i + 32) + 24LL;
      v18 = *(_QWORD ***)(i + 8);
      if ( v18 )
      {
        v19 = *v18;
        for ( i = *(_QWORD *)(i + 8); v19; v19 = (_QWORD *)*v19 )
          i = (unsigned __int64)v19;
      }
      else
      {
        while ( 1 )
        {
          i = *(_QWORD *)(i + 16) & 0xFFFFFFFFFFFFFFFCuLL;
          if ( !i || *(_QWORD *)i == v17 )
            break;
          v17 = i;
        }
      }
    }
  }
  if ( a5 >= v13 )
  {
    v21 = v13;
    PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, (unsigned int)v13, 0x71486D4Du);
    v23 = PoolWithTag;
    if ( !PoolWithTag )
    {
      v20 = -1073741670;
      goto LABEL_40;
    }
    memset(PoolWithTag + 4, 0, 0x5CuLL);
    *(_DWORD *)v23 = 2;
    if ( SourceSid )
      RtlCopySid(0x44u, v23 + 4, SourceSid);
    if ( v14 )
    {
      v24 = v14;
      v25 = (UNICODE_STRING *)(v23 + 96);
      *((_QWORD *)v23 + 10) = v23 + 96;
      v26 = &v23[-a4];
      v27 = &v23[16 * v24 + 96];
      *((_QWORD *)v23 + 11) = v27;
      v28 = (wchar_t *)&v27[8 * v24];
      if ( j )
      {
        do
        {
          *(_DWORD *)v27 = *(_DWORD *)(j + 24);
          *((_DWORD *)v27 + 1) = *(_DWORD *)(j + 28);
          v29 = *(_WORD *)(j + 32);
          v25->Length = v29;
          v25->MaximumLength = v29;
          v25->Buffer = v28;
          RtlCopyUnicodeString(v25, (PCUNICODE_STRING)(j + 32));
          v25->Buffer = (wchar_t *)((char *)v25->Buffer - v26);
          v27 += 8;
          ++*((_DWORD *)v23 + 18);
          v30 = j;
          v28 = (wchar_t *)((char *)v28 + v25->Length);
          ++v25;
          v31 = *(_QWORD ***)(j + 8);
          if ( v31 )
          {
            v32 = *v31;
            for ( j = *(_QWORD *)(j + 8); v32; v32 = (_QWORD *)*v32 )
              j = (unsigned __int64)v32;
          }
          else
          {
            while ( 1 )
            {
              j = *(_QWORD *)(j + 16) & 0xFFFFFFFFFFFFFFFCuLL;
              if ( !j || *(_QWORD *)j == v30 )
                break;
              v30 = j;
            }
          }
        }
        while ( j );
        v27 = (char *)*((_QWORD *)v23 + 11);
        v25 = (UNICODE_STRING *)*((_QWORD *)v23 + 10);
      }
      v10 = a2;
      *((_QWORD *)v23 + 11) = v27 - v26;
      *((_QWORD *)v23 + 10) = (char *)v25 - v26;
      CurrentThread = v34;
    }
    *v10 = v23;
    *a3 = v21;
  }
  else
  {
    if ( v13 > 0xFFFFFFFF )
    {
      v20 = -1073741675;
      goto LABEL_40;
    }
    *v10 = 0LL;
    *a3 = v13;
  }
  v20 = 0;
LABEL_40:
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&MiHotPatchListLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&MiHotPatchListLock);
  KeAbPostRelease((ULONG_PTR)&MiHotPatchListLock);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  return v20;
}
