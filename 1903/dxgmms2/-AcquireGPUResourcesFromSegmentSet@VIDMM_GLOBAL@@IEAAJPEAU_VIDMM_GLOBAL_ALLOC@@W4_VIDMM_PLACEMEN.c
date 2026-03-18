/*
 * XREFs of ?AcquireGPUResourcesFromSegmentSet@VIDMM_GLOBAL@@IEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@EI_K@Z @ 0x1C007FE60
 * Callers:
 *     ?FindResourcesForOneAllocation@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NI_K@Z @ 0x1C006C79C (-FindResourcesForOneAllocation@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTIO.c)
 *     ?AllocateTemporaryResourcesForAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0082A18 (-AllocateTemporaryResourcesForAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0018610 (_guard_dispatch_icall_nop.c)
 *     ?ValidateSegmentForAcquisitionOfResource@VIDMM_GLOBAL@@IEAAJPEAU_VIDMM_GLOBAL_ALLOC@@IW4_VIDMM_PLACEMENT_RESTRICTION@@E@Z @ 0x1C006C5B4 (-ValidateSegmentForAcquisitionOfResource@VIDMM_GLOBAL@@IEAAJPEAU_VIDMM_GLOBAL_ALLOC@@IW4_VIDMM_P.c)
 */

__int64 __fastcall VIDMM_GLOBAL::AcquireGPUResourcesFromSegmentSet(
        __int64 a1,
        __int64 a2,
        int a3,
        char a4,
        int a5,
        __int64 a6)
{
  unsigned int v6; // r15d
  __int64 v10; // rsi
  int v12; // edi
  __int64 v13; // rbx
  __int64 v14; // rcx
  char v15; // dl
  int v16; // ecx
  bool v17; // dl
  __int64 v18; // rcx
  int v19; // eax
  __int64 v20; // r8
  __int64 v21; // rcx
  __int64 v23; // rcx
  int v24; // eax
  int v25; // [rsp+20h] [rbp-48h]

  v6 = 0;
  v10 = *(_QWORD *)(a1 + 40184) + 1560LL * (*(_DWORD *)(a2 + 76) & 0x3F);
  v12 = -1071775488;
  if ( *(_DWORD *)(v10 + 24) )
  {
    do
    {
      v13 = v6 + *(_DWORD *)(v10 + 20);
      if ( a6 != -1 )
      {
        if ( a5 )
        {
          v24 = a5 - 1;
        }
        else
        {
          v23 = *(_QWORD *)(a1 + 40184) + 1560LL * (*(_DWORD *)(a2 + 76) & 0x3F);
          v24 = *(unsigned __int16 *)(v23 + 28) - *(_DWORD *)(v23 + 20);
        }
        if ( (_DWORD)v13 != v24 )
          goto LABEL_12;
      }
      v12 = VIDMM_GLOBAL::ValidateSegmentForAcquisitionOfResource(a1, a2, v13, a3, a4);
      if ( v12 < 0 )
        goto LABEL_12;
      v15 = *(_BYTE *)(v10 + 436);
      if ( (v15 & 3) != 0 )
      {
        v14 = *(_QWORD *)(*(_QWORD *)(a1 + 3712) + 8 * v13);
        if ( (*(_DWORD *)(v14 + 80) & 1) != 0 )
        {
          if ( (**(_DWORD **)(a2 + 504) & 0x8000) == 0 )
            goto LABEL_26;
          if ( !a4 )
          {
LABEL_6:
            if ( (_DWORD)v13 != *(unsigned __int16 *)(v10 + 28) || (**(_DWORD **)(a2 + 504) & 0x8000) == 0 )
            {
              v17 = ((a3 - 3) & 0xFFFFFFFA) == 0
                 && a3 != 8
                 && ((v16 = **(_DWORD **)(a2 + 504), (v16 & 0x20000000) == 0) || v16 >= 0)
                 && (v16 & 0x80000) == 0;
              v20 = a6;
              LOBYTE(v20) = 1;
              v21 = *(_QWORD *)(*(_QWORD *)(a1 + 3712) + 8 * v13);
              LOBYTE(v25) = v17;
              v19 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD, int, int, __int64))(*(_QWORD *)v21 + 16LL))(
                      v21,
                      a2,
                      v20,
                      0LL,
                      v25,
                      a3,
                      a6);
LABEL_18:
              v12 = v19;
              if ( v19 >= 0 )
                return (unsigned int)v12;
              goto LABEL_38;
            }
            goto LABEL_37;
          }
          if ( (v15 & 4) != 0 )
LABEL_26:
            v13 = *(unsigned __int16 *)(v10 + 28);
        }
      }
      if ( !a4 )
        goto LABEL_6;
      if ( (v15 & 4) != 0 || (_DWORD)v13 != *(unsigned __int16 *)(v10 + 28) )
      {
        v18 = *(_QWORD *)(*(_QWORD *)(a1 + 3712) + 8 * v13);
        v19 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v18 + 80LL))(v18, a2);
        goto LABEL_18;
      }
LABEL_37:
      v12 = -1071775488;
LABEL_38:
      if ( g_IsInternalReleaseOrDbg )
        *(_QWORD *)(WdLogNewEntry5_WdTrace(v14) + 24) = v13;
LABEL_12:
      ++v6;
    }
    while ( v6 < *(_DWORD *)(v10 + 24) );
  }
  return (unsigned int)v12;
}
