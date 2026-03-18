/*
 * XREFs of ExSetLicenseTamperState @ 0x14090C160
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x14009E550 (ExfTryToWakePushLock.c)
 *     ExpLicUpdateChecksum @ 0x1400FA64C (ExpLicUpdateChecksum.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExpSetKernelDataProtection @ 0x1406AC7AC (ExpSetKernelDataProtection.c)
 *     ExpGetKernelDataProtection @ 0x1406ACCC0 (ExpGetKernelDataProtection.c)
 *     sub_1406AD10C @ 0x1406AD10C (sub_1406AD10C.c)
 */

void __fastcall ExSetLicenseTamperState(int a1)
{
  struct _KTHREAD *CurrentThread; // rax
  int v3; // edi
  int KernelDataProtection; // eax
  unsigned __int64 v5; // r9
  int updated; // eax
  __int64 v7; // rdx
  int v8; // eax
  __int128 v9; // [rsp+20h] [rbp-79h] BYREF
  __int128 v10; // [rsp+30h] [rbp-69h]
  __int128 v11; // [rsp+40h] [rbp-59h]
  _OWORD v12[3]; // [rsp+50h] [rbp-49h] BYREF
  _DWORD v13[12]; // [rsp+80h] [rbp-19h] BYREF
  _BYTE v14[48]; // [rsp+B0h] [rbp+17h] BYREF

  if ( !a1 || a1 == 3 )
    return;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_1409AE5D8, 0LL);
  memset(v12, 0, sizeof(v12));
  if ( Data )
  {
    KernelDataProtection = ExpGetKernelDataProtection(v12);
    if ( KernelDataProtection >= 0 )
    {
      v3 = DWORD2(v12[0]);
      goto LABEL_19;
    }
    v3 = 4;
    if ( KernelDataProtection != -1073741275 )
      goto LABEL_19;
    LOBYTE(v5) = -1;
    HIDWORD(v9) = 0;
    *(_DWORD *)((char *)&v11 + 9) = 0;
    *(_WORD *)((char *)&v11 + 13) = 0;
    HIBYTE(v11) = 0;
    if ( !Data )
    {
      v8 = -1073741811;
LABEL_17:
      if ( v8 >= 0 )
      {
        DWORD2(v12[0]) = 4;
        ExpSetKernelDataProtection((__int64)v12, v5, 0);
      }
      goto LABEL_19;
    }
    *(_QWORD *)&v9 = 0LL;
    v10 = 0uLL;
    DWORD2(v9) = 4;
    *(_QWORD *)&v11 = 0LL;
    BYTE8(v11) = 1;
    updated = ExpLicUpdateChecksum((__int64)Data + 20, (unsigned int)NumOfElements, &v9);
    if ( updated )
      goto LABEL_14;
    if ( (_DWORD)v7 )
    {
      if ( 16 * (unsigned __int64)(unsigned int)v7 > v5 )
        goto LABEL_14;
      updated = ExpLicUpdateChecksum((__int64)qword_1409AFF80, v7, &v9);
    }
    if ( !updated )
    {
LABEL_15:
      v8 = 0;
      v12[0] = v9;
      v12[1] = v10;
      v12[2] = v11;
      goto LABEL_17;
    }
LABEL_14:
    *(_QWORD *)&v9 = 0LL;
    DWORD2(v9) = 4;
    goto LABEL_15;
  }
  v3 = dword_1409AD0F8;
LABEL_19:
  memset(v13, 0, sizeof(v13));
  dword_1409AD0F8 = a1;
  v13[2] = a1;
  ExpSetKernelDataProtection((__int64)v13, 2, 0);
  memset(v14, 0, sizeof(v14));
  ExpSetKernelDataProtection((__int64)v14, 32, 0);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_1409AE5D8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_1409AE5D8);
  KeAbPostRelease((ULONG_PTR)&qword_1409AE5D8);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( !v3 )
    sub_1406AD10C();
}
