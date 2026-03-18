/*
 * XREFs of Controller_UcxEvtStartTrackingForTimeSync @ 0x1C0011FE0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001FE0 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_i @ 0x1C0002D84 (WPP_RECORDER_SF_i.c)
 *     _guard_dispatch_icall_nop @ 0x1C0008A20 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0008D80 (memset.c)
 *     WPP_RECORDER_SF_d @ 0x1C000B24C (WPP_RECORDER_SF_d.c)
 *     McTemplateK0ptqqp @ 0x1C00143E0 (McTemplateK0ptqqp.c)
 *     WPP_RECORDER_SF_II @ 0x1C0014794 (WPP_RECORDER_SF_II.c)
 *     WPP_RECORDER_SF_dqd @ 0x1C0014D48 (WPP_RECORDER_SF_dqd.c)
 *     XilRegister_ReadUlong @ 0x1C0020D1C (XilRegister_ReadUlong.c)
 *     XilRegister_WriteUlong @ 0x1C0020E08 (XilRegister_WriteUlong.c)
 *     DynamicLock_Acquire @ 0x1C0046FAC (DynamicLock_Acquire.c)
 *     DynamicLock_Release @ 0x1C00471B4 (DynamicLock_Release.c)
 */

PDEVICE_OBJECT __fastcall Controller_UcxEvtStartTrackingForTimeSync(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  unsigned __int8 v8; // r13
  char v9; // r12
  int v10; // edx
  __int64 v11; // rsi
  int v12; // r8d
  _BYTE *v13; // rdi
  int v14; // ebx
  __int64 v15; // r14
  unsigned __int64 v16; // rdi
  int v17; // edx
  PDEVICE_OBJECT result; // rax
  unsigned __int64 v19; // r8
  int v20; // edx
  __int64 v21; // r14
  __int64 v22; // rcx
  __int64 v23; // rbx
  int Ulong; // eax
  __int64 v25; // rax
  _QWORD *v26; // rdx
  __int64 *v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // [rsp+48h] [rbp-61h] BYREF
  __int64 *v30; // [rsp+50h] [rbp-59h] BYREF
  __int64 v31; // [rsp+58h] [rbp-51h] BYREF
  _QWORD v32[7]; // [rsp+60h] [rbp-49h] BYREF
  _QWORD v33[2]; // [rsp+98h] [rbp-11h] BYREF
  __int128 v34; // [rsp+A8h] [rbp-1h]
  __int128 v35; // [rsp+B8h] [rbp+Fh]
  char v37; // [rsp+128h] [rbp+7Fh] BYREF

  memset(v32, 0, sizeof(v32));
  v29 = 0LL;
  v8 = 1;
  v9 = (*(__int64 (__fastcall **)(unsigned __int64, __int64))(WdfFunctions_01023 + 2240))(
         WPP_MAIN_CB.Dpc.ProcessorHistory,
         a2);
  v11 = (*(__int64 (__fastcall **)(unsigned __int64, __int64, void *))(WdfFunctions_01023 + 1616))(
          WPP_MAIN_CB.Dpc.ProcessorHistory,
          a1,
          off_1C0056428);
  v13 = (_BYTE *)(v11 + 648);
  if ( a4 < 9 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_II(*(_QWORD *)(v11 + 72), v10, v12, 277);
    v14 = -1073741811;
    goto LABEL_5;
  }
  v19 = a4;
  v15 = a2;
  v14 = (*(__int64 (__fastcall **)(unsigned __int64, __int64, unsigned __int64, __int64 *, _QWORD))(WdfFunctions_01023
                                                                                                  + 2152))(
          WPP_MAIN_CB.Dpc.ProcessorHistory,
          a2,
          v19,
          &v31,
          0LL);
  if ( v14 < 0 )
    goto LABEL_6;
  if ( *(_QWORD *)v31 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(*(_QWORD *)(v11 + 72), 2u, 4u, 0x116u, (__int64)&Context.Logger + 4);
LABEL_23:
    v14 = -1073741811;
    goto LABEL_6;
  }
  v8 = *(_BYTE *)(v31 + 8);
  if ( a3 < 9 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_II(*(_QWORD *)(v11 + 72), v20, v12, 279);
    goto LABEL_23;
  }
  v14 = (*(__int64 (__fastcall **)(unsigned __int64, __int64, unsigned __int64, __int64 **, _QWORD))(WdfFunctions_01023 + 2160))(
          WPP_MAIN_CB.Dpc.ProcessorHistory,
          a2,
          a3,
          &v30,
          0LL);
  if ( v14 < 0 )
    goto LABEL_6;
  if ( v9 == 1 )
  {
    v29 = (*(__int64 (__fastcall **)(unsigned __int64, __int64))(WdfFunctions_01023 + 2216))(
            WPP_MAIN_CB.Dpc.ProcessorHistory,
            a2);
    v21 = (*(__int64 (__fastcall **)(unsigned __int64, __int64, void *))(WdfFunctions_01023 + 1616))(
            WPP_MAIN_CB.Dpc.ProcessorHistory,
            v29,
            off_1C00563B0);
    if ( *(_BYTE *)(v21 + 40) )
    {
      v14 = -1073741811;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_i(*(_QWORD *)(v11 + 72), 2u, 4u, 0x118u, (__int64)&Context.Logger + 4, v29);
      goto LABEL_5;
    }
  }
  else
  {
    v32[3] = 0x100000001LL;
    v32[6] = off_1C00563B0;
    LODWORD(v32[0]) = 56;
    v32[4] = *(_QWORD *)(v11 + 672);
    v14 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD *, __int64 *))(WdfFunctions_01023 + 1656))(
            WPP_MAIN_CB.Dpc.ProcessorHistory,
            v32,
            &v29);
    if ( v14 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_d(*(_QWORD *)(v11 + 72), 2u, 4u, 0x119u, (__int64)&Context.Logger + 4, v14);
      goto LABEL_6;
    }
    v21 = (*(__int64 (__fastcall **)(unsigned __int64, __int64, void *))(WdfFunctions_01023 + 1616))(
            WPP_MAIN_CB.Dpc.ProcessorHistory,
            v29,
            off_1C00563B0);
    *(_BYTE *)(v21 + 52) = 0;
    *(_QWORD *)(v21 + 16) = v29;
  }
  if ( *(_DWORD *)(v11 + 392) != 1 )
  {
    v14 = -1073741436;
LABEL_5:
    v15 = a2;
LABEL_6:
    v16 = 0LL;
    goto LABEL_7;
  }
  DynamicLock_Acquire(*(_QWORD *)(v11 + 656));
  if ( !(*(unsigned int (__fastcall **)(unsigned __int64, _QWORD))(WdfFunctions_01023 + 112))(
          WPP_MAIN_CB.Dpc.ProcessorHistory,
          *(_QWORD *)(v11 + 672)) )
  {
    (*(void (__fastcall **)(unsigned __int64, _QWORD, __int64 (__fastcall *)(__int64, __int64), _BYTE *))(WdfFunctions_01023 + 1144))(
      WPP_MAIN_CB.Dpc.ProcessorHistory,
      **(_QWORD **)(*(_QWORD *)(v11 + 128) + 40LL),
      Interrupter_ClearBusEdgeInformationRoutineWithIsrSync,
      v13);
    v22 = *(_QWORD *)(v11 + 88);
    v23 = *(_QWORD *)(v22 + 32);
    Ulong = XilRegister_ReadUlong(v22, v23);
    XilRegister_WriteUlong(*(_QWORD *)(v11 + 88), v23, Ulong | 0x400u);
    *v13 = 1;
  }
  DynamicLock_Release(*(_QWORD *)(v11 + 656));
  v33[1] = &v37;
  v25 = *(_QWORD *)(v11 + 128);
  v33[0] = v11 + 648;
  v34 = 0LL;
  v26 = *(_QWORD **)(v25 + 40);
  v35 = 0LL;
  (*(void (__fastcall **)(unsigned __int64, _QWORD, __int64 (__fastcall *)(), _QWORD *))(WdfFunctions_01023 + 1144))(
    WPP_MAIN_CB.Dpc.ProcessorHistory,
    *v26,
    Interrupter_QueryBusEdgeInformationRoutineWithIsrSync,
    v33);
  DynamicLock_Acquire(*(_QWORD *)(v11 + 656));
  if ( !v37 )
  {
    if ( !v8 )
    {
      *(_QWORD *)(v21 + 24) = a2;
      v27 = *(__int64 **)(v11 + 688);
      if ( *v27 != v11 + 680 )
        __fastfail(3u);
      *(_QWORD *)v21 = v11 + 680;
      *(_QWORD *)(v21 + 8) = v27;
      *v27 = v21;
      *(_QWORD *)(v11 + 688) = v21;
    }
    if ( !*(_BYTE *)(v11 + 704) )
    {
      v28 = *(_QWORD *)(v11 + 696);
      *(_BYTE *)(v11 + 704) = 1;
      (*(void (__fastcall **)(unsigned __int64, __int64))(WdfFunctions_01023 + 3040))(
        WPP_MAIN_CB.Dpc.ProcessorHistory,
        v28);
    }
    if ( !v8 )
    {
      v14 = 259;
      *v30 = v29;
LABEL_49:
      DynamicLock_Release(*(_QWORD *)(v11 + 656));
      goto LABEL_5;
    }
  }
  DynamicLock_Release(*(_QWORD *)(v11 + 656));
  DynamicLock_Acquire(*(_QWORD *)(v11 + 656));
  v14 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64))(WdfFunctions_01023 + 120))(
          WPP_MAIN_CB.Dpc.ProcessorHistory,
          *(_QWORD *)(v11 + 672),
          v29);
  if ( v14 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_d(*(_QWORD *)(v11 + 72), 2u, 4u, 0x11Au, (__int64)&Context.Logger + 4, v14);
    goto LABEL_49;
  }
  DynamicLock_Release(*(_QWORD *)(v11 + 656));
  *(_BYTE *)(v21 + 40) = 1;
  v16 = a3;
  v14 = 0;
  v15 = a2;
  *v30 = v29;
