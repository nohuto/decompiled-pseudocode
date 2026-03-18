/*
 * XREFs of Controller_StopTimeTrackingForHandle @ 0x1C0010818
 * Callers:
 *     Controller_EvtDeviceFileClose @ 0x1C000E2A0 (Controller_EvtDeviceFileClose.c)
 *     Controller_UcxEvtStopTrackingForTimeSync @ 0x1C0012630 (Controller_UcxEvtStopTrackingForTimeSync.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0008A20 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0pptqqqq @ 0x1C0014104 (McTemplateK0pptqqqq.c)
 *     WPP_RECORDER_SF_qq @ 0x1C0015494 (WPP_RECORDER_SF_qq.c)
 *     XilRegister_ReadUlong @ 0x1C0020D1C (XilRegister_ReadUlong.c)
 *     XilRegister_WriteUlong @ 0x1C0020E08 (XilRegister_WriteUlong.c)
 *     DynamicLock_Acquire @ 0x1C0046FAC (DynamicLock_Acquire.c)
 *     DynamicLock_Release @ 0x1C00471B4 (DynamicLock_Release.c)
 */

__int64 __fastcall Controller_StopTimeTrackingForHandle(__int64 a1, __int64 a2, unsigned __int8 a3)
{
  __int64 v3; // r14
  char v5; // si
  __int64 v8; // rbp
  unsigned int v9; // ebx
  __int64 v10; // r12
  int v11; // edx
  unsigned int v12; // ebx
  int v13; // r8d
  int v14; // r9d
  __int64 v15; // rcx
  __int64 v16; // rbx
  int Ulong; // eax

  v3 = a1 + 648;
  v5 = 0;
  v8 = 0LL;
  DynamicLock_Acquire(*(_QWORD *)(a1 + 656));
  v9 = 0;
  v10 = *(_QWORD *)(v3 + 24);
  if ( (*(unsigned int (__fastcall **)(unsigned __int64, __int64))(WdfFunctions_01023 + 112))(
         WPP_MAIN_CB.Dpc.ProcessorHistory,
         v10) )
  {
    while ( (*(__int64 (__fastcall **)(unsigned __int64, __int64, _QWORD))(WdfFunctions_01023 + 144))(
              WPP_MAIN_CB.Dpc.ProcessorHistory,
              v10,
              v9) != a2 )
    {
      if ( ++v9 >= (*(unsigned int (__fastcall **)(unsigned __int64, __int64))(WdfFunctions_01023 + 112))(
                     WPP_MAIN_CB.Dpc.ProcessorHistory,
                     v10) )
        goto LABEL_4;
    }
    v8 = (*(__int64 (__fastcall **)(unsigned __int64, __int64, void *))(WdfFunctions_01023 + 1616))(
           WPP_MAIN_CB.Dpc.ProcessorHistory,
           a2,
           off_1C00563B0);
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
      v15 = *(_QWORD *)(a1 + 88);
      v16 = *(_QWORD *)(v15 + 32);
      Ulong = XilRegister_ReadUlong(v15, v16);
      XilRegister_WriteUlong(*(_QWORD *)(a1 + 88), v16, Ulong & 0xFFFFFBFF);
      *(_BYTE *)v3 = 0;
    }
    v12 = 0;
  }
  else
  {
LABEL_4:
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v11) = 2;
      WPP_RECORDER_SF_qq(*(_QWORD *)(a1 + 72), v11, 4, 290, (__int64)&Context.Logger + 4, a2, *(_QWORD *)(v3 + 24));
    }
    v12 = -1073741811;
  }
  DynamicLock_Release(*(_QWORD *)(v3 + 8));
  if ( v8 )
  {
    v5 = *(_BYTE *)(v8 + 52);
    v13 = *(_DWORD *)(v8 + 44);
    v14 = *(_DWORD *)(v8 + 48);
  }
  else
  {
    v13 = 0;
    v14 = 0;
  }
  ++*(_DWORD *)(a1 + 804);
  *(_DWORD *)(a1 + 808) += v13;
  *(_DWORD *)(a1 + 812) += v14;
  if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) & 0x10) != 0 )
    McTemplateK0pptqqqq(v5, a3, v13, *(_QWORD *)(a1 + 8), a2, a3, v5, v12, v13, v14);
  return v12;
}
