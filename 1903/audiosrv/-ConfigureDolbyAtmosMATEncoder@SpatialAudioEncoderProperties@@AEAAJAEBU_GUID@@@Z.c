/*
 * XREFs of ?ConfigureDolbyAtmosMATEncoder@SpatialAudioEncoderProperties@@AEAAJAEBU_GUID@@@Z @ 0x180134580
 * Callers:
 *     ?RuntimeClassInitialize@SpatialAudioEncoderProperties@@QEAAJAEBU_GUID@@H@Z @ 0x180135400 (-RuntimeClassInitialize@SpatialAudioEncoderProperties@@QEAAJAEBU_GUID@@H@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SpatialAudioEncoderProperties::ConfigureDolbyAtmosMATEncoder(
        SpatialAudioEncoderProperties *this,
        const struct _GUID *a2)
{
  __int128 v3; // xmm0
  char *v4; // rcx
  __int16 v5; // ax
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1

  *((_DWORD *)this + 29) = 8190;
  v3 = (__int128)*a2;
  *((_WORD *)this + 62) = 20;
  *(_OWORD *)((char *)this + 100) = v3;
  *((_DWORD *)this + 30) = 1;
  *(_OWORD *)((char *)this + 126) = xmmword_1801856B0;
  *(_OWORD *)((char *)this + 142) = xmmword_1801856C0;
  *(_OWORD *)((char *)this + 158) = xmmword_1801856D0;
  *(_OWORD *)((char *)this + 174) = xmmword_1801856E0;
  *(_OWORD *)((char *)this + 190) = xmmword_1801856F0;
  *(_OWORD *)((char *)this + 206) = xmmword_180185700;
  *(_OWORD *)((char *)this + 222) = xmmword_180185710;
  *(_DWORD *)((char *)this + 238) = 0;
  v4 = (char *)this + 242;
  v5 = *((_WORD *)this + 120);
  v6 = *((_OWORD *)this + 7);
  *(_OWORD *)v4 = *((_OWORD *)this + 6);
  v7 = *((_OWORD *)this + 8);
  *((_OWORD *)v4 + 1) = v6;
  v8 = *((_OWORD *)this + 9);
  *((_OWORD *)v4 + 2) = v7;
  v9 = *((_OWORD *)this + 10);
  *((_OWORD *)v4 + 3) = v8;
  v10 = *((_OWORD *)this + 11);
  *((_OWORD *)v4 + 4) = v9;
  v11 = *((_OWORD *)this + 12);
  *((_OWORD *)v4 + 5) = v10;
  v12 = *((_OWORD *)this + 14);
  *((_OWORD *)v4 + 6) = v11;
  *((_OWORD *)v4 + 7) = *((_OWORD *)this + 13);
  *((_OWORD *)v4 + 8) = v12;
  *((_WORD *)v4 + 72) = v5;
  *((_OWORD *)this + 17) = xmmword_180185730;
  *((_OWORD *)this + 18) = xmmword_180185740;
  *((_OWORD *)this + 19) = xmmword_180185750;
  *((_OWORD *)this + 20) = xmmword_180185760;
  *((_OWORD *)this + 21) = xmmword_180185770;
  *((_OWORD *)this + 22) = xmmword_180185780;
  *((_OWORD *)this + 23) = xmmword_180185790;
  *((_DWORD *)this + 96) = 1;
  return 0LL;
}
