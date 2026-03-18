/*
 * XREFs of ?AddAsyncFlushResponse@CLegacySurfaceManager@@QEAAJPEAVCChannelContext@@II@Z @ 0x1800CD538
 * Callers:
 *     ?Channel_AsyncFlush@CGlobalComposition@@UEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_CHANNEL_ASYNCFLUSH@@@Z @ 0x1800CD520 (-Channel_AsyncFlush@CGlobalComposition@@UEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMIL.c)
 * Callees:
 *     ?SendResponseWorker@CAsyncFlushResponse@@CAJPEAVCChannelContext@@IJ@Z @ 0x180028598 (-SendResponseWorker@CAsyncFlushResponse@@CAJPEAVCChannelContext@@IJ@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1800881C4 (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ReleaseResponseRef@CResponseItem@@UEAAXXZ @ 0x1800CD650 (-ReleaseResponseRef@CResponseItem@@UEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CLegacySurfaceManager::AddAsyncFlushResponse(
        CLegacySurfaceManager *this,
        struct CChannelContext *a2,
        int a3)
{
  unsigned int v5; // edi
  __int64 v6; // rbp
  LPVOID v7; // rax
  const unsigned int *v8; // rcx

  v5 = 0;
  v6 = *(_QWORD *)((*(__int64 (__fastcall **)(CLegacySurfaceManager *))(*(_QWORD *)this + 8LL))(this) + 72);
  v7 = operator new(0x38uLL);
  if ( v7 )
  {
    *((_DWORD *)v7 + 2) = 0;
    *(_QWORD *)v7 = &CResponseItem::`vftable';
    *((_DWORD *)v7 + 4) = 1;
    *((_QWORD *)v7 + 3) = v6;
    *((_WORD *)v7 + 16) = 0;
    _InterlockedIncrement((volatile signed __int32 *)v7 + 2);
    *((_DWORD *)v7 + 12) = a3;
    v8 = &CAsyncFlushResponse::`vftable';
    *(_QWORD *)v7 = &CAsyncFlushResponse::`vftable';
    *((_QWORD *)v7 + 5) = a2;
    if ( a2 )
      _InterlockedIncrement((volatile signed __int32 *)a2 + 2);
  }
  if ( v7 )
  {
    CResponseItem::ReleaseResponseRef((CResponseItem *)v7);
  }
  else
  {
    v5 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)v8, 0LL, 0, 0x8007000E, 0x146u, 0LL);
    CAsyncFlushResponse::SendResponseWorker(a2, a3, -2147024882);
  }
  return v5;
}
