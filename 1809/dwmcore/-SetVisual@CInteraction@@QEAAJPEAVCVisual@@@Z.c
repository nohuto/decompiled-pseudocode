/*
 * XREFs of ?SetVisual@CInteraction@@QEAAJPEAVCVisual@@@Z @ 0x18009FBD0
 * Callers:
 *     ?Release@CVisual@@UEAAKXZ @ 0x18009F590 (-Release@CVisual@@UEAAKXZ.c)
 *     ?SetInteraction@CVisual@@IEAAJPEAVCInteraction@@@Z @ 0x18009FACC (-SetInteraction@CVisual@@IEAAJPEAVCInteraction@@@Z.c)
 * Callees:
 *     ??$ReleaseInterface@VCDisplay@@@@YAXAEAPEAVCDisplay@@@Z @ 0x18006E0A0 (--$ReleaseInterface@VCDisplay@@@@YAXAEAPEAVCDisplay@@@Z.c)
 *     ?Create@?$CWeakReference@VCVisual@@@@SAJPEAVCVisual@@PEAPEAV1@@Z @ 0x1800A0000 (-Create@-$CWeakReference@VCVisual@@@@SAJPEAVCVisual@@PEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     McTemplateU0pp @ 0x18014C198 (McTemplateU0pp.c)
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
    && (ReleaseInterface<CDisplay>((__int64 *)this + 13), a2)
    && (v9 = CWeakReference<CVisual>::Create(a2, v3), v7 = v9, v9 < 0) )
  {
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, v9, 0xCCu);
  }
  else if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x1000) != 0 )
  {
    if ( *(_QWORD *)v3 )
      v2 = *(_QWORD *)(*(_QWORD *)v3 + 16LL);
    McTemplateU0pp(this, &INTERACTION_VISUAL_UPDATE, (char *)this + 8, v2);
  }
  return v7;
}
