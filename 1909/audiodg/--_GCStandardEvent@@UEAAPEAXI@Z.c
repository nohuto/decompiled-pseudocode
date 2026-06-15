/*
 * XREFs of ??_GCStandardEvent@@UEAAPEAXI@Z @ 0x1400373C0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x140015B54 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x140026760 (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 */

CStandardEvent *__fastcall CStandardEvent::`scalar deleting destructor'(CStandardEvent *this, void *a2)
{
  char v3; // di
  wil::details *v4; // rcx

  v3 = (char)a2;
  v4 = (wil::details *)*((_QWORD *)this + 2);
  if ( v4 )
    wil::details::CloseHandle(v4, a2);
  *((_DWORD *)this + 3) = -1073741823;
  if ( (v3 & 1) != 0 )
    operator delete(this);
  return this;
}
