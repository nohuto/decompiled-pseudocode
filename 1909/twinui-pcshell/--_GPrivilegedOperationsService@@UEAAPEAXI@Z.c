/*
 * XREFs of ??_GPrivilegedOperationsService@@UEAAPEAXI@Z @ 0x180209358
 * Callers:
 *     ??_EPrivilegedOperationsService@@WDA@EAAPEAXI@Z @ 0x1800D8F40 (--_EPrivilegedOperationsService@@WDA@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008A0A0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1PrivilegedOperationsService@@UEAA@XZ @ 0x180209168 (--1PrivilegedOperationsService@@UEAA@XZ.c)
 */

PrivilegedOperationsService *__fastcall PrivilegedOperationsService::`scalar deleting destructor'(
        PrivilegedOperationsService *this,
        char a2)
{
  PrivilegedOperationsService::~PrivilegedOperationsService(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x108);
  return this;
}
