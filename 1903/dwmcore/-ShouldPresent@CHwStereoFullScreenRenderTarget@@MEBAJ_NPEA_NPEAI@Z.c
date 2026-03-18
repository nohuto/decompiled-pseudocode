/*
 * XREFs of ?ShouldPresent@CHwStereoFullScreenRenderTarget@@MEBAJ_NPEA_NPEAI@Z @ 0x180166C30
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ShouldPresent@CHwDisplayRenderTarget@@MEBAJ_NPEA_NPEAI@Z @ 0x1800BAC50 (-ShouldPresent@CHwDisplayRenderTarget@@MEBAJ_NPEA_NPEAI@Z.c)
 *     McTemplateU0x @ 0x18015ECCC (McTemplateU0x.c)
 */

__int64 __fastcall CHwStereoFullScreenRenderTarget::ShouldPresent(
        CHwStereoFullScreenRenderTarget *this,
        char a2,
        bool *a3,
        unsigned int *a4)
{
  __int64 v7; // rcx
  signed int ShouldPresent; // ebx

  ShouldPresent = CHwDisplayRenderTarget::ShouldPresent(this, a2, a3, a4);
  if ( ShouldPresent < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, ShouldPresent, 0x187u, 0LL);
  }
  else if ( *((_BYTE *)this + 553) )
  {
    if ( *a3 )
    {
      *a4 |= 0x20u;
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
        McTemplateU0x(
          Microsoft_Windows_Dwm_Core_Provider_Context,
          &EVTDESC_ETWGUID_STEREO_TEMPORARYMONOEVENT,
          *((_QWORD *)this + 70));
    }
  }
  return (unsigned int)ShouldPresent;
}
