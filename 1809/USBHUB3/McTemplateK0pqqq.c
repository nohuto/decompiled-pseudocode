/*
 * XREFs of McTemplateK0pqqq @ 0x1C0001CDC
 * Callers:
 *     HUBHTX_HubControlTransferComplete @ 0x1C0002BE0 (HUBHTX_HubControlTransferComplete.c)
 *     HUBHTX_SendInterruptTransferComplete @ 0x1C00034C0 (HUBHTX_SendInterruptTransferComplete.c)
 *     HUBHTX_PortControlTransferComplete @ 0x1C0003660 (HUBHTX_PortControlTransferComplete.c)
 *     HUBHTX_ClearTtBufferControlTransferComplete @ 0x1C0005DE0 (HUBHTX_ClearTtBufferControlTransferComplete.c)
 *     HUBPARENT_ResetInterruptPipeComplete @ 0x1C0006AE0 (HUBPARENT_ResetInterruptPipeComplete.c)
 *     HUBDTX_ControlTransferComplete @ 0x1C0023AB0 (HUBDTX_ControlTransferComplete.c)
 * Callees:
 *     McGenEventWrite @ 0x1C00011B4 (McGenEventWrite.c)
 *     __security_check_cookie @ 0x1C003C520 (__security_check_cookie.c)
 */

ULONG __stdcall McTemplateK0pqqq(
        PMCGEN_TRACE_CONTEXT Context,
        PCEVENT_DESCRIPTOR Descriptor,
        const GUID *Activity,
        const void *Arg0,
        const unsigned int Arg1,
        const unsigned int Arg2,
        const unsigned int Arg3)
{
  EVENT_DATA_DESCRIPTOR EventData; // [rsp+30h] [rbp-21h] BYREF
  const void **v9; // [rsp+40h] [rbp-11h]
  __int64 v10; // [rsp+48h] [rbp-9h]
  const unsigned int *p_Arg1; // [rsp+50h] [rbp-1h]
  __int64 v12; // [rsp+58h] [rbp+7h]
  const unsigned int *p_Arg2; // [rsp+60h] [rbp+Fh]
  __int64 v14; // [rsp+68h] [rbp+17h]
  const unsigned int *p_Arg3; // [rsp+70h] [rbp+1Fh]
  __int64 v16; // [rsp+78h] [rbp+27h]
  const void *v17; // [rsp+B8h] [rbp+67h] BYREF

  v17 = Arg0;
  v10 = 8LL;
  v9 = &v17;
  v12 = 4LL;
  p_Arg1 = &Arg1;
  p_Arg2 = &Arg2;
  p_Arg3 = &Arg3;
  v14 = 4LL;
  v16 = 4LL;
  return McGenEventWrite(Context, Descriptor, Activity, 5u, &EventData);
}
