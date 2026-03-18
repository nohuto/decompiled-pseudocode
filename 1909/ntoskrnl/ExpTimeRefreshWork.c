/*
 * XREFs of ExpTimeRefreshWork @ 0x14059D9D0
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x14003EC70 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     KeQueryTimeIncrement @ 0x14007D4E0 (KeQueryTimeIncrement.c)
 *     KeSetTimer2 @ 0x14009C070 (KeSetTimer2.c)
 *     ExfReleasePushLockShared @ 0x1400C6220 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 *     ExpLicUpdateChecksum @ 0x1400F2CBC (ExpLicUpdateChecksum.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExUpdateSystemTimeFromCmos @ 0x1405969AC (ExUpdateSystemTimeFromCmos.c)
 *     ExpSetKernelDataProtection @ 0x1406A315C (ExpSetKernelDataProtection.c)
 *     ExpGetKernelDataProtection @ 0x1406A3670 (ExpGetKernelDataProtection.c)
 *     sub_1406A3ABC @ 0x1406A3ABC (sub_1406A3ABC.c)
 *     sub_1406A3E90 @ 0x1406A3E90 (sub_1406A3E90.c)
 *     ExReleaseTimeRefreshLock @ 0x1406A71E0 (ExReleaseTimeRefreshLock.c)
 *     ExAcquireTimeRefreshLock @ 0x1406A7200 (ExAcquireTimeRefreshLock.c)
 *     sub_14090C0B4 @ 0x14090C0B4 (sub_14090C0B4.c)
 *     sub_14090C104 @ 0x14090C104 (sub_14090C104.c)
 *     sub_14090C5A4 @ 0x14090C5A4 (sub_14090C5A4.c)
 */

