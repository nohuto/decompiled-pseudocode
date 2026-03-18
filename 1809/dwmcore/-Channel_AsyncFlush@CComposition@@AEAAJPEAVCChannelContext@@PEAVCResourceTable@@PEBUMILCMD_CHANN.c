/*
 * XREFs of ?Channel_AsyncFlush@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_CHANNEL_ASYNCFLUSH@@@Z @ 0x1800718F4
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CComposition::Channel_AsyncFlush(
        CComposition *this,
        struct CChannelContext *a2,
        struct CResourceTable *a3,
        const struct MILCMD_CHANNEL_ASYNCFLUSH *a4)
{
  return CLegacySurfaceManager::AddAsyncFlushResponse(
           (CLegacySurfaceManager *)(*((_QWORD *)this + 9) + 96LL),
           a2,
           *((_DWORD *)a4 + 1),
           (unsigned int)a4);
}
