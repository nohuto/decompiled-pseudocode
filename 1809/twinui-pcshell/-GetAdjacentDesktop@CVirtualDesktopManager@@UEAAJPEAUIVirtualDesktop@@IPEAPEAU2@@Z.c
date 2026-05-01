/*
 * XREFs of ?GetAdjacentDesktop@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@IPEAPEAU2@@Z @ 0x180385F50
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CVirtualDesktopManager::GetAdjacentDesktop(
        CVirtualDesktopManager *this,
        struct IVirtualDesktop *a2,
        unsigned int a3,
        struct IVirtualDesktop **a4)
{
  unsigned int v8; // ebx
  PSRWLOCK SRWLock; // [rsp+50h] [rbp+8h] BYREF

  (*(void (__fastcall **)(_QWORD, PSRWLOCK *))(**((_QWORD **)this + 16) + 24LL))(*((_QWORD *)this + 16), &SRWLock);
  v8 = (*(__int64 (__fastcall **)(_QWORD, struct IVirtualDesktop *, _QWORD, GUID *, struct IVirtualDesktop **))(**((_QWORD **)this + 9) + 72LL))(
         *((_QWORD *)this + 9),
         a2,
         a3,
         &GUID_ff72ffdd_be7e_43fc_9c03_ad81681e88e4,
         a4);
  if ( SRWLock )
    ReleaseSRWLockShared(SRWLock);
  return v8;
}
