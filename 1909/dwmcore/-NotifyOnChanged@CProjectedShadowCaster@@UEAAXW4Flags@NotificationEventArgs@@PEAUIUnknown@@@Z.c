/*
 * XREFs of ?NotifyOnChanged@CProjectedShadowCaster@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180020300
 * Callers:
 *     <none>
 * Callees:
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800AB6F0 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 */

void __fastcall CProjectedShadowCaster::NotifyOnChanged(
        CProjectedShadowCaster *a1,
        __int64 a2,
        CProjectedShadowCaster *a3)
{
  CProjectedShadowCaster *v3; // rdx

  if ( !CCommonRegistryData::m_fDisableProjectedShadows && a3 )
  {
    if ( a3 == a1 )
    {
      CResource::NotifyOnChanged(a1, a2, a3);
    }
    else
    {
      v3 = (CProjectedShadowCaster *)*((_QWORD *)a1 + 15);
      if ( a3 == v3 )
      {
        if ( v3 || !*(_QWORD *)(*((_QWORD *)a1 + 2) + 152LL) )
          CProjectedShadowCaster::InvalidateMaskContent(a1);
      }
      else if ( a3 == *((CProjectedShadowCaster **)a1 + 14) )
      {
        CProjectedShadowCaster::RequestRedraw(a1);
      }
    }
  }
}
