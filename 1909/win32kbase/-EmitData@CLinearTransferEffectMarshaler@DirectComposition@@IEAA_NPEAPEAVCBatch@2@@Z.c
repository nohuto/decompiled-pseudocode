/*
 * XREFs of ?EmitData@CLinearTransferEffectMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01C0150
 * Callers:
 *     ?EmitUpdateCommands@CLinearTransferEffectMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01C0220 (-EmitUpdateCommands@CLinearTransferEffectMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0009C94 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     memset @ 0x1C00BF640 (memset.c)
 */

bool __fastcall DirectComposition::CLinearTransferEffectMarshaler::EmitData(
        DirectComposition::CLinearTransferEffectMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char *v3; // rax
  char *v4; // rbx
  bool result; // al
  void *v6; // [rsp+40h] [rbp+18h] BYREF

  if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x3CuLL, &v6) )
    return 0;
  v3 = (char *)v6;
  *(_DWORD *)v6 = 60;
  v4 = v3 + 4;
  memset(v3 + 4, 0, 0x38uLL);
  *(_DWORD *)v4 = 563;
  *((_DWORD *)v4 + 1) = *((_DWORD *)this + 6);
  *((_DWORD *)v4 + 2) = *((_DWORD *)this + 22);
  *((_DWORD *)v4 + 3) = *((_DWORD *)this + 23);
  v4[16] = *((_BYTE *)this + 120) & 1;
  *((_DWORD *)v4 + 5) = *((_DWORD *)this + 24);
  *((_DWORD *)v4 + 6) = *((_DWORD *)this + 25);
  v4[28] = (*((_BYTE *)this + 120) & 2) != 0;
  *((_DWORD *)v4 + 8) = *((_DWORD *)this + 26);
  *((_DWORD *)v4 + 9) = *((_DWORD *)this + 27);
  v4[40] = (*((_BYTE *)this + 120) & 8) != 0;
  result = 1;
  *((_DWORD *)v4 + 11) = *((_DWORD *)this + 28);
  *((_DWORD *)v4 + 12) = *((_DWORD *)this + 29);
  v4[52] = (*((_BYTE *)this + 120) & 4) != 0;
  v4[53] = (*((_BYTE *)this + 120) & 0x10) != 0;
  return result;
}
