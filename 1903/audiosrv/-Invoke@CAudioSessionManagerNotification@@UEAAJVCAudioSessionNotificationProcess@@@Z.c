/*
 * XREFs of ?Invoke@CAudioSessionManagerNotification@@UEAAJVCAudioSessionNotificationProcess@@@Z @ 0x1800D7530
 * Callers:
 *     <none>
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18002A780 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_d @ 0x1800C2644 (WPP_SF_d.c)
 *     WPP_SF_dd @ 0x1800C889C (WPP_SF_dd.c)
 *     ??1CAudioSessionNotificationProcess@@QEAA@XZ @ 0x1800D5F0C (--1CAudioSessionNotificationProcess@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioSessionManagerNotification::Invoke(__int64 a1, CAudioSessionNotificationProcess *a2)
{
  int MediaEvent; // edi
  int v5; // ebp
  int v6; // eax
  unsigned int v7; // eax
  __int64 v8; // r8
  int v9; // eax
  unsigned __int16 v10; // dx

  MediaEvent = 0;
  v5 = *(_DWORD *)(*(_QWORD *)(a1 + 16) + 716LL);
  if ( v5 && v5 != (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)a2 + 48LL))(*(_QWORD *)a2) )
  {
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      v6 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)a2 + 48LL))(*(_QWORD *)a2);
      WPP_SF_dd(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x28u,
        (__int64)&WPP_bf729160e03d3b4249aaa4373e8e8c67_Traceguids,
        v6);
    }
    goto LABEL_19;
  }
  v7 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)a2 + 40LL))(*(_QWORD *)a2);
  MediaEvent = GenerateMediaEvent(*(_QWORD *)(a1 + 8), v7, v8);
  if ( !MediaEvent )
  {
    if ( WPP_GLOBAL_Control == (CAudioSessionManager *)&WPP_GLOBAL_Control
      || (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 25) < 4u )
    {
      goto LABEL_19;
    }
    v9 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)a2 + 40LL))(*(_QWORD *)a2);
    v10 = 39;
    goto LABEL_16;
  }
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    v9 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)a2 + 40LL))(*(_QWORD *)a2);
    v10 = 38;
LABEL_16:
    WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), v10, (__int64)&WPP_bf729160e03d3b4249aaa4373e8e8c67_Traceguids, v9);
  }
  if ( MediaEvent < 0 )
    AudSrvTraceLoggingErrorHelper("CAudioSessionManagerNotification::Invoke", 1103, MediaEvent);
LABEL_19:
  CAudioSessionNotificationProcess::~CAudioSessionNotificationProcess(a2);
  return (unsigned int)MediaEvent;
}
