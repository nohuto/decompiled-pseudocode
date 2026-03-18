/*
 * XREFs of Controller_UpdateSqmDatapoints @ 0x1C005BBFC
 * Callers:
 *     Controller_WdfEvtDeviceSelfManagedIoCleanup @ 0x1C005C760 (Controller_WdfEvtDeviceSelfManagedIoCleanup.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0006C60 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_d @ 0x1C00091C4 (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall Controller_UpdateSqmDatapoints(__int64 a1)
{
  __int64 result; // rax
  unsigned __int16 v3; // r9
  int v4; // eax
  int v5; // r9d
  int v6; // eax
  int v7; // eax
  int v8; // r9d
  __int64 v9; // [rsp+28h] [rbp-28h]
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-10h] BYREF
  int v11; // [rsp+60h] [rbp+10h] BYREF
  __int64 v12; // [rsp+68h] [rbp+18h] BYREF

  LODWORD(result) = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64, __int64, _QWORD, __int64 *))(WdfFunctions_01023 + 384))(
                      WPP_MAIN_CB.Dpc.ProcessorHistory,
                      *(_QWORD *)a1,
                      1LL,
                      131103LL,
                      0LL,
                      &v12);
  if ( (int)result < 0 )
  {
    v3 = 54;
LABEL_11:
    LODWORD(v9) = result;
    result = WPP_RECORDER_SF_d(*(_QWORD *)(a1 + 72), 3u, 4u, v3, (__int64)&Context.Logger + 4, v9);
    goto LABEL_12;
  }
  RtlInitUnicodeString(&DestinationString, L"HCRestoreStateFailureCount");
  v4 = (*(__int64 (__fastcall **)(unsigned __int64, __int64, struct _UNICODE_STRING *, int *))(WdfFunctions_01023 + 1920))(
         WPP_MAIN_CB.Dpc.ProcessorHistory,
         v12,
         &DestinationString,
         &v11);
  v5 = *(_DWORD *)(a1 + 412);
  if ( v4 >= 0 )
    v5 += v11;
  v11 = v5;
  v6 = (*(__int64 (__fastcall **)(unsigned __int64, __int64, struct _UNICODE_STRING *))(WdfFunctions_01023 + 1968))(
         WPP_MAIN_CB.Dpc.ProcessorHistory,
         v12,
         &DestinationString);
  if ( v6 < 0 )
  {
    LODWORD(v9) = v6;
    WPP_RECORDER_SF_d(*(_QWORD *)(a1 + 72), 3u, 4u, 0x37u, (__int64)&Context.Logger + 4, v9);
  }
  RtlInitUnicodeString(&DestinationString, L"HCRecoveryCount");
  v7 = (*(__int64 (__fastcall **)(unsigned __int64, __int64, struct _UNICODE_STRING *, int *))(WdfFunctions_01023 + 1920))(
         WPP_MAIN_CB.Dpc.ProcessorHistory,
         v12,
         &DestinationString,
         &v11);
  v8 = *(_DWORD *)(a1 + 408);
  if ( v7 >= 0 )
    v8 += v11;
  v11 = v8;
  result = (*(__int64 (__fastcall **)(unsigned __int64, __int64, struct _UNICODE_STRING *))(WdfFunctions_01023 + 1968))(
             WPP_MAIN_CB.Dpc.ProcessorHistory,
             v12,
             &DestinationString);
  if ( (int)result < 0 )
  {
    v3 = 56;
    goto LABEL_11;
  }
LABEL_12:
  if ( v12 )
    return (*(__int64 (__fastcall **)(unsigned __int64))(WdfFunctions_01023 + 1848))(WPP_MAIN_CB.Dpc.ProcessorHistory);
  return result;
}
