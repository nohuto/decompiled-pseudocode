/*
 * XREFs of ?NotifyOnChanged@CProjectedShadowScene@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1801ADB10
 * Callers:
 *     <none>
 * Callees:
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800A0DF0 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 */

__int64 __fastcall CProjectedShadowScene::NotifyOnChanged(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 result; // rax

  if ( !CCommonRegistryData::m_fDisableProjectedShadows )
    return CResource::NotifyOnChanged(a1, a2, a3);
  return result;
}
