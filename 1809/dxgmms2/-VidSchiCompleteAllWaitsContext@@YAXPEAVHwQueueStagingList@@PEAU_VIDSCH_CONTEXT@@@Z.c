/*
 * XREFs of ?VidSchiCompleteAllWaitsContext@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_CONTEXT@@@Z @ 0x1C0001288
 * Callers:
 *     VidSchiSignalRegisteredSyncObjects @ 0x1C0001180 (VidSchiSignalRegisteredSyncObjects.c)
 * Callees:
 *     VidSchiUnwaitWaitQueuePacket @ 0x1C0011F58 (VidSchiUnwaitWaitQueuePacket.c)
 *     VidSchiUnblockUnorderedWaitQueuePacket @ 0x1C00307C0 (VidSchiUnblockUnorderedWaitQueuePacket.c)
 */

void __fastcall VidSchiCompleteAllWaitsContext(struct HwQueueStagingList *a1, struct _VIDSCH_CONTEXT *a2)
{
  char *v2; // rsi
  char *v4; // rbx
  char *v5; // rdi
  int v6; // eax

  v2 = (char *)a2 + 656;
  v4 = (char *)*((_QWORD *)a2 + 82);
  while ( v4 != v2 )
  {
    v5 = v4 - 32;
    v4 = *(char **)v4;
    if ( *((_DWORD *)v5 + 12) == 4 )
    {
      v6 = *((_DWORD *)v5 + 68);
      if ( (v6 & 1) == 0 )
      {
        if ( (v6 & 4) != 0 )
          VidSchiUnblockUnorderedWaitQueuePacket(a1, v5, 0LL);
        VidSchiUnwaitWaitQueuePacket(a1, v5, 0LL);
      }
    }
  }
}
