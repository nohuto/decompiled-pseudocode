/*
 * XREFs of ?On3DCompositorStateChanged@MPC3DStateHelper@@AEAA_N_N@Z @ 0x18007C25C
 * Callers:
 *     ?Register3DCompositor@MPC3DStateHelper@@QEAAXPEAUIUnknown@@@Z @ 0x18007C2F0 (-Register3DCompositor@MPC3DStateHelper@@QEAAXPEAUIUnknown@@@Z.c)
 *     ?Unregister3DCompositor@MPC3DStateHelper@@QEAAXXZ @ 0x18007C410 (-Unregister3DCompositor@MPC3DStateHelper@@QEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall MPC3DStateHelper::On3DCompositorStateChanged(PSRWLOCK SRWLock, char a2)
{
  char v4; // di

  AcquireSRWLockExclusive(SRWLock);
  if ( BYTE4(SRWLock[2].Ptr) == a2 )
  {
    v4 = 0;
  }
  else
  {
    v4 = 1;
    BYTE6(SRWLock[2].Ptr) = a2;
    HIBYTE(SRWLock[2].Ptr) = a2;
    (*(void (__fastcall **)(PVOID, __int64 (__fastcall *)(RTL_SRWLOCK *), PSRWLOCK, __int64))(*(_QWORD *)SRWLock[1].Ptr
                                                                                            + 136LL))(
      SRWLock[1].Ptr,
      lambda_cd53c665379f6d6b73078d77a45af54d_::_lambda_invoker_cdecl_,
      SRWLock,
      4LL);
  }
  ReleaseSRWLockExclusive(SRWLock);
  return v4;
}
