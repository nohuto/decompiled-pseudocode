/*
 * XREFs of ?EmitSetRequestedPosition@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01AC3C4
 * Callers:
 *     ?EmitSetRequestedInOrder@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01AC330 (-EmitSetRequestedInOrder@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C000CBD4 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CInteractionTrackerMarshaler::EmitSetRequestedPosition(
        DirectComposition::CInteractionTrackerMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v3; // di
  char *v4; // rcx
  void *v6; // [rsp+30h] [rbp+8h] BYREF

  v3 = 1;
  if ( (*((_DWORD *)this + 4) & 0x200) == 0 )
  {
    if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x20uLL, &v6) )
    {
      v4 = (char *)v6;
      *(_DWORD *)v6 = 32;
      *(_QWORD *)(v4 + 4) = 0LL;
      *(_QWORD *)(v4 + 12) = 0LL;
      *(_QWORD *)(v4 + 20) = 0LL;
      *((_DWORD *)v4 + 7) = 0;
      *((_DWORD *)v4 + 1) = 240;
      *((_DWORD *)v4 + 2) = *((_DWORD *)this + 6);
      *((_DWORD *)v4 + 3) = *((_DWORD *)this + 25);
      *((_DWORD *)v4 + 4) = *((_DWORD *)this + 26);
      *((_DWORD *)v4 + 5) = *((_DWORD *)this + 46);
      *((_DWORD *)v4 + 7) = *((_DWORD *)this + 27);
      *((_DWORD *)this + 4) |= 0x200u;
      *(_QWORD *)((char *)this + 100) = 0LL;
      *((_DWORD *)this + 27) = 0;
      *((_DWORD *)this + 46) = 0;
    }
    else
    {
      return 0;
    }
  }
  return v3;
}
