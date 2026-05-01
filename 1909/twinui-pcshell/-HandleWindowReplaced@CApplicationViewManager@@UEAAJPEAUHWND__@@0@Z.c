/*
 * XREFs of ?HandleWindowReplaced@CApplicationViewManager@@UEAAJPEAUHWND__@@0@Z @ 0x180175830
 * Callers:
 *     <none>
 * Callees:
 *     ?RaiseApplicationViewChanged@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x180031190 (-RaiseApplicationViewChanged@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_V.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationViewManager::HandleWindowReplaced(RTL_SRWLOCK *this, HWND a2, HWND a3)
{
  RTL_SRWLOCK *v5; // rbx
  __int64 *Ptr; // rdi
  __int64 *v7; // rbp
  HWND v9; // [rsp+50h] [rbp+8h] BYREF
  RTL_SRWLOCK *v10; // [rsp+68h] [rbp+20h]

  v5 = this + 67;
  v10 = this + 67;
  AcquireSRWLockShared(this + 67);
  Ptr = (__int64 *)this[68].Ptr;
  v7 = &Ptr[(__int64)this[69].Ptr];
  while ( Ptr != v7 )
  {
    if ( (*(int (__fastcall **)(__int64, HWND *))(*(_QWORD *)*Ptr + 72LL))(*Ptr, &v9) >= 0 && v9 == a3 )
    {
      CApplicationViewManager::RaiseApplicationViewChanged((__int64)this, *Ptr, 0xCu, 0LL);
      break;
    }
    ++Ptr;
  }
  if ( v5 )
    ReleaseSRWLockShared(v5);
  return 0LL;
}
