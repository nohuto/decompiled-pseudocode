/*
 * XREFs of ?EmitUpdateCommands@CCompiledEffectTemplateMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C006ED00
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0009C94 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     ?EmitUpdate@CCompiledEffectTemplateMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C006ED8C (-EmitUpdate@CCompiledEffectTemplateMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 */

char __fastcall DirectComposition::CCompiledEffectTemplateMarshaler::EmitUpdateCommands(
        DirectComposition::CCompiledEffectTemplateMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v2; // bl
  char *v6; // rcx
  void *v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  if ( (*((_DWORD *)this + 4) & 0x20) != 0 )
  {
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v7) )
      return v2;
    v6 = (char *)v7;
    *(_DWORD *)v7 = 16;
    *(_QWORD *)(v6 + 4) = 0LL;
    *((_DWORD *)v6 + 3) = 0;
    *((_DWORD *)v6 + 1) = 289;
    *((_DWORD *)v6 + 2) = *((_DWORD *)this + 6);
    *((_DWORD *)v6 + 3) = *((_DWORD *)this + 10);
    *((_DWORD *)this + 4) &= ~0x20u;
  }
  if ( DirectComposition::CCompiledEffectTemplateMarshaler::EmitUpdate(this, a2) )
    return 1;
  return v2;
}
