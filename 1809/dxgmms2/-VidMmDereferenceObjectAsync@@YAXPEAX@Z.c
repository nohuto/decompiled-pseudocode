/*
 * XREFs of ?VidMmDereferenceObjectAsync@@YAXPEAX@Z @ 0x1C005F3E4
 * Callers:
 *     ??1VIDMM_RECYCLE_BLOCK@@QEAA@XZ @ 0x1C00598BC (--1VIDMM_RECYCLE_BLOCK@@QEAA@XZ.c)
 *     ?UncommitGlobalBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1C005FD80 (-UncommitGlobalBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_N@Z.c)
 *     ?FreeDeferredMapping@VIDMM_GLOBAL@@SAXPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C00A8C80 (-FreeDeferredMapping@VIDMM_GLOBAL@@SAXPEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 *     ?Free@VIDMM_PROCESS_HEAP@@UEAAXPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C00C3750 (-Free@VIDMM_PROCESS_HEAP@@UEAAXPEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 *     ?FreeBlock@VIDMM_PROCESS_HEAP@@AEAAXPEAU_VIDMM_PROCESS_HEAP_BLOCK@@@Z @ 0x1C00C39A0 (-FreeBlock@VIDMM_PROCESS_HEAP@@AEAAXPEAU_VIDMM_PROCESS_HEAP_BLOCK@@@Z.c)
 * Callees:
 *     McTemplateK0p @ 0x1C0026308 (McTemplateK0p.c)
 *     ?VidMmQueueAsyncOperation@@YAHPEAU_VIDMM_ASYNC_OPERATION@@@Z @ 0x1C005F428 (-VidMmQueueAsyncOperation@@YAHPEAU_VIDMM_ASYNC_OPERATION@@@Z.c)
 */

void __fastcall VidMmDereferenceObjectAsync(PVOID Object, __int64 a2, const GUID *a3)
{
  __int64 v4; // rcx
  const GUID *v5; // r8
  _BYTE v6[32]; // [rsp+20h] [rbp-48h] BYREF
  int v7; // [rsp+40h] [rbp-28h]
  PVOID v8; // [rsp+48h] [rbp-20h]

  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    McTemplateK0p((__int64)Object, &BeginVidMmDereferenceObjectAsync, a3, Object);
  v7 = 1;
  v8 = Object;
  if ( !(unsigned int)VidMmQueueAsyncOperation((struct _VIDMM_ASYNC_OPERATION *)v6) )
  {
    ObfDereferenceObject(Object);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0p(v4, &EndVidMmDereferenceObjectAsync, v5, Object);
  }
}
