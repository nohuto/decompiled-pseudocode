/*
 * XREFs of ??0CSpatialAudioDtsxStereo@@QEAA@PEAUHINSTANCE__@@@Z @ 0x180054510
 * Callers:
 *     ?CreateTopologyList@CSpatialAudioTechnologies@@QEAAJPEAUHINSTANCE__@@@Z @ 0x180053F90 (-CreateTopologyList@CSpatialAudioTechnologies@@QEAAJPEAUHINSTANCE__@@@Z.c)
 * Callees:
 *     ??0CSpatialAudioTech@@QEAA@XZ @ 0x1800545C0 (--0CSpatialAudioTech@@QEAA@XZ.c)
 */

CSpatialAudioDtsxStereo *__fastcall CSpatialAudioDtsxStereo::CSpatialAudioDtsxStereo(
        CSpatialAudioDtsxStereo *this,
        HINSTANCE a2)
{
  __int64 v4; // rsi
  char *v5; // rdi
  char *v6; // rdi
  __int64 v7; // rsi
  signed __int64 v9; // rcx
  __int16 v10; // ax
  char *v11; // rax
  signed __int64 v12; // rcx
  __int16 v13; // ax
  char *v14; // rax

  CSpatialAudioTech::CSpatialAudioTech(this);
  v4 = 128LL;
  *(_QWORD *)this = &CSpatialAudioDtsxStereo::`vftable';
  v5 = (char *)this + 32;
  *((IID *)this + 1) = DTSX_TWOSPEAKER_SPATIAL_ENCODER;
  if ( LoadStringW(a2, 0x195u, (LPWSTR)this + 16, 128) <= 0 )
  {
    v9 = (char *)L"DTS:X Ultra" - v5;
    do
    {
      if ( v4 == -2147483518 )
        break;
      v10 = *(_WORD *)&v5[v9];
      if ( !v10 )
        break;
      *(_WORD *)v5 = v10;
      v5 += 2;
      --v4;
    }
    while ( v4 );
    v11 = v5 - 2;
    if ( v4 )
      v11 = v5;
    *(_WORD *)v11 = 0;
  }
  v6 = (char *)this + 288;
  v7 = 256LL;
  if ( LoadStringW(a2, 0x1B4u, (LPWSTR)this + 144, 256) <= 0 )
  {
    v12 = (char *)L"ms-windows-store://pdp/?productid=9NNRDVCB3J7W" - v6;
    do
    {
      if ( v7 == -2147483390 )
        break;
      v13 = *(_WORD *)&v6[v12];
      if ( !v13 )
        break;
      *(_WORD *)v6 = v13;
      v6 += 2;
      --v7;
    }
    while ( v7 );
    v14 = v6 - 2;
    if ( v7 )
      v14 = v6;
    *(_WORD *)v14 = 0;
  }
  return this;
}
