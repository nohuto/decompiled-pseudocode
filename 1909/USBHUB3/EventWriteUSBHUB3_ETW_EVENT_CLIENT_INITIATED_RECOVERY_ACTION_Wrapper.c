/*
 * XREFs of EventWriteUSBHUB3_ETW_EVENT_CLIENT_INITIATED_RECOVERY_ACTION_Wrapper @ 0x1C0019D1C
 * Callers:
 *     HUBPDO_EvtIoInternalDeviceControl @ 0x1C0013D40 (HUBPDO_EvtIoInternalDeviceControl.c)
 *     HUBPDO_EvtDeviceWdmIrpPreprocess @ 0x1C0016580 (HUBPDO_EvtDeviceWdmIrpPreprocess.c)
 *     HUBPDO_ReEnumerationCallback @ 0x1C001A2C0 (HUBPDO_ReEnumerationCallback.c)
 * Callees:
 *     McTemplateK0pqq @ 0x1C000B370 (McTemplateK0pqq.c)
 *     McTemplateK0pqqhhhq @ 0x1C0012684 (McTemplateK0pqqhhhq.c)
 */

void __fastcall EventWriteUSBHUB3_ETW_EVENT_CLIENT_INITIATED_RECOVERY_ACTION_Wrapper(__int64 a1, __int64 a2, int a3)
{
  int v4; // r15d
  const GUID *v6; // rbx
  __int64 v7; // rdi
  struct _MCGEN_TRACE_CONTEXT *v8; // rcx
  int v9; // eax
  __int64 v10; // [rsp+20h] [rbp-48h]
  __int64 v11; // [rsp+28h] [rbp-40h]

  if ( !a1 )
    return;
  v4 = a2;
  if ( !*(_QWORD *)a1 )
    return;
  v6 = (const GUID *)(a1 + 1516);
  if ( (BYTE2(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 0x40) != 0 )
    McTemplateK0pqq(
      (struct _MCGEN_TRACE_CONTEXT *)a1,
      &USBHUB3_ETW_EVENT_CLIENT_INITIATED_RECOVERY_ACTION,
      (const GUID *)(a1 + 1516),
      *(_QWORD *)(*(_QWORD *)a1 + 248LL),
      a2,
      a3);
  if ( v4 == 2228227 )
  {
    switch ( a3 )
    {
      case 30:
        v7 = 2668LL;
        break;
      case 48:
        v7 = 2672LL;
        break;
      case 49:
        v7 = 2676LL;
        break;
      default:
        return;
    }
    goto LABEL_17;
  }
  if ( v4 != 2228231 )
  {
    if ( v4 == 2228255 )
    {
      v7 = 2684LL;
      goto LABEL_17;
    }
    if ( v4 != 2232243 )
      return;
  }
  v7 = 2680LL;
LABEL_17:
  v8 = (struct _MCGEN_TRACE_CONTEXT *)(unsigned int)_InterlockedIncrement((volatile signed __int32 *)(v7 + a1));
  if ( (_DWORD)v8 == 1 || (_DWORD)v8 == 1001 )
  {
    if ( (BYTE2(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 0x40) != 0 )
    {
      v9 = 1000;
      if ( (_DWORD)v8 == 1 )
        v9 = 1;
      LODWORD(v11) = a3;
      LODWORD(v10) = v4;
      McTemplateK0pqqhhhq(
        v8,
        a2,
        v6,
        *(_QWORD *)(*(_QWORD *)a1 + 248LL),
        v10,
        v11,
        *(_WORD *)(a1 + 1996),
        *(_WORD *)(a1 + 1998),
        *(_WORD *)(a1 + 2000),
        v9);
    }
    _InterlockedExchange((volatile __int32 *)(v7 + a1), 1);
  }
}
