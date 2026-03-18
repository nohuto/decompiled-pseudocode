/*
 * XREFs of ?VidMmSetAllocationFlipQueueReferencesPointer@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_MULTI_ALLOC@@PEAUVIDMM_FLIP_QUEUE_REFERENCES@@@Z @ 0x1C00B1C24
 * Callers:
 *     ?VidMmSetAllocationFlipQueueReferencesPointer@@YAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@PEAUVIDMM_FLIP_QUEUE_REFERENCES@@@Z @ 0x1C00246C0 (-VidMmSetAllocationFlipQueueReferencesPointer@@YAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@PEAU.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0002B50 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0002BD0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?ReleaseReference@VIDMM_FLIP_QUEUE_REFERENCES@@QEAAXI@Z @ 0x1C0025874 (-ReleaseReference@VIDMM_FLIP_QUEUE_REFERENCES@@QEAAXI@Z.c)
 */

void __fastcall VIDMM_GLOBAL::VidMmSetAllocationFlipQueueReferencesPointer(
        VIDMM_GLOBAL *this,
        __int64 **a2,
        struct VIDMM_FLIP_QUEUE_REFERENCES *a3)
{
  __int64 v4; // rsi
  __int64 v5; // rdi
  __int64 v6; // rdx
  int *v7; // rcx

  v4 = **a2;
  v5 = *(_QWORD *)(v4 + 504);
  DXGFASTMUTEX::Acquire(*(DXGFASTMUTEX **)(v4 + 320));
  v7 = *(int **)(v5 + 16);
  if ( v7 )
    VIDMM_FLIP_QUEUE_REFERENCES::ReleaseReference(v7, v6);
  *(_QWORD *)(v5 + 16) = a3;
  if ( a3 )
    _InterlockedIncrement((volatile signed __int32 *)a3);
  DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v4 + 320));
}
