/*
 * XREFs of ??_GSC_DISK@@UEAAPEAXI@Z @ 0x14034B330
 * Callers:
 *     <none>
 * Callees:
 *     ??1SC_DISK@@UEAA@XZ @ 0x140170694 (--1SC_DISK@@UEAA@XZ.c)
 *     RtlpSysVolFree @ 0x1406E4210 (RtlpSysVolFree.c)
 */

SC_DISK *__fastcall SC_DISK::`scalar deleting destructor'(SC_DISK *this, char a2)
{
  SC_DISK::~SC_DISK(this);
  if ( (a2 & 1) != 0 )
    RtlpSysVolFree(this);
  return this;
}
