/*
 * XREFs of ?NotifyOnChanged@CProjectedShadowReceiver@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180022800
 * Callers:
 *     <none>
 * Callees:
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18002A8A0 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 */

void __fastcall CProjectedShadowReceiver::NotifyOnChanged(
        CProjectedShadowReceiver *a1,
        __int64 a2,
        CProjectedShadowReceiver *a3)
{
  CProjectedShadowReceiver *v3; // rdx

  if ( !CCommonRegistryData::m_fDisableProjectedShadows && a3 )
  {
    if ( a3 == a1 )
    {
      CResource::NotifyOnChanged(a1, a2, a3);
    }
    else
    {
      v3 = (CProjectedShadowReceiver *)*((_QWORD *)a1 + 12);
      if ( a3 == v3 && (v3 || !*(_QWORD *)(*((_QWORD *)a1 + 2) + 144LL)) )
        CProjectedShadowReceiver::InvalidateMaskContent(a1);
    }
  }
}
