/*
 * XREFs of ?NotifyListenerOfChange@CComponentTransform2D@@UEAAXPEAVCResource@@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180078ED0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CComponentTransform2D::NotifyListenerOfChange(__int64 a1, __int64 a2, unsigned int a3)
{
  return (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)a2 + 64LL))(a2, a3, a1);
}
