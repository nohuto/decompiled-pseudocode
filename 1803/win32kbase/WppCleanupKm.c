/*
 * XREFs of WppCleanupKm @ 0x1C01D722C
 * Callers:
 *     RIMUnInitialize @ 0x1C00DE320 (RIMUnInitialize.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0079B40 (_guard_dispatch_icall_nop.c)
 */

void WppCleanupKm()
{
  PDEVICE_OBJECT v0; // rbx
  PVOID v1; // rdi

  v0 = WPP_GLOBAL_Control;
  v1 = gpWin32kDriverObject;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control )
  {
    if ( WPPTraceSuite == 4 )
    {
      while ( v0 )
      {
        if ( v0->Vpb )
          ((void (*)(void))pfnEtwUnregister)();
        v0 = v0->NextDevice;
      }
    }
    else if ( WPPTraceSuite == 2 )
    {
      IoWMIRegistrationControl(WPP_GLOBAL_Control, 0x80000002);
    }
    WppAutoLogStop(WPP_GLOBAL_Control, v1);
    WPP_GLOBAL_Control = (PDEVICE_OBJECT)&WPP_GLOBAL_Control;
  }
}
