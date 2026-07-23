/*
 * XREFs of ExGetLicenseTamperState @ 0x1408CFC00
 * Callers:
 *     <none>
 * Callees:
 *     ExpLicUpdateChecksum @ 0x1400077F0 (ExpLicUpdateChecksum.c)
 *     ExAcquirePushLockSharedEx @ 0x14004EE20 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1400913F0 (ExfReleasePushLockShared.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     ExpSetKernelDataProtection @ 0x1405A25F4 (ExpSetKernelDataProtection.c)
 *     ExpGetKernelDataProtection @ 0x1405A2B24 (ExpGetKernelDataProtection.c)
 */

bool __fastcall ExGetLicenseTamperState(int *a1)
{
  struct _KTHREAD *CurrentThread; // rax
  int v3; // ebx
  int KernelDataProtection; // eax
  unsigned __int64 v5; // r9
  __int64 v6; // rdx
  unsigned int updated; // ecx
  unsigned __int64 v8; // rax
  int v9; // eax
  __int128 v11; // [rsp+20h] [rbp-60h] BYREF
  __int128 v12; // [rsp+30h] [rbp-50h]
  __int128 v13; // [rsp+40h] [rbp-40h]
  _OWORD v14[3]; // [rsp+50h] [rbp-30h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&qword_14096F4E0, 0LL);
  if ( Data )
  {
    KernelDataProtection = ExpGetKernelDataProtection(v14);
    if ( KernelDataProtection < 0 )
    {
      v3 = 4;
      if ( KernelDataProtection == -1073741275 )
      {
        LOBYTE(v5) = -1;
        if ( Data )
        {
          *(_QWORD *)&v11 = 0LL;
          v12 = 0uLL;
          DWORD2(v11) = 4;
          *(_QWORD *)&v13 = 0LL;
          BYTE8(v13) = 1;
          updated = ExpLicUpdateChecksum((__int64)Data + 20, (unsigned int)NumOfElements, &v11);
          if ( !updated )
          {
            if ( (_DWORD)v6 )
            {
              v8 = 16LL * (unsigned int)v6;
              updated = v5 < v8 ? 0xC0000095 : 0;
              if ( v8 <= v5 )
                updated = ExpLicUpdateChecksum((__int64)qword_140970D00, v6, &v11);
            }
          }
          if ( updated )
          {
            *(_QWORD *)&v11 = 0LL;
            DWORD2(v11) = 4;
          }
          v9 = 0;
          v14[0] = v11;
          v14[1] = v12;
          v14[2] = v13;
        }
        else
        {
          v9 = -1073741811;
        }
        if ( v9 >= 0 )
        {
          DWORD2(v14[0]) = 4;
          ExpSetKernelDataProtection((__int64)v14, v5, 0);
        }
      }
    }
    else
    {
      v3 = DWORD2(v14[0]);
    }
  }
  else
  {
    v3 = dword_14096E0B8;
  }
  if ( a1 )
    *a1 = v3;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_14096F4E0, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&qword_14096F4E0);
  KeAbPostRelease((ULONG_PTR)&qword_14096F4E0);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return v3 != 0;
}
