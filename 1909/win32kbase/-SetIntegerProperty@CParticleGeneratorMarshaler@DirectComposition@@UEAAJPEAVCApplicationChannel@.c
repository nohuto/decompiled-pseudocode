/*
 * XREFs of ?SetIntegerProperty@CParticleGeneratorMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C01C2C70
 * Callers:
 *     <none>
 * Callees:
 *     ?SetIntegerProperty@CPropertyChangeResourceMarshaler@DirectComposition@@MEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C007DEC0 (-SetIntegerProperty@CPropertyChangeResourceMarshaler@DirectComposition@@MEAAJPEAVCApplicationCha.c)
 */

__int64 __fastcall DirectComposition::CParticleGeneratorMarshaler::SetIntegerProperty(
        DirectComposition::CParticleGeneratorMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        __int64 a4,
        bool *a5)
{
  unsigned int v5; // r10d
  int v7; // edi

  v5 = 0;
  v7 = 0;
  *a5 = 0;
  if ( a3 == 2 )
  {
    if ( *((_BYTE *)this + 80) == (a4 != 0) )
      goto LABEL_9;
    v7 = 512;
    *((_BYTE *)this + 80) = a4 != 0;
    goto LABEL_8;
  }
  if ( a3 == 17 )
  {
    if ( *((_BYTE *)this + 196) == (a4 != 0) )
      goto LABEL_9;
    v7 = 0x1000000;
    *((_BYTE *)this + 196) = a4 != 0;
LABEL_8:
    *a5 = 1;
    goto LABEL_9;
  }
  v5 = DirectComposition::CPropertyChangeResourceMarshaler::SetIntegerProperty(this, a2, a3, a4, a5);
LABEL_9:
  *((_DWORD *)this + 4) |= v7;
  return v5;
}
