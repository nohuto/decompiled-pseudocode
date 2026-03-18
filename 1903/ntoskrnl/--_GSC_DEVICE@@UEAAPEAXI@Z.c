/*
 * XREFs of ??_GSC_DEVICE@@UEAAPEAXI@Z @ 0x14034CCF0
 * Callers:
 *     <none>
 * Callees:
 *     ??1SC_DEVICE@@UEAA@XZ @ 0x14017077C (--1SC_DEVICE@@UEAA@XZ.c)
 *     RtlpSysVolFree @ 0x1406E4210 (RtlpSysVolFree.c)
 */

SC_DEVICE *__fastcall SC_DEVICE::`scalar deleting destructor'(SC_DEVICE *this, char a2)
{
  SC_DEVICE::~SC_DEVICE(this);
  if ( (a2 & 1) != 0 )
    RtlpSysVolFree(this);
  return this;
}
