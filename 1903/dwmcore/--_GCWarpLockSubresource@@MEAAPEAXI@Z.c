/*
 * XREFs of ??_GCWarpLockSubresource@@MEAAPEAXI@Z @ 0x180023030
 * Callers:
 *     <none>
 * Callees:
 *     ??1CWarpLockSubresource@@MEAA@XZ @ 0x18002306C (--1CWarpLockSubresource@@MEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800CEFE0 (--3@YAXPEAX_K@Z.c)
 */

CWarpLockSubresource *__fastcall CWarpLockSubresource::`scalar deleting destructor'(
        CWarpLockSubresource *this,
        char a2)
{
  CWarpLockSubresource::~CWarpLockSubresource(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x40uLL);
  return this;
}
