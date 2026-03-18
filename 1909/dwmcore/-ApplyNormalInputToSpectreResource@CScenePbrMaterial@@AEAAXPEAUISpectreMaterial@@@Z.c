/*
 * XREFs of ?ApplyNormalInputToSpectreResource@CScenePbrMaterial@@AEAAXPEAUISpectreMaterial@@@Z @ 0x1801F77A0
 * Callers:
 *     ?ApplyAllPropertiesToSpectreResource@CScenePbrMaterial@@MEAAXPEAUISpectreMaterial@@@Z @ 0x1801F7560 (-ApplyAllPropertiesToSpectreResource@CScenePbrMaterial@@MEAAXPEAUISpectreMaterial@@@Z.c)
 *     ?OnChanged@CScenePbrMaterial@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1801F7940 (-OnChanged@CScenePbrMaterial@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?OnNormalInputChanged@CScenePbrMaterial@@QEAAXXZ @ 0x1801F7B78 (-OnNormalInputChanged@CScenePbrMaterial@@QEAAXXZ.c)
 * Callees:
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x18016A488 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ?ApplyInputToSpectreResource@CScenePbrMaterial@@IEAAXPEAUISpectreMaterial@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAVCSceneSurfaceMaterialInput@@@Z @ 0x1801F76B0 (-ApplyInputToSpectreResource@CScenePbrMaterial@@IEAAXPEAUISpectreMaterial@@V-$basic_string@DU-$c.c)
 */

void __fastcall CScenePbrMaterial::ApplyNormalInputToSpectreResource(
        CScenePbrMaterial *this,
        struct ISpectreMaterial *a2)
{
  __int64 v2; // rbx
  __int128 *v4; // rax
  __int64 v5; // rcx
  _QWORD v6[5]; // [rsp+20h] [rbp-28h] BYREF

  v2 = *((_QWORD *)this + 15);
  v4 = (__int128 *)std::string::string(v6, (__int64)"Material/NormalTexture");
  CScenePbrMaterial::ApplyInputToSpectreResource(v5, (__int64 *)a2, v4, v2);
}
