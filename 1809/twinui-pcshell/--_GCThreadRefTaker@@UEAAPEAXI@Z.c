/*
 * XREFs of ??_GCThreadRefTaker@@UEAAPEAXI@Z @ 0x1801A8260
 * Callers:
 *     <none>
 * Callees:
 *     ??1CThreadRefTaker@@UEAA@XZ @ 0x180062780 (--1CThreadRefTaker@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800848CC (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

CThreadRefTaker *__fastcall CThreadRefTaker::`scalar deleting destructor'(CThreadRefTaker *this, char a2)
{
  CThreadRefTaker::~CThreadRefTaker(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x10);
  return this;
}
