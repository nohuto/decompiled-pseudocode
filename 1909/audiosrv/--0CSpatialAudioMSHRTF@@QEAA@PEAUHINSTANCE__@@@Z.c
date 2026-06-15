/*
 * XREFs of ??0CSpatialAudioMSHRTF@@QEAA@PEAUHINSTANCE__@@@Z @ 0x18005A91C
 * Callers:
 *     ?CreateTopologyList@CSpatialAudioTechnologies@@QEAAJPEAUHINSTANCE__@@@Z @ 0x18005AA88 (-CreateTopologyList@CSpatialAudioTechnologies@@QEAAJPEAUHINSTANCE__@@@Z.c)
 * Callees:
 *     ??0CSpatialAudioTech@@QEAA@XZ @ 0x180059C64 (--0CSpatialAudioTech@@QEAA@XZ.c)
 */

CSpatialAudioMSHRTF *__fastcall CSpatialAudioMSHRTF::CSpatialAudioMSHRTF(CSpatialAudioMSHRTF *this, HINSTANCE a2)
{
  __int64 v4; // rdi
  char *v5; // rbx
  _WORD *v6; // rbx
  __int64 v7; // rdi
  char *v8; // rcx
  __int16 v9; // ax
  signed __int64 v10; // rcx
  __int16 v11; // ax
  char *v12; // rax
  _WORD *v13; // rax

  CSpatialAudioTech::CSpatialAudioTech(this);
  v4 = 128LL;
  *(_QWORD *)this = &CSpatialAudioMSHRTF::`vftable';
  v5 = (char *)this + 32;
  *((_OWORD *)this + 1) = MICROSOFT_HRTF_SPATIAL_ENCODER;
  if ( LoadStringW(a2, 0x190u, (LPWSTR)this + 16, 128) <= 0 )
  {
    v10 = (char *)L"Microsoft HRTF" - v5;
    do
    {
      if ( v4 == -2147483518 )
        break;
      v11 = *(_WORD *)&v5[v10];
      if ( !v11 )
        break;
      *(_WORD *)v5 = v11;
      v5 += 2;
      --v4;
    }
    while ( v4 );
    v12 = v5 - 2;
    if ( v4 )
      v12 = v5;
    *(_WORD *)v12 = 0;
  }
  v6 = (_WORD *)((char *)this + 288);
  v7 = 256LL;
  if ( LoadStringW(a2, 0x1AEu, (LPWSTR)this + 144, 256) <= 0 )
  {
    v8 = (char *)(&unk_180161DC4 - (_UNKNOWN *)v6);
    do
    {
      if ( v7 == -2147483390 )
        break;
      v9 = *(_WORD *)((char *)v6 + (_QWORD)v8);
      if ( !v9 )
        break;
      *v6++ = v9;
      --v7;
    }
    while ( v7 );
    v13 = v6 - 1;
    if ( v7 )
      v13 = v6;
    *v13 = 0;
  }
  return this;
}
