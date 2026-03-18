/*
 * XREFs of ?NotifyListenerOfChange@CSurfaceBrush@@UEAAXPEAVCResource@@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18005DFC0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSurfaceBrush::NotifyListenerOfChange(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 v5; // rsi
  unsigned int v6; // edi

  v5 = a1;
  if ( a3 != 1 )
    v5 = a4;
  v6 = a3;
  if ( a3 == 14 && !(*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 48LL))(a2, 14LL) )
  {
    v6 = 0;
LABEL_11:
    v5 = a1;
    goto LABEL_7;
  }
  if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 48LL))(a2, 48LL)
    || (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 48LL))(a2, 112LL)
    || (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 48LL))(a2, 113LL) )
  {
    goto LABEL_11;
  }
LABEL_7:
  if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 48LL))(a2, 157LL) && !v6 )
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a2 + 64LL))(a2, 5LL, 0LL);
  return (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)a2 + 64LL))(a2, v6, v5);
}
