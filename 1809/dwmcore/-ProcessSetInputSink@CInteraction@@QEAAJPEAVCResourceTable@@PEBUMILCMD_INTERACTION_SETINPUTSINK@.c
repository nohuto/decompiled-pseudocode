/*
 * XREFs of ?ProcessSetInputSink@CInteraction@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTION_SETINPUTSINK@@@Z @ 0x18009EFE4
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?UpdateInputSink@CInteraction@@QEAAJPEAX@Z @ 0x18009F04C (-UpdateInputSink@CInteraction@@QEAAJPEAX@Z.c)
 *     ?OnInputSinkChange@CVisual@@QEAAXXZ @ 0x18009FB94 (-OnInputSinkChange@CVisual@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     McTemplateU0px @ 0x18019D638 (McTemplateU0px.c)
 */

__int64 __fastcall CInteraction::ProcessSetInputSink(CInteraction *this, struct CResourceTable *a2, void **a3)
{
  int updated; // eax
  __int64 v6; // rdx
  CVisual *v7; // rcx
  unsigned int v8; // ebx
  __int64 v9; // rax

  updated = CInteraction::UpdateInputSink(this, a3[1]);
  v8 = updated;
  if ( updated < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v7, 0LL, 0, updated, 0x1A1u);
  }
  else
  {
    v9 = *((_QWORD *)this + 13);
    if ( v9 )
    {
      v7 = *(CVisual **)(v9 + 16);
      if ( v7 )
        CVisual::OnInputSinkChange(v7);
    }
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x1000) != 0 )
      McTemplateU0px(v7, v6, (char *)this + 8, a3[1]);
  }
  return v8;
}
