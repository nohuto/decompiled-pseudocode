/*
 * XREFs of ??1CAutoRestoreAnimationWindowData@@QEAA@XZ @ 0x1800A2D28
 * Callers:
 *     ?_WindowEnumCallback@CAppArrangementDelayed@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800A6DF0 (-_WindowEnumCallback@CAppArrangementDelayed@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboar.c)
 * Callees:
 *     <none>
 */

void __fastcall CAutoRestoreAnimationWindowData::~CAutoRestoreAnimationWindowData(CWindowData **this)
{
  CWindowData *v1; // rdx

  v1 = this[93];
  if ( v1 )
  {
    *((_DWORD *)v1 + 151) = *((_DWORD *)this + 151);
    *((_OWORD *)this[93] + 38) = *((_OWORD *)this + 38);
    *((_OWORD *)this[93] + 39) = *((_OWORD *)this + 39);
    *((_OWORD *)this[93] + 40) = *((_OWORD *)this + 40);
    *((_OWORD *)this[93] + 41) = *((_OWORD *)this + 41);
  }
  CWindowData::~CWindowData(this);
}
