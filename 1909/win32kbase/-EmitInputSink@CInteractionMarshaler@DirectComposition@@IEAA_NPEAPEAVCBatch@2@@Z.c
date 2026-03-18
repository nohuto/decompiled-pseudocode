/*
 * XREFs of ?EmitInputSink@CInteractionMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C003F4C0
 * Callers:
 *     ?EmitUpdateCommands@CInteractionMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C003ED10 (-EmitUpdateCommands@CInteractionMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0009C94 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     ?OpenDwmHandle@CompositionObject@@QEBAJPEAPEAX@Z @ 0x1C003F550 (-OpenDwmHandle@CompositionObject@@QEBAJPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CInteractionMarshaler::EmitInputSink(
        DirectComposition::CInteractionMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  CompositionObject *v3; // rcx
  char *v4; // rcx
  void *v6; // [rsp+30h] [rbp+8h] BYREF
  void *v7; // [rsp+40h] [rbp+18h] BYREF

  if ( (*((_DWORD *)this + 4) & 0x40) == 0 )
    return 1;
  if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x14uLL, &v7) )
  {
    v3 = (CompositionObject *)*((_QWORD *)this + 31);
    if ( !v3 || CompositionObject::OpenDwmHandle(v3, &v6) < 0 )
      v6 = 0LL;
    v4 = (char *)v7;
    *(_DWORD *)v7 = 20;
    *(_QWORD *)(v4 + 4) = 0LL;
    *(_QWORD *)(v4 + 12) = 0LL;
    *((_DWORD *)v4 + 1) = 217;
    *((_DWORD *)v4 + 2) = *((_DWORD *)this + 6);
    *(_QWORD *)(v4 + 12) = v6;
    *((_DWORD *)this + 4) &= ~0x40u;
    return 1;
  }
  return 0;
}
