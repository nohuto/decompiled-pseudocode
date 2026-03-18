/*
 * XREFs of ?EmitApplyPositionShift@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01AB818
 * Callers:
 *     ?EmitUpdateCommands@CInteractionTrackerMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01AC720 (-EmitUpdateCommands@CInteractionTrackerMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z @ 0x1C00091A4 (-AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z.c)
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C000CBD4 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     ??_G?$CDCompDynamicArray@UPositionShift@@@DirectComposition@@QEAAPEAXI@Z @ 0x1C01AB71C (--_G-$CDCompDynamicArray@UPositionShift@@@DirectComposition@@QEAAPEAXI@Z.c)
 */

bool __fastcall DirectComposition::CInteractionTrackerMarshaler::EmitApplyPositionShift(
        DirectComposition::CInteractionTrackerMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  unsigned __int64 v4; // r9
  unsigned __int64 v5; // rbp
  char *v6; // rcx
  unsigned int v7; // r10d
  char *v8; // r9
  _QWORD *v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r8
  int v12; // ecx
  int v13; // eax
  int v14; // ecx
  bool v15; // zf
  int v16; // eax
  int v17; // ecx
  unsigned __int64 v19; // [rsp+40h] [rbp+8h] BYREF
  void *v20; // [rsp+50h] [rbp+18h] BYREF

  for ( ; *((_DWORD *)this + 89) < *((_DWORD *)this + 88); *((_DWORD *)this + 89) += v5 )
  {
    v4 = 4096LL - *((_QWORD *)(*a2)[17] + 5);
    v19 = v4;
    if ( v4 < 0x1C )
    {
      if ( !DirectComposition::CBatch::AllocateNewFragment(a2, &v19) )
        break;
      v4 = v19;
    }
    v5 = (unsigned int)(*((_DWORD *)this + 88) - *((_DWORD *)this + 89));
    if ( v5 >= (v4 - 16) / 0xC )
      LODWORD(v5) = (v4 - 16) / 0xC;
    DirectComposition::CBatch::EnsureBatchBuffer(
      (struct DirectComposition::CBatch **)a2,
      (unsigned int)(12 * v5 + 16),
      &v20);
    v6 = (char *)v20;
    v7 = 0;
    *(_DWORD *)v20 = 12 * v5 + 16;
    v8 = v6 + 16;
    *(_QWORD *)(v6 + 4) = 0LL;
    *((_DWORD *)v6 + 3) = 0;
    *((_DWORD *)v6 + 1) = 224;
    *((_DWORD *)v6 + 2) = *((_DWORD *)this + 6);
    for ( *((_DWORD *)v6 + 3) = v5; v7 < (unsigned int)v5; v8 += 12 )
    {
      v9 = (_QWORD *)*((_QWORD *)this + 43);
      v10 = v7 + *((_DWORD *)this + 89);
      ++v7;
      v11 = v9[4] * v10;
      v12 = *(_DWORD *)(v11 + *v9 + 8);
      *(_QWORD *)v8 = *(_QWORD *)(v11 + *v9);
      *((_DWORD *)v8 + 2) = v12;
    }
  }
  v13 = *((_DWORD *)this + 89);
  v14 = *((_DWORD *)this + 88);
  v15 = v13 == v14;
  if ( v13 == v14 )
  {
    *((_DWORD *)this + 88) = 0;
    v16 = 0;
    *((_DWORD *)this + 89) = 0;
    v17 = 0;
    if ( *((_QWORD *)this + 43) )
    {
      DirectComposition::CDCompDynamicArray<PositionShift>::`scalar deleting destructor'(*((__int64 **)this + 43));
      v16 = *((_DWORD *)this + 89);
      v17 = *((_DWORD *)this + 88);
    }
    *((_QWORD *)this + 43) = 0LL;
    return v16 == v17;
  }
  return v15;
}
