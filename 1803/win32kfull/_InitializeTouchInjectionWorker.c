/*
 * XREFs of _InitializeTouchInjectionWorker @ 0x1C01A9298
 * Callers:
 *     ?RealizePendingRecreateTouchInjectionDevices@@YAHPEAUtagPROCESSINFO@@H@Z @ 0x1C01A8798 (-RealizePendingRecreateTouchInjectionDevices@@YAHPEAUtagPROCESSINFO@@H@Z.c)
 *     NtUserInitializeTouchInjection @ 0x1C01F1490 (NtUserInitializeTouchInjection.c)
 * Callees:
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     CleanupInjectedTouchProcess @ 0x1C01A8FB0 (CleanupInjectedTouchProcess.c)
 *     CreatePseudoDigitizerDevice @ 0x1C01A9F40 (CreatePseudoDigitizerDevice.c)
 */

__int64 __fastcall InitializeTouchInjectionWorker(unsigned int a1, unsigned int a2, __int64 a3)
{
  __int64 v3; // rbp
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rdi
  __int64 PseudoDigitizerDevice; // r14
  int v12; // edx
  _QWORD *v13; // rax
  __int64 v14; // rsi
  __int128 v15; // xmm0
  __int64 v16; // rax
  _QWORD v17[5]; // [rsp+20h] [rbp-28h] BYREF

  v3 = a1;
  v6 = 0LL;
  gullTouchInjectionMaxTimeOffset = MilliSecsToQpcCount(5000LL);
  if ( *(_QWORD *)(a3 + 888) )
    CleanupInjectedTouchProcess(a3);
  v7 = Win32AllocPoolWithQuotaZInit(104LL, 1953067861LL);
  v9 = v7;
  if ( !v7 )
    goto LABEL_4;
  PseudoDigitizerDevice = CreatePseudoDigitizerDevice((unsigned int)v3, a2, v7);
  if ( !PseudoDigitizerDevice )
    goto LABEL_4;
  if ( !gbEnforceUIPI || (v12 = 64, *(int *)(a3 + 12) >= 0) )
    v12 = 0;
  *(_DWORD *)(*(_QWORD *)(PseudoDigitizerDevice + 480) + 276LL) = v12 | *(_DWORD *)(*(_QWORD *)(PseudoDigitizerDevice
                                                                                              + 480)
                                                                                  + 276LL) & 0xFFFFFFBF;
  if ( !*(_QWORD *)(a3 + 888) )
  {
    v13 = (_QWORD *)Win32AllocPoolWithQuotaZInit(16LL, 1953067861LL);
    if ( !v13 )
    {
LABEL_4:
      UserSetLastError(14LL, v8);
      return 0LL;
    }
    v13[1] = a3;
    *v13 = gpTouchInjectorProcesses;
    gpTouchInjectorProcesses = (__int64)v13;
  }
  v17[1] = PseudoDigitizerDevice;
  v17[0] = v9 + 16;
  *(_QWORD *)(a3 + 888) = v9;
  HMAssignmentLock(v17);
  v14 = v3;
  v15 = *(_OWORD *)(*(_QWORD *)(PseudoDigitizerDevice + 480) + 160LL);
  *(_DWORD *)(v9 + 24) = a2;
  *(_DWORD *)(v9 + 28) = v3;
  *(_OWORD *)v9 = v15;
  v16 = Win32AllocPoolWithQuotaZInit(12 * v3, 1953067861LL);
  if ( !v16 )
    goto LABEL_4;
  *(_QWORD *)(v9 + 80) = v16;
  if ( (_DWORD)v3 )
  {
    do
    {
      v6 += 12LL;
      *(_DWORD *)(*(_QWORD *)(v9 + 80) + v6 - 4) = 0x40000;
      --v14;
    }
    while ( v14 );
  }
  return 1LL;
}
