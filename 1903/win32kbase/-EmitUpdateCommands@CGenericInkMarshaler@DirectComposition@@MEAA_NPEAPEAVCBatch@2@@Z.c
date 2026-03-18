/*
 * XREFs of ?EmitUpdateCommands@CGenericInkMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01A7CC0
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C000CBD4 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     memmove @ 0x1C00C1540 (memmove.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_fd9f27ac547b09c22332b2e0da28dd0d___ @ 0x1C01A79EC (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_fd9f27ac547b09c22332b2e0da28dd0.c)
 *     ?EmitSegmentUpdate@CGenericInkMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01A7B4C (-EmitSegmentUpdate@CGenericInkMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 */

char __fastcall DirectComposition::CGenericInkMarshaler::EmitUpdateCommands(
        DirectComposition::CGenericInkMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v2; // di
  unsigned int v5; // ebp
  unsigned int *v6; // rcx
  int v7; // eax
  unsigned int *v9; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  if ( (*((_DWORD *)this + 4) & 0x20) == 0 )
  {
    v5 = *((_DWORD *)this + 16) + 12;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, v5, (void **)&v9) )
      return v2;
    v6 = v9;
    *v9 = v5;
    *(_QWORD *)(v6 + 1) = 0LL;
    v6[1] = 172;
    v6[2] = *((_DWORD *)this + 6);
    memmove(v6 + 3, *((const void **)this + 5), *((_QWORD *)this + 8) * *((_QWORD *)this + 9));
    *((_DWORD *)this + 4) |= 0x20u;
  }
  if ( DirectComposition::CGenericInkMarshaler::EmitSegmentUpdate(this, (struct DirectComposition::CBatch ***)a2) )
  {
    v7 = *((_DWORD *)this + 4);
    v9 = (unsigned int *)this;
    if ( (v7 & 0x80u) != 0 )
      return 1;
    if ( DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_fd9f27ac547b09c22332b2e0da28dd0d___(
           (__int64)this,
           a2,
           (__int64)&v9) )
    {
      *((_DWORD *)this + 4) |= 0x80u;
      return 1;
    }
  }
  return v2;
}
