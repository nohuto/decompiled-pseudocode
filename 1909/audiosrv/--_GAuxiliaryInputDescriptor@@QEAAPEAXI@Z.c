/*
 * XREFs of ??_GAuxiliaryInputDescriptor@@QEAAPEAXI@Z @ 0x1800F5AAC
 * Callers:
 *     ??1?$CAutoPtr@UAuxiliaryInputDescriptor@@@ATL@@QEAA@XZ @ 0x1800F50D8 (--1-$CAutoPtr@UAuxiliaryInputDescriptor@@@ATL@@QEAA@XZ.c)
 *     ?UpdateAuxiliaryInputForStreamGroup@CAudioResourceManager@@QEAAXAEBVWeakRef@WRL@Microsoft@@@Z @ 0x1800F9654 (-UpdateAuxiliaryInputForStreamGroup@CAudioResourceManager@@QEAAXAEBVWeakRef@WRL@Microsoft@@@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800652C4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

LPVOID *__fastcall AuxiliaryInputDescriptor::`scalar deleting destructor'(LPVOID *this)
{
  CoTaskMemFree(this[1]);
  this[1] = 0LL;
  operator delete(this, (const struct std::nothrow_t *)0x10);
  return this;
}
