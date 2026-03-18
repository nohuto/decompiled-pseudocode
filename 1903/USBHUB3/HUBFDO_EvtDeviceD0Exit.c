/*
 * XREFs of HUBFDO_EvtDeviceD0Exit @ 0x1C000BBF0
 * Callers:
 *     <none>
 * Callees:
 *     HUBSM_AddEvent @ 0x1C000A734 (HUBSM_AddEvent.c)
 *     McTemplateK0pqq @ 0x1C000B370 (McTemplateK0pqq.c)
 *     McTemplateK0pqqh @ 0x1C000B3E8 (McTemplateK0pqqh.c)
 *     HUBMISC_WaitForSignal @ 0x1C002EB20 (HUBMISC_WaitForSignal.c)
 *     _guard_dispatch_icall_nop @ 0x1C00412F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBFDO_EvtDeviceD0Exit(__int64 a1, int a2)
{
  NTSTATUS v4; // ebx
  char v5; // r12
  __int64 v6; // rax
  __int64 v7; // rdi
  __int64 v8; // rsi
  int v9; // eax
  struct _MCGEN_TRACE_CONTEXT *v10; // rcx
  int v11; // ebp
  struct _MCGEN_TRACE_CONTEXT *v12; // rcx
  void *v13; // rbx
  __int64 v14; // rcx
  int v15; // edx
  __int64 v17; // [rsp+20h] [rbp-38h]
  __int64 v18; // [rsp+28h] [rbp-30h]

  v4 = 0;
  v5 = 0;
  v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C00640E0);
  v7 = v6;
  *(_DWORD *)(v6 + 2600) = a2;
  _InterlockedAnd((volatile signed __int32 *)(v6 + 40), 0xFFFDFFFF);
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 4) != 0 )
  {
    v8 = v6 + 2276;
    v4 = EtwActivityIdControl(3u, (LPGUID)(v6 + 2276));
    if ( v4 >= 0 )
    {
      if ( g_IoSetActivityIdIrp )
        g_IoSetActivityIdIrp(*(_QWORD *)(v7 + 816), v8);
      v5 = 1;
    }
  }
  if ( *(_QWORD *)(v7 + 2616) )
    SleepstudyHelper_ComponentInactive();
  if ( *(_QWORD *)(v7 + 2624) )
    SleepstudyHelper_ComponentInactive();
  v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 3104))(WdfDriverGlobals, a1);
  v11 = v9;
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 4) != 0 )
  {
    v12 = (struct _MCGEN_TRACE_CONTEXT *)(*(_DWORD *)(v7 + 40) >> 10);
    LOWORD(v12) = (*(_DWORD *)(v7 + 40) & 0x400) != 0;
    McTemplateK0pqqh(
      v12,
      &USBHUB3_ETW_EVENT_HUB_D0_EXIT_START,
      (const GUID *)(v7 + 2276),
      *(_QWORD *)(v7 + 248),
      a2,
      v9,
      (_WORD)v12);
  }
  if ( v11 )
  {
    if ( (unsigned int)(v11 - 2) > 4 )
      goto LABEL_18;
    v13 = (void *)(v7 + 1152);
    KeResetEvent((PRKEVENT)(v7 + 1152));
    v14 = v7 + 1264;
    goto LABEL_16;
  }
  v13 = (void *)(v7 + 1152);
  KeResetEvent((PRKEVENT)(v7 + 1152));
  v14 = v7 + 1264;
  v15 = 2019;
  if ( a2 != 5 )
LABEL_16:
    v15 = 2015;
  HUBSM_AddEvent(v14, v15);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, v7);
  HUBMISC_WaitForSignal(v13);
  v4 = *(_DWORD *)(v7 + 1176);
LABEL_18:
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 4) != 0 )
  {
    LODWORD(v18) = v11;
    LODWORD(v17) = v4;
    McTemplateK0pqq(
      v10,
      &USBHUB3_ETW_EVENT_HUB_D0_EXIT_COMPLETE,
      (const GUID *)(v7 + 2276),
      *(_QWORD *)(v7 + 248),
      v17,
      v18);
  }
  if ( v5 == 1 )
  {
    *(_QWORD *)(v7 + 2276) = 0LL;
    *(_QWORD *)(v7 + 2284) = 0LL;
  }
  return (unsigned int)v4;
}
