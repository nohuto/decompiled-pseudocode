/*
 * XREFs of Controller_UcxEvtStopTrackingForTimeSync @ 0x1C0012630
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001FE0 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_i @ 0x1C0002D84 (WPP_RECORDER_SF_i.c)
 *     _guard_dispatch_icall_nop @ 0x1C0008A20 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_qd @ 0x1C000B5C4 (WPP_RECORDER_SF_qd.c)
 *     Controller_StopTimeTrackingForHandle @ 0x1C0010818 (Controller_StopTimeTrackingForHandle.c)
 *     WPP_RECORDER_SF_II @ 0x1C0014794 (WPP_RECORDER_SF_II.c)
 *     WPP_RECORDER_SF_dqd @ 0x1C0014D48 (WPP_RECORDER_SF_dqd.c)
 *     WPP_RECORDER_SF_qq @ 0x1C0015494 (WPP_RECORDER_SF_qq.c)
 */

__int64 __fastcall Controller_UcxEvtStopTrackingForTimeSync(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  __int64 v7; // rdi
  char v8; // r14
  __int64 v9; // rax
  int v10; // edx
  int v11; // r8d
  __int64 v12; // rsi
  int v13; // ebx
  int v15; // eax
  __int64 *v16; // [rsp+88h] [rbp+20h] BYREF

  LOBYTE(v7) = 0;
  v8 = (*(__int64 (__fastcall **)(unsigned __int64))(WdfFunctions_01023 + 2240))(WPP_MAIN_CB.Dpc.ProcessorHistory);
  v9 = (*(__int64 (__fastcall **)(unsigned __int64, __int64, void *))(WdfFunctions_01023 + 1616))(
         WPP_MAIN_CB.Dpc.ProcessorHistory,
         a1,
         off_1C0056428);
  v12 = v9;
  if ( a4 < 8 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_II(*(_QWORD *)(v9 + 72), v10, v11, 284);
    v13 = -1073741811;
    goto LABEL_5;
  }
  v13 = (*(__int64 (__fastcall **)(unsigned __int64, __int64, unsigned __int64, __int64 **, _QWORD))(WdfFunctions_01023 + 2152))(
          WPP_MAIN_CB.Dpc.ProcessorHistory,
          a2,
          a4,
          &v16,
          0LL);
  if ( v13 >= 0 )
  {
    if ( !*v16 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_(*(_QWORD *)(v12 + 72), 2u, 4u, 0x11Du, (__int64)&Context.Logger + 4);
LABEL_13:
      v13 = -1073741811;
      goto LABEL_5;
    }
    if ( v8 == 1 )
    {
      v7 = (*(__int64 (__fastcall **)(unsigned __int64, __int64))(WdfFunctions_01023 + 2216))(
             WPP_MAIN_CB.Dpc.ProcessorHistory,
             a2);
      if ( v7 != *v16 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v10) = 2;
          WPP_RECORDER_SF_qq(*(_QWORD *)(v12 + 72), v10, 4, 286, (__int64)&Context.Logger + 4, *v16, v7);
        }
        goto LABEL_13;
      }
    }
    else
    {
      v7 = *v16;
    }
    if ( *(_BYTE *)((*(__int64 (__fastcall **)(unsigned __int64, __int64, void *))(WdfFunctions_01023 + 1616))(
                      WPP_MAIN_CB.Dpc.ProcessorHistory,
                      v7,
                      off_1C00563B0)
                  + 40) )
    {
      if ( *(_DWORD *)(v12 + 392) == 1 )
      {
        v15 = Controller_StopTimeTrackingForHandle(v12, v7, 1u);
        v13 = v15;
        if ( v15 < 0 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_qd(*(_QWORD *)(v12 + 72), 2u, 4u, 0x120u, (__int64)&Context.Logger + 4, v7, v15);
          if ( !v8 )
            (*(void (__fastcall **)(unsigned __int64, __int64))(WdfFunctions_01023 + 1664))(
              WPP_MAIN_CB.Dpc.ProcessorHistory,
              v7);
        }
      }
      else
      {
        v13 = -1073741436;
      }
    }
    else
    {
      v13 = -1073741811;
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return (*(__int64 (__fastcall **)(unsigned __int64, __int64, _QWORD))(WdfFunctions_01023 + 2104))(
                 WPP_MAIN_CB.Dpc.ProcessorHistory,
                 a2,
                 (unsigned int)v13);
      WPP_RECORDER_SF_i(*(_QWORD *)(v12 + 72), 2u, 4u, 0x11Fu, (__int64)&Context.Logger + 4, v7);
    }
  }
LABEL_5:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v10) = 5;
    WPP_RECORDER_SF_dqd(*(_QWORD *)(v12 + 72), v10, 4, 289, (__int64)&Context.Logger + 4, v13, v7, v8);
  }
  return (*(__int64 (__fastcall **)(unsigned __int64, __int64, _QWORD))(WdfFunctions_01023 + 2104))(
           WPP_MAIN_CB.Dpc.ProcessorHistory,
           a2,
           (unsigned int)v13);
}
