/*
 * XREFs of ?SendResponseWorker@CAsyncFlushResponse@@CAJPEAVCChannelContext@@IJ@Z @ 0x1800D3E48
 * Callers:
 *     ?AddAsyncFlushResponse@CLegacySurfaceManager@@QEAAJPEAVCChannelContext@@II@Z @ 0x1800CD428 (-AddAsyncFlushResponse@CLegacySurfaceManager@@QEAAJPEAVCChannelContext@@II@Z.c)
 *     ?SendResponse@CAsyncFlushResponse@@UEAAJJ@Z @ 0x1800D3E10 (-SendResponse@CAsyncFlushResponse@@UEAAJJ@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?PostMessageToChannel@CChannelContext@@QEAAJPEBUMIL_MESSAGE@@@Z @ 0x1800AAA84 (-PostMessageToChannel@CChannelContext@@QEAAJPEBUMIL_MESSAGE@@@Z.c)
 */

__int64 __fastcall CAsyncFlushResponse::SendResponseWorker(struct CChannelContext *a1, int a2, __int64 a3)
{
  signed int v3; // eax
  __int64 v4; // rcx
  unsigned int v5; // ebx
  _DWORD v7[5]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v8; // [rsp+44h] [rbp-14h]

  v7[0] = 13;
  v7[4] = 0;
  v7[1] = 0;
  v8 = 0LL;
  v7[2] = a2;
  v7[3] = a3;
  v3 = CChannelContext::PostMessageToChannel(a1, (const struct MIL_MESSAGE *)v7, a3);
  v5 = v3;
  if ( v3 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, v3, 0x74u, 0LL);
  return v5;
}
