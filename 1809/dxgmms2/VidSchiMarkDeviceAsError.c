/*
 * XREFs of VidSchiMarkDeviceAsError @ 0x1C0001098
 * Callers:
 *     VidSchMarkDeviceAsError @ 0x1C0001010 (VidSchMarkDeviceAsError.c)
 *     VidSchiProcessDpcCompletedPacket @ 0x1C0005960 (VidSchiProcessDpcCompletedPacket.c)
 *     ?SubmitPagingToHwQueue@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C00330C0 (-SubmitPagingToHwQueue@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     ?SubmitRenderToHwQueue@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C0033308 (-SubmitRenderToHwQueue@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     VidSchiProcessHwQueuePageFaultedDpc @ 0x1C0037EB0 (VidSchiProcessHwQueuePageFaultedDpc.c)
 * Callees:
 *     VidSchiSignalRegisteredSyncObjects @ 0x1C0001180 (VidSchiSignalRegisteredSyncObjects.c)
 *     __security_check_cookie @ 0x1C0018BA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C001A670 (_guard_dispatch_icall_nop.c)
 *     _TlgCreateSz @ 0x1C00290D8 (_TlgCreateSz.c)
 *     ?VidSchiRundownHardwareContext@@YAXPEAVHwQueueStagingList@@PEAUVIDSCH_HW_CONTEXT@@@Z @ 0x1C0035378 (-VidSchiRundownHardwareContext@@YAXPEAVHwQueueStagingList@@PEAUVIDSCH_HW_CONTEXT@@@Z.c)
 *     VidSchiNotifyDeviceRemoved @ 0x1C0039BBC (VidSchiNotifyDeviceRemoved.c)
 *     ExtractAggregateFieldTypes @ 0x1C003A8B8 (ExtractAggregateFieldTypes.c)
 *     InsertEventEntryInLookUpTable @ 0x1C003AA6C (InsertEventEntryInLookUpTable.c)
 */

