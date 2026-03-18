/*
 * XREFs of ?EmitSetRequestedScaleAnimation@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01AC600
 * Callers:
 *     ?EmitSetRequestedInOrder@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01AC330 (-EmitSetRequestedInOrder@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C000CBD4 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00C13F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00C1440 (memset.c)
 */

char __fastcall DirectComposition::CInteractionTrackerMarshaler::EmitSetRequestedScaleAnimation(
        DirectComposition::CInteractionTrackerMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  _DWORD *v6; // rdi
  int v7; // eax
  __int64 v8; // rax
  __int64 v9; // rax
  void *v11; // [rsp+30h] [rbp+8h] BYREF

  if ( (*((_DWORD *)this + 4) & 0x40000) != 0 )
    return 1;
  v4 = *((_QWORD *)this + 25);
  if ( !v4
    || (v5 = *(_QWORD *)(v4 + 16)) == 0
    || (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5) != 90
    || (*(unsigned __int8 (__fastcall **)(_QWORD, struct DirectComposition::CBatch **))(**(_QWORD **)(*((_QWORD *)this + 25) + 16LL)
                                                                                      + 80LL))(
         *(_QWORD *)(*((_QWORD *)this + 25) + 16LL),
         a2) )
  {
    if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x24uLL, &v11) )
    {
      v6 = (char *)v11 + 4;
      *(_DWORD *)v11 = 36;
      memset(v6, 0, 0x20uLL);
      *v6 = 243;
      v7 = *((_DWORD *)this + 6);
      v6[2] = 0;
      v6[1] = v7;
      *((_BYTE *)v6 + 12) = (*((_BYTE *)this + 408) & 2) == 0;
      v6[4] = *((_DWORD *)this + 40);
      v6[5] = *((_DWORD *)this + 41);
      v6[7] = *((_DWORD *)this + 39);
      v8 = *((_QWORD *)this + 25);
      if ( v8 )
      {
        v9 = *(_QWORD *)(v8 + 16);
        if ( v9 )
          v6[2] = *(_DWORD *)(v9 + 24);
      }
      *((_BYTE *)this + 408) |= 2u;
      *((_DWORD *)this + 4) |= 0x40000u;
      return 1;
    }
  }
  return 0;
}
