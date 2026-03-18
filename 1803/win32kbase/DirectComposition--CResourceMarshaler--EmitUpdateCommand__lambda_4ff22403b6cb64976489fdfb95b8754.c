/*
 * XREFs of DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_4ff22403b6cb64976489fdfb95b87542___ @ 0x1C01485B8
 * Callers:
 *     ?EmitUpdateCommands@CGenericInkMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0148890 (-EmitUpdateCommands@CGenericInkMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0019744 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     _lambda_4ff22403b6cb64976489fdfb95b87542_::operator() @ 0x1C0148628 (_lambda_4ff22403b6cb64976489fdfb95b87542_--operator().c)
 */

char __fastcall DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_4ff22403b6cb64976489fdfb95b87542___(
        __int64 a1,
        struct DirectComposition::CBatch ***a2,
        __int64 a3)
{
  char *v5; // rax
  void *v7; // [rsp+48h] [rbp+20h] BYREF

  if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x1CuLL, &v7) )
    return 0;
  v5 = (char *)v7;
  *(_DWORD *)v7 = 28;
  *(_QWORD *)(v5 + 4) = 0LL;
  *(_QWORD *)(v5 + 12) = 0LL;
  *(_QWORD *)(v5 + 20) = 0LL;
  *((_DWORD *)v5 + 1) = 169;
  *((_DWORD *)v5 + 2) = *(_DWORD *)(a1 + 24);
  lambda_4ff22403b6cb64976489fdfb95b87542_::operator()(a3);
  return 1;
}
