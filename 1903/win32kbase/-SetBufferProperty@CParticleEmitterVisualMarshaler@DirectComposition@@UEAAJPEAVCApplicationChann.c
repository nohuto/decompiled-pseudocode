/*
 * XREFs of ?SetBufferProperty@CParticleEmitterVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C01B6690
 * Callers:
 *     <none>
 * Callees:
 *     ?SetBufferProperty@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C0098580 (-SetBufferProperty@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA.c)
 */

__int64 __fastcall DirectComposition::CParticleEmitterVisualMarshaler::SetBufferProperty(
        DirectComposition::CParticleEmitterVisualMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        unsigned int *a4,
        unsigned __int64 a5,
        bool *a6)
{
  unsigned int v6; // r10d
  int v8; // edi

  v6 = 0;
  v8 = 0;
  *a6 = 0;
  switch ( a3 )
  {
    case 'B':
      if ( a4 && a5 == 12 )
      {
        v8 = 0x2000;
        *((_QWORD *)this + 52) = *(_QWORD *)a4;
        *((_DWORD *)this + 106) = a4[2];
        goto LABEL_14;
      }
      goto LABEL_15;
    case 'H':
      if ( a4 && a5 == 12 )
      {
        v8 = 0x8000;
        *(_QWORD *)((char *)this + 404) = *(_QWORD *)a4;
        *((_DWORD *)this + 103) = a4[2];
        goto LABEL_14;
      }
LABEL_15:
      v6 = -1073741811;
      goto LABEL_16;
    case 'L':
      if ( a4 && a5 == 12 )
      {
        v8 = 0x10000;
        *((_QWORD *)this + 49) = *(_QWORD *)a4;
        *((_DWORD *)this + 100) = a4[2];
LABEL_14:
        *a6 = 1;
        goto LABEL_16;
      }
      goto LABEL_15;
  }
  v6 = DirectComposition::CVisualMarshaler::SetBufferProperty(this, a2, a3, a4, a5, a6);
LABEL_16:
  *((_DWORD *)this + 125) |= v8;
  return v6;
}
