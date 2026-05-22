/*
 * XREFs of ?InjectDrag@ManipulationInjector@@QEAAXAEAUtagPOINT@@K@Z @ 0x1800B9A20
 * Callers:
 *     ?DownLevelTo2D@MPCGestureHandler@@QEAAXPEAUInputInfo@@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18004D520 (-DownLevelTo2D@MPCGestureHandler@@QEAAXPEAUInputInfo@@V-$com_ptr_t@UIMPCInputProviderBase@@Uerr_.c)
 * Callees:
 *     ?StartManipulation@ManipulationInjector@@AEAAXW4INTERACTION_TYPE@@UtagPOINT@@K@Z @ 0x1800B8F18 (-StartManipulation@ManipulationInjector@@AEAAXW4INTERACTION_TYPE@@UtagPOINT@@K@Z.c)
 *     ?InjectAndScrub@ManipulationInjector@@AEAAXXZ @ 0x1800B9D2C (-InjectAndScrub@ManipulationInjector@@AEAAXXZ.c)
 *     ?AddContact@ManipulationInjector@@AEAAXUtagPOINT@@_NK@Z @ 0x1800BA494 (-AddContact@ManipulationInjector@@AEAAXUtagPOINT@@_NK@Z.c)
 *     ?UpdateContact@ManipulationInjector@@AEAAXUtagPOINT@@_NK@Z @ 0x1800BA560 (-UpdateContact@ManipulationInjector@@AEAAXUtagPOINT@@_NK@Z.c)
 *     ?IsInContactForDeviceId@ManipulationInjector@@QEBA_NK@Z @ 0x1800BA61C (-IsInContactForDeviceId@ManipulationInjector@@QEBA_NK@Z.c)
 */

void __fastcall ManipulationInjector::InjectDrag(ManipulationInjector *this, struct tagPOINT *a2, unsigned int a3)
{
  bool v6; // al
  struct tagPOINT v7; // rdx

  if ( *((_BYTE *)this + 13) )
    DbgPrint("Drag pt: %d,%d   DeviceId = %d\n", a2->x, a2->y, a3);
  if ( (*((_DWORD *)this + 22) & 0xFFFFFF7F) != 0 )
  {
    if ( *((_DWORD *)this + 22) == 64 )
    {
      v6 = ManipulationInjector::IsInContactForDeviceId(this, a3);
      v7 = *a2;
      if ( v6 )
        ManipulationInjector::UpdateContact(this, v7, 0, a3);
      else
        ManipulationInjector::AddContact(this, v7, 0, a3);
      ManipulationInjector::InjectAndScrub(this);
    }
  }
  else
  {
    ManipulationInjector::StartManipulation((__int64)this, 64, *a2, a3);
  }
}
