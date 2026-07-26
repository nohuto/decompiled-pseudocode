/*
 * XREFs of ?ndisMUnloadEx@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x1C009CE60
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qqq @ 0x1C0008AE0 (WPP_RECORDER_SF_qqq.c)
 *     ndisMInvokeDriverUnload @ 0x1C011781C (ndisMInvokeDriverUnload.c)
 */

void __fastcall ndisMUnloadEx(struct _DRIVER_OBJECT *a1)
{
  char *DriverObjectExtension; // rbp
  int v3; // edx
  char *v4; // rsi

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      1,
      106,
      (struct _GUID *)&WPP_3bdda7144e74370204adec44604355d7_Traceguids,
      (char)a1);
  DriverObjectExtension = (char *)IoGetDriverObjectExtension(a1, (PVOID)0x4E4D4944);
  v4 = (char *)IoGetDriverObjectExtension(a1, (PVOID)0x4E494944);
  if ( DriverObjectExtension )
    ndisMInvokeDriverUnload((char)DriverObjectExtension);
  if ( v4 )
    ndisMInvokeDriverUnload((char)v4);
  if ( DriverObjectExtension )
  {
    KeWaitForSingleObject(DriverObjectExtension + 368, Executive, 0, 0, 0LL);
    KeClearEvent((PRKEVENT)(DriverObjectExtension + 368));
  }
  if ( v4 )
  {
    KeWaitForSingleObject(v4 + 368, Executive, 0, 0, 0LL);
    KeClearEvent((PRKEVENT)(v4 + 368));
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v3) = 4;
    WPP_RECORDER_SF_qqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v3,
      1,
      107,
      (struct _GUID *)&WPP_3bdda7144e74370204adec44604355d7_Traceguids,
      (char)a1,
      (char)DriverObjectExtension,
      (char)v4);
  }
}
