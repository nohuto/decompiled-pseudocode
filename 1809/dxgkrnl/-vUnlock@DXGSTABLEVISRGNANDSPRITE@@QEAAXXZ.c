/*
 * XREFs of ?vUnlock@DXGSTABLEVISRGNANDSPRITE@@QEAAXXZ @ 0x1C0021C34
 * Callers:
 *     ??1CWin32kLocks@@QEAA@XZ @ 0x1C0021BA0 (--1CWin32kLocks@@QEAA@XZ.c)
 *     ?Unlock@CWin32kLocks@@QEAAXXZ @ 0x1C0021BC4 (-Unlock@CWin32kLocks@@QEAAXXZ.c)
 *     ?HandleVistaBltStub@DXGCONTEXT@@QEAAJ_KHPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@IPEAIPEAPEAV1@@Z @ 0x1C0224A24 (-HandleVistaBltStub@DXGCONTEXT@@QEAAJ_KHPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DXGSTABLEVISRGNANDSPRITE::vUnlock(DXGSTABLEVISRGNANDSPRITE *this)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this + 1);
  if ( v2 )
  {
    if ( *((_DWORD *)this + 5) )
      (*(void (__fastcall **)(__int64, bool))(*(_QWORD *)this + 288LL))(v2, *((_DWORD *)this + 4) == 0);
    (*(void (**)(void))(*(_QWORD *)this + 272LL))();
    *((_QWORD *)this + 1) = 0LL;
    *((_DWORD *)this + 4) = 0;
    *((_DWORD *)this + 5) = 0;
  }
}
