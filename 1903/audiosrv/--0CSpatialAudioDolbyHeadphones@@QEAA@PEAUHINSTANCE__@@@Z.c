/*
 * XREFs of ??0CSpatialAudioDolbyHeadphones@@QEAA@PEAUHINSTANCE__@@@Z @ 0x18004FCF4
 * Callers:
 *     ?CreateTopologyList@CSpatialAudioTechnologies@@QEAAJPEAUHINSTANCE__@@@Z @ 0x18004F914 (-CreateTopologyList@CSpatialAudioTechnologies@@QEAAJPEAUHINSTANCE__@@@Z.c)
 * Callees:
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x180039F30 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ??0CSpatialAudioTech@@QEAA@XZ @ 0x180050DCC (--0CSpatialAudioTech@@QEAA@XZ.c)
 */

CSpatialAudioDolbyHeadphones *__fastcall CSpatialAudioDolbyHeadphones::CSpatialAudioDolbyHeadphones(
        CSpatialAudioDolbyHeadphones *this,
        HINSTANCE a2)
{
  __int64 v4; // rdi
  char *v5; // rbx
  signed __int64 v7; // rcx
  __int16 v8; // ax
  char *v9; // rax
  __int64 v10; // rdx
  _WORD *v11; // rcx
  __int16 v12; // ax
  _WORD *v13; // rax

  CSpatialAudioTech::CSpatialAudioTech(this);
  v4 = 128LL;
  *(_QWORD *)this = &CSpatialAudioDolbyHeadphones::`vftable';
  v5 = (char *)this + 32;
  *((IID *)this + 1) = DOLBY_ATMOS_HEADPHONES_SPATIAL_ENCODER;
  if ( LoadStringW(a2, 0x191u, (LPWSTR)this + 16, 128) <= 0 )
  {
    v7 = (char *)L"Headphones" - v5;
    do
    {
      if ( v4 == -2147483518 )
        break;
      v8 = *(_WORD *)&v5[v7];
      if ( !v8 )
        break;
      *(_WORD *)v5 = v8;
      v5 += 2;
      --v4;
    }
    while ( v4 );
    v9 = v5 - 2;
    if ( v4 )
      v9 = v5;
    *(_WORD *)v9 = 0;
  }
  if ( LoadStringW(a2, 0x1AFu, (LPWSTR)this + 144, 256) <= 0 )
  {
    v10 = 256LL;
    v11 = (_WORD *)((char *)this + 288);
    do
    {
      if ( v10 == -2147483390 )
        break;
      v12 = *(_WORD *)((char *)v11 + (char *)L"ms-windows-store://pdp/?productid=9n0866fs04w8" - ((char *)this + 288));
      if ( !v12 )
        break;
      *v11++ = v12;
      --v10;
    }
    while ( v10 );
    v13 = v11 - 1;
    if ( v10 )
      v13 = v11;
    *v13 = 0;
  }
  if ( LoadStringW(a2, 0x1B2u, (LPWSTR)this + 400, 256) <= 0 )
    StringCchCopyW((char *)this + 800, 256LL, (char *)this + 288);
  return this;
}
