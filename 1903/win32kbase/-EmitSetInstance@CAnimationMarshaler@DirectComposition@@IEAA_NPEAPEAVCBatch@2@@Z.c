/*
 * XREFs of ?EmitSetInstance@CAnimationMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C008CF98
 * Callers:
 *     ?EmitUpdateCommands@CAnimationMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C008CE30 (-EmitUpdateCommands@CAnimationMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C000CBD4 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CAnimationMarshaler::EmitSetInstance(
        DirectComposition::CAnimationMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char *v3; // rcx
  void *v5; // [rsp+30h] [rbp+8h] BYREF

  if ( (*((_BYTE *)this + 200) & 2) == 0 || (*((_DWORD *)this + 8) & 0x2000) != 0 )
    return 1;
  if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0xCuLL, &v5) )
  {
    v3 = (char *)v5;
    *(_DWORD *)v5 = 12;
    *(_QWORD *)(v3 + 4) = 0LL;
    *((_DWORD *)v3 + 1) = 6;
    *((_DWORD *)v3 + 2) = *((_DWORD *)this + 10);
    *((_DWORD *)this + 8) |= 0x2000u;
    return 1;
  }
  return 0;
}
