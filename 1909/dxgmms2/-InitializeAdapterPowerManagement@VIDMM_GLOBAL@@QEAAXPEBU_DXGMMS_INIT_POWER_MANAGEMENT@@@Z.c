/*
 * XREFs of ?InitializeAdapterPowerManagement@VIDMM_GLOBAL@@QEAAXPEBU_DXGMMS_INIT_POWER_MANAGEMENT@@@Z @ 0x1C00AC438
 * Callers:
 *     ?VidMmInitializeAdapterPowerManagement@@YAXPEAVVIDMM_GLOBAL@@PEBU_DXGMMS_INIT_POWER_MANAGEMENT@@@Z @ 0x1C0014F90 (-VidMmInitializeAdapterPowerManagement@@YAXPEAVVIDMM_GLOBAL@@PEBU_DXGMMS_INIT_POWER_MANAGEMENT@@.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_GLOBAL::InitializeAdapterPowerManagement(
        VIDMM_GLOBAL *this,
        const struct _DXGMMS_INIT_POWER_MANAGEMENT *a2)
{
  *((_OWORD *)this + 2503) = *(_OWORD *)a2;
  *((_OWORD *)this + 2504) = *((_OWORD *)a2 + 1);
  *((_OWORD *)this + 2505) = *((_OWORD *)a2 + 2);
  *((_OWORD *)this + 2506) = *((_OWORD *)a2 + 3);
  *((_OWORD *)this + 2507) = *((_OWORD *)a2 + 4);
}
