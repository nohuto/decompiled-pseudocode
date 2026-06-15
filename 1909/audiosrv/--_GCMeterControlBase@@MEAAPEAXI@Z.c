/*
 * XREFs of ??_GCMeterControlBase@@MEAAPEAXI@Z @ 0x1800C33D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CMeterControlBase@@MEAA@XZ @ 0x18005C770 (--1CMeterControlBase@@MEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800652C4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

CMeterControlBase *__fastcall CMeterControlBase::`scalar deleting destructor'(CMeterControlBase *this, char a2)
{
  CMeterControlBase::~CMeterControlBase(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x20);
  return this;
}
