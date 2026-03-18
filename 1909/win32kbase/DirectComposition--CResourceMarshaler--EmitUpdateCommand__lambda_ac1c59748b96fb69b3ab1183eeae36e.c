/*
 * XREFs of DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_ac1c59748b96fb69b3ab1183eeae36ef___ @ 0x1C01AC760
 * Callers:
 *     ?EmitUpdateCommands@CNaturalAnimationMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01AC970 (-EmitUpdateCommands@CNaturalAnimationMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0009C94 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     memset @ 0x1C00BF640 (memset.c)
 *     _lambda_ac1c59748b96fb69b3ab1183eeae36ef_::operator() @ 0x1C01AC908 (_lambda_ac1c59748b96fb69b3ab1183eeae36ef_--operator().c)
 */

char __fastcall DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_ac1c59748b96fb69b3ab1183eeae36ef___(
        __int64 a1,
        struct DirectComposition::CBatch **a2,
        __int64 a3)
{
  char *v5; // rax
  _DWORD *v6; // rbx
  void *v8; // [rsp+48h] [rbp+20h] BYREF

  if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x2CuLL, &v8) )
    return 0;
  v5 = (char *)v8;
  *(_DWORD *)v8 = 44;
  v6 = v5 + 4;
  memset(v5 + 4, 0, 0x28uLL);
  *v6 = 281;
  v6[1] = *(_DWORD *)(a1 + 24);
  lambda_ac1c59748b96fb69b3ab1183eeae36ef_::operator()(a3, v6);
  return 1;
}
