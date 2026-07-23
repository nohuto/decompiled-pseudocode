/*
 * XREFs of ExSetLicenseTamperState @ 0x1408CFE10
 * Callers:
 *     <none>
 * Callees:
 *     ExpLicUpdateChecksum @ 0x1400077F0 (ExpLicUpdateChecksum.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     ExpSetKernelDataProtection @ 0x1405A25F4 (ExpSetKernelDataProtection.c)
 *     ExpGetKernelDataProtection @ 0x1405A2B24 (ExpGetKernelDataProtection.c)
 *     sub_1405A33DC @ 0x1405A33DC (sub_1405A33DC.c)
 */

void __fastcall ExSetLicenseTamperState(int a1)
{
  struct _KTHREAD *CurrentThread; // rax
  int v3; // edi
  int KernelDataProtection; // eax
  unsigned __int64 v5; // r9
  __int64 v6; // rdx
  unsigned int updated; // ecx
  unsigned __int64 v8; // rax
  int v9; // eax
  __int128 v10; // [rsp+20h] [rbp-69h] BYREF
  __int128 v11; // [rsp+30h] [rbp-59h]
  __int128 v12; // [rsp+40h] [rbp-49h]
  _OWORD v13[3]; // [rsp+50h] [rbp-39h] BYREF
  _BYTE v14[8]; // [rsp+80h] [rbp-9h] BYREF
  int v15; // [rsp+88h] [rbp-1h]
  _BYTE v16[48]; // [rsp+B0h] [rbp+27h] BYREF

  if ( a1 && a1 != 3 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_14096F4E0, 0LL);
    if ( Data )
    {
      KernelDataProtection = ExpGetKernelDataProtection(v13);
      if ( KernelDataProtection < 0 )
      {
        v3 = 4;
        if ( KernelDataProtection == -1073741275 )
        {
          LOBYTE(v5) = -1;
          if ( Data )
          {
            *(_QWORD *)&v10 = 0LL;
            v11 = 0uLL;
            *(_QWORD *)&v12 = 0LL;
            DWORD2(v10) = 4;
            BYTE8(v12) = 1;
            updated = ExpLicUpdateChecksum((__int64)Data + 20, (unsigned int)NumOfElements, &v10);
            if ( !updated )
            {
              if ( (_DWORD)v6 )
              {
                v8 = 16LL * (unsigned int)v6;
                updated = v5 < v8 ? 0xC0000095 : 0;
                if ( v8 <= v5 )
                  updated = ExpLicUpdateChecksum((__int64)qword_140970D00, v6, &v10);
              }
            }
            if ( updated )
            {
              *(_QWORD *)&v10 = 0LL;
              DWORD2(v10) = 4;
            }
            v9 = 0;
            v13[0] = v10;
            v13[1] = v11;
            v13[2] = v12;
          }
          else
          {
            v9 = -1073741811;
          }
          if ( v9 >= 0 )
          {
            DWORD2(v13[0]) = 4;
            ExpSetKernelDataProtection((__int64)v13, v5, 0);
          }
        }
      }
      else
      {
        v3 = DWORD2(v13[0]);
      }
    }
    else
    {
      v3 = dword_14096E0B8;
    }
    dword_14096E0B8 = a1;
    v15 = a1;
    ExpSetKernelDataProtection((__int64)v14, 2, 0);
    v16[40] = 0;
    ExpSetKernelDataProtection((__int64)v16, 32, 0);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_14096F4E0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_14096F4E0);
    KeAbPostRelease((ULONG_PTR)&qword_14096F4E0);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    if ( !v3 )
      sub_1405A33DC();
  }
}
