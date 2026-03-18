/*
 * XREFs of ?EmitUpdateCommands@CParticleAttractorMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01C3C30
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C000CBD4 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CParticleAttractorMarshaler::EmitUpdateCommands(
        DirectComposition::CParticleAttractorMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char *v3; // rdx
  void *v5; // [rsp+40h] [rbp+18h] BYREF

  if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x20uLL, &v5) )
    return 0;
  v3 = (char *)v5;
  *(_DWORD *)v5 = 32;
  *(_QWORD *)(v3 + 4) = 0LL;
  *(_QWORD *)(v3 + 12) = 0LL;
  *(_QWORD *)(v3 + 20) = 0LL;
  *((_DWORD *)v3 + 7) = 0;
  *((_DWORD *)v3 + 1) = 568;
  *((_DWORD *)v3 + 2) = *((_DWORD *)this + 6);
  *(_QWORD *)(v3 + 12) = *((_QWORD *)this + 7);
  *((_DWORD *)v3 + 5) = *((_DWORD *)this + 16);
  *((_DWORD *)v3 + 6) = *((_DWORD *)this + 17);
  *((_DWORD *)v3 + 7) = *((_DWORD *)this + 18);
  return 1;
}
