/*
 * XREFs of ?EmitUpdateCommands@CMatrixTransformMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00045C0
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0009C94 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     memset @ 0x1C00BF640 (memset.c)
 */

bool __fastcall DirectComposition::CMatrixTransformMarshaler::EmitUpdateCommands(
        DirectComposition::CMatrixTransformMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char *v3; // rax
  char *v4; // rbx
  bool result; // al
  void *v6; // [rsp+40h] [rbp+18h] BYREF

  if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x24uLL, &v6) )
    return 0;
  v3 = (char *)v6;
  *(_DWORD *)v6 = 36;
  v4 = v3 + 4;
  memset(v3 + 4, 0, 0x20uLL);
  *(_DWORD *)v4 = 565;
  *((_DWORD *)v4 + 1) = *((_DWORD *)this + 6);
  result = 1;
  *(_OWORD *)(v4 + 8) = *(_OWORD *)((char *)this + 56);
  *((_QWORD *)v4 + 3) = *((_QWORD *)this + 9);
  return result;
}
