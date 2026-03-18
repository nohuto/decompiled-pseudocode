/*
 * XREFs of DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_35797bdefe2e05605900786b9f89861c___ @ 0x1C0177548
 * Callers:
 *     ?EmitUpdateCommands@CPathGeometryMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01775E0 (-EmitUpdateCommands@CPathGeometryMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C000C0D4 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_35797bdefe2e05605900786b9f89861c___(
        __int64 a1,
        struct DirectComposition::CBatch **a2,
        __int64 a3)
{
  char v5; // al
  int v6; // r9d
  char *v7; // rdx
  __int64 v8; // rcx
  char result; // al
  void *v10; // [rsp+48h] [rbp+20h] BYREF

  v5 = DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x18uLL, &v10);
  v6 = 0;
  if ( !v5 )
    return 0;
  v7 = (char *)v10;
  *(_DWORD *)v10 = 24;
  *(_QWORD *)(v7 + 4) = 0LL;
  *(_QWORD *)(v7 + 12) = 0LL;
  *((_DWORD *)v7 + 5) = 0;
  *((_DWORD *)v7 + 1) = 309;
  *((_DWORD *)v7 + 2) = *(_DWORD *)(a1 + 24);
  v8 = *(_QWORD *)(*(_QWORD *)a3 + 80LL);
  if ( v8 )
    v6 = *(_DWORD *)(v8 + 24);
  *((_DWORD *)v7 + 3) = v6;
  *((_DWORD *)v7 + 4) = *(_DWORD *)(*(_QWORD *)a3 + 88LL);
  result = 1;
  *((_DWORD *)v7 + 5) = *(_DWORD *)(*(_QWORD *)a3 + 92LL);
  return result;
}
