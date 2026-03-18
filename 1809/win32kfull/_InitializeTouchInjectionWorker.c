/*
 * XREFs of _InitializeTouchInjectionWorker @ 0x1C01CB810
 * Callers:
 *     ?RealizePendingRecreateTouchInjectionDevices@@YAHPEAUtagPROCESSINFO@@H@Z @ 0x1C01CACD0 (-RealizePendingRecreateTouchInjectionDevices@@YAHPEAUtagPROCESSINFO@@H@Z.c)
 *     NtUserInitializeTouchInjection @ 0x1C0218860 (NtUserInitializeTouchInjection.c)
 * Callees:
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     CleanupInjectedTouchProcess @ 0x1C01CB510 (CleanupInjectedTouchProcess.c)
 *     CreatePseudoDigitizerDevice @ 0x1C01CC5A8 (CreatePseudoDigitizerDevice.c)
 */

__int64 __fastcall InitializeTouchInjectionWorker(unsigned int a1, unsigned int a2, __int64 a3)
{
  __int64 v3; // rbp
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdi
  __int64 PseudoDigitizerDevice; // rax
  __int64 v13; // r14
  int v14; // edx
  _QWORD *v15; // rax
  __int64 v16; // rsi
  __int128 v17; // xmm0
  __int64 v18; // rax
  _QWORD v20[5]; // [rsp+20h] [rbp-28h] BYREF

  v3 = a1;
  v6 = 0LL;
  gullTouchInjectionMaxTimeOffset = MilliSecsToQpcCount(5000LL);
  if ( *(_QWORD *)(a3 + 896) )
    CleanupInjectedTouchProcess(a3);
  v7 = Win32AllocPoolWithQuotaZInit(104LL, 1953067861LL);
  v11 = v7;
  if ( !v7 )
    goto LABEL_15;
  PseudoDigitizerDevice = CreatePseudoDigitizerDevice((unsigned int)v3, a2, v7);
  v13 = PseudoDigitizerDevice;
  if ( !PseudoDigitizerDevice )
    goto LABEL_15;
  if ( !gbEnforceUIPI || (v14 = 64, *(int *)(a3 + 12) >= 0) )
    v14 = 0;
  *(_DWORD *)(*(_QWORD *)(PseudoDigitizerDevice + 480) + 308LL) = v14 | *(_DWORD *)(*(_QWORD *)(PseudoDigitizerDevice
                                                                                              + 480)
                                                                                  + 308LL) & 0xFFFFFFBF;
  if ( !*(_QWORD *)(a3 + 896) )
  {
    v15 = (_QWORD *)Win32AllocPoolWithQuotaZInit(16LL, 1953067861LL);
    if ( !v15 )
    {
LABEL_15:
      UserSetLastError(14LL, v8, v9, v10);
      return 0LL;
    }
    *v15 = gpTouchInjectorProcesses;
    v15[1] = a3;
    gpTouchInjectorProcesses = (__int64)v15;
  }
  v20[1] = v13;
  v20[0] = v11 + 16;
  *(_QWORD *)(a3 + 896) = v11;
  HMAssignmentLock(v20);
  v16 = v3;
  v17 = *(_OWORD *)(*(_QWORD *)(v13 + 480) + 160LL);
  *(_DWORD *)(v11 + 24) = a2;
  *(_DWORD *)(v11 + 28) = v3;
  *(_OWORD *)v11 = v17;
  v18 = Win32AllocPoolWithQuotaZInit(12 * v3, 1953067861LL);
  if ( !v18 )
    goto LABEL_15;
  *(_QWORD *)(v11 + 80) = v18;
  if ( (_DWORD)v3 )
  {
    do
    {
      v6 += 12LL;
      *(_DWORD *)(v6 + *(_QWORD *)(v11 + 80) - 4) = 0x40000;
      --v16;
    }
    while ( v16 );
  }
  return 1LL;
}
