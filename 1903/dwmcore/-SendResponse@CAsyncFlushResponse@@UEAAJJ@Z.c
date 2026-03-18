/*
 * XREFs of ?SendResponse@CAsyncFlushResponse@@UEAAJJ@Z @ 0x180028560
 * Callers:
 *     ?OnPresentComplete@CAsyncFlushResponse@@UEAAJXZ @ 0x180028550 (-OnPresentComplete@CAsyncFlushResponse@@UEAAJXZ.c)
 * Callees:
 *     ?SendResponseWorker@CAsyncFlushResponse@@CAJPEAVCChannelContext@@IJ@Z @ 0x180028598 (-SendResponseWorker@CAsyncFlushResponse@@CAJPEAVCChannelContext@@IJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CAsyncFlushResponse::SendResponse(CAsyncFlushResponse *this, int a2)
{
  unsigned int v2; // ebx
  int v3; // eax
  unsigned int v4; // ecx

  v2 = 0;
  if ( !*((_BYTE *)this + 33) )
  {
    *((_BYTE *)this + 33) = 1;
    v3 = CAsyncFlushResponse::SendResponseWorker(*((struct CChannelContext **)this + 5), *((_DWORD *)this + 12), a2);
    v2 = v3;
    if ( v3 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, v3, 0x58u, 0LL);
  }
  return v2;
}
