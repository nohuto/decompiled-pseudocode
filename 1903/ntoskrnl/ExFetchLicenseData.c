/*
 * XREFs of ExFetchLicenseData @ 0x14090BDD0
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x14003EF30 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLockShared @ 0x14009E3E0 (ExfReleasePushLockShared.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 */

__int64 __fastcall ExFetchLicenseData(void *a1, unsigned int a2, unsigned int *a3)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int *v8; // rdx
  unsigned int v9; // [rsp+60h] [rbp+18h]

  v9 = 0;
  if ( !a3 )
    return 3221225485LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&qword_1409AE5D8, 0LL);
  if ( byte_1409AE5C0 )
    goto LABEL_4;
  v8 = (unsigned int *)Data;
  if ( off_1409AD038 )
    v8 = (unsigned int *)off_1409AD038;
  if ( !v8 )
  {
LABEL_4:
    v9 = -1073741595;
  }
  else
  {
    *a3 = *v8;
    if ( a1 && a2 && a2 >= *v8 )
    {
      memmove(a1, v8, *v8);
      if ( a2 >= 0x14 )
        *((_DWORD *)a1 + 3) &= ~1u;
    }
    else
    {
      v9 = -1073741789;
    }
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_1409AE5D8, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&qword_1409AE5D8);
  KeAbPostRelease((ULONG_PTR)&qword_1409AE5D8);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v9;
}
