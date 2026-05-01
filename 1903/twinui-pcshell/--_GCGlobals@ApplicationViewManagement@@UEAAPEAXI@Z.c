/*
 * XREFs of ??_GCGlobals@ApplicationViewManagement@@UEAAPEAXI@Z @ 0x1801558E0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008755C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CGlobals@ApplicationViewManagement@@UEAA@XZ @ 0x180154E9C (--1CGlobals@ApplicationViewManagement@@UEAA@XZ.c)
 */

ApplicationViewManagement::CGlobals *__fastcall ApplicationViewManagement::CGlobals::`scalar deleting destructor'(
        ApplicationViewManagement::CGlobals *this,
        char a2)
{
  ApplicationViewManagement::CGlobals::~CGlobals(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x38);
  return this;
}
