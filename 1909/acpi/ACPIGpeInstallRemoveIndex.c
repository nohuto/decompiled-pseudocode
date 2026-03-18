/*
 * XREFs of ACPIGpeInstallRemoveIndex @ 0x1C0023C40
 * Callers:
 *     ACPIGpeBuildEventMasks @ 0x1C00238A0 (ACPIGpeBuildEventMasks.c)
 *     ACPIVectorConnect @ 0x1C00606B0 (ACPIVectorConnect.c)
 *     ACPIVectorDisconnect @ 0x1C0060980 (ACPIVectorDisconnect.c)
 * Callees:
 *     WPP_RECORDER_SF_dDD @ 0x1C0023D84 (WPP_RECORDER_SF_dDD.c)
 *     ACPIGpeIndexToGpeRegister @ 0x1C0023E28 (ACPIGpeIndexToGpeRegister.c)
 *     ACPIGpeValidIndex @ 0x1C0023E5C (ACPIGpeValidIndex.c)
 */

char __fastcall ACPIGpeInstallRemoveIndex(__int64 a1, int a2, int a3, char *a4)
{
  char v4; // di
  unsigned int v8; // esi
  char v9; // cl
  int v10; // ebx
  unsigned int v11; // eax
  unsigned int v12; // edx
  char v13; // cl
  int v14; // r9d
  struct _WORK_QUEUE_ITEM *PoolWithTag; // rax
  char v17; // bl

  v4 = 0;
  v8 = a1;
  if ( *((_BYTE *)AcpiInformation + 85) )
  {
    if ( (unsigned __int8)ACPIGpeValidIndex(a1) )
    {
      v10 = 1 << (v9 & 7);
      v11 = ACPIGpeIndexToGpeRegister(v8);
      v12 = *((unsigned __int16 *)AcpiInformation + 51);
      if ( v11 < v12 )
      {
        if ( a2 == 2 )
        {
          if ( *a4 )
          {
            *((_BYTE *)GpeHandlerRegistered + v11) |= v10;
            *((_BYTE *)GpeEnable + v11) |= v10;
            *((_BYTE *)GpeCurEnable + v11) |= v10;
            *((_BYTE *)GpeHandlerType + v11) |= v10;
          }
          else
          {
            v17 = ~(_BYTE)v10;
            *((_BYTE *)GpeHandlerRegistered + v11) &= v17;
            *((_BYTE *)GpeEnable + v11) &= v17;
            *((_BYTE *)GpeCurEnable + v11) &= v17;
            *((_BYTE *)GpeHandlerType + v11) &= v17;
          }
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            return 1;
          v14 = 11;
          goto LABEL_12;
        }
        if ( (*((_BYTE *)GpeHandlerRegistered + v11) & (unsigned __int8)v10) == 0 )
        {
LABEL_6:
          *a4 = v4;
          v13 = ~(_BYTE)v10;
          *((_BYTE *)GpeHandlerRegistered + v11) |= v10;
          *((_BYTE *)GpeEnable + v11) |= v10;
          *((_BYTE *)GpeCurEnable + v11) |= v10;
          if ( a2 == 1 )
            *((_BYTE *)GpeIsLevel + v11) |= v10;
          else
            *((_BYTE *)GpeIsLevel + v11) &= v13;
          if ( a3 == 1 )
            *((_BYTE *)GpeHandlerType + v11) |= v10;
          else
            *((_BYTE *)GpeHandlerType + v11) &= v13;
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            return 1;
          v14 = 12;
LABEL_12:
          WPP_RECORDER_SF_dDD(WPP_GLOBAL_Control->DeviceExtension, v12, v11, v14);
          return 1;
        }
        if ( (*((_BYTE *)GpeHandlerType + v11) & (unsigned __int8)v10) != 0 )
        {
          v4 = 1;
          goto LABEL_6;
        }
      }
    }
  }
  else
  {
    PoolWithTag = (struct _WORK_QUEUE_ITEM *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x28uLL, 0x4D706341u);
    if ( PoolWithTag )
    {
      LODWORD(PoolWithTag[1].List.Flink) = v8;
      PoolWithTag->WorkerRoutine = (void (__fastcall *)(void *))ACPIGpeInstallRemoveIndexErrorWorker;
      PoolWithTag->Parameter = PoolWithTag;
      PoolWithTag->List.Flink = 0LL;
      ExQueueWorkItem(PoolWithTag, DelayedWorkQueue);
    }
  }
  return 0;
}
