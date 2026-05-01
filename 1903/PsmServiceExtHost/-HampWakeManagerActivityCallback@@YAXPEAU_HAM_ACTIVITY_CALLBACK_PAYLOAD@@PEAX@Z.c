/*
 * XREFs of ?HampWakeManagerActivityCallback@@YAXPEAU_HAM_ACTIVITY_CALLBACK_PAYLOAD@@PEAX@Z @ 0x180039FB0
 * Callers:
 *     <none>
 * Callees:
 *     ?HampWakeManagerFindContextByActivityHandle@@YAPEAU_HAM_HOST_WAKE_CONTEXT@@PEAU_HAM_WAKE_REFERENCE_MANAGER@@_K@Z @ 0x180002F8C (-HampWakeManagerFindContextByActivityHandle@@YAPEAU_HAM_HOST_WAKE_CONTEXT@@PEAU_HAM_WAKE_REFEREN.c)
 *     ?HampWakeContextReleaseLockExclusive@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@@Z @ 0x180013644 (-HampWakeContextReleaseLockExclusive@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@@Z.c)
 *     ?HampWakeContextQueueWorker@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@@Z @ 0x180013694 (-HampWakeContextQueueWorker@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@@Z.c)
 *     ?HampWakeContextAcquireLockExclusive@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@@Z @ 0x1800136DC (-HampWakeContextAcquireLockExclusive@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@@Z.c)
 *     ?HampWakeManagerReleaseLockShared@@YAXPEAU_HAM_WAKE_REFERENCE_MANAGER@@@Z @ 0x18003A1F0 (-HampWakeManagerReleaseLockShared@@YAXPEAU_HAM_WAKE_REFERENCE_MANAGER@@@Z.c)
 *     ?HampWakeManagerAcquireLockShared@@YAXPEAU_HAM_WAKE_REFERENCE_MANAGER@@@Z @ 0x18003A21C (-HampWakeManagerAcquireLockShared@@YAXPEAU_HAM_WAKE_REFERENCE_MANAGER@@@Z.c)
 */

void __fastcall HampWakeManagerActivityCallback(
        struct _HAM_ACTIVITY_CALLBACK_PAYLOAD *a1,
        struct _HAM_WAKE_REFERENCE_MANAGER *a2)
{
  int v2; // eax
  struct _HAM_HOST_WAKE_CONTEXT *ContextByActivityHandle; // rax
  struct _HAM_HOST_WAKE_CONTEXT *v6; // rbx

  v2 = *((_DWORD *)a1 + 4);
  if ( v2 > 0 && v2 <= 2 )
  {
    HampWakeManagerAcquireLockShared(a2);
    ContextByActivityHandle = HampWakeManagerFindContextByActivityHandle(a2, *(_QWORD *)a1);
    v6 = ContextByActivityHandle;
    if ( ContextByActivityHandle )
    {
      HampWakeContextAcquireLockExclusive(ContextByActivityHandle);
      *((_BYTE *)v6 + 185) |= 4u;
      HampWakeContextQueueWorker(v6);
      HampWakeContextReleaseLockExclusive(v6);
    }
    HampWakeManagerReleaseLockShared(a2);
  }
}
