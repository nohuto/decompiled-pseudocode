/*
 * XREFs of ?SetAndSaveAnimationData@CAutoRestoreAnimationWindowData@@QEAAXPEBVCWindowData@@PEAV2@@Z @ 0x1800A9438
 * Callers:
 *     ?_WindowEnumCallback@CAppArrangementDelayed@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800AB430 (-_WindowEnumCallback@CAppArrangementDelayed@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboar.c)
 * Callees:
 *     <none>
 */

void __fastcall CAutoRestoreAnimationWindowData::SetAndSaveAnimationData(
        CAutoRestoreAnimationWindowData *this,
        const struct CWindowData *a2,
        struct CWindowData *a3)
{
  *((_DWORD *)this + 153) = *((_DWORD *)a3 + 153);
  *(_OWORD *)((char *)this + 616) = *(_OWORD *)((char *)a3 + 616);
  *(_OWORD *)((char *)this + 632) = *(_OWORD *)((char *)a3 + 632);
  *(_OWORD *)((char *)this + 648) = *(_OWORD *)((char *)a3 + 648);
  *(_OWORD *)((char *)this + 664) = *(_OWORD *)((char *)a3 + 664);
  *((_DWORD *)a3 + 153) = *((_DWORD *)a2 + 153);
  *(_OWORD *)((char *)a3 + 616) = *(_OWORD *)((char *)a2 + 616);
  *(_OWORD *)((char *)a3 + 632) = *(_OWORD *)((char *)a2 + 632);
  *(_OWORD *)((char *)a3 + 648) = *(_OWORD *)((char *)a2 + 648);
  *(_OWORD *)((char *)a3 + 664) = *(_OWORD *)((char *)a2 + 664);
  *((_QWORD *)this + 94) = a3;
}
