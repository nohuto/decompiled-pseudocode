/*
 * XREFs of ?StartPan@ManipulationInjector@@QEAAXAEAUtagPOINT@@K@Z @ 0x1800B8E48
 * Callers:
 *     ?StartInteractionHelper@ControllerProcessor@@AEAAXW4INTERACTION_TYPE@@@Z @ 0x180037764 (-StartInteractionHelper@ControllerProcessor@@AEAAXW4INTERACTION_TYPE@@@Z.c)
 *     ?DownLevelTo2D@MPCGestureHandler@@QEAAXPEAUInputInfo@@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18004D520 (-DownLevelTo2D@MPCGestureHandler@@QEAAXPEAUInputInfo@@V-$com_ptr_t@UIMPCInputProviderBase@@Uerr_.c)
 * Callees:
 *     ?StartManipulation@ManipulationInjector@@AEAAXW4INTERACTION_TYPE@@UtagPOINT@@K@Z @ 0x1800B8F18 (-StartManipulation@ManipulationInjector@@AEAAXW4INTERACTION_TYPE@@UtagPOINT@@K@Z.c)
 *     ?IsInContactForDeviceId@ManipulationInjector@@QEBA_NK@Z @ 0x1800BA61C (-IsInContactForDeviceId@ManipulationInjector@@QEBA_NK@Z.c)
 */

void __fastcall ManipulationInjector::StartPan(ManipulationInjector *this, struct tagPOINT *a2, unsigned int a3)
{
  if ( *((_DWORD *)this + 22) == 64 )
  {
    if ( *((_DWORD *)this + 12) == 1 && ManipulationInjector::IsInContactForDeviceId(this, a3) )
    {
      if ( *((_BYTE *)this + 13) )
        DbgPrint("Transition from DRAG to PAN\n");
      *((_DWORD *)this + 22) = 1;
    }
  }
  else if ( (*((_DWORD *)this + 22) & 0xFFFFFF7F) == 0 )
  {
    ManipulationInjector::StartManipulation(this, 1LL, *a2, a3);
  }
}
