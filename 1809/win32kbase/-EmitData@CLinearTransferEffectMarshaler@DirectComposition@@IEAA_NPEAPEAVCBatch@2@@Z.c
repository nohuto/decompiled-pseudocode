/*
 * XREFs of ?EmitData@CLinearTransferEffectMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C017F690
 * Callers:
 *     ?EmitUpdateCommands@CLinearTransferEffectMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C017F780 (-EmitUpdateCommands@CLinearTransferEffectMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C000C0D4 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     memset @ 0x1C00AF780 (memset.c)
 */

bool __fastcall DirectComposition::CLinearTransferEffectMarshaler::EmitData(
        DirectComposition::CLinearTransferEffectMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char *v3; // rax
  _DWORD *v4; // rbx
  bool result; // al
  void *v6; // [rsp+40h] [rbp+18h] BYREF

  if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x40uLL, &v6) )
    return 0;
  v3 = (char *)v6;
  *(_DWORD *)v6 = 64;
  v4 = v3 + 4;
  memset(v3 + 4, 0, 0x3CuLL);
  *v4 = 487;
  v4[1] = *((_DWORD *)this + 6);
  v4[2] = *((_DWORD *)this + 24);
  v4[3] = *((_DWORD *)this + 25);
  v4[4] = *((_BYTE *)this + 128) & 1;
  v4[5] = *((_DWORD *)this + 26);
  v4[6] = *((_DWORD *)this + 27);
  v4[7] = (*((unsigned __int8 *)this + 128) >> 1) & 1;
  v4[8] = *((_DWORD *)this + 28);
  v4[9] = *((_DWORD *)this + 29);
  v4[10] = (*((unsigned __int8 *)this + 128) >> 3) & 1;
  result = 1;
  v4[11] = *((_DWORD *)this + 30);
  v4[12] = *((_DWORD *)this + 31);
  v4[13] = (*((unsigned __int8 *)this + 128) >> 2) & 1;
  v4[14] = (*((unsigned __int8 *)this + 128) >> 4) & 1;
  return result;
}
