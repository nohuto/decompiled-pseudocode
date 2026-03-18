/*
 * XREFs of Controller_TimeSyncStartTrackingWorker @ 0x1C000E930
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0006C60 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_d @ 0x1C00091C4 (WPP_RECORDER_SF_d.c)
 *     Controller_DetectFrameMicroframeBoundary @ 0x1C000BC40 (Controller_DetectFrameMicroframeBoundary.c)
 *     DynamicLock_Acquire @ 0x1C0041760 (DynamicLock_Acquire.c)
 *     DynamicLock_Release @ 0x1C004195C (DynamicLock_Release.c)
 */

__int64 __fastcall Controller_TimeSyncStartTrackingWorker(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rdi
  int v3; // ebp
  _QWORD *v4; // rsi
  _QWORD *v5; // rbx
  __int64 v6; // rax
  __int64 v7; // r8
  int v8; // eax
  __int64 v9; // r14
  __int64 v10; // rcx
  __int64 v12; // [rsp+28h] [rbp-10h]

  v1 = (*(__int64 (__fastcall **)(unsigned __int64, __int64))(WdfFunctions_01023 + 3048))(
         WPP_MAIN_CB.Dpc.ProcessorHistory,
         a1);
  v2 = (*(__int64 (__fastcall **)(unsigned __int64, __int64, void *))(WdfFunctions_01023 + 1616))(
         WPP_MAIN_CB.Dpc.ProcessorHistory,
         v1,
         off_1C004F400);
  v3 = Controller_DetectFrameMicroframeBoundary(v2);
  DynamicLock_Acquire(*(_QWORD *)(v2 + 592));
  v4 = (_QWORD *)(v2 + 616);
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
      goto LABEL_8;
    v7 = v5[2];
    *((_BYTE *)v5 + 40) = 1;
    v8 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64))(WdfFunctions_01023 + 120))(
           WPP_MAIN_CB.Dpc.ProcessorHistory,
           *(_QWORD *)(v2 + 608),
           v7);
    v3 = v8;
    if ( v8 < 0 )
    {
      LODWORD(v12) = v8;
      WPP_RECORDER_SF_d(*(_QWORD *)(v2 + 72), 2u, 4u, 0x110u, (__int64)&Context.Logger + 4, v12);
LABEL_8:
      v9 = 0LL;
      goto LABEL_9;
    }
    v9 = 9LL;
LABEL_9:
    DynamicLock_Release(*(_QWORD *)(v2 + 592));
    (*(void (__fastcall **)(unsigned __int64, _QWORD, _QWORD, __int64))(WdfFunctions_01023 + 2120))(
      WPP_MAIN_CB.Dpc.ProcessorHistory,
      v5[3],
      (unsigned int)v3,
      v9);
    DynamicLock_Acquire(*(_QWORD *)(v2 + 592));
  }
  v10 = *(_QWORD *)(v2 + 592);
  *(_BYTE *)(v2 + 640) = 0;
  return DynamicLock_Release(v10);
}
