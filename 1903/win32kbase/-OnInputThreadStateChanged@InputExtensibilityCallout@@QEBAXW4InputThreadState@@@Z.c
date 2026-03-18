/*
 * XREFs of ?OnInputThreadStateChanged@InputExtensibilityCallout@@QEBAXW4InputThreadState@@@Z @ 0x1C009DB04
 * Callers:
 *     UserActivateMITInputProcessing @ 0x1C009D3C8 (UserActivateMITInputProcessing.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00C13F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00C1440 (memset.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall InputExtensibilityCallout::OnInputThreadStateChanged(__int64 a1, int a2)
{
  InputExtensibilityCallout *v2; // rbp
  CInputThread *v4; // rsi
  unsigned int CurrentThreadId; // eax
  int v6; // ebx
  unsigned int v7; // edi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  _BYTE *v11; // rsi
  char *v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  char *v16; // rdi
  char *v17; // rbp
  __int64 v18; // xmm1_8
  _QWORD *v19; // rdi
  unsigned __int64 v20; // rbx
  _BYTE v21[416]; // [rsp+20h] [rbp-1B8h] BYREF

  v2 = gpInputExtensibilityCallout;
  v4 = gpInputThread;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v4, 0LL);
  CurrentThreadId = (unsigned int)PsGetCurrentThreadId();
  v6 = *((_DWORD *)v4 + 10);
  v7 = CurrentThreadId;
  ExReleasePushLockSharedEx(v4, 0LL);
  KeLeaveCriticalRegion();
  if ( v7 != v6 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, v8, v10);
  if ( !a2 )
  {
    memset(v21, 0, 0x198uLL);
    v11 = v21;
    v12 = (char *)v2 + 8;
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx((char *)v2 + 8, 0LL);
    if ( !*((_QWORD *)v2 + 3) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v14, v13, v15);
    v16 = (char *)v2 + 32;
    v17 = (char *)v2 + 712;
    while ( v16 != v17 )
    {
      if ( *(_QWORD *)v16 && (*((_DWORD *)v16 + 4) & 2) != 0 )
      {
        v18 = *((_QWORD *)v16 + 4);
        *(_OWORD *)v11 = *((_OWORD *)v16 + 1);
        *((_QWORD *)v11 + 2) = v18;
        v11 += 24;
        if ( (unsigned __int64)((v11 - v21) / 24) > 0x11 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v11 - v21, (v11 - v21) / 24, v15);
      }
      v16 += 40;
    }
    ExReleasePushLockSharedEx(v12, 0LL);
    KeLeaveCriticalRegion();
    if ( v21 < v11 )
    {
      v19 = &v21[16];
      v20 = (v11 - v21 - 1) / 0x18uLL + 1;
      do
      {
        ((void (__fastcall *)(__int64, _QWORD))*(v19 - 1))(2LL, *v19);
        v19 += 3;
        --v20;
      }
      while ( v20 );
    }
  }
}