_BOOL8 __fastcall ExpTimeRefreshWork(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  char v2; // bl
  bool v4; // bl
  unsigned int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // rdx
  int v8; // eax
  unsigned int v9; // edi
  __int64 v10; // rbx
  struct _KTHREAD *v11; // rax
  __int64 v12; // rdi
  unsigned __int64 v13; // rdi
  unsigned __int64 v14; // rbx
  struct _KTHREAD *v15; // rax
  int v16; // eax
  int KernelDataProtection; // eax
  unsigned int v18; // ebx
  __int64 v19; // rdx
  __int64 v20; // rdx
  int v21; // eax
  bool v22; // bl
  _DWORD *v23; // rcx
  _OWORD v24[3]; // [rsp+28h] [rbp-E0h] BYREF
  _OWORD v25[3]; // [rsp+58h] [rbp-B0h] BYREF
  _QWORD v26[2]; // [rsp+88h] [rbp-80h] BYREF
  _OWORD v27[3]; // [rsp+98h] [rbp-70h] BYREF
  _OWORD v28[3]; // [rsp+C8h] [rbp-40h] BYREF
  _DWORD v29[12]; // [rsp+F8h] [rbp-10h] BYREF
  _QWORD v30[6]; // [rsp+128h] [rbp+20h] BYREF
  _BYTE v31[48]; // [rsp+158h] [rbp+50h] BYREF
  _QWORD v32[6]; // [rsp+188h] [rbp+80h] BYREF
  _QWORD v33[6]; // [rsp+1B8h] [rbp+B0h] BYREF
  _QWORD v34[6]; // [rsp+1E8h] [rbp+E0h] BYREF
  _DWORD v35[12]; // [rsp+218h] [rbp+110h] BYREF
  _BYTE v36[48]; // [rsp+248h] [rbp+140h] BYREF

  do
  {
    LOBYTE(a1) = 1;
    ExAcquireTimeRefreshLock(a1);
    if ( KeTimeSynchronization )
      ExUpdateSystemTimeFromCmos(0, 0);
    ExReleaseTimeRefreshLock();
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockSharedEx((ULONG_PTR)&qword_1409AE5D8, 0LL);
    memset(v30, 0, sizeof(v30));
    memset(v27, 0, sizeof(v27));
    if ( !off_1409AD038 && Data )
    {
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_1409AE688, 0LL);
      v4 = qword_1409AE6E8 == 0;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_1409AE688, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&qword_1409AE688);
      KeAbPostRelease((ULONG_PTR)&qword_1409AE688);
      if ( v4 )
      {
        memset(v29, 0, sizeof(v29));
        dword_1409AD0F8 = 5;
        v29[2] = 5;
        ExpSetKernelDataProtection(v29, 2LL, 0LL);
      }
      else
      {
        v5 = NumOfElements;
        memset(v24, 0, sizeof(v24));
        if ( Data )
        {
          DWORD2(v24[0]) = 4;
          *((_QWORD *)&v24[1] + 1) = 0LL;
          *(_QWORD *)&v24[2] = 0LL;
          BYTE8(v24[2]) = 1;
          if ( (unsigned int)ExpLicUpdateChecksum((__int64)Data + 20, v6, v24)
            || v5
            && (16 * (unsigned __int64)v5 > 0xFFFFFFFF
             || (unsigned int)ExpLicUpdateChecksum((__int64)&unk_1409AFF80, v7, v24)) )
          {
            *(_QWORD *)&v24[0] = 0LL;
            DWORD2(v24[0]) = 4;
          }
          v8 = 0;
          v27[0] = v24[0];
          v27[1] = v24[1];
          v27[2] = v24[2];
        }
        else
        {
          v8 = -1073741811;
        }
        if ( !v8 && (int)ExpGetKernelDataProtection(v30) >= 0 )
        {
          v9 = 4;
          if ( v30[0] != *(_QWORD *)&v27[0] )
          {
            DWORD2(v27[0]) = 4;
            v9 = 6;
          }
          v10 = MEMORY[0xFFFFF78000000320];
          *(_QWORD *)&v27[1] = v10 * KeQueryTimeIncrement() / 10000;
          ExpSetKernelDataProtection(v27, v9, 0LL);
        }
      }
    }
    memset(v31, 0, sizeof(v31));
    if ( off_1409AD038 )
    {
      v2 = 0;
    }
    else
    {
      v2 = 1;
      if ( (int)ExpGetKernelDataProtection(v31) >= 0 )
        v2 = v31[40];
    }
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_1409AE5D8, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&qword_1409AE5D8);
    KeAbPostRelease((ULONG_PTR)&qword_1409AE5D8);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    if ( v2 == 1 )
    {
      v11 = KeGetCurrentThread();
      --v11->KernelApcDisable;
      ExAcquirePushLockSharedEx((ULONG_PTR)&qword_1409AE5D8, 0LL);
      memset(v32, 0, sizeof(v32));
      v12 = 0LL;
      if ( (int)ExpGetKernelDataProtection(v32) >= 0 )
        v12 = v32[3];
      v13 = v12 + 3600;
      memset(v33, 0, sizeof(v33));
      v33[3] = v13;
      ExpSetKernelDataProtection(v33, 8LL, 0LL);
      memset(v34, 0, sizeof(v34));
      if ( off_1409AD038 )
      {
        v14 = 10800LL;
      }
      else
      {
        v14 = 0LL;
        if ( (int)ExpGetKernelDataProtection(v34) >= 0 )
          v14 = v34[4];
      }
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_1409AE5D8, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)&qword_1409AE5D8);
      KeAbPostRelease((ULONG_PTR)&qword_1409AE5D8);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      sub_14090C0B4();
      if ( v14 > v13 )
      {
        v22 = 0;
      }
      else
      {
        v15 = KeGetCurrentThread();
        --v15->KernelApcDisable;
        ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_1409AE5D8, 0LL);
        memset(v28, 0, sizeof(v28));
        if ( Data )
        {
          KernelDataProtection = ExpGetKernelDataProtection(v28);
          if ( KernelDataProtection < 0 )
          {
            if ( KernelDataProtection == -1073741275 )
            {
              v18 = NumOfElements;
              memset(v25, 0, sizeof(v25));
              if ( Data )
              {
                DWORD2(v25[0]) = 4;
                *((_QWORD *)&v25[1] + 1) = 0LL;
                *(_QWORD *)&v25[2] = 0LL;
                BYTE8(v25[2]) = 1;
                if ( (unsigned int)ExpLicUpdateChecksum((__int64)Data + 20, v19, v25)
                  || v18
                  && (16 * (unsigned __int64)v18 > 0xFFFFFFFF
                   || (unsigned int)ExpLicUpdateChecksum((__int64)&unk_1409AFF80, v20, v25)) )
                {
                  *(_QWORD *)&v25[0] = 0LL;
                  DWORD2(v25[0]) = 4;
                }
                v21 = 0;
                v28[0] = v25[0];
                v28[1] = v25[1];
                v28[2] = v25[2];
              }
              else
              {
                v21 = -1073741811;
              }
              if ( v21 >= 0 )
              {
                DWORD2(v28[0]) = 4;
                ExpSetKernelDataProtection(v28, 0xFFFFFFFFLL, 0LL);
              }
            }
            v16 = 4;
          }
          else
          {
            v16 = DWORD2(v28[0]);
          }
        }
        else
        {
          v16 = dword_1409AD0F8;
        }
        v22 = v16 == 0;
        memset(v35, 0, sizeof(v35));
        dword_1409AD0F8 = 2;
        v35[2] = 2;
        ExpSetKernelDataProtection(v35, 2LL, 0LL);
        v23 = Data;
        if ( off_1409AD038 )
          v23 = off_1409AD038;
        if ( v23 )
          v23[3] |= 1u;
        memset(v36, 0, sizeof(v36));
        ExpSetKernelDataProtection(v36, 32LL, 0LL);
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_1409AE5D8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)&qword_1409AE5D8);
        KeAbPostRelease((ULONG_PTR)&qword_1409AE5D8);
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
        sub_1406A3E90();
        sub_14090C104(&KernelLicensingCacheExpired);
        sub_14090C5A4();
      }
      if ( v22 )
        sub_1406A3ABC();
    }
  }
  while ( _InterlockedExchangeAdd(&ExpOkToTimeRefresh, 0xFFFFFFFF) != 1 );
  v26[0] = 0LL;
  v26[1] = -1LL;
  return KeSetTimer2((__int64)&ExpTimeRefreshTimer, ExpTimeRefreshInterval, 0LL, (__int64)v26);
}
