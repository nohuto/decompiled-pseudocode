/*
 * XREFs of ??0CCompositionEnvironmentLight@@QEAA@PEAVCComposition@@@Z @ 0x18020F330
 * Callers:
 *     ??0CSceneWorld@@QEAA@PEAVCComposition@@@Z @ 0x1802056B8 (--0CSceneWorld@@QEAA@PEAVCComposition@@@Z.c)
 * Callees:
 *     ??0CCompositionLight@@QEAA@PEAVCComposition@@_N@Z @ 0x18002EE60 (--0CCompositionLight@@QEAA@PEAVCComposition@@_N@Z.c)
 */

CCompositionEnvironmentLight *__fastcall CCompositionEnvironmentLight::CCompositionEnvironmentLight(
        CCompositionEnvironmentLight *this,
        struct CComposition *a2)
{
  __int64 v2; // rcx

  CCompositionLight::CCompositionLight(this, a2, 1);
  *(_DWORD *)(v2 + 248) = 1065353216;
  *(_QWORD *)(v2 + 72) = &CCompositionEnvironmentLight::`vftable'{for `ISceneNotificationListener'};
  *(_QWORD *)v2 = &CCompositionEnvironmentLight::`vftable'{for `CPropertyChangeResource'};
  *(_OWORD *)(v2 + 252) = xmmword_180312650;
  *(_OWORD *)(v2 + 268) = xmmword_180312660;
  *(_OWORD *)(v2 + 284) = xmmword_180312670;
  *(_OWORD *)(v2 + 300) = xmmword_180312680;
  *(_OWORD *)(v2 + 316) = xmmword_180312690;
  *(_OWORD *)(v2 + 332) = xmmword_1803126A0;
  *(_QWORD *)(v2 + 348) = 0xBF3B531EBD893965uLL;
  *(_DWORD *)(v2 + 356) = 1059333266;
  return (CCompositionEnvironmentLight *)v2;
}
