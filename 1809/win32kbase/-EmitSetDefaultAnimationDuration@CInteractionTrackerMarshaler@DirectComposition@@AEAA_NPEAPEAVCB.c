/*
 * XREFs of ?EmitSetDefaultAnimationDuration@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C016F038
 * Callers:
 *     ?EmitUpdateCommands@CInteractionTrackerMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C016FBF0 (-EmitUpdateCommands@CInteractionTrackerMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C000C0D4 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CInteractionTrackerMarshaler::EmitSetDefaultAnimationDuration(
        DirectComposition::CInteractionTrackerMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v2; // bl
  char *v4; // rcx
  void *v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = 1;
  if ( (*((_BYTE *)this + 440) & 1) == 0 )
  {
    if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x14uLL, &v6) )
    {
      v4 = (char *)v6;
      *(_DWORD *)v6 = 20;
      *(_QWORD *)(v4 + 4) = 0LL;
      *(_QWORD *)(v4 + 12) = 0LL;
      *((_DWORD *)v4 + 1) = 224;
      *((_DWORD *)v4 + 2) = *((_DWORD *)this + 6);
      *((_DWORD *)v4 + 3) = *((_DWORD *)this + 45);
      *((_DWORD *)v4 + 4) = *((_DWORD *)this + 46);
      *((_DWORD *)this + 110) |= 1u;
    }
    else
    {
      return 0;
    }
  }
  return v2;
}
