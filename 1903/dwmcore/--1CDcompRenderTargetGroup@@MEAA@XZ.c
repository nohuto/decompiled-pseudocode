/*
 * XREFs of ??1CDcompRenderTargetGroup@@MEAA@XZ @ 0x1800D63F0
 * Callers:
 *     ??_GCDcompRenderTargetGroup@@MEAAPEAXI@Z @ 0x1800D63B0 (--_GCDcompRenderTargetGroup@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?UnRegisterNotifiers@CDcompRenderTargetGroup@@UEAAXXZ @ 0x1800D64D0 (-UnRegisterNotifiers@CDcompRenderTargetGroup@@UEAAXXZ.c)
 */

void __fastcall CDcompRenderTargetGroup::~CDcompRenderTargetGroup(CDcompRenderTargetGroup *this)
{
  *(_QWORD *)this = &CDcompRenderTargetGroup::`vftable';
  CDcompRenderTargetGroup::UnRegisterNotifiers(this);
  CResource::~CResource(this);
}
