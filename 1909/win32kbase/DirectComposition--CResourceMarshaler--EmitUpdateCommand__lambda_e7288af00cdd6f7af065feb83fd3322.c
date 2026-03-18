/*
 * XREFs of DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_e7288af00cdd6f7af065feb83fd33220___ @ 0x1C01A5ED0
 * Callers:
 *     ?EmitUpdateCommands@CManipulationMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01A6370 (-EmitUpdateCommands@CManipulationMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0009C94 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     _lambda_e7288af00cdd6f7af065feb83fd33220_::operator() @ 0x1C01A5F44 (_lambda_e7288af00cdd6f7af065feb83fd33220_--operator().c)
 */

char __fastcall DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_e7288af00cdd6f7af065feb83fd33220___(
        __int64 a1,
        struct DirectComposition::CBatch **a2,
        __int64 a3)
{
  char *v5; // rax
  void *v7; // [rsp+48h] [rbp+20h] BYREF

  if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x20uLL, &v7) )
    return 0;
  v5 = (char *)v7;
  *(_DWORD *)v7 = 32;
  *(_QWORD *)(v5 + 4) = 0LL;
  *(_QWORD *)(v5 + 12) = 0LL;
  *(_QWORD *)(v5 + 20) = 0LL;
  *((_DWORD *)v5 + 7) = 0;
  *((_DWORD *)v5 + 1) = 270;
  *((_DWORD *)v5 + 2) = *(_DWORD *)(a1 + 24);
  lambda_e7288af00cdd6f7af065feb83fd33220_::operator()(a3);
  return 1;
}
