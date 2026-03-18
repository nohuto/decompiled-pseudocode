/*
 * XREFs of ?NotifyListenerOfChange@CContent@@UEAAXPEAVCResource@@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800BEB70
 * Callers:
 *     ?NotifyListenerOfChange@CContainerVectorShape@@UEAAXPEAVCResource@@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1801D39F0 (-NotifyListenerOfChange@CContainerVectorShape@@UEAAXPEAVCResource@@W4Flags@NotificationEventArgs.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CContent::NotifyListenerOfChange(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 48LL))(a2, 189LL) && !a3 )
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a2 + 64LL))(a2, 5LL, 0LL);
  return (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)a2 + 64LL))(a2, a3, a4);
}
