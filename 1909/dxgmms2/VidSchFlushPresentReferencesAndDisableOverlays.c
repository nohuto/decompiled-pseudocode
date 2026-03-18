/*
 * XREFs of VidSchFlushPresentReferencesAndDisableOverlays @ 0x1C00CB1F0
 * Callers:
 *     <none>
 * Callees:
 *     ?VidSchFlushQueuePacketsInternal@@YAXPEAU_VIDSCH_GLOBAL@@W4_VIDSCH_FLUSH_PACKET_TYPE@@IE_N@Z @ 0x1C00178DC (-VidSchFlushQueuePacketsInternal@@YAXPEAU_VIDSCH_GLOBAL@@W4_VIDSCH_FLUSH_PACKET_TYPE@@IE_N@Z.c)
 *     VidSchiSuspendFlipQueues @ 0x1C00CA554 (VidSchiSuspendFlipQueues.c)
 */

void __fastcall VidSchFlushPresentReferencesAndDisableOverlays(
        KSPIN_LOCK *a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        int a5)
{
  unsigned int v5; // edi
  int v6; // r14d
  unsigned int v7; // ebx
  unsigned int v9; // ebp

  v5 = 0;
  v6 = a4;
  v7 = a2;
  if ( a2 )
  {
    do
    {
      v9 = v7;
      if ( (v7 & 1) != 0 )
        VidSchFlushQueuePacketsInternal(a1, 1u, v5, a4, _bittest(&v6, v5));
      v7 >>= 1;
      ++v5;
    }
    while ( v9 >= 2 );
  }
  if ( a5 )
    VidSchiSuspendFlipQueues((__int64)a1, a5);
}
