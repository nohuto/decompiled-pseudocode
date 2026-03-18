/*
 * XREFs of ?ApplyEmissiveInputToSpectreResource@CScenePbrMaterial@@AEAAXPEAUISpectreMaterial@@@Z @ 0x1801F8D5C
 * Callers:
 *     ?ApplyAllPropertiesToSpectreResource@CScenePbrMaterial@@MEAAXPEAUISpectreMaterial@@@Z @ 0x1801F8C50 (-ApplyAllPropertiesToSpectreResource@CScenePbrMaterial@@MEAAXPEAUISpectreMaterial@@@Z.c)
 *     ?OnChanged@CScenePbrMaterial@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1801F9030 (-OnChanged@CScenePbrMaterial@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?OnEmissiveInputChanged@CScenePbrMaterial@@QEAAXXZ @ 0x1801F9160 (-OnEmissiveInputChanged@CScenePbrMaterial@@QEAAXXZ.c)
 * Callees:
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x18016BB78 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ?ApplyInputToSpectreResource@CScenePbrMaterial@@IEAAXPEAUISpectreMaterial@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAVCSceneSurfaceMaterialInput@@@Z @ 0x1801F8DA0 (-ApplyInputToSpectreResource@CScenePbrMaterial@@IEAAXPEAUISpectreMaterial@@V-$basic_string@DU-$c.c)
 */

void __fastcall CScenePbrMaterial::ApplyEmissiveInputToSpectreResource(
        CScenePbrMaterial *this,
        struct ISpectreMaterial *a2)
{
  __int64 v2; // rbx
  _QWORD *v4; // rax
  __int64 v5; // rcx
  _QWORD v6[5]; // [rsp+20h] [rbp-28h] BYREF

  v2 = *((_QWORD *)this + 14);
  v4 = std::string::string(v6, (__int64)"Material/EmissiveTexture");
  CScenePbrMaterial::ApplyInputToSpectreResource(v5, a2, v4, v2);
}
