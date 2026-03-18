/*
 * XREFs of IoControl_WdfEvtIoDeviceControl @ 0x1C001F820
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001FE0 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_Dddd @ 0x1C0003630 (WPP_RECORDER_SF_Dddd.c)
 *     WPP_RECORDER_SF_PP @ 0x1C000374C (WPP_RECORDER_SF_PP.c)
 *     WPP_RECORDER_SF_Pd @ 0x1C000381C (WPP_RECORDER_SF_Pd.c)
 *     WPP_RECORDER_SF_dL @ 0x1C00038F4 (WPP_RECORDER_SF_dL.c)
 *     _guard_dispatch_icall_nop @ 0x1C0008A20 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_d @ 0x1C000B24C (WPP_RECORDER_SF_d.c)
 *     Controller_ReportFatalError @ 0x1C0010108 (Controller_ReportFatalError.c)
 *     WPP_RECORDER_SF_qD @ 0x1C001FCE8 (WPP_RECORDER_SF_qD.c)
 */

PDEVICE_OBJECT __fastcall IoControl_WdfEvtIoDeviceControl(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdi
  __int64 v14; // rax
  PDEVICE_OBJECT result; // rax
  int v16; // edx
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // r8
  _DWORD *v21; // rdx
  signed __int32 v22; // eax
  __int32 v23; // ecx
  __int64 v24; // rax
  char v25; // al
  int v26; // [rsp+20h] [rbp-68h]
  int v27; // [rsp+20h] [rbp-68h]
  __int64 v28; // [rsp+28h] [rbp-60h]
  __int64 v29; // [rsp+28h] [rbp-60h]
  _DWORD *v30; // [rsp+50h] [rbp-38h] BYREF

  v30 = 0LL;
  v9 = (*(__int64 (__fastcall **)(unsigned __int64, __int64, void *))(WdfFunctions_01023 + 1616))(
         WPP_MAIN_CB.Dpc.ProcessorHistory,
         a1,
         off_1C0056130);
  v13 = v9;
  if ( a5 == 2229304 )
  {
    if ( a4 == a3 )
    {
      if ( (*(int (__fastcall **)(unsigned __int64, __int64, __int64, _DWORD **, _QWORD))(WdfFunctions_01023 + 2152))(
             WPP_MAIN_CB.Dpc.ProcessorHistory,
             a2,
             16LL,
             &v30,
             0LL) >= 0 )
      {
        if ( v30[2] == a4 )
        {
          if ( *v30 != -2147483647 )
          {
            if ( *v30 != -2147483646 )
              goto LABEL_5;
            if ( !*(_BYTE *)(*(_QWORD *)&WPP_MAIN_CB.DeviceQueue.Type + 28LL) )
            {
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                WPP_RECORDER_SF_d(
                  *(_QWORD *)(*(_QWORD *)(v13 + 8) + 72LL),
                  2u,
                  5u,
                  0xFu,
                  (__int64)&WPP_3606c96a59cd3573e5bf0fe73b80610c_Traceguids,
                  -1073741790);
              v20 = 3221225506LL;
              return (PDEVICE_OBJECT)(*(__int64 (__fastcall **)(unsigned __int64, __int64, __int64))(WdfFunctions_01023 + 2104))(
                                       WPP_MAIN_CB.Dpc.ProcessorHistory,
                                       a2,
                                       v20);
            }
          }
          v30[3] = 4;
          v21 = v30;
          if ( v30[3] <= v30[2] )
          {
            if ( *v30 == -2147483647 )
            {
              v22 = _InterlockedCompareExchange((volatile signed __int32 *)(*(_QWORD *)(v13 + 8) + 840LL), 0, 0);
              v21[4] = v22;
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                WPP_RECORDER_SF_d(
                  *(_QWORD *)(*(_QWORD *)(v13 + 8) + 72LL),
                  4u,
                  5u,
                  0x11u,
                  (__int64)&WPP_3606c96a59cd3573e5bf0fe73b80610c_Traceguids,
                  v22);
              (*(void (__fastcall **)(unsigned __int64, __int64, __int64))(WdfFunctions_01023 + 2200))(
                WPP_MAIN_CB.Dpc.ProcessorHistory,
                a2,
                20LL);
            }
            else
            {
              v23 = v30[4];
              v24 = *(_QWORD *)(v13 + 8);
              if ( v23 == -1 )
              {
                _InterlockedExchange((volatile __int32 *)(v24 + 844), 1);
                Controller_ReportFatalError(*(_QWORD *)(v13 + 8), 2, 4159, 0LL, 0LL, 0LL);
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                  WPP_RECORDER_SF_(
                    *(_QWORD *)(*(_QWORD *)(v13 + 8) + 72LL),
                    4u,
                    5u,
                    0x12u,
                    (__int64)&WPP_3606c96a59cd3573e5bf0fe73b80610c_Traceguids);
              }
              else
              {
                _InterlockedExchange((volatile __int32 *)(v24 + 840), v23);
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                  WPP_RECORDER_SF_d(
                    *(_QWORD *)(*(_QWORD *)(v13 + 8) + 72LL),
                    4u,
                    5u,
                    0x13u,
                    (__int64)&WPP_3606c96a59cd3573e5bf0fe73b80610c_Traceguids,
                    v21[4]);
              }
            }
            v20 = 0LL;
            v30[1] = 0;
          }
          else
          {
            v30[1] = 7;
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_SF_Dddd(*(_QWORD *)(*(_QWORD *)(v13 + 8) + 72LL), (__int64)v30, 2147483649LL, v19, v27);
            v20 = 3221225507LL;
          }
          return (PDEVICE_OBJECT)(*(__int64 (__fastcall **)(unsigned __int64, __int64, __int64))(WdfFunctions_01023
                                                                                               + 2104))(
                                   WPP_MAIN_CB.Dpc.ProcessorHistory,
                                   a2,
                                   v20);
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_dL(*(_QWORD *)(*(_QWORD *)(v13 + 8) + 72LL), v17, v18, v19, v27);
      }
      else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        WPP_RECORDER_SF_Pd(*(_QWORD *)(*(_QWORD *)(v13 + 8) + 72LL), v17, v18, v19, v27, v28);
      }
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      HIDWORD(v28) = HIDWORD(a4);
      WPP_RECORDER_SF_PP(*(_QWORD *)(*(_QWORD *)(v9 + 8) + 72LL), v10, v11, v12, v26);
    }
  }
LABEL_5:
  v14 = (*(__int64 (__fastcall **)(unsigned __int64, __int64))(WdfFunctions_01023 + 1256))(
          WPP_MAIN_CB.Dpc.ProcessorHistory,
          a1);
  LODWORD(v28) = a5;
  result = (PDEVICE_OBJECT)((__int64 (__fastcall *)(__int64, __int64, __int64, __int64, __int64, __int64))UcxFunctions)(
                             UcxDriverGlobals,
                             v14,
                             a2,
                             a3,
                             a4,
                             v28);
  if ( !(_BYTE)result )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qD(
        *(_QWORD *)(*(_QWORD *)(v13 + 8) + 72LL),
        v16,
        5,
        21,
        (__int64)&WPP_3606c96a59cd3573e5bf0fe73b80610c_Traceguids,
        a2,
        a5);
    v25 = (*(__int64 (__fastcall **)(unsigned __int64, __int64))(WdfFunctions_01023 + 2240))(
            WPP_MAIN_CB.Dpc.ProcessorHistory,
            a2);
    if ( v25 == 1 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v29) = a5;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(*(_QWORD *)(v13 + 8) + 72LL),
          2u,
          5u,
          0x17u,
          (__int64)&WPP_3606c96a59cd3573e5bf0fe73b80610c_Traceguids,
          v29);
      }
      v20 = 3221225488LL;
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v29) = v25;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(*(_QWORD *)(v13 + 8) + 72LL),
          3u,
          5u,
          0x16u,
          (__int64)&WPP_3606c96a59cd3573e5bf0fe73b80610c_Traceguids,
          v29);
      }
      v20 = 3221225485LL;
    }
    return (PDEVICE_OBJECT)(*(__int64 (__fastcall **)(unsigned __int64, __int64, __int64))(WdfFunctions_01023 + 2104))(
                             WPP_MAIN_CB.Dpc.ProcessorHistory,
                             a2,
                             v20);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    result = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LODWORD(v29) = a5;
      return (PDEVICE_OBJECT)WPP_RECORDER_SF_d(
                               *(_QWORD *)(*(_QWORD *)(v13 + 8) + 72LL),
                               5u,
                               5u,
                               0x14u,
                               (__int64)&WPP_3606c96a59cd3573e5bf0fe73b80610c_Traceguids,
                               v29);
    }
  }
  return result;
}
