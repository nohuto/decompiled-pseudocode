/*
 * XREFs of ??_EVirtualAudioSessionInfo@@UEAAPEAXI@Z @ 0x1800078E0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800349C4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800359C0 (_guard_dispatch_icall_nop.c)
 */

LPVOID *__fastcall VirtualAudioSessionInfo::`vector deleting destructor'(LPVOID *this, char a2)
{
  LPVOID v4; // rcx

  CoTaskMemFree(this[3]);
  this[3] = 0LL;
  v4 = this[2];
  if ( v4 )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v4 + 16LL))(v4);
  *((_DWORD *)this + 3) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x30);
  return this;
}
