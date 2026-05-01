/*
 * XREFs of ?PushDesiredZbidToWindow@ViewWrapperBase@@AEAAXXZ @ 0x1802B85E8
 * Callers:
 *     ?SetWindowBand@ViewWrapperBase@@UEAAJK@Z @ 0x1802B9AD0 (-SetWindowBand@ViewWrapperBase@@UEAAJK@Z.c)
 *     ?SetWindowOwner@ViewWrapperBase@@UEAAJPEAUHWND__@@@Z @ 0x1802B9B50 (-SetWindowOwner@ViewWrapperBase@@UEAAJPEAUHWND__@@@Z.c)
 *     ?WindowCreated@ViewWrapperBase@@UEAAXPEAUHWND__@@W4WindowCreatedType@@@Z @ 0x1802BAE30 (-WindowCreated@ViewWrapperBase@@UEAAXPEAUHWND__@@W4WindowCreatedType@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ViewWrapperBase::PushDesiredZbidToWindow(ViewWrapperBase *this)
{
  __int64 v1; // rdx

  v1 = *((_QWORD *)this + 34);
  if ( v1 )
  {
    if ( *((_DWORD *)this + 54) )
      (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(*((_QWORD *)this + 21) + 448LL) + 32LL))(
        *(_QWORD *)(*((_QWORD *)this + 21) + 448LL),
        v1,
        0LL);
  }
}
