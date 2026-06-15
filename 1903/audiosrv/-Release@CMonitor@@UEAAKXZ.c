/*
 * XREFs of ?Release@CMonitor@@UEAAKXZ @ 0x1801110A0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800642D4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CMonitor@@IEAA@XZ @ 0x18010DC84 (--1CMonitor@@IEAA@XZ.c)
 */

__int64 __fastcall CMonitor::Release(CMonitor *this)
{
  unsigned __int32 v2; // edi

  v2 = _InterlockedDecrement((volatile signed __int32 *)this + 2);
  if ( !v2 && this )
  {
    CMonitor::~CMonitor(this);
    operator delete(this, (const struct std::nothrow_t *)0x200);
  }
  return v2;
}