LABEL_7:
  v17 = v29;
  ++*(_DWORD *)(v11 + 800);
  if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) & 0x10) != 0 )
    McTemplateK0ptqqp(v8, v17, v12, *(_QWORD *)(v11 + 8), v8, v9, v14, v17);
  result = (PDEVICE_OBJECT)&WPP_RECORDER_INITIALIZED;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    result = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LOBYTE(v17) = 5;
      result = (PDEVICE_OBJECT)WPP_RECORDER_SF_dqd(
                                 *(_QWORD *)(v11 + 72),
                                 v17,
                                 4,
                                 283,
                                 (__int64)&Context.Logger + 4,
                                 v14,
                                 v29,
                                 v9);
    }
  }
  if ( v14 < 0 && !v9 && v29 )
    result = (PDEVICE_OBJECT)(*(__int64 (__fastcall **)(unsigned __int64))(WdfFunctions_01023 + 1664))(WPP_MAIN_CB.Dpc.ProcessorHistory);
  if ( v14 != 259 )
    return (PDEVICE_OBJECT)(*(__int64 (__fastcall **)(unsigned __int64, __int64, _QWORD, unsigned __int64))(WdfFunctions_01023 + 2120))(
                             WPP_MAIN_CB.Dpc.ProcessorHistory,
                             v15,
                             (unsigned int)v14,
                             v16);
  return result;
}
