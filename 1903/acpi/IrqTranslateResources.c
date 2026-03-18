/*
 * XREFs of IrqTranslateResources @ 0x1C0099870
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_dDDq @ 0x1C001D8B8 (WPP_RECORDER_SF_dDDq.c)
 *     IrqLibReleaseArbiterLock @ 0x1C001D974 (IrqLibReleaseArbiterLock.c)
 *     IrqLibAcquireArbiterLock @ 0x1C001D99C (IrqLibAcquireArbiterLock.c)
 *     memset @ 0x1C0031D40 (memset.c)
 *     IrqTranslatepQueryDeviceIrql @ 0x1C0098820 (IrqTranslatepQueryDeviceIrql.c)
 *     ProcessorGetDeviceIdtAssignment @ 0x1C0099A20 (ProcessorGetDeviceIdtAssignment.c)
 *     IrqArbGsivFromIrq @ 0x1C0099C64 (IrqArbGsivFromIrq.c)
 */

__int64 __fastcall IrqTranslateResources(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        int a5,
        PVOID a6,
        PRTL_RANGE Range)
{
  PRTL_RANGE v9; // rbx
  int DeviceIdtAssignment; // edi
  unsigned int v11; // eax
  PRTL_RANGE v12; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  int v17; // edx
  int v18; // [rsp+28h] [rbp-41h]
  _QWORD v19[4]; // [rsp+58h] [rbp-11h] BYREF
  struct _RANGE_LIST_ITERATOR Iterator; // [rsp+78h] [rbp+Fh] BYREF

  memset(v19, 0, sizeof(v19));
  memset(&Iterator, 0, sizeof(Iterator));
  v9 = Range;
  DeviceIdtAssignment = 0;
  *(_OWORD *)&Range->Start = *(_OWORD *)a2;
  LODWORD(v9->UserData) = *(_DWORD *)(a2 + 16);
  if ( a6 == *(PVOID *)(RootDeviceExtension + 736) )
    return 0LL;
  IrqLibAcquireArbiterLock(0);
  if ( a3 )
  {
    if ( a3 == 1 )
      DeviceIdtAssignment = -1073741637;
  }
  else
  {
    v11 = IrqArbGsivFromIrq(*(unsigned int *)(a2 + 8));
    DeviceIdtAssignment = ProcessorGetDeviceIdtAssignment(0LL, v11, 0LL, v19);
    if ( DeviceIdtAssignment >= 0 )
    {
      v17 = HIDWORD(v19[2]);
      HIWORD(v9->Start) = v19[1];
      *(ULONGLONG *)((char *)&v9->End + 4) = v19[0];
      LODWORD(v9->End) = v17;
      DeviceIdtAssignment = 288;
      WORD2(v9->Start) = (unsigned __int8)IrqTranslatepQueryDeviceIrql(*(_DWORD *)(a2 + 8), v17);
    }
    else
    {
      RtlGetFirstRange(RangeList, &Iterator, &Range);
      v12 = Range;
      if ( !Range )
        goto LABEL_9;
      do
      {
        if ( v12->Owner == a6 )
          LOBYTE(a3) = 1;
        RtlGetNextRange(&Iterator, &Range, 1u);
        v12 = Range;
      }
      while ( Range );
      if ( !(_BYTE)a3 )
      {
LABEL_9:
        DeviceIdtAssignment = 0;
        *(_OWORD *)&v9->Start = *(_OWORD *)a2;
        LODWORD(v9->UserData) = *(_DWORD *)(a2 + 16);
      }
    }
  }
  IrqLibReleaseArbiterLock();
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_dDDq((__int64)WPP_GLOBAL_Control->DeviceExtension, v13, v14, v15, v18);
  return (unsigned int)DeviceIdtAssignment;
}
