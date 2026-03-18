/*
 * XREFs of ??1CMutex@OPM@@QEAA@XZ @ 0x1C00B44B0
 * Callers:
 *     ??1COPM@@QEAA@XZ @ 0x1C00B43BC (--1COPM@@QEAA@XZ.c)
 *     ??_GCMutex@OPM@@QEAAPEAXI@Z @ 0x1C0123084 (--_GCMutex@OPM@@QEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall OPM::CMutex::~CMutex(void **this)
{
  void *v2; // rcx

  v2 = *this;
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0x4D504F47u);
    *this = 0LL;
  }
}
