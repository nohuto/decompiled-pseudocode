/*
 * XREFs of ?ApplyInputToSpectreResource@CScenePbrMaterial@@IEAAXPEAUISpectreMaterial@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAVCSceneSurfaceMaterialInput@@@Z @ 0x1801F8DA0
 * Callers:
 *     ?ApplyBaseColorInputToSpectreResource@CSceneMetallicRoughnessMaterial@@AEAAXPEAUISpectreMaterial@@@Z @ 0x1801F8928 (-ApplyBaseColorInputToSpectreResource@CSceneMetallicRoughnessMaterial@@AEAAXPEAUISpectreMaterial.c)
 *     ?ApplyMetallicRoughnessInputToSpectreResource@CSceneMetallicRoughnessMaterial@@AEAAXPEAUISpectreMaterial@@@Z @ 0x1801F896C (-ApplyMetallicRoughnessInputToSpectreResource@CSceneMetallicRoughnessMaterial@@AEAAXPEAUISpectre.c)
 *     ?ApplyEmissiveInputToSpectreResource@CScenePbrMaterial@@AEAAXPEAUISpectreMaterial@@@Z @ 0x1801F8D5C (-ApplyEmissiveInputToSpectreResource@CScenePbrMaterial@@AEAAXPEAUISpectreMaterial@@@Z.c)
 *     ?ApplyNormalInputToSpectreResource@CScenePbrMaterial@@AEAAXPEAUISpectreMaterial@@@Z @ 0x1801F8E90 (-ApplyNormalInputToSpectreResource@CScenePbrMaterial@@AEAAXPEAUISpectreMaterial@@@Z.c)
 *     ?ApplyOcclusionInputToSpectreResource@CScenePbrMaterial@@AEAAXPEAUISpectreMaterial@@@Z @ 0x1801F8ED4 (-ApplyOcclusionInputToSpectreResource@CScenePbrMaterial@@AEAAXPEAUISpectreMaterial@@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180078318 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     memcpy_0 @ 0x1800EC54B (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CScenePbrMaterial::ApplyInputToSpectreResource(__int64 a1, __int64 *a2, __int128 *a3, __int64 a4)
{
  __int64 v4; // rdi
  __int64 v7; // r15
  __int64 v8; // rax
  bool v9; // cf
  __int64 v10; // rax
  __int128 *v11; // r14
  unsigned __int64 v12; // rbp
  void (__fastcall *v13)(__int64 *, __int128 *, __int64, __int64); // r13
  __int128 v14; // xmm0
  __int64 v15; // rbx
  __int128 v16; // [rsp+30h] [rbp-58h] BYREF
  __int128 v17; // [rsp+40h] [rbp-48h]

  v4 = 0LL;
  v7 = 0LL;
  if ( a4 )
  {
    v8 = *(_QWORD *)(a4 + 72);
    if ( v8 )
      v4 = *(_QWORD *)(v8 + 144);
    v7 = *(_QWORD *)(a4 + 64);
  }
  v9 = *((_QWORD *)a3 + 3) < 0x10uLL;
  v10 = *a2;
  v11 = a3;
  v12 = *((_QWORD *)a3 + 2);
  v17 = 0LL;
  v13 = *(void (__fastcall **)(__int64 *, __int128 *, __int64, __int64))(v10 + 96);
  if ( !v9 )
    v11 = *(__int128 **)a3;
  if ( v12 >= 0x10 )
  {
    v15 = v12 | 0xF;
    if ( (v12 | 0xF) > 0x7FFFFFFFFFFFFFFFLL )
      v15 = 0x7FFFFFFFFFFFFFFFLL;
    *(_QWORD *)&v16 = std::_Allocate<16,std::_Default_allocate_traits,0>(v15 + 1);
    memcpy_0((void *)v16, v11, v12 + 1);
    *((_QWORD *)&v17 + 1) = v15;
  }
  else
  {
    v14 = *v11;
    *((_QWORD *)&v17 + 1) = 15LL;
    v16 = v14;
  }
  *(_QWORD *)&v17 = v12;
  v13(a2, &v16, v4, v7);
  std::string::_Tidy_deallocate((__int64)a3);
}
