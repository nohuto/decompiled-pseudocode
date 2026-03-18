/*
 * XREFs of ?ProcessSetInputSink@CInteraction@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTION_SETINPUTSINK@@@Z @ 0x1800AC82C
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009BE60 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?OnInputSinkChange@CVisual@@QEAAXXZ @ 0x1800A9FDC (-OnInputSinkChange@CVisual@@QEAAXXZ.c)
 *     ?UpdateInputSink@CInteraction@@QEAAJPEAX@Z @ 0x1800AC894 (-UpdateInputSink@CInteraction@@QEAAJPEAX@Z.c)
 *     McTemplateU0pp @ 0x180164430 (McTemplateU0pp.c)
 */

__int64 __fastcall CInteraction::ProcessSetInputSink(CInteraction *this, struct CResourceTable *a2, void **a3)
{
  signed int updated; // eax
  CVisual *v6; // rcx
  unsigned int v7; // ebx
  __int64 v8; // rdx

  updated = CInteraction::UpdateInputSink(this, a3[1]);
  v7 = updated;
  if ( updated < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((__int64)v6, 0LL, 0, updated, 0x19Fu, 0LL);
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
