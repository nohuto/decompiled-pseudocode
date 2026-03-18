/*
 * XREFs of Controller_UpdateSqmDatapoints @ 0x1C0063260
 * Callers:
 *     Controller_WdfEvtDeviceSelfManagedIoCleanup @ 0x1C0064020 (Controller_WdfEvtDeviceSelfManagedIoCleanup.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0008A20 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_d @ 0x1C000B24C (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall Controller_UpdateSqmDatapoints(__int64 *a1)
{
  __int64 v1; // rdx
  __int64 result; // rax
  unsigned __int16 v4; // r9
  int v5; // eax
  int v6; // r9d
  int v7; // eax
  int v8; // eax
  int v9; // r9d
  __int64 v10; // [rsp+28h] [rbp-28h]
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-10h] BYREF
  int v12; // [rsp+70h] [rbp+20h] BYREF
  __int64 v13; // [rsp+78h] [rbp+28h] BYREF

  v1 = *a1;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  result = (*(__int64 (__fastcall **)(unsigned __int64, __int64, __int64, __int64, _QWORD, __int64 *))(WdfFunctions_01023 + 384))(
             WPP_MAIN_CB.Dpc.ProcessorHistory,
             v1,
             1LL,
             131103LL,
             0LL,
             &v13);
  if ( (int)result < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_15;
    v4 = 56;
    goto LABEL_14;
  }
  RtlInitUnicodeString(&DestinationString, L"HCRestoreStateFailureCount");
  v5 = (*(__int64 (__fastcall **)(unsigned __int64, __int64, struct _UNICODE_STRING *, int *))(WdfFunctions_01023 + 1920))(
         WPP_MAIN_CB.Dpc.ProcessorHistory,
         v13,
         &DestinationString,
         &v12);
  v6 = *((_DWORD *)a1 + 120);
  if ( v5 >= 0 )
    v6 += v12;
  v12 = v6;
  v7 = (*(__int64 (__fastcall **)(unsigned __int64, __int64, struct _UNICODE_STRING *))(WdfFunctions_01023 + 1968))(
         WPP_MAIN_CB.Dpc.ProcessorHistory,
         v13,
         &DestinationString);
  if ( v7 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v10) = v7;
    WPP_RECORDER_SF_d(a1[9], 3u, 4u, 0x39u, (__int64)&Context.Logger + 4, v10);
  }
  RtlInitUnicodeString(&DestinationString, L"HCRecoveryCount");
  v8 = (*(__int64 (__fastcall **)(unsigned __int64, __int64, struct _UNICODE_STRING *, int *))(WdfFunctions_01023 + 1920))(
         WPP_MAIN_CB.Dpc.ProcessorHistory,
         v13,
         &DestinationString,
         &v12);
  v9 = *((_DWORD *)a1 + 119);
  if ( v8 >= 0 )
    v9 += v12;
  v12 = v9;
  result = (*(__int64 (__fastcall **)(unsigned __int64, __int64, struct _UNICODE_STRING *))(WdfFunctions_01023 + 1968))(
             WPP_MAIN_CB.Dpc.ProcessorHistory,
             v13,
             &DestinationString);
  if ( (int)result < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v4 = 58;
LABEL_14:
    LODWORD(v10) = result;
    result = WPP_RECORDER_SF_d(a1[9], 3u, 4u, v4, (__int64)&Context.Logger + 4, v10);
  }
LABEL_15:
  if ( v13 )
    return (*(__int64 (__fastcall **)(unsigned __int64))(WdfFunctions_01023 + 1848))(WPP_MAIN_CB.Dpc.ProcessorHistory);
  return result;
}
