/*
 * XREFs of ?VidSchiProcessIsrVSyncMultiPlaneOverlay2@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@PEAU_DXGKARGCB_NOTIFY_INTERRUPT_DATA@@PEAU_VIDSCH_VSYNC_COOKIE@@@Z @ 0x1C002B54C
 * Callers:
 *     VidSchiProcessIsrVSync @ 0x1C000BB40 (VidSchiProcessIsrVSync.c)
 * Callees:
 *     memset @ 0x1C0018980 (memset.c)
 */

void __fastcall VidSchiProcessIsrVSyncMultiPlaneOverlay2(
        struct _VIDSCH_GLOBAL *a1,
        struct _VIDSCH_PRESENT_INFO *a2,
        struct _DXGKARGCB_NOTIFY_INTERRUPT_DATA *a3,
        struct _VIDSCH_VSYNC_COOKIE *a4)
{
  _QWORD *v7; // rax
  __int64 v8; // rcx
  __int64 i; // rdx
  DXGK_MULTIPLANE_OVERLAY_VSYNC_INFO *pMultiPlaneOverlayVsyncInfo; // r14
  __int64 v11; // rsi
  __int64 v12; // rax
  _QWORD *v13; // rax

  if ( a3->DmaCompleted.EngineOrdinal > *((_DWORD *)a1 + 35) )
  {
    v7 = (_QWORD *)WdLogNewEntry5_WdCriticalError(a1, a2);
    v7[3] = 281LL;
    v7[4] = 14LL;
    v7[5] = a1;
    v7[6] = a3->DmaCompleted.EngineOrdinal;
    v7[7] = *((unsigned int *)a1 + 35);
    WdLogEvent5_WdCriticalError(v7);
    __debugbreak();
  }
  *((_QWORD *)a2 + 4147) = a3->MiracastEncodeChunkCompleted.pPrivateDriverData;
  *((_BYTE *)a4 + 104) ^= (*((_BYTE *)a4 + 104) ^ (a3->Flags.Value >> 1)) & 1;
  memset((char *)a4 + 112, 0, 0xA0uLL);
  for ( i = 0LL;
        (unsigned int)i < a3->DmaCompleted.EngineOrdinal;
        *((_DWORD *)a4 + 4 * *(&pMultiPlaneOverlayVsyncInfo->LayerIndex + 2 * v11) + 30) = *((_DWORD *)&pMultiPlaneOverlayVsyncInfo->PlaneAttributes.Flags.0
                                                                                           + 2 * v11) )
  {
    pMultiPlaneOverlayVsyncInfo = a3->CrtcVsyncWithMultiPlaneOverlay.pMultiPlaneOverlayVsyncInfo;
    v11 = 3 * i;
    v12 = *(&pMultiPlaneOverlayVsyncInfo->LayerIndex + 6 * i);
    if ( (unsigned int)v12 >= *((_DWORD *)a1 + 35) )
    {
      v13 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v8, i);
      v13[3] = 281LL;
      v13[4] = 14LL;
      v13[5] = a1;
      v13[6] = *(&pMultiPlaneOverlayVsyncInfo->LayerIndex + 2 * v11);
      v13[7] = *((unsigned int *)a1 + 35);
      WdLogEvent5_WdCriticalError(v13);
      __debugbreak();
      JUMPOUT(0x1C002B687LL);
    }
    i = (unsigned int)(i + 1);
    *((_QWORD *)a4 + 2 * v12 + 14) = *(&pMultiPlaneOverlayVsyncInfo->PhysicalAddress.QuadPart + v11);
    v8 = 2LL * *(&pMultiPlaneOverlayVsyncInfo->LayerIndex + 2 * v11);
  }
}
