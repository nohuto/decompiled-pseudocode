/*
 * XREFs of ??_GCHMDManager@@QEAAPEAXI@Z @ 0x18010333C
 * Callers:
 *     HOLOGRAPHICDISPLAY_rundown @ 0x1801037E0 (HOLOGRAPHICDISPLAY_rundown.c)
 *     s_CreateHolographicDisplay @ 0x180103800 (s_CreateHolographicDisplay.c)
 *     s_DestroyHolographicDisplay @ 0x180103910 (s_DestroyHolographicDisplay.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800652C4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 */

CHMDManager *__fastcall CHMDManager::`scalar deleting destructor'(CHMDManager *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  v2 = *((_QWORD *)this + 2);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  v3 = *((_QWORD *)this + 1);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  if ( *(_QWORD *)this )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)this + 16LL))(*(_QWORD *)this);
  operator delete(this, (const struct std::nothrow_t *)0x18);
  return this;
}
