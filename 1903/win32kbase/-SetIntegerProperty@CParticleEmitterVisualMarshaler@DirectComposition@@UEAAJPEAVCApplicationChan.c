/*
 * XREFs of ?SetIntegerProperty@CParticleEmitterVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C01B6AD0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetIntegerProperty@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C00815A0 (-SetIntegerProperty@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@.c)
 */

__int64 __fastcall DirectComposition::CParticleEmitterVisualMarshaler::SetIntegerProperty(
        DirectComposition::CParticleEmitterVisualMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        unsigned int a3,
        __int64 a4,
        bool *a5)
{
  unsigned int v5; // r10d
  int v7; // edi

  v5 = 0;
  v7 = 0;
  *a5 = 0;
  switch ( a3 )
  {
    case '7':
      if ( *((_DWORD *)this + 112) == a4 )
        goto LABEL_15;
      *((_DWORD *)this + 112) = a4;
      v7 = 4;
      goto LABEL_14;
    case ':':
      if ( *((_DWORD *)this + 113) == a4 )
        goto LABEL_15;
      *((_DWORD *)this + 113) = a4;
      v7 = 64;
      goto LABEL_14;
    case 'A':
      if ( *((_DWORD *)this + 111) == a4 )
        goto LABEL_15;
      *((_DWORD *)this + 111) = a4;
      v7 = 4096;
      goto LABEL_14;
    case 'T':
      if ( *((_DWORD *)this + 124) == a4 )
        goto LABEL_15;
      *((_DWORD *)this + 124) = a4;
      v7 = 0x800000;
LABEL_14:
      *a5 = 1;
      goto LABEL_15;
  }
  v5 = DirectComposition::CVisualMarshaler::SetIntegerProperty(this, a2, a3, a4, a5);
LABEL_15:
  *((_DWORD *)this + 125) |= v7;
  return v5;
}
