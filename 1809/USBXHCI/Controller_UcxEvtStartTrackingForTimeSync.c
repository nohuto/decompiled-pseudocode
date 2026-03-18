/*
 * XREFs of Controller_UcxEvtStartTrackingForTimeSync @ 0x1C000F650
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001E30 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_i @ 0x1C00028DC (WPP_RECORDER_SF_i.c)
 *     _guard_dispatch_icall_nop @ 0x1C0006C60 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0006FC0 (memset.c)
 *     WPP_RECORDER_SF_d @ 0x1C00091C4 (WPP_RECORDER_SF_d.c)
 *     McTemplateK0ptqqp @ 0x1C00119E0 (McTemplateK0ptqqp.c)
 *     WPP_RECORDER_SF_II @ 0x1C0011D94 (WPP_RECORDER_SF_II.c)
 *     WPP_RECORDER_SF_dqd @ 0x1C0012348 (WPP_RECORDER_SF_dqd.c)
 *     XilRegister_ReadUlong @ 0x1C001D374 (XilRegister_ReadUlong.c)
 *     XilRegister_WriteUlong @ 0x1C001D458 (XilRegister_WriteUlong.c)
 *     DynamicLock_Acquire @ 0x1C0041760 (DynamicLock_Acquire.c)
 *     DynamicLock_Release @ 0x1C004195C (DynamicLock_Release.c)
 */

