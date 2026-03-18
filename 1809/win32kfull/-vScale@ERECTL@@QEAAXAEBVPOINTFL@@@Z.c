/*
 * XREFs of ?vScale@ERECTL@@QEAAXAEBVPOINTFL@@@Z @ 0x1C0252DEC
 * Callers:
 *     GreSetDIBitsToDeviceInternal @ 0x1C00524A0 (GreSetDIBitsToDeviceInternal.c)
 *     NtGdiBitBltInternal @ 0x1C00624D0 (NtGdiBitBltInternal.c)
 *     ?bSpDwmUpdateSpriteShape@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAU_SURFOBJ@@PEAU_RECTL@@PEAVPALETTE@@PEAK4PEAPEAV3@@Z @ 0x1C007CF18 (-bSpDwmUpdateSpriteShape@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAU_SURFOBJ@@PEA.c)
 *     ?bClipSrcDstRectsAndValidate@@YA_NPEAU_SURFOBJ@@0PEAVDCOBJ@@1PEAU_CLIPOBJ@@PEAU_RECTL@@3@Z @ 0x1C011EC64 (-bClipSrcDstRectsAndValidate@@YA_NPEAU_SURFOBJ@@0PEAVDCOBJ@@1PEAU_CLIPOBJ@@PEAU_RECTL@@3@Z.c)
 *     _lambda_1cf76e2996e024a73989971e750c3c23_::operator() @ 0x1C011ED6C (_lambda_1cf76e2996e024a73989971e750c3c23_--operator().c)
 *     _lambda_d48ab19a047a2d0bcdc1b67e26dd5c9f_::operator() @ 0x1C011ED98 (_lambda_d48ab19a047a2d0bcdc1b67e26dd5c9f_--operator().c)
 * Callees:
 *     bFToL @ 0x1C00F7FB8 (bFToL.c)
 */

void __fastcall ERECTL::vScale(ERECTL *this, const struct POINTFL *a2)
{
  float v2; // xmm1_4
  int *v3; // r14
  int *v4; // rsi
  float v5; // xmm2_4
  int *v6; // rdi
  int v7; // ebp
  int v8; // r15d
  int v9; // r12d
  unsigned int v11; // r8d
  unsigned int v12; // r8d
  unsigned int v13; // r8d

  v2 = *(float *)a2;
  v3 = (int *)((char *)this + 4);
  v4 = (int *)((char *)this + 8);
  v5 = *((float *)a2 + 1);
  v6 = (int *)((char *)this + 12);
  v7 = *((_DWORD *)this + 1);
  v8 = *((_DWORD *)this + 2);
  v9 = *((_DWORD *)this + 3);
  if ( !(unsigned int)bFToL((float)*(int *)this * *(float *)a2, (int *)this, 6u)
    || !(unsigned int)bFToL((float)v7 * v5, v3, v11)
    || !(unsigned int)bFToL((float)v8 * v2, v4, v12)
    || !(unsigned int)bFToL((float)v9 * v5, v6, v13) )
  {
    *v6 = 0;
    *v4 = 0;
    *v3 = 0;
    *(_DWORD *)this = 0;
  }
}
