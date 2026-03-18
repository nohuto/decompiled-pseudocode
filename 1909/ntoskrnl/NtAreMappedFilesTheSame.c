/*
 * XREFs of NtAreMappedFilesTheSame @ 0x14072D550
 * Callers:
 *     <none>
 * Callees:
 *     MiReferenceControlAreaFile @ 0x140009BF0 (MiReferenceControlAreaFile.c)
 *     MiDereferenceControlAreaFile @ 0x140009CFC (MiDereferenceControlAreaFile.c)
 *     ExAcquirePushLockSharedEx @ 0x14003EC70 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     MiObtainReferencedVadEx @ 0x140050810 (MiObtainReferencedVadEx.c)
 *     MiVadDeleted @ 0x1400539D0 (MiVadDeleted.c)
 *     MiLockVadShared @ 0x1400539E0 (MiLockVadShared.c)
 *     MiUnlockAndDereferenceVadShared @ 0x140053A30 (MiUnlockAndDereferenceVadShared.c)
 *     ExfReleasePushLockShared @ 0x1400C6220 (ExfReleasePushLockShared.c)
 *     MiUnlockVadShared @ 0x1401162B4 (MiUnlockVadShared.c)
 *     MiDereferenceVad @ 0x1402E5310 (MiDereferenceVad.c)
 *     MiVadIsCfgBitmap @ 0x1406885DC (MiVadIsCfgBitmap.c)
 */

NTSTATUS __stdcall NtAreMappedFilesTheSame(PVOID File1MappedAsAnImage, PVOID File2MappedAsFile)
{
  struct _KTHREAD *CurrentThread; // rbp
  unsigned __int64 v5; // rax
  __int64 v6; // rdi
  unsigned __int64 v7; // rax
  __int64 v8; // rsi
  __int64 v9; // rcx
  __int64 *v10; // r15
  __int64 *v11; // r14
  __int64 v12; // r15
  __int64 v13; // r14
  NTSTATUS v14; // ebx
  ULONG_PTR v15; // rax
  NTSTATUS v17; // [rsp+60h] [rbp+18h] BYREF

  CurrentThread = KeGetCurrentThread();
  v5 = MiObtainReferencedVadEx((unsigned __int64)File1MappedAsAnImage, 2, &v17);
  v6 = v5;
  if ( !v5 )
    return -1073741503;
  MiUnlockVadShared((__int64)CurrentThread, v5);
  v7 = MiObtainReferencedVadEx((unsigned __int64)File2MappedAsFile, 2, &v17);
  v8 = v7;
  if ( !v7 )
  {
    MiLockVadShared((__int64)CurrentThread, v6);
    MiUnlockAndDereferenceVadShared((char *)v6);
    return -1073741503;
  }
  if ( v6 == v7 )
  {
    MiDereferenceVad(v6);
    MiUnlockAndDereferenceVadShared((char *)v8);
    return 0;
  }
  else if ( (unsigned int)MiVadIsCfgBitmap(v6) == 1 || (unsigned int)MiVadIsCfgBitmap(v8) == 1 )
  {
    MiUnlockAndDereferenceVadShared((char *)v8);
    MiLockVadShared((__int64)CurrentThread, v6);
    MiUnlockAndDereferenceVadShared((char *)v6);
    return -1073741800;
  }
  else
  {
    if ( File1MappedAsAnImage <= File2MappedAsFile )
    {
      MiUnlockVadShared((__int64)CurrentThread, v8);
      MiLockVadShared((__int64)CurrentThread, v6);
      v9 = v8;
    }
    else
    {
      v9 = v6;
    }
    ExAcquirePushLockSharedEx(v9 + 40, 0LL);
    if ( (unsigned int)MiVadDeleted(v6) || (unsigned int)MiVadDeleted(v8) )
    {
      v17 = -1073741503;
    }
    else if ( (*(_DWORD *)(v6 + 48) & 0x100000) == 0
           && (*(_DWORD *)(v8 + 48) & 0x100000) == 0
           && (v10 = *(__int64 **)(v6 + 72)) != 0LL
           && (v11 = *(__int64 **)(v8 + 72)) != 0LL
           && (v12 = *v10) != 0
           && (v13 = *v11) != 0
           && *(_QWORD *)(v12 + 64)
           && *(_QWORD *)(v13 + 64) )
    {
      v14 = -1073741612;
      v15 = MiReferenceControlAreaFile(v13);
      if ( v12 == *(_QWORD *)(*(_QWORD *)(v15 + 40) + 16LL) )
        v14 = 0;
      v17 = v14;
      MiDereferenceControlAreaFile(v13, v15);
    }
    else
    {
      v17 = -1073741800;
    }
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v8 + 40), 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(v8 + 40));
    KeAbPostRelease(v8 + 40);
    MiUnlockAndDereferenceVadShared((char *)v6);
    MiLockVadShared((__int64)CurrentThread, v8);
    MiUnlockAndDereferenceVadShared((char *)v8);
    return v17;
  }
}
