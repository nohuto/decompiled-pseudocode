/*
 * XREFs of ?SetVisual@CInteraction@@QEAAJPEAVCVisual@@@Z @ 0x18002B208
 * Callers:
 *     ?SetInteraction@CVisual@@IEAAJPEAVCInteraction@@@Z @ 0x18002B0D8 (-SetInteraction@CVisual@@IEAAJPEAVCInteraction@@@Z.c)
 *     ?Release@CVisual@@UEAAKXZ @ 0x18008AA20 (-Release@CVisual@@UEAAKXZ.c)
 * Callees:
 *     ??$ReleaseInterface@VCDisplay@@@@YAXAEAPEAVCDisplay@@@Z @ 0x18002B298 (--$ReleaseInterface@VCDisplay@@@@YAXAEAPEAVCDisplay@@@Z.c)
 *     ?Create@?$CWeakReference@VCVisual@@@@SAJPEAVCVisual@@PEAPEAV1@@Z @ 0x18002B314 (-Create@-$CWeakReference@VCVisual@@@@SAJPEAVCVisual@@PEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     McTemplateU0pp @ 0x180165B20 (McTemplateU0pp.c)
 */

__int64 __fastcall CInteraction::SetVisual(CInteraction *this, struct CVisual *a2)
{
  __int64 v2; // rbx
  char *v3; // rsi
  __int64 v4; // rax
  unsigned int v7; // edi
  struct CVisual *v8; // rax
  int v9; // eax

  v2 = 0LL;
  v3 = (char *)this + 104;
  v4 = *((_QWORD *)this + 13);
  v7 = 0;
  if ( v4 )
    v8 = *(struct CVisual **)(v4 + 16);
  else
    v8 = 0LL;
  if ( a2 != v8
    && (ReleaseInterface<CDisplay>((char *)this + 104), a2)
    && (v9 = CWeakReference<CVisual>::Create(a2, v3), v7 = v9, v9 < 0) )
  {
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, v9, 0xC9u, 0LL);
  }
  else if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x1000) != 0 )
  {
    if ( *(_QWORD *)v3 )
      v2 = *(_QWORD *)(*(_QWORD *)v3 + 16LL);
    McTemplateU0pp(this, &INTERACTION_VISUAL_UPDATE, (char *)this + 8, v2);
  }
  return v7;
}
