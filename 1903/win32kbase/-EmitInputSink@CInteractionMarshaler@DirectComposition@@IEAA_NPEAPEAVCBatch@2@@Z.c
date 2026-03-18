/*
 * XREFs of ?EmitInputSink@CInteractionMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C003F590
 * Callers:
 *     ?EmitUpdateCommands@CInteractionMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C003EDE0 (-EmitUpdateCommands@CInteractionMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C000CBD4 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     ?OpenDwmHandle@CompositionObject@@QEBAJPEAPEAX@Z @ 0x1C003EDB0 (-OpenDwmHandle@CompositionObject@@QEBAJPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CInteractionMarshaler::EmitInputSink(
        DirectComposition::CInteractionMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  __int64 v3; // r8
  __int64 v4; // r9
  CompositionObject *v5; // rcx
  char *v6; // rcx
  void *v8; // [rsp+30h] [rbp+8h] BYREF
  void *v9; // [rsp+40h] [rbp+18h] BYREF

  if ( (*((_DWORD *)this + 4) & 0x40) == 0 )
    return 1;
  if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x14uLL, &v9) )
  {
    v5 = (CompositionObject *)*((_QWORD *)this + 31);
    if ( !v5 || (int)CompositionObject::OpenDwmHandle(v5, &v8, v3, v4) < 0 )
      v8 = 0LL;
    v6 = (char *)v9;
    *(_DWORD *)v9 = 20;
    *(_QWORD *)(v6 + 4) = 0LL;
    *(_QWORD *)(v6 + 12) = 0LL;
    *((_DWORD *)v6 + 1) = 217;
    *((_DWORD *)v6 + 2) = *((_DWORD *)this + 6);
    *(_QWORD *)(v6 + 12) = v8;
    *((_DWORD *)this + 4) &= ~0x40u;
    return 1;
  }
  return 0;
}
