/*
 * XREFs of ??1CAutoRestoreAnimationWindowData@@QEAA@XZ @ 0x1800A70BC
 * Callers:
 *     ?_WindowEnumCallback@CAppArrangementDelayed@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800AB0D0 (-_WindowEnumCallback@CAppArrangementDelayed@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboar.c)
 * Callees:
 *     <none>
 */

void __fastcall CAutoRestoreAnimationWindowData::~CAutoRestoreAnimationWindowData(CWindowData **this)
{
  CWindowData *v1; // rdx

  v1 = this[94];
  if ( v1 )
  {
    *((_DWORD *)v1 + 153) = *((_DWORD *)this + 153);
    *(_OWORD *)((char *)this[94] + 616) = *(_OWORD *)(this + 77);
    *(_OWORD *)((char *)this[94] + 632) = *(_OWORD *)(this + 79);
    *(_OWORD *)((char *)this[94] + 648) = *(_OWORD *)(this + 81);
    *(_OWORD *)((char *)this[94] + 664) = *(_OWORD *)(this + 83);
  }
  CWindowData::~CWindowData(this);
}
