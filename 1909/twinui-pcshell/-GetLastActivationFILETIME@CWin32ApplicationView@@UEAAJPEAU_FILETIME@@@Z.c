/*
 * XREFs of ?GetLastActivationFILETIME@CWin32ApplicationView@@UEAAJPEAU_FILETIME@@@Z @ 0x18017A7F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWin32ApplicationView::GetLastActivationFILETIME(CWin32ApplicationView *this, struct _FILETIME *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, struct _FILETIME *))(**((_QWORD **)this + 27) + 40LL))(
           *((_QWORD *)this + 27),
           a2);
}
