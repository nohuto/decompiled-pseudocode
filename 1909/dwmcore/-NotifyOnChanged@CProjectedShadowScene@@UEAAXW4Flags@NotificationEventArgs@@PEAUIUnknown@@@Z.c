/*
 * XREFs of ?NotifyOnChanged@CProjectedShadowScene@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800051F0
 * Callers:
 *     <none>
 * Callees:
 *     ?RequestRedrawAll@CProjectedShadowScene@@QEAAXXZ @ 0x180005214 (-RequestRedrawAll@CProjectedShadowScene@@QEAAXXZ.c)
 */

void __fastcall CProjectedShadowScene::NotifyOnChanged(CProjectedShadowScene *a1)
{
  if ( !CCommonRegistryData::m_fDisableProjectedShadows )
  {
    *((_QWORD *)a1 + 12) = 0LL;
    CProjectedShadowScene::RequestRedrawAll(a1);
  }
}
