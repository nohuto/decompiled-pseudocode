/*
 * XREFs of Controller_StopTimeTrackingForHandle @ 0x1C000E0B4
 * Callers:
 *     Controller_EvtDeviceFileClose @ 0x1C000BF30 (Controller_EvtDeviceFileClose.c)
 *     Controller_UcxEvtStopTrackingForTimeSync @ 0x1C000FC30 (Controller_UcxEvtStopTrackingForTimeSync.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0006C60 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0pptqqqq @ 0x1C0011704 (McTemplateK0pptqqqq.c)
 *     WPP_RECORDER_SF_qq @ 0x1C0012A94 (WPP_RECORDER_SF_qq.c)
 *     XilRegister_ReadUlong @ 0x1C001D374 (XilRegister_ReadUlong.c)
 *     XilRegister_WriteUlong @ 0x1C001D458 (XilRegister_WriteUlong.c)
 *     DynamicLock_Acquire @ 0x1C0041760 (DynamicLock_Acquire.c)
 *     DynamicLock_Release @ 0x1C004195C (DynamicLock_Release.c)
 */

__int64 __fastcall Controller_StopTimeTrackingForHandle(__int64 a1, __int64 a2, unsigned __int8 a3)
{
  __int64 v3; // r14
  char v5; // si
  __int64 v8; // rbp
  __int64 v9; // r12
  unsigned int i; // ebx
  int v11; // edx
  __int64 v12; // rcx
  __int64 v13; // rbx
  int Ulong; // eax
  unsigned int v15; // ebx
  int v16; // r8d
  int v17; // r9d

  v3 = a1 + 584;
  v5 = 0;
  v8 = 0LL;
  DynamicLock_Acquire(*(_QWORD *)(a1 + 592));
  v9 = *(_QWORD *)(v3 + 24);
  for ( i = 0; ; ++i )
  {
    if ( i >= (*(unsigned int (__fastcall **)(unsigned __int64, __int64))(WdfFunctions_01023 + 112))(
                WPP_MAIN_CB.Dpc.ProcessorHistory,
                v9) )
    {
      LOBYTE(v11) = 2;
      WPP_RECORDER_SF_qq(*(_QWORD *)(a1 + 72), v11, 4, 287, (__int64)&Context.Logger + 4, a2, *(_QWORD *)(v3 + 24));
      v15 = -1073741811;
      goto LABEL_9;
    }
    if ( (*(__int64 (__fastcall **)(unsigned __int64, __int64, _QWORD))(WdfFunctions_01023 + 144))(
           WPP_MAIN_CB.Dpc.ProcessorHistory,
           v9,
           i) == a2 )
      break;
  }
  v8 = (*(__int64 (__fastcall **)(unsigned __int64, __int64, void *))(WdfFunctions_01023 + 1616))(
         WPP_MAIN_CB.Dpc.ProcessorHistory,
         a2,
         off_1C004F388);
  (*(void (__fastcall **)(unsigned __int64, _QWORD, __int64))(WdfFunctions_01023 + 128))(
    WPP_MAIN_CB.Dpc.ProcessorHistory,
    *(_QWORD *)(v3 + 24),
    a2);
  *(_BYTE *)(v8 + 40) = 0;
  if ( !(*(unsigned int (__fastcall **)(unsigned __int64, _QWORD))(WdfFunctions_01023 + 112))(
          WPP_MAIN_CB.Dpc.ProcessorHistory,
          *(_QWORD *)(v3 + 24)) )
  {
    (*(void (__fastcall **)(unsigned __int64, _QWORD, __int64 (__fastcall *)(__int64, __int64), __int64))(WdfFunctions_01023 + 1144))(
      WPP_MAIN_CB.Dpc.ProcessorHistory,
      **(_QWORD **)(*(_QWORD *)(a1 + 128) + 40LL),
      Interrupter_ClearBusEdgeInformationRoutineWithIsrSync,
      v3);
    v12 = *(_QWORD *)(a1 + 88);
    v13 = *(_QWORD *)(v12 + 32);
    Ulong = XilRegister_ReadUlong(v12, v13);
    XilRegister_WriteUlong(*(_QWORD *)(a1 + 88), v13, Ulong & 0xFFFFFBFF);
    *(_BYTE *)v3 = 0;
  }
  v15 = 0;
LABEL_9:
  DynamicLock_Release(*(_QWORD *)(v3 + 8));
  if ( v8 )
  {
    v5 = *(_BYTE *)(v8 + 52);
    v16 = *(_DWORD *)(v8 + 44);
    v17 = *(_DWORD *)(v8 + 48);
  }
  else
  {
    v16 = 0;
    v17 = 0;
  }
  ++*(_DWORD *)(a1 + 740);
  *(_DWORD *)(a1 + 744) += v16;
  *(_DWORD *)(a1 + 748) += v17;
  if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) & 0x10) != 0 )
    McTemplateK0pptqqqq(v5, a3, v16, *(_QWORD *)(a1 + 8), a2, a3, v5, v15, v16, v17);
  return v15;
}
