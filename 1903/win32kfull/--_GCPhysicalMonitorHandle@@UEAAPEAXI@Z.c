/*
 * XREFs of ??_GCPhysicalMonitorHandle@@UEAAPEAXI@Z @ 0x1C026E090
 * Callers:
 *     <none>
 * Callees:
 *     ?Destroy@CPhysicalMonitorHandle@@UEAAJXZ @ 0x1C026F290 (-Destroy@CPhysicalMonitorHandle@@UEAAJXZ.c)
 */

_QWORD *__fastcall CPhysicalMonitorHandle::`scalar deleting destructor'(_QWORD *P, char a2)
{
  bool v2; // zf

  v2 = P[1] == 0LL;
  *P = &CPhysicalMonitorHandle::`vftable';
  if ( !v2 )
    CPhysicalMonitorHandle::Destroy((CPhysicalMonitorHandle *)P);
  OPM::CMutex::~CMutex((OPM::CMutex *)(P + 9));
  OPM::CMonitorPDO::~CMonitorPDO((OPM::CMonitorPDO *)P);
  if ( (a2 & 1) != 0 )
    ExFreePoolWithTag(P, 0x63326947u);
  return P;
}
