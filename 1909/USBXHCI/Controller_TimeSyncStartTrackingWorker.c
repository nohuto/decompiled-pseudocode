/*
 * XREFs of Controller_TimeSyncStartTrackingWorker @ 0x1C0011140
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0008A20 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_d @ 0x1C000B24C (WPP_RECORDER_SF_d.c)
 *     Controller_DetectFrameMicroframeBoundary @ 0x1C000DF94 (Controller_DetectFrameMicroframeBoundary.c)
 *     DynamicLock_Acquire @ 0x1C0046FAC (DynamicLock_Acquire.c)
 *     DynamicLock_Release @ 0x1C00471B4 (DynamicLock_Release.c)
 */

__int64 __fastcall Controller_TimeSyncStartTrackingWorker(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rdi
  int v3; // r14d
  _QWORD *v4; // rsi
  _QWORD *v5; // rbx
  __int64 v6; // rax
  __int64 v7; // r8
  __int64 v8; // rbp
  __int64 v9; // rcx
  __int64 v11; // [rsp+28h] [rbp-10h]

  v1 = (*(__int64 (__fastcall **)(unsigned __int64, __int64))(WdfFunctions_01023 + 3048))(
         WPP_MAIN_CB.Dpc.ProcessorHistory,
         a1);
  v2 = (*(__int64 (__fastcall **)(unsigned __int64, __int64, void *))(WdfFunctions_01023 + 1616))(
         WPP_MAIN_CB.Dpc.ProcessorHistory,
         v1,
         off_1C0056428);
  v3 = Controller_DetectFrameMicroframeBoundary(v2);
  DynamicLock_Acquire(*(_QWORD *)(v2 + 656));
  v4 = (_QWORD *)(v2 + 680);
  while ( 1 )
  {
    v5 = (_QWORD *)*v4;
    if ( (_QWORD *)*v4 == v4 )
      break;
    if ( (_QWORD *)v5[1] != v4 || (v6 = *v5, *(_QWORD **)(*v5 + 8LL) != v5) )
      __fastfail(3u);
    *v4 = v6;
    *(_QWORD *)(v6 + 8) = v4;
    if ( v3 < 0 )
      goto LABEL_9;
    v7 = v5[2];
    *((_BYTE *)v5 + 40) = 1;
    v3 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64))(WdfFunctions_01023 + 120))(
           WPP_MAIN_CB.Dpc.ProcessorHistory,
           *(_QWORD *)(v2 + 672),
           v7);
    if ( v3 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v11) = v3;
        WPP_RECORDER_SF_d(*(_QWORD *)(v2 + 72), 2u, 4u, 0x113u, (__int64)&Context.Logger + 4, v11);
      }
LABEL_9:
      v8 = 0LL;
      goto LABEL_10;
    }
    v8 = 9LL;
LABEL_10:
    DynamicLock_Release(*(_QWORD *)(v2 + 656));
    (*(void (__fastcall **)(unsigned __int64, _QWORD, _QWORD, __int64))(WdfFunctions_01023 + 2120))(
      WPP_MAIN_CB.Dpc.ProcessorHistory,
      v5[3],
      (unsigned int)v3,
      v8);
    DynamicLock_Acquire(*(_QWORD *)(v2 + 656));
  }
  v9 = *(_QWORD *)(v2 + 656);
  *(_BYTE *)(v2 + 704) = 0;
  return DynamicLock_Release(v9);
}
