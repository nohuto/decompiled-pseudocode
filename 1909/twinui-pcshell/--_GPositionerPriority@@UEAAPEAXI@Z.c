/*
 * XREFs of ??_GPositionerPriority@@UEAAPEAXI@Z @ 0x180075B80
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008A0A0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

PositionerPriority *__fastcall PositionerPriority::`scalar deleting destructor'(PositionerPriority *this, char a2)
{
  __int64 v4; // rcx

  *((_DWORD *)this + 13) = -1073741823;
  v4 = *((_QWORD *)this + 3);
  if ( v4 )
  {
    *((_QWORD *)this + 3) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x48);
  return this;
}
