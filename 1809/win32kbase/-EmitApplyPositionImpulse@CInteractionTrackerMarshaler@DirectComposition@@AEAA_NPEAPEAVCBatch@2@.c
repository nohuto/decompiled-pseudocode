/*
 * XREFs of ?EmitApplyPositionImpulse@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C016EB3C
 * Callers:
 *     ?EmitSetRequestedInOrder@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C016F76C (-EmitSetRequestedInOrder@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C000C0D4 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CInteractionTrackerMarshaler::EmitApplyPositionImpulse(
        DirectComposition::CInteractionTrackerMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v3; // di
  char *v4; // rcx
  void *v6; // [rsp+30h] [rbp+8h] BYREF

  v3 = 1;
  if ( (*((_DWORD *)this + 4) & 0x40) == 0 )
  {
    if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x18uLL, &v6) )
    {
      v4 = (char *)v6;
      *(_DWORD *)v6 = 24;
      *(_QWORD *)(v4 + 4) = 0LL;
      *(_QWORD *)(v4 + 12) = 0LL;
      *((_DWORD *)v4 + 5) = 0;
      *((_DWORD *)v4 + 1) = 218;
      *((_DWORD *)v4 + 2) = *((_DWORD *)this + 6);
      *((_DWORD *)v4 + 3) = *((_DWORD *)this + 14);
      *((_DWORD *)v4 + 4) = *((_DWORD *)this + 15);
      *((_DWORD *)v4 + 5) = *((_DWORD *)this + 16);
      *((_DWORD *)this + 4) |= 0x40u;
      *((_QWORD *)this + 7) = 0LL;
      *((_DWORD *)this + 16) = 0;
    }
    else
    {
      return 0;
    }
  }
  return v3;
}
