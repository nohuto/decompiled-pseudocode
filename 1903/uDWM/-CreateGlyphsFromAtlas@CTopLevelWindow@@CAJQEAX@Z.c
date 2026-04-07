/*
 * XREFs of ?CreateGlyphsFromAtlas@CTopLevelWindow@@CAJQEAX@Z @ 0x180040CE0
 * Callers:
 *     ?EnsureImages@CTopLevelWindow@@SAJXZ @ 0x1800452E4 (-EnsureImages@CTopLevelWindow@@SAJXZ.c)
 * Callees:
 *     ?CreateBitmapsFromAtlasImageStrip@CTopLevelWindow@@SAJQEAXHIPEAU_MARGINS@@AEAV?$DynArray@PEAVCBitmapSource@@$0A@@@@Z @ 0x180040DCC (-CreateBitmapsFromAtlasImageStrip@CTopLevelWindow@@SAJQEAXHIPEAU_MARGINS@@AEAV-$DynArray@PEAVCBi.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004FBC4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CTopLevelWindow::CreateGlyphsFromAtlas(void *const a1)
{
  unsigned int v1; // ebp
  int v2; // edi
  __int64 i; // r14
  unsigned int v5; // r15d
  int *v6; // rbx
  int *v7; // rax
  int v8; // r12d
  __int64 v9; // rsi
  int BitmapsFromAtlasImageStrip; // eax
  void *v12; // [rsp+28h] [rbp-30h]

  v1 = 0;
  v2 = 0;
  for ( i = 0LL; !*(_QWORD *)(i + CTopLevelWindow::s_rgpwfWindowFrames); i += 8LL )
  {
LABEL_11:
    if ( (unsigned int)++v2 >= 6 )
      return v1;
  }
  v5 = 0;
  v6 = (int *)&unk_1800C7854;
  while ( 1 )
  {
    v7 = v6 - 1;
    if ( (unsigned int)(v2 - 4) <= 1 )
      v7 = v6;
    v8 = *v7;
    if ( *v7 )
      break;
LABEL_10:
    ++v5;
    v6 += 3;
    if ( v5 >= 0xA )
      goto LABEL_11;
  }
  v9 = 0LL;
  while ( 1 )
  {
    BitmapsFromAtlasImageStrip = CTopLevelWindow::CreateBitmapsFromAtlasImageStrip(
                                   a1,
                                   v8 + (int)v9,
                                   4u,
                                   0LL,
                                   (unsigned int)v6[1]
                                 + 216LL
                                 + 320 * v9
                                 + *(_QWORD *)(i + CTopLevelWindow::s_rgpwfWindowFrames));
    v1 = BitmapsFromAtlasImageStrip;
    if ( BitmapsFromAtlasImageStrip < 0 )
      break;
    v9 = (unsigned int)(v9 + 1);
    if ( (unsigned int)v9 >= 4 )
      goto LABEL_10;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, BitmapsFromAtlasImageStrip, 0x256u, v12);
  return v1;
}
