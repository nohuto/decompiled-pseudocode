/*
 * XREFs of ??_GTrayNotifyCallback@SystemTray@@EEAAPEAXI@Z @ 0x18035D5B0
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800831C8 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008A0A0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

SystemTray::TrayNotifyCallback *__fastcall SystemTray::TrayNotifyCallback::`scalar deleting destructor'(
        SystemTray::TrayNotifyCallback *this,
        char a2)
{
  HICON v3; // rcx
  unsigned __int64 v5; // rdx

  v3 = (HICON)*((_QWORD *)this + 7);
  if ( v3 )
    DestroyIcon(v3);
  v5 = *((_QWORD *)this + 6);
  if ( v5 >= 8 )
    std::_Deallocate<16,0>(*((void **)this + 3), (const struct std::nothrow_t *)(2 * v5 + 2));
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 7LL;
  *((_WORD *)this + 12) = 0;
  WindowsDeleteString(*((HSTRING *)this + 2));
  *((_QWORD *)this + 2) = 0LL;
  *((_DWORD *)this + 3) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x58);
  return this;
}