void __fastcall VidSchiMarkDeviceAsError(struct HwQueueStagingList *a1, __int64 a2, int a3, _OWORD *a4)
{
  int v8; // eax
  signed __int32 v9; // r15d
  _QWORD *v10; // rdi
  _QWORD *i; // rbx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rdx
  unsigned __int16 *v17; // rax
  __int64 v18; // rax
  int v19; // r9d
  ULONG v20; // r10d
  int v21; // r11d
  char v22; // al
  int v23; // ecx
  int v24; // r8d
  int v25; // [rsp+40h] [rbp-C0h] BYREF
  int v26; // [rsp+44h] [rbp-BCh] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v28; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v29; // [rsp+60h] [rbp-A0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+70h] [rbp-90h] BYREF
  void *v31; // [rsp+80h] [rbp-80h]
  int v32; // [rsp+88h] [rbp-78h]
  int v33; // [rsp+8Ch] [rbp-74h]
  __int64 *v34; // [rsp+90h] [rbp-70h]
  int v35; // [rsp+98h] [rbp-68h]
  int v36; // [rsp+9Ch] [rbp-64h]
  int *v37; // [rsp+A0h] [rbp-60h]
  int v38; // [rsp+A8h] [rbp-58h]
  int v39; // [rsp+ACh] [rbp-54h]
  __int64 *v40; // [rsp+B0h] [rbp-50h]
  int v41; // [rsp+B8h] [rbp-48h]
  int v42; // [rsp+BCh] [rbp-44h]
  _DWORD *v43; // [rsp+C0h] [rbp-40h]
  int v44; // [rsp+C8h] [rbp-38h]
  int v45; // [rsp+CCh] [rbp-34h]
  __int64 v46; // [rsp+D0h] [rbp-30h]
  _DWORD v47[2]; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v48; // [rsp+E0h] [rbp-20h]
  int v49; // [rsp+E8h] [rbp-18h]
  int v50; // [rsp+ECh] [rbp-14h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+F0h] [rbp-10h] BYREF
  int *v52; // [rsp+100h] [rbp+0h]
  int v53; // [rsp+108h] [rbp+8h]
  int v54; // [rsp+10Ch] [rbp+Ch]

  if ( (unsigned int)a3 > 0xE || (v8 = 17024, !_bittest(&v8, a3)) )
  {
    if ( a3 >= 0 && !g_ErrorDeviceDebugMode && !KdRefreshDebuggerNotPresent() )
    {
      DbgPrintEx(
        0x65u,
        0,
        "\n"
        "A GPU Scheduler device 0x%p from process %s has been put in error due to Reason %d.\n"
        "We broke into the debugger to allow a chance for debugging this issue.\n"
        "To disable debug breaks when device is put in error, run \"?? dxgmms2!g_ErrorDeviceDebugMode=1\" command,\n"
        "or \"ed 0x%p 1\"\n"
        "\n",
        (const void *)a2,
        *(const char **)(*(_QWORD *)(a2 + 40) + 2640LL),
        a3,
        (const void *)&g_ErrorDeviceDebugMode);
      __debugbreak();
    }
  }
  v9 = _InterlockedCompareExchange((volatile signed __int32 *)(a2 + 200), a3, 0);
  VidSchiSignalRegisteredSyncObjects(a1);
  if ( a4 )
  {
    *(_OWORD *)(a2 + 208) = *a4;
    *(_OWORD *)(a2 + 224) = a4[1];
  }
  if ( !v9 && a3 != 14 )
  {
    v12 = *(_QWORD *)(a2 + 64);
    if ( v12 )
      DxgCoreInterface[64](v12, *(unsigned int *)(a2 + 200));
    if ( (*(_DWORD *)(a2 + 48) & 0x20) != 0 )
      VidSchiNotifyDeviceRemoved(a2);
    if ( DxgKrnlTelemetryGlobal_LogTelemetryEvent()
      && hProvider > 5u
      && (qword_1C004D058 & 0x400000000010LL) != 0
      && (qword_1C004D060 & 0x400000000010LL) == qword_1C004D060 )
    {
      v36 = 0;
      v39 = 0;
      v13 = *(_QWORD *)(a2 + 32);
      v34 = &v28;
      v37 = &v25;
      v28 = 1LL;
      v35 = 8;
      v38 = 4;
      v25 = 1;
      v14 = *(_QWORD *)(*(_QWORD *)(v13 + 16) + 276LL);
      v42 = 0;
      v29 = v14;
      v40 = &v29;
      v41 = 8;
      v15 = *(_QWORD *)(v13 + 16);
      v16 = *(_QWORD *)(a2 + 40);
      v17 = *(unsigned __int16 **)(v15 + 1392);
      v45 = 0;
      v43 = v47;
      v44 = 2;
      LODWORD(v14) = *v17;
      v18 = *((_QWORD *)v17 + 1);
      v47[1] = 0;
      v50 = 0;
      v46 = v18;
      v47[0] = v14;
      v48 = v16 + 2632;
      v49 = 8;
      TlgCreateSz(&pDesc, *(LPCSTR *)(v16 + 2640));
      v54 = 0;
      v52 = &v26;
      v26 = a3;
      v53 = v19;
      *(_DWORD *)&EventDescriptor.Level = 5;
      UserData.Ptr = (ULONGLONG)off_1C004D050;
      *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_1C0041127 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
      EventDescriptor.Keyword = 0x400000000010LL;
      UserData.Size = *(unsigned __int16 *)off_1C004D050;
      v31 = &unk_1C0041132;
      UserData.Reserved = v20;
      v32 = 116;
      v33 = v21;
      if ( (ETWENABLECALLBACK *)qword_1C004D070 == TlgAggregateInternalRegisteredProviderEtwCallback )
      {
        v22 = ExtractAggregateFieldTypes(
                ((unsigned int)&unk_1C0041127 - (unsigned int)&TraceLoggingMetadata) | 0xB000000,
                &UserData);
        if ( v22 )
          InsertEventEntryInLookUpTable(v23, (unsigned int)&EventDescriptor, v24, (unsigned int)&UserData, v22);
        else
          EtwWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 0xAu, &UserData);
      }
    }
  }
  *(_QWORD *)(*(_QWORD *)(a2 + 32) + 1144LL) = MEMORY[0xFFFFF78000000320];
  KeSetEvent((PRKEVENT)(*(_QWORD *)(a2 + 32) + 1112LL), 0, 0);
  v10 = (_QWORD *)(a2 + 88);
  for ( i = *(_QWORD **)(a2 + 88); i != v10; i = (_QWORD *)*i )
    VidSchiRundownHardwareContext(a1, (struct VIDSCH_HW_CONTEXT *)(i - 24));
}
