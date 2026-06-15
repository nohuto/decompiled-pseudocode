/*
 * XREFs of ??0CSpatialAudioDolbyStereo@@QEAA@PEAUHINSTANCE__@@@Z @ 0x18004FDC4
 * Callers:
 *     ?CreateTopologyList@CSpatialAudioTechnologies@@QEAAJPEAUHINSTANCE__@@@Z @ 0x18004F914 (-CreateTopologyList@CSpatialAudioTechnologies@@QEAAJPEAUHINSTANCE__@@@Z.c)
 * Callees:
 *     ??0CSpatialAudioTech@@QEAA@XZ @ 0x180050DCC (--0CSpatialAudioTech@@QEAA@XZ.c)
 */

CSpatialAudioDolbyStereo *__fastcall CSpatialAudioDolbyStereo::CSpatialAudioDolbyStereo(
        CSpatialAudioDolbyStereo *this,
        HINSTANCE a2)
{
  __int64 v4; // rdi
  char *v5; // rbx
  char *v6; // rbx
  __int64 v7; // rdi
  signed __int64 v9; // rcx
  __int16 v10; // ax
  char *v11; // rax
  signed __int64 v12; // rcx
  __int16 v13; // ax
  char *v14; // rax

  CSpatialAudioTech::CSpatialAudioTech(this);
  v4 = 128LL;
  *(_QWORD *)this = &CSpatialAudioDolbyStereo::`vftable';
  v5 = (char *)this + 32;
  *((IID *)this + 1) = DOLBY_ATMOS_TWOSPEAKER_SPATIAL_ENCODER;
  if ( LoadStringW(a2, 0x192u, (LPWSTR)this + 16, 128) <= 0 )
  {
    v9 = (char *)L"Stereo" - v5;
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
  if ( LoadStringW(a2, 0x1B0u, (LPWSTR)this + 144, 256) <= 0 )
  {
    v12 = (char *)L"ms-windows-store://pdp/?productid=9n0866fs04w8" - v6;
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
