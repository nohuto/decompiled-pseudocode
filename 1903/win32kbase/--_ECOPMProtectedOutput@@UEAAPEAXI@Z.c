/*
 * XREFs of ??_ECOPMProtectedOutput@@UEAAPEAXI@Z @ 0x1C0126200
 * Callers:
 *     <none>
 * Callees:
 *     ??1CMonitorPDO@OPM@@UEAA@XZ @ 0x1C0122FA0 (--1CMonitorPDO@OPM@@UEAA@XZ.c)
 *     ?Destroy@COPMProtectedOutput@@UEAAJXZ @ 0x1C01263C0 (-Destroy@COPMProtectedOutput@@UEAAJXZ.c)
 */

COPMProtectedOutput *__fastcall COPMProtectedOutput::`vector deleting destructor'(COPMProtectedOutput *this, char a2)
{
  bool v2; // zf

  v2 = *((_QWORD *)this + 1) == 0LL;
  *(_QWORD *)this = &COPMProtectedOutput::`vftable';
  if ( !v2 )
    COPMProtectedOutput::Destroy(this);
  OPM::CMonitorPDO::~CMonitorPDO(this);
  if ( (a2 & 1) != 0 )
    ExFreePoolWithTag(this, 0x4D504F47u);
  return this;
}
