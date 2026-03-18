/*
 * XREFs of ?EmitData@CShadowEffectMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C017ECF8
 * Callers:
 *     ?EmitUpdateCommands@CShadowEffectMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C017ED80 (-EmitUpdateCommands@CShadowEffectMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C000C0D4 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     memset @ 0x1C00AF780 (memset.c)
 */

char __fastcall DirectComposition::CShadowEffectMarshaler::EmitData(
        DirectComposition::CShadowEffectMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char *v3; // rax
  _DWORD *v4; // rbx
  void *v6; // [rsp+40h] [rbp+18h] BYREF

  if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x24uLL, &v6) )
    return 0;
  v3 = (char *)v6;
  *(_DWORD *)v6 = 36;
  v4 = v3 + 4;
  memset(v3 + 4, 0, 0x20uLL);
  *v4 = 499;
  v4[1] = *((_DWORD *)this + 6);
  v4[3] = *((_DWORD *)this + 25);
  v4[4] = *((_DWORD *)this + 26);
  v4[5] = *((_DWORD *)this + 27);
  v4[6] = *((_DWORD *)this + 28);
  v4[2] = *((_DWORD *)this + 24);
  v4[7] = *((_DWORD *)this + 29);
  return 1;
}
