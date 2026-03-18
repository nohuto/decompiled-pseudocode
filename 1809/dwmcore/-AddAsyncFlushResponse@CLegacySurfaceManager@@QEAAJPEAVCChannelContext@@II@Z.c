/*
 * XREFs of ?AddAsyncFlushResponse@CLegacySurfaceManager@@QEAAJPEAVCChannelContext@@II@Z @ 0x18007190C
 * Callers:
 *     ?Channel_AsyncFlush@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_CHANNEL_ASYNCFLUSH@@@Z @ 0x1800718F4 (-Channel_AsyncFlush@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_CHANN.c)
 * Callees:
 *     ?ReleaseResponseRef@CResponseItem@@QEAAXXZ @ 0x180071A24 (-ReleaseResponseRef@CResponseItem@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ModuleFailFastForHRESULT @ 0x1801E0F18 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CLegacySurfaceManager::AddAsyncFlushResponse(
        CLegacySurfaceManager *this,
        struct CChannelContext *a2,
        int a3)
{
  __int64 v5; // rsi
  LPVOID v6; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  v5 = *(_QWORD *)((*(__int64 (__fastcall **)(CLegacySurfaceManager *))(*(_QWORD *)this + 8LL))(this) + 72);
  v6 = HeapAlloc(WPF::g_processHeap, 0, 0x38uLL);
  if ( !v6 )
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
  *((_DWORD *)v6 + 2) = 0;
  *(_QWORD *)v6 = &CResponseItem::`vftable';
  *((_DWORD *)v6 + 4) = 1;
  *((_QWORD *)v6 + 3) = v5;
  *((_WORD *)v6 + 16) = 0;
  _InterlockedIncrement((volatile signed __int32 *)v6 + 2);
  *((_DWORD *)v6 + 12) = a3;
  *(_QWORD *)v6 = &CAsyncFlushResponse::`vftable';
  *((_QWORD *)v6 + 5) = a2;
  if ( a2 )
    _InterlockedIncrement((volatile signed __int32 *)a2 + 2);
  CResponseItem::ReleaseResponseRef((CResponseItem *)v6);
  return 0LL;
}
