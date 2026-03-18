/*
 * XREFs of ExGetLicenseTamperState @ 0x14090BF20
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x14003EF30 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLockShared @ 0x14009E3E0 (ExfReleasePushLockShared.c)
 *     ExpLicUpdateChecksum @ 0x1400FA64C (ExpLicUpdateChecksum.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExpSetKernelDataProtection @ 0x1406AC7AC (ExpSetKernelDataProtection.c)
 *     ExpGetKernelDataProtection @ 0x1406ACCC0 (ExpGetKernelDataProtection.c)
 */

bool __fastcall ExGetLicenseTamperState(int *a1)
{
  struct _KTHREAD *CurrentThread; // rax
  int v3; // ebx
  int KernelDataProtection; // eax
  unsigned __int64 v5; // r9
  int updated; // eax
  __int64 v7; // rdx
  int v8; // eax
  __int128 v10; // [rsp+20h] [rbp-60h] BYREF
  __int128 v11; // [rsp+30h] [rbp-50h]
  __int128 v12; // [rsp+40h] [rbp-40h]
  _OWORD v13[3]; // [rsp+50h] [rbp-30h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&qword_1409AE5D8, 0LL);
  memset(v13, 0, sizeof(v13));
  if ( !Data )
  {
    v3 = dword_1409AD0F8;
    goto LABEL_17;
  }
  KernelDataProtection = ExpGetKernelDataProtection(v13);
  if ( KernelDataProtection >= 0 )
  {
    v3 = DWORD2(v13[0]);
    goto LABEL_17;
  }
  v3 = 4;
  if ( KernelDataProtection == -1073741275 )
  {
    LOBYTE(v5) = -1;
    HIDWORD(v10) = 0;
    *(_DWORD *)((char *)&v12 + 9) = 0;
    *(_WORD *)((char *)&v12 + 13) = 0;
    HIBYTE(v12) = 0;
    if ( !Data )
    {
      v8 = -1073741811;
LABEL_15:
      if ( v8 >= 0 )
      {
        DWORD2(v13[0]) = 4;
        ExpSetKernelDataProtection((__int64)v13, v5, 0);
      }
      goto LABEL_17;
    }
    *(_QWORD *)&v10 = 0LL;
    v11 = 0uLL;
    DWORD2(v10) = 4;
    *(_QWORD *)&v12 = 0LL;
    BYTE8(v12) = 1;
    updated = ExpLicUpdateChecksum((__int64)Data + 20, (unsigned int)NumOfElements, &v10);
    if ( updated )
      goto LABEL_12;
    if ( (_DWORD)v7 )
    {
      if ( 16 * (unsigned __int64)(unsigned int)v7 > v5 )
        goto LABEL_12;
      updated = ExpLicUpdateChecksum((__int64)qword_1409AFF80, v7, &v10);
    }
    if ( !updated )
    {
LABEL_13:
      v8 = 0;
      v13[0] = v10;
      v13[1] = v11;
      v13[2] = v12;
      goto LABEL_15;
    }
LABEL_12:
    *(_QWORD *)&v10 = 0LL;
    DWORD2(v10) = 4;
    goto LABEL_13;
  }
LABEL_17:
  if ( a1 )
    *a1 = v3;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_1409AE5D8, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&qword_1409AE5D8);
  KeAbPostRelease((ULONG_PTR)&qword_1409AE5D8);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v3 != 0;
}
