/*
 * XREFs of ?OnChanged@CSceneMetallicRoughnessMaterial@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1801F73C0
 * Callers:
 *     <none>
 * Callees:
 *     ?ApplyBaseColorInputToSpectreResource@CSceneMetallicRoughnessMaterial@@AEAAXPEAUISpectreMaterial@@@Z @ 0x1801F7238 (-ApplyBaseColorInputToSpectreResource@CSceneMetallicRoughnessMaterial@@AEAAXPEAUISpectreMaterial.c)
 *     ?ApplyMetallicRoughnessInputToSpectreResource@CSceneMetallicRoughnessMaterial@@AEAAXPEAUISpectreMaterial@@@Z @ 0x1801F727C (-ApplyMetallicRoughnessInputToSpectreResource@CSceneMetallicRoughnessMaterial@@AEAAXPEAUISpectre.c)
 *     ?OnChanged@CScenePbrMaterial@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1801F7940 (-OnChanged@CScenePbrMaterial@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 */

__int64 __fastcall CSceneMetallicRoughnessMaterial::OnChanged(
        CSceneMetallicRoughnessMaterial *a1,
        unsigned int a2,
        __int64 a3)
{
  __int64 v3; // r9
  struct ISpectreMaterial *v7; // rdx

  v3 = *((_QWORD *)a1 + 8);
  if ( *(_QWORD *)v3 == v3 )
    return 1LL;
  v7 = *(struct ISpectreMaterial **)(*(_QWORD *)v3 + 40LL);
  if ( !v7 )
    return 0LL;
  if ( a3 )
  {
    if ( a3 == *((_QWORD *)a1 + 20) )
    {
      CSceneMetallicRoughnessMaterial::ApplyBaseColorInputToSpectreResource(a1, v7);
    }
    else if ( a3 == *((_QWORD *)a1 + 21) )
    {
      CSceneMetallicRoughnessMaterial::ApplyMetallicRoughnessInputToSpectreResource(a1, v7);
    }
  }
  return CScenePbrMaterial::OnChanged(a1, a2, a3);
}
