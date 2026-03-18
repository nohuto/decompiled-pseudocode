/*
 * XREFs of ?ProcessSetInputSink@CInteraction@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTION_SETINPUTSINK@@@Z @ 0x18002944C
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009D840 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?UpdateInputSink@CInteraction@@QEAAJPEAX@Z @ 0x1800294B4 (-UpdateInputSink@CInteraction@@QEAAJPEAX@Z.c)
 *     ?OnInputSinkChange@CVisual@@QEAAXXZ @ 0x18002B1A0 (-OnInputSinkChange@CVisual@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     McTemplateU0pp @ 0x180165B20 (McTemplateU0pp.c)
 */

__int64 __fastcall CInteraction::ProcessSetInputSink(CInteraction *this, struct CResourceTable *a2, void **a3)
{
  int updated; // eax
  CVisual *v6; // rcx
  unsigned int v7; // ebx
  __int64 v8; // rdx

  updated = CInteraction::UpdateInputSink(this, a3[1]);
  v7 = updated;
  if ( updated < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v6, 0LL, 0, updated, 0x19Fu, 0LL);
  }
  else
  {
    v8 = *((_QWORD *)this + 13);
    if ( v8 )
    {
      v6 = *(CVisual **)(v8 + 16);
      if ( v6 )
        CVisual::OnInputSinkChange(v6);
    }
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x1000) != 0 )
      McTemplateU0pp(v6, &EVTDESC_INTERACTION_SET_INPUT_SINK, (char *)this + 8, a3[1]);
  }
  return v7;
}
