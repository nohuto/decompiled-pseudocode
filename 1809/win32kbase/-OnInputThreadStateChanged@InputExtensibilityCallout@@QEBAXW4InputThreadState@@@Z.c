/*
 * XREFs of ?OnInputThreadStateChanged@InputExtensibilityCallout@@QEBAXW4InputThreadState@@@Z @ 0x1C007C164
 * Callers:
 *     UserActivateMITInputProcessing @ 0x1C007A558 (UserActivateMITInputProcessing.c)
 *     UserDeactivateMITInputProcessing @ 0x1C0152E34 (UserDeactivateMITInputProcessing.c)
 * Callees:
 *     ?_CalledOnInputThread@CInputThread@@AEBA_NXZ @ 0x1C0031678 (-_CalledOnInputThread@CInputThread@@AEBA_NXZ.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AF730 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00AF780 (memset.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall InputExtensibilityCallout::OnInputThreadStateChanged(__int64 a1, int a2)
{
  __int64 v2; // rbp
  CInputThread *v4; // rdi
  bool v5; // bl
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  _BYTE *v9; // rsi
  __int64 v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rdi
  __int64 v15; // rbp
  __int64 v16; // xmm1_8
  _QWORD *v17; // rdi
  unsigned __int64 v18; // rbx
  _BYTE v19[272]; // [rsp+20h] [rbp-128h] BYREF

  v2 = *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels;
  v4 = *(CInputThread **)&WPP_MAIN_CB.AlignmentRequirement;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v4, 0LL);
  v5 = CInputThread::_CalledOnInputThread(v4);
  ExReleasePushLockSharedEx(v4, 0LL);
  KeLeaveCriticalRegion();
  if ( !v5 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, v6, v8);
  if ( !a2 )
  {
    memset(v19, 0, 0x108uLL);
    v9 = v19;
    v10 = v2 + 24;
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx(v2 + 24, 0LL);
    if ( !*(_QWORD *)(v2 + 40) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v11, v13);
    v14 = v2 + 48;
    v15 = v2 + 488;
    while ( v14 != v15 )
    {
      if ( *(_QWORD *)v14 && (*(_DWORD *)(v14 + 16) & 2) != 0 )
      {
        v16 = *(_QWORD *)(v14 + 32);
        *(_OWORD *)v9 = *(_OWORD *)(v14 + 16);
        *((_QWORD *)v9 + 2) = v16;
        v9 += 24;
        if ( (unsigned __int64)((v9 - v19) / 24) > 0xB )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v9 - v19, (v9 - v19) / 24, v13);
      }
      v14 += 40LL;
    }
    ExReleasePushLockSharedEx(v10, 0LL);
    KeLeaveCriticalRegion();
    if ( v19 < v9 )
    {
      v17 = &v19[16];
      v18 = (v9 - v19 - 1) / 0x18uLL + 1;
      do
      {
        ((void (__fastcall *)(__int64, _QWORD))*(v17 - 1))(2LL, *v17);
        v17 += 3;
        --v18;
      }
      while ( v18 );
    }
  }
}
