/*
 * XREFs of ?SetAndSaveAnimationData@CAutoRestoreAnimationWindowData@@QEAAXPEBVCWindowData@@PEAV2@@Z @ 0x1800A4DD0
 * Callers:
 *     ?_WindowEnumCallback@CAppArrangementDelayed@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800A6DF0 (-_WindowEnumCallback@CAppArrangementDelayed@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboar.c)
 * Callees:
 *     <none>
 */

void __fastcall CAutoRestoreAnimationWindowData::SetAndSaveAnimationData(
        CAutoRestoreAnimationWindowData *this,
        const struct CWindowData *a2,
        struct CWindowData *a3)
{
  *((_DWORD *)this + 151) = *((_DWORD *)a3 + 151);
  *((_OWORD *)this + 38) = *((_OWORD *)a3 + 38);
  *((_OWORD *)this + 39) = *((_OWORD *)a3 + 39);
  *((_OWORD *)this + 40) = *((_OWORD *)a3 + 40);
  *((_OWORD *)this + 41) = *((_OWORD *)a3 + 41);
  *((_DWORD *)a3 + 151) = *((_DWORD *)a2 + 151);
  *((_OWORD *)a3 + 38) = *((_OWORD *)a2 + 38);
  *((_OWORD *)a3 + 39) = *((_OWORD *)a2 + 39);
  *((_OWORD *)a3 + 40) = *((_OWORD *)a2 + 40);
  *((_OWORD *)a3 + 41) = *((_OWORD *)a2 + 41);
  *((_QWORD *)this + 93) = a3;
}
