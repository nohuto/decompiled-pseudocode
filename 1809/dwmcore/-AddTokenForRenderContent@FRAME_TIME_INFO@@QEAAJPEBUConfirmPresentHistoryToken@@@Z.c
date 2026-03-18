/*
 * XREFs of ?AddTokenForRenderContent@FRAME_TIME_INFO@@QEAAJPEBUConfirmPresentHistoryToken@@@Z @ 0x180151CC8
 * Callers:
 *     ?RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x1800AF030 (-RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180022680 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall FRAME_TIME_INFO::AddTokenForRenderContent(
        FRAME_TIME_INFO *this,
        const struct ConfirmPresentHistoryToken *a2)
{
  _OWORD *v4; // rax
  int v5; // ebx
  unsigned int v6; // eax
  unsigned int v7; // edx
  __int64 v8; // rcx
  int v9; // eax
  void *v11; // [rsp+50h] [rbp+18h] BYREF

  v11 = 0LL;
  v4 = HeapAlloc(WPF::g_processHeap, 0, 0x20uLL);
  v5 = 0;
  v11 = v4;
  if ( !v4 )
    v5 = -2147024882;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(2147942414LL, 0LL, 0, v5, 0x40u);
LABEL_13:
    if ( v11 )
      WPF::ProcessHeapImpl::Free(v11);
    return (unsigned int)v5;
  }
  *v4 = *(_OWORD *)a2;
  v4[1] = *((_OWORD *)a2 + 1);
  v6 = *((_DWORD *)this + 12);
  v7 = v6 + 1;
  v5 = v6 + 1 < v6 ? 0x80070216 : 0;
  if ( v6 + 1 < v6 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(2147942414LL, 0LL, 0, v5, 0xB5u);
  }
  else if ( v7 > *((_DWORD *)this + 11) )
  {
    v9 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 24, 8, 1, &v11);
    v5 = v9;
    if ( v9 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v9, 0xC0u);
  }
  else
  {
    v8 = v6;
    *(_QWORD *)(*((_QWORD *)this + 3) + 8LL * v6) = v11;
    *((_DWORD *)this + 12) = v7;
  }
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v5, 0x48u);
    goto LABEL_13;
  }
  return (unsigned int)v5;
}
