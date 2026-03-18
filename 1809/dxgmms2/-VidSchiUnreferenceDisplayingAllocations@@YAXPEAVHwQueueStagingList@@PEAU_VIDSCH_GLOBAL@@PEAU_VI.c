/*
 * XREFs of ?VidSchiUnreferenceDisplayingAllocations@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@G@Z @ 0x1C00166A8
 * Callers:
 *     VidSchiSetFlipDevice @ 0x1C0002548 (VidSchiSetFlipDevice.c)
 *     VidSchiUnreferenceDisplayingAllocationsForThisEntry @ 0x1C0016678 (VidSchiUnreferenceDisplayingAllocationsForThisEntry.c)
 * Callees:
 *     VidSchiCheckPendingDeviceCommand @ 0x1C00070E0 (VidSchiCheckPendingDeviceCommand.c)
 *     VidSchiSignalFlipEvents @ 0x1C000C960 (VidSchiSignalFlipEvents.c)
 *     VidSchiUpdateFlipDeviceStatus @ 0x1C001681C (VidSchiUpdateFlipDeviceStatus.c)
 *     ?VidSchiSignalSyncObjectsFromCpu@@YAJPEAVHwQueueStagingList@@IPEAPEAU_VIDSCH_SYNC_OBJECT@@U_D3DDDICB_SIGNALFLAGS@@PEB_K@Z @ 0x1C00315C0 (-VidSchiSignalSyncObjectsFromCpu@@YAJPEAVHwQueueStagingList@@IPEAPEAU_VIDSCH_SYNC_OBJECT@@U_D3DD.c)
 */

void __fastcall VidSchiUnreferenceDisplayingAllocations(
        struct HwQueueStagingList *a1,
        struct _VIDSCH_GLOBAL *a2,
        struct _VIDSCH_PRESENT_INFO *a3,
        __int16 a4)
{
  int v4; // esi
  int v5; // edi
  char v7; // cl
  bool v8; // zf
  int v9; // eax
  unsigned int v10; // r13d
  char v11; // r15
  __int64 v12; // r14
  __int64 v13; // rbp
  __int64 v14; // rax
  __int64 v15; // r8
  __int64 v16; // rax
  __int64 v17; // rax
  int updated; // eax
  _QWORD *v19; // r12
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rax
  char v23; // [rsp+30h] [rbp-48h]
  char v26; // [rsp+98h] [rbp+20h]

  if ( a4 )
  {
    v26 = 0;
    LOWORD(v4) = 0;
    LOWORD(v5) = a4;
    do
    {
      v7 = -1;
      v8 = !_BitScanForward((unsigned int *)&v9, (unsigned __int16)v5);
      v10 = 0;
      if ( !v8 )
        v7 = v9;
      v11 = v7;
      v23 = v7;
      if ( *((_WORD *)a3 + 16573) )
      {
        v26 = 1;
        v12 = (__int64)v7 << 6;
        do
        {
          v13 = 48 * (v12 + v10);
          v14 = *(_QWORD *)((char *)a3 + v13 + 2432);
          v15 = *(_QWORD *)(v14 + 24);
          if ( v15 )
          {
            v19 = (_QWORD *)((char *)a3 + v13 + 2464);
            if ( *v19
              && (int)VidSchiSignalSyncObjectsFromCpu(
                        a1,
                        1u,
                        (struct _VIDSCH_SYNC_OBJECT **)(v15 + 8),
                        0,
                        (const unsigned __int64 *)((char *)a3 + v13 + 2464)) < 0 )
            {
              v22 = WdLogNewEntry5_WdAssertion(v21, v20);
              *(_QWORD *)(v22 + 24) = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)((char *)a3 + v13 + 2432) + 24LL) + 8LL);
              *(_QWORD *)(v22 + 32) = *v19;
              WdLogEvent5_WdAssertion(v22);
            }
          }
          else
          {
            v16 = *(_QWORD *)(v14 + 16);
            if ( v16 )
              _InterlockedDecrement((volatile signed __int32 *)(v16 + 8));
          }
          VidSchiCheckPendingDeviceCommand(*((_QWORD **)a3 + 2));
          *(_QWORD *)((char *)a3 + v13 + 2424) = 0LL;
          v17 = v12 + v10 + 51LL;
          *(_QWORD *)((char *)a3 + v13 + 2432) = 0LL;
          *(_WORD *)((char *)a3 + v13 + 2456) = 0;
          ++v10;
          *((_QWORD *)a3 + 6 * v17) = 0LL;
        }
        while ( v10 < *((unsigned __int16 *)a3 + 16573) );
        v11 = v23;
      }
      v5 = (unsigned __int16)v5 & ~(1 << v11);
      v4 = (unsigned __int16)v4 | (1 << v11);
      *((_WORD *)a3 + 16572) &= ~(1 << v11);
    }
    while ( (_WORD)v5 );
    if ( v26 )
    {
      updated = VidSchiUpdateFlipDeviceStatus(a3);
      VidSchiSignalFlipEvents((__int64)a3, updated, a4);
      *((_WORD *)a3 + 16574) &= ~(_WORD)v4;
    }
  }
}
