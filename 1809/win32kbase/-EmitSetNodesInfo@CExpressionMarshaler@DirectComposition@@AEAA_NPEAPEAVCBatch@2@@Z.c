/*
 * XREFs of ?EmitSetNodesInfo@CExpressionMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C000A2F8
 * Callers:
 *     ?EmitUpdateCommands@CExpressionMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C000A290 (-EmitUpdateCommands@CExpressionMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C000C0D4 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     memset @ 0x1C00AF780 (memset.c)
 */

char __fastcall DirectComposition::CExpressionMarshaler::EmitSetNodesInfo(
        DirectComposition::CExpressionMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v3; // si
  char *v4; // rax
  _DWORD *v5; // rdi
  __int64 v6; // rax
  void *v8; // [rsp+30h] [rbp+8h] BYREF

  v3 = 1;
  if ( (*((_DWORD *)this + 4) & 0x400) == 0 && *((_QWORD *)this + 14) && *((_QWORD *)this + 16) )
  {
    if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x30uLL, &v8) )
    {
      v4 = (char *)v8;
      *(_DWORD *)v8 = 48;
      v5 = v4 + 4;
      memset(v4 + 4, 0, 0x2CuLL);
      *v5 = 159;
      v5[1] = *((_DWORD *)this + 6);
      v5[2] = *(_DWORD *)(*((_QWORD *)this + 14) + 24LL);
      v5[3] = *((_DWORD *)this + 32);
      v5[4] = *((_DWORD *)this + 30);
      v6 = *((_QWORD *)this + 17);
      if ( v6 )
        LODWORD(v6) = *(_DWORD *)(v6 + 24);
      v5[5] = v6;
      v5[6] = *((_DWORD *)this + 38);
      v5[7] = *((_DWORD *)this + 36);
      v5[9] = *((_DWORD *)this + 40);
      v5[10] = *((_DWORD *)this + 41);
      v5[8] = *((_DWORD *)this + 42);
      *((_DWORD *)this + 42) = 0;
      *((_DWORD *)this + 4) |= 0x400u;
    }
    else
    {
      return 0;
    }
  }
  return v3;
}
