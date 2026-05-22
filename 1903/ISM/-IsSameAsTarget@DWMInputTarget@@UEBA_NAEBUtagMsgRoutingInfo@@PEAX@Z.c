/*
 * XREFs of ?IsSameAsTarget@DWMInputTarget@@UEBA_NAEBUtagMsgRoutingInfo@@PEAX@Z @ 0x1800C7580
 * Callers:
 *     <none>
 * Callees:
 *     ??8@YA_NAEBUtagMsgRoutingInfo@@0@Z @ 0x180027B40 (--8@YA_NAEBUtagMsgRoutingInfo@@0@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ?GetInputSinkHandle@DWMInputTarget@@AEBAPEAXXZ @ 0x1800C74F0 (-GetInputSinkHandle@DWMInputTarget@@AEBAPEAXXZ.c)
 */

char __fastcall DWMInputTarget::IsSameAsTarget(DWMInputTarget *this, const struct tagMsgRoutingInfo *a2, void *a3)
{
  char result; // al
  __int64 v4; // r11
  void *InputSinkHandle; // rax
  char v6; // r9
  void *v7; // r10
  __int64 v8; // r11

  result = operator==((__int64)a2, (__int64)this + 72);
  if ( result )
  {
    InputSinkHandle = DWMInputTarget::GetInputSinkHandle((DWMInputTarget *)(v4 - 8));
    if ( v7 == InputSinkHandle )
      return 1;
    if ( v7 )
    {
      if ( InputSinkHandle )
        return (*(__int64 (__fastcall **)(__int64, void *))(*(_QWORD *)v8 + 40LL))(v8, v7);
    }
    return v6;
  }
  return result;
}
