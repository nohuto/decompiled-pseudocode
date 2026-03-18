/*
 * XREFs of DpiIndirectCbDisableRenderD3Requests @ 0x1C026F670
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0011EE0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     memset @ 0x1C00231C0 (memset.c)
 */

__int64 __fastcall DpiIndirectCbDisableRenderD3Requests(PDEVICE_OBJECT DeviceObject, int a2, __int64 a3)
{
  _DWORD *DeviceExtension; // rax
  _QWORD *v7; // rax
  __int64 v8; // rcx
  _QWORD *v9; // rbx
  __int64 v10; // rax
  unsigned int v11; // edi
  struct _IO_WORKITEM *WorkItem; // rax
  __int64 v13; // rcx
  __int64 v14; // rax
  _QWORD *v15; // rax

  if ( DeviceObject )
  {
    DeviceExtension = DeviceObject->DeviceExtension;
    if ( DeviceExtension )
    {
      if ( DeviceExtension[4] == 1953656900 && DeviceExtension[5] == 2 && *((_BYTE *)DeviceExtension + 1151) )
      {
        v7 = operator new(0x20uLL, 0x74727044u, PagedPool);
        v9 = v7;
        if ( v7 )
          memset(v7, 0, 0x20uLL);
        else
          v9 = 0LL;
        if ( !v9 )
        {
          v10 = WdLogNewEntry5_WdLowResource(v8);
          v11 = -1073741670;
          *(_QWORD *)(v10 + 24) = -1073741670LL;
          WdLogEvent5_WdLowResource(v10);
          return v11;
        }
        KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
        if ( !byte_1C008ECA8 )
        {
          WorkItem = IoAllocateWorkItem(DeviceObject);
          if ( !WorkItem )
          {
            v14 = WdLogNewEntry5_WdLowResource(v13);
            v11 = -1073741670;
            *(_QWORD *)(v14 + 24) = -1073741670LL;
            WdLogEvent5_WdLowResource(v14);
LABEL_18:
            KeReleaseMutex(&Object, 0);
            if ( v9 )
              ExFreePoolWithTag(v9, 0);
            return v11;
          }
          byte_1C008ECA8 = 1;
          IoQueueWorkItemEx(
            WorkItem,
            (PIO_WORKITEM_ROUTINE_EX)DpiIndirectCbDisableRenderD3RequestsWorker,
            DelayedWorkQueue,
            0LL);
        }
        *((_DWORD *)v9 + 4) = a2;
        *(_QWORD *)((char *)v9 + 20) = a3;
        v15 = (_QWORD *)qword_1C008ECF0;
        if ( *(void ***)qword_1C008ECF0 != &qword_1C008ECE8 )
          __fastfail(3u);
        *v9 = &qword_1C008ECE8;
        v9[1] = v15;
        *v15 = v9;
        qword_1C008ECF0 = (__int64)v9;
        v9 = 0LL;
        v11 = 0;
        goto LABEL_18;
      }
    }
  }
  return 3221225485LL;
}
