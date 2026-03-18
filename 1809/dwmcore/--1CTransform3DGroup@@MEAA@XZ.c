/*
 * XREFs of ??1CTransform3DGroup@@MEAA@XZ @ 0x1801CD2AC
 * Callers:
 *     ??_ECTransform3DGroup@@MEAAPEAXI@Z @ 0x180174DB0 (--_ECTransform3DGroup@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??$SAFE_DELETE@VCMILMatrix@@@@YAXAEAPEAVCMILMatrix@@@Z @ 0x180021CEC (--$SAFE_DELETE@VCMILMatrix@@@@YAXAEAPEAVCMILMatrix@@@Z.c)
 *     ?UnRegisterNotifiers@CTransform3DGroup@@UEAAXXZ @ 0x1801BC360 (-UnRegisterNotifiers@CTransform3DGroup@@UEAAXXZ.c)
 */

void __fastcall CTransform3DGroup::~CTransform3DGroup(CTransform3DGroup *this)
{
  CTransform3DGroup **v2; // rdx
  CTransform3DGroup **v3; // rax

  *(_QWORD *)this = &CTransform3DGroup::`vftable'{for `CTransform3D'};
  *((_QWORD *)this + 19) = &CTransform3DGroup::`vftable'{for `CCyclicResourceListEntry'};
  CTransform3DGroup::UnRegisterNotifiers(this);
  SAFE_DELETE<CMILMatrix>((void **)this + 24);
  *((_QWORD *)this + 19) = &CCyclicResourceListEntry::`vftable';
  v2 = (CTransform3DGroup **)*((_QWORD *)this + 20);
  if ( v2[1] != (CTransform3DGroup *)((char *)this + 160)
    || (v3 = (CTransform3DGroup **)*((_QWORD *)this + 21), *v3 != (CTransform3DGroup *)((char *)this + 160)) )
  {
    __fastfail(3u);
  }
  *v3 = (CTransform3DGroup *)v2;
  v2[1] = (CTransform3DGroup *)v3;
  *(_QWORD *)this = &CNotificationResource::`vftable';
  CResource::~CResource(this);
}
