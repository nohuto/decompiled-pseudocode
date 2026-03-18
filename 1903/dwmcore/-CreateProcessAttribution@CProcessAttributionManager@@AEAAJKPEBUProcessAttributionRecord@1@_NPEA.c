/*
 * XREFs of ?CreateProcessAttribution@CProcessAttributionManager@@AEAAJKPEBUProcessAttributionRecord@1@_NPEAPEAVCProcessAttribution@@@Z @ 0x1800C959C
 * Callers:
 *     ?GetProcessAttribution@CProcessAttributionManager@@QEAAJK_KPEAPEAVCProcessAttribution@@@Z @ 0x180045DAC (-GetProcessAttribution@CProcessAttributionManager@@QEAAJK_KPEAPEAVCProcessAttribution@@@Z.c)
 *     ?BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEBU_D3DCOLORVALUE@@_NPEBVCMILMatrix@@PEAV?$TValueResource@UMilColorTransform@@UtagMILCMD_COLORTRANSFORMRESOURCE@@$0BH@@@2PEAVCRenderTarget@@@Z @ 0x18004B620 (-BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEBU_D3DCOLORVALUE@@_NPEBVCMILMatrix@@PEAV-.c)
 * Callees:
 *     ??$_Emplace_reallocate@AEBQEAUProcessAttributionRecord@CProcessAttributionManager@@@?$vector@PEAUProcessAttributionRecord@CProcessAttributionManager@@V?$allocator@PEAUProcessAttributionRecord@CProcessAttributionManager@@@std@@@std@@QEAAPEAPEAUProcessAttributionRecord@CProcessAttributionManager@@QEAPEAU23@AEBQEAU23@@Z @ 0x180030640 (--$_Emplace_reallocate@AEBQEAUProcessAttributionRecord@CProcessAttributionManager@@@-$vector@PEA.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180080530 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180089A74 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?IsLessThan@ProcessAttributionRecord@CProcessAttributionManager@@SA_NPEBU12@_J@Z @ 0x1800CC9BC (-IsLessThan@ProcessAttributionRecord@CProcessAttributionManager@@SA_NPEBU12@_J@Z.c)
 *     memset_0 @ 0x1800E7E5E (memset_0.c)
 *     memmove_0 @ 0x1800EC557 (memmove_0.c)
 *     ModuleFailFastForHRESULT @ 0x180159A90 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CProcessAttributionManager::CreateProcessAttribution(
        CProcessAttributionManager *this,
        int a2,
        const struct CProcessAttributionManager::ProcessAttributionRecord *a3,
        char a4,
        struct CProcessAttribution **a5)
{
  unsigned int v9; // ebp
  char *v10; // rax
  __int64 v11; // r8
  __int64 *v12; // rsi
  __int64 *v13; // r13
  const struct CProcessAttributionManager::ProcessAttributionRecord **v14; // r12
  char *v15; // rdi
  __int64 v16; // rbx
  __int64 v17; // rax
  _OWORD *v18; // rax
  __int64 v19; // rcx
  _OWORD *v20; // rbx
  __int64 v21; // r9
  char *v22; // rcx
  _OWORD *v24; // [rsp+30h] [rbp-38h] BYREF
  void *retaddr; // [rsp+68h] [rbp+0h]

  v9 = 0;
  v10 = (char *)DefaultHeap::AllocClear(0x88uLL);
  if ( !v10 )
    ModuleFailFastForHRESULT(2147942414LL, retaddr, v11);
  *((_DWORD *)v10 + 2) = 0;
  *(_QWORD *)v10 = &CProcessAttribution::`vftable';
  *((_DWORD *)v10 + 32) = a2;
  *((_QWORD *)v10 + 2) = *(_QWORD *)a3;
  *(_OWORD *)(v10 + 24) = *(_OWORD *)((char *)a3 + 8);
  *((_DWORD *)v10 + 10) = *((_DWORD *)a3 + 6);
  *a5 = (struct CProcessAttribution *)v10;
  _InterlockedIncrement((volatile signed __int32 *)v10 + 2);
  if ( a4 )
  {
    v12 = (__int64 *)*((_QWORD *)this + 3);
    v13 = (__int64 *)*((_QWORD *)this + 4);
    while ( v12 != v13 )
    {
      v17 = *v12;
      v15 = *(char **)(*v12 + 16);
      v16 = (__int64)(*(_QWORD *)(*v12 + 24) - (_QWORD)v15) >> 3;
      if ( v16 > 0 )
      {
        do
        {
          v14 = (const struct CProcessAttributionManager::ProcessAttributionRecord **)&v15[8 * (v16 >> 1)];
          if ( CProcessAttributionManager::ProcessAttributionRecord::IsLessThan(*v14, *(_QWORD *)a3) )
          {
            v15 = (char *)(v14 + 1);
            v16 += -1 - (v16 >> 1);
          }
          else
          {
            v16 >>= 1;
          }
        }
        while ( v16 > 0 );
        v17 = *v12;
      }
      if ( v15 == *(char **)(v17 + 24) || **(_QWORD **)v15 != *(_QWORD *)a3 )
      {
        v18 = DefaultHeap::Alloc(0x70uLL);
        v20 = v18;
        if ( v18 )
          memset_0(v18, 0, 0x70uLL);
        else
          v20 = 0LL;
        v24 = v20;
        if ( !v20 )
        {
          v9 = -2147024882;
          MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, 0x8007000E, 0x1DFu, 0LL);
          return v9;
        }
        *v20 = *(_OWORD *)a3;
        v20[1] = *((_OWORD *)a3 + 1);
        v20[2] = *((_OWORD *)a3 + 2);
        v20[3] = *((_OWORD *)a3 + 3);
        v20[4] = *((_OWORD *)a3 + 4);
        v20[5] = *((_OWORD *)a3 + 5);
        v20[6] = *((_OWORD *)a3 + 6);
        v21 = *v12;
        v22 = *(char **)(*v12 + 24);
        if ( *(char **)(*v12 + 32) == v22 )
        {
          std::vector<CProcessAttributionManager::ProcessAttributionRecord *>::_Emplace_reallocate<CProcessAttributionManager::ProcessAttributionRecord * const &>(
            v21 + 16,
            v15,
            &v24);
        }
        else if ( v15 == v22 )
        {
          *(_QWORD *)v22 = v20;
          *(_QWORD *)(v21 + 24) += 8LL;
        }
        else
        {
          *(_QWORD *)v22 = *((_QWORD *)v22 - 1);
          *(_QWORD *)(v21 + 24) += 8LL;
          memmove_0(v15 + 8, v15, v22 - v15 - 8);
          *(_QWORD *)v15 = v20;
        }
      }
      ++v12;
    }
  }
  return v9;
}