PDEVICE_OBJECT __fastcall Controller_UcxEvtStartTrackingForTimeSync(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  unsigned __int8 v7; // r13
  char v8; // r12
  __int64 v9; // rax
  int v10; // edx
  int v11; // r8d
  __int64 v12; // rsi
  __int64 v13; // rdi
  int v14; // r8d
  int v15; // ebx
  __int64 v16; // r14
  unsigned __int64 v17; // rdi
  int v18; // edx
  PDEVICE_OBJECT result; // rax
  unsigned __int64 v20; // r8
  int v21; // edx
  __int64 v22; // r14
  int v23; // eax
  __int64 v24; // rcx
  __int64 v25; // rbx
  int Ulong; // eax
  __int64 v27; // rax
  _QWORD *v28; // rdx
  __int64 *v29; // rcx
  __int64 v30; // rdx
  int v31; // eax
  __int64 v32; // [rsp+40h] [rbp-69h] BYREF
  unsigned __int64 v33; // [rsp+48h] [rbp-61h]
  __int64 *v34; // [rsp+50h] [rbp-59h] BYREF
  __int64 v35; // [rsp+58h] [rbp-51h] BYREF
  _QWORD v36[7]; // [rsp+60h] [rbp-49h] BYREF
  _QWORD v37[2]; // [rsp+98h] [rbp-11h] BYREF
  __int128 v38; // [rsp+A8h] [rbp-1h]
  __int128 v39; // [rsp+B8h] [rbp+Fh]
  char v41; // [rsp+128h] [rbp+7Fh] BYREF

  v32 = 0LL;
  v33 = 0LL;
  v7 = 1;
  v8 = (*(__int64 (__fastcall **)(unsigned __int64))(WdfFunctions_01023 + 2240))(WPP_MAIN_CB.Dpc.ProcessorHistory);
  v9 = (*(__int64 (__fastcall **)(unsigned __int64, __int64, void *))(WdfFunctions_01023 + 1616))(
         WPP_MAIN_CB.Dpc.ProcessorHistory,
         a1,
         off_1C004F400);
  v12 = v9;
  v13 = v9 + 584;
  if ( a4 < 9 )
  {
    WPP_RECORDER_SF_II(*(_QWORD *)(v9 + 72), v10, v11, 274);
    v15 = -1073741811;
LABEL_3:
    v16 = a2;
LABEL_4:
    v17 = v33;
    goto LABEL_5;
  }
  v20 = a4;
  v16 = a2;
  v15 = (*(__int64 (__fastcall **)(unsigned __int64, __int64, unsigned __int64, __int64 *, _QWORD))(WdfFunctions_01023
                                                                                                  + 2152))(
          WPP_MAIN_CB.Dpc.ProcessorHistory,
          a2,
          v20,
          &v35,
          0LL);
  if ( v15 < 0 )
    goto LABEL_4;
  if ( *(_QWORD *)v35 )
  {
    WPP_RECORDER_SF_(*(_QWORD *)(v12 + 72), 2u, 4u, 0x113u, (__int64)&Context.Logger + 4);
LABEL_19:
    v15 = -1073741811;
    goto LABEL_4;
  }
  v7 = *(_BYTE *)(v35 + 8);
  if ( a3 < 9 )
  {
    WPP_RECORDER_SF_II(*(_QWORD *)(v12 + 72), v21, v14, 276);
    goto LABEL_19;
  }
  v15 = (*(__int64 (__fastcall **)(unsigned __int64, __int64, unsigned __int64, __int64 **, _QWORD))(WdfFunctions_01023 + 2160))(
          WPP_MAIN_CB.Dpc.ProcessorHistory,
          a2,
          a3,
          &v34,
          0LL);
  if ( v15 < 0 )
    goto LABEL_4;
  if ( v8 == 1 )
  {
    v32 = (*(__int64 (__fastcall **)(unsigned __int64, __int64))(WdfFunctions_01023 + 2216))(
            WPP_MAIN_CB.Dpc.ProcessorHistory,
            a2);
    v22 = (*(__int64 (__fastcall **)(unsigned __int64, __int64, void *))(WdfFunctions_01023 + 1616))(
            WPP_MAIN_CB.Dpc.ProcessorHistory,
            v32,
            off_1C004F388);
    if ( *(_BYTE *)(v22 + 40) )
    {
      v15 = -1073741811;
      WPP_RECORDER_SF_i(*(_QWORD *)(v12 + 72), 2u, 4u, 0x115u, (__int64)&Context.Logger + 4, v32);
      goto LABEL_3;
    }
  }
  else
  {
    memset(v36, 0, sizeof(v36));
    v36[3] = 0x100000001LL;
    v36[6] = off_1C004F388;
    LODWORD(v36[0]) = 56;
    v36[4] = *(_QWORD *)(v13 + 24);
    v23 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD *, __int64 *))(WdfFunctions_01023 + 1656))(
            WPP_MAIN_CB.Dpc.ProcessorHistory,
            v36,
            &v32);
    v15 = v23;
    if ( v23 < 0 )
    {
      WPP_RECORDER_SF_d(*(_QWORD *)(v12 + 72), 2u, 4u, 0x116u, (__int64)&Context.Logger + 4, v23);
      goto LABEL_4;
    }
    v22 = (*(__int64 (__fastcall **)(unsigned __int64, __int64, void *))(WdfFunctions_01023 + 1616))(
            WPP_MAIN_CB.Dpc.ProcessorHistory,
            v32,
            off_1C004F388);
    *(_BYTE *)(v22 + 52) = 0;
    *(_QWORD *)(v22 + 16) = v32;
  }
  if ( *(_DWORD *)(v12 + 328) != 1 )
  {
    v15 = -1073741436;
    goto LABEL_3;
  }
  DynamicLock_Acquire(*(_QWORD *)(v13 + 8));
  if ( !(*(unsigned int (__fastcall **)(unsigned __int64, _QWORD))(WdfFunctions_01023 + 112))(
          WPP_MAIN_CB.Dpc.ProcessorHistory,
          *(_QWORD *)(v13 + 24)) )
  {
    (*(void (__fastcall **)(unsigned __int64, _QWORD, __int64 (__fastcall *)(__int64, __int64), __int64))(WdfFunctions_01023 + 1144))(
      WPP_MAIN_CB.Dpc.ProcessorHistory,
      **(_QWORD **)(*(_QWORD *)(v12 + 128) + 40LL),
      Interrupter_ClearBusEdgeInformationRoutineWithIsrSync,
      v13);
    v24 = *(_QWORD *)(v12 + 88);
    v25 = *(_QWORD *)(v24 + 32);
    Ulong = XilRegister_ReadUlong(v24, v25);
    XilRegister_WriteUlong(*(_QWORD *)(v12 + 88), v25, Ulong | 0x400u);
    *(_BYTE *)v13 = 1;
  }
  DynamicLock_Release(*(_QWORD *)(v13 + 8));
  v37[1] = &v41;
  v27 = *(_QWORD *)(v12 + 128);
  v37[0] = v13;
  v38 = 0LL;
  v28 = *(_QWORD **)(v27 + 40);
  v39 = 0LL;
  (*(void (__fastcall **)(unsigned __int64, _QWORD, __int64 (__fastcall *)(), _QWORD *))(WdfFunctions_01023 + 1144))(
    WPP_MAIN_CB.Dpc.ProcessorHistory,
    *v28,
    Interrupter_QueryBusEdgeInformationRoutineWithIsrSync,
    v37);
  DynamicLock_Acquire(*(_QWORD *)(v13 + 8));
  if ( !v41 )
  {
    if ( !v7 )
    {
      *(_QWORD *)(v22 + 24) = a2;
      v29 = *(__int64 **)(v13 + 40);
      if ( *v29 != v13 + 32 )
        __fastfail(3u);
      *(_QWORD *)v22 = v13 + 32;
      *(_QWORD *)(v22 + 8) = v29;
      *v29 = v22;
      *(_QWORD *)(v13 + 40) = v22;
    }
    if ( !*(_BYTE *)(v13 + 56) )
    {
      v30 = *(_QWORD *)(v13 + 48);
      *(_BYTE *)(v13 + 56) = 1;
      (*(void (__fastcall **)(unsigned __int64, __int64))(WdfFunctions_01023 + 3040))(
        WPP_MAIN_CB.Dpc.ProcessorHistory,
        v30);
    }
    if ( !v7 )
    {
      v15 = 259;
      *v34 = v32;
LABEL_42:
      DynamicLock_Release(*(_QWORD *)(v13 + 8));
      goto LABEL_3;
    }
  }
  DynamicLock_Release(*(_QWORD *)(v13 + 8));
  DynamicLock_Acquire(*(_QWORD *)(v13 + 8));
  v31 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64))(WdfFunctions_01023 + 120))(
          WPP_MAIN_CB.Dpc.ProcessorHistory,
          *(_QWORD *)(v13 + 24),
          v32);
  v15 = v31;
  if ( v31 < 0 )
  {
    WPP_RECORDER_SF_d(*(_QWORD *)(v12 + 72), 2u, 4u, 0x117u, (__int64)&Context.Logger + 4, v31);
    goto LABEL_42;
  }
  DynamicLock_Release(*(_QWORD *)(v13 + 8));
  *(_BYTE *)(v22 + 40) = 1;
  v17 = a3;
  v15 = 0;
  v16 = a2;
  *v34 = v32;
LABEL_5:
  v18 = v32;
  ++*(_DWORD *)(v12 + 736);
  if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) & 0x10) != 0 )
    McTemplateK0ptqqp(v7, v18, v14, *(_QWORD *)(v12 + 8), v7, v8, v15, v18);
  result = WPP_GLOBAL_Control;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v18) = 5;
    result = (PDEVICE_OBJECT)WPP_RECORDER_SF_dqd(
                               *(_QWORD *)(v12 + 72),
                               v18,
                               4,
                               280,
                               (__int64)&Context.Logger + 4,
                               v15,
                               v32,
                               v8);
  }
  if ( v15 < 0 && !v8 && v32 )
    result = (PDEVICE_OBJECT)(*(__int64 (__fastcall **)(unsigned __int64))(WdfFunctions_01023 + 1664))(WPP_MAIN_CB.Dpc.ProcessorHistory);
  if ( v15 != 259 )
    return (PDEVICE_OBJECT)(*(__int64 (__fastcall **)(unsigned __int64, __int64, _QWORD, unsigned __int64))(WdfFunctions_01023 + 2120))(
                             WPP_MAIN_CB.Dpc.ProcessorHistory,
                             v16,
                             (unsigned int)v15,
                             v17);
  return result;
}
