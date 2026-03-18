/*
 * XREFs of ?ProcessUpdate@CManipulationTransform@@QEAAJPEAVCResourceTable@@PEBUMILCMD_MANIPULATIONTRANSFORM@@@Z @ 0x1801BB524
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800A0DF0 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 */

__int64 __fastcall CManipulationTransform::ProcessUpdate(
        CManipulationTransform *this,
        struct CResourceTable *a2,
        const struct MILCMD_MANIPULATIONTRANSFORM *a3)
{
  CResource::NotifyOnChanged((__int64)this, 0, 0LL);
  return 0LL;
}
