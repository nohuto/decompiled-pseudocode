/*
 * XREFs of ?NotifyListenerOfChange@CEffectBrush@@UEAAXPEAVCResource@@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18005E1B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CEffectBrush::NotifyListenerOfChange(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  unsigned int v5; // ebx
  __int64 v8; // rcx

  v5 = a3;
  if ( a3 == 1 )
  {
    v8 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 80) + 72LL) + 48LL);
    if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v8 + 48LL))(v8) > 1 && a4 != a1 )
      v5 = 6;
  }
  return CSpriteVisualContent::NotifyListenerOfChange(a1, a2, v5, a1);
}
