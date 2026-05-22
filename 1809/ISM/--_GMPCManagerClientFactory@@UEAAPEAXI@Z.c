/*
 * XREFs of ??_GMPCManagerClientFactory@@UEAAPEAXI@Z @ 0x1800DB9B0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

MPCManagerClientFactory *__fastcall MPCManagerClientFactory::`scalar deleting destructor'(
        MPCManagerClientFactory *this,
        char a2)
{
  __int64 v4; // rcx

  *((_DWORD *)this + 15) = -1073741823;
  v4 = *((_QWORD *)this + 4);
  if ( v4 )
  {
    *((_QWORD *)this + 4) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x58);
  return this;
}
