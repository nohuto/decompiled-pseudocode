/*
 * XREFs of ?EmitData@CAffineTransform2DEffectMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01C2964
 * Callers:
 *     ?EmitUpdateCommands@CAffineTransform2DEffectMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01C2A00 (-EmitUpdateCommands@CAffineTransform2DEffectMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C000CBD4 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     memset @ 0x1C00C1440 (memset.c)
 */

char __fastcall DirectComposition::CAffineTransform2DEffectMarshaler::EmitData(
        DirectComposition::CAffineTransform2DEffectMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char *v3; // rax
  _DWORD *v4; // rbx
  void *v6; // [rsp+40h] [rbp+18h] BYREF

  if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x30uLL, &v6) )
    return 0;
  v3 = (char *)v6;
  *(_DWORD *)v6 = 48;
  v4 = v3 + 4;
  memset(v3 + 4, 0, 0x2CuLL);
  *v4 = 545;
  v4[1] = *((_DWORD *)this + 6);
  v4[2] = *((_DWORD *)this + 22);
  v4[3] = *((_DWORD *)this + 23);
  v4[4] = *((_DWORD *)this + 24);
  v4[5] = *((_DWORD *)this + 25);
  v4[6] = *((_DWORD *)this + 26);
  v4[7] = *((_DWORD *)this + 27);
  v4[8] = *((_DWORD *)this + 28);
  v4[9] = *((_DWORD *)this + 29);
  v4[10] = *((_DWORD *)this + 30);
  return 1;
}
