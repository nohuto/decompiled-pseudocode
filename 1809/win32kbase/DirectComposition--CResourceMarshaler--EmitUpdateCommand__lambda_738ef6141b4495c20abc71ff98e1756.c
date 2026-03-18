/*
 * XREFs of DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_738ef6141b4495c20abc71ff98e17567___ @ 0x1C016AAF0
 * Callers:
 *     ?EmitUpdateCommands@CManipulationMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C016AFA0 (-EmitUpdateCommands@CManipulationMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C000C0D4 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     _lambda_738ef6141b4495c20abc71ff98e17567_::operator() @ 0x1C016AB64 (_lambda_738ef6141b4495c20abc71ff98e17567_--operator().c)
 */

char __fastcall DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_738ef6141b4495c20abc71ff98e17567___(
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
  *((_DWORD *)v5 + 1) = 266;
  *((_DWORD *)v5 + 2) = *(_DWORD *)(a1 + 24);
  lambda_738ef6141b4495c20abc71ff98e17567_::operator()(a3);
  return 1;
}
