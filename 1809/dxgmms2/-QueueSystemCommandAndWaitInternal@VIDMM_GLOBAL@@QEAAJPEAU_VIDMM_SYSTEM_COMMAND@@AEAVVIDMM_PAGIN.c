/*
 * XREFs of ?QueueSystemCommandAndWaitInternal@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@AEAVVIDMM_PAGING_QUEUE@@PEAU_VIDSCH_SYNC_OBJECT@@_N@Z @ 0x1C00608C0
 * Callers:
 *     ?CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@EU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAPEAU_KEVENT@@@Z @ 0x1C00621D0 (-CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@EU_D3DDDICB_D.c)
 *     ?QueueSystemCleanupCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z @ 0x1C006C8B8 (-QueueSystemCleanupCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z.c)
 *     ?QueueSystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z @ 0x1C007EA1C (-QueueSystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z.c)
 *     ?QueueLazySystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z @ 0x1C00AB6B4 (-QueueLazySystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z.c)
 * Callees:
 *     ?AppendReadyPacket@VIDMM_PAGING_QUEUE@@QEAAXPEAUVIDMM_PAGING_QUEUE_PACKET@@PEA_K@Z @ 0x1C0060C00 (-AppendReadyPacket@VIDMM_PAGING_QUEUE@@QEAAXPEAUVIDMM_PAGING_QUEUE_PACKET@@PEA_K@Z.c)
 *     ?GetNewPacket@VIDMM_PAGING_QUEUE@@QEAAPEAUVIDMM_PAGING_QUEUE_PACKET@@XZ @ 0x1C0060E28 (-GetNewPacket@VIDMM_PAGING_QUEUE@@QEAAPEAUVIDMM_PAGING_QUEUE_PACKET@@XZ.c)
 *     ?WaitForFences@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1@Z @ 0x1C00663F0 (-WaitForFences@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::QueueSystemCommandAndWaitInternal(
        VIDMM_GLOBAL *this,
        struct _VIDMM_SYSTEM_COMMAND *a2,
        PVOID *a3,
        struct _VIDSCH_SYNC_OBJECT *a4,
        bool a5)
{
  struct VIDMM_PAGING_QUEUE_PACKET *NewPacket; // rax
  struct VIDMM_PAGING_QUEUE_PACKET *v10; // rbx
  char v11; // di
  bool v12; // si
  struct _VIDSCH_SYNC_OBJECT *v14; // [rsp+40h] [rbp-20h] BYREF
  struct _KEVENT Event; // [rsp+48h] [rbp-18h] BYREF
  unsigned int v16; // [rsp+98h] [rbp+38h] BYREF
  PVOID Object; // [rsp+A8h] [rbp+48h] BYREF

  v16 = 0;
  NewPacket = VIDMM_PAGING_QUEUE::GetNewPacket((VIDMM_PAGING_QUEUE *)a3);
  v10 = NewPacket;
  if ( !a4 || *(_DWORD *)a2 == 118 )
  {
    v11 = 0;
  }
  else
  {
    v11 = 1;
    if ( !NewPacket )
    {
      Object = a3[12];
      v14 = a4;
      VIDMM_GLOBAL::WaitForFences(this, &v14, (const unsigned __int64 *)&Object, 1u, 0LL);
      v10 = VIDMM_PAGING_QUEUE::GetNewPacket((VIDMM_PAGING_QUEUE *)a3);
    }
  }
  *((_BYTE *)v10 + 24) = 0;
  *((_BYTE *)v10 + 25) = v11;
  *((_OWORD *)v10 + 3) = *(_OWORD *)a2;
  *((_OWORD *)v10 + 4) = *((_OWORD *)a2 + 1);
  *((_OWORD *)v10 + 5) = *((_OWORD *)a2 + 2);
  *((_OWORD *)v10 + 6) = *((_OWORD *)a2 + 3);
  *((_OWORD *)v10 + 7) = *((_OWORD *)a2 + 4);
  *((_QWORD *)v10 + 16) = *((_QWORD *)a2 + 10);
  if ( !v11 )
  {
    KeInitializeEvent(&Event, SynchronizationEvent, 0);
    *((_QWORD *)v10 + 7) = &Event;
  }
  v12 = a5;
  if ( a5 )
  {
    v16 = -1073741776;
    *((_QWORD *)v10 + 10) = &v16;
  }
  VIDMM_PAGING_QUEUE::AppendReadyPacket((VIDMM_PAGING_QUEUE *)a3, v10, (unsigned __int64 *)&Object);
  if ( v12 )
  {
    if ( v11 )
    {
      v14 = a4;
      VIDMM_GLOBAL::WaitForFences(this, &v14, (const unsigned __int64 *)&Object, 1u, 0LL);
    }
    else
    {
      Object = &Event;
      KeWaitForMultipleObjects(1u, &Object, WaitAny, Executive, 0, 0, 0LL, 0LL);
    }
  }
  return v16;
}
