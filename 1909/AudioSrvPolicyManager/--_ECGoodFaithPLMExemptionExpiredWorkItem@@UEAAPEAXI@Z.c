/*
 * XREFs of ??_ECGoodFaithPLMExemptionExpiredWorkItem@@UEAAPEAXI@Z @ 0x180029A90
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800349C4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

CGoodFaithPLMExemptionExpiredWorkItem *__fastcall CGoodFaithPLMExemptionExpiredWorkItem::`vector deleting destructor'(
        CGoodFaithPLMExemptionExpiredWorkItem *this,
        char a2)
{
  *(_QWORD *)this = &WORKER_THREAD_EVENT::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x10);
  return this;
}
