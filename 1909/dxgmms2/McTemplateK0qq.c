/*
 * XREFs of McTemplateK0qq @ 0x1C002D990
 * Callers:
 *     VidSchDdiNotifyInterruptWorker @ 0x1C000B220 (VidSchDdiNotifyInterruptWorker.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0018050 (__security_check_cookie.c)
 *     McGenEventWrite @ 0x1C0025A44 (McGenEventWrite.c)
 */

ULONG __stdcall McTemplateK0qq(
        PMCGEN_TRACE_CONTEXT Context,
        PCEVENT_DESCRIPTOR Descriptor,
        const GUID *Activity,
        const unsigned int Arg0,
        const unsigned int Arg1)
{
  EVENT_DATA_DESCRIPTOR v6; // [rsp+30h] [rbp-48h] BYREF
  unsigned int *v7; // [rsp+40h] [rbp-38h]
  int v8; // [rsp+48h] [rbp-30h]
  int v9; // [rsp+4Ch] [rbp-2Ch]
  const unsigned int *p_Arg1; // [rsp+50h] [rbp-28h]
  int v11; // [rsp+58h] [rbp-20h]
  int v12; // [rsp+5Ch] [rbp-1Ch]
  unsigned int v13; // [rsp+98h] [rbp+20h] BYREF

  v13 = Arg0;
  v7 = &v13;
  v9 = 0;
  v8 = 4;
  p_Arg1 = &Arg1;
  v12 = 0;
  v11 = 4;
  return McGenEventWrite(
           (PMCGEN_TRACE_CONTEXT)&DxgkControlGuid_Context,
           &EventPeriodicFrameNotificationInterrupt,
           Activity,
           3u,
           &v6);
}
