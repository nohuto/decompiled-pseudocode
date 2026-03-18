/*
 * XREFs of WppCleanupKm @ 0x1C020063C
 * Callers:
 *     RIMUnInitialize @ 0x1C0092E20 (RIMUnInitialize.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00AF730 (_guard_dispatch_icall_nop.c)
 */

void WppCleanupKm()
{
  PDEVICE_OBJECT v0; // rbx
  PDRIVER_OBJECT v1; // rdi

  v0 = WPP_GLOBAL_Control;
  v1 = gpWin32kDriverObject;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control )
  {
    if ( *((_DWORD *)&WPP_MAIN_CB.Dpc.0 + 1) == 4 )
    {
      while ( v0 )
      {
        if ( v0->Vpb )
        {
          ((void (*)(void))WPP_MAIN_CB.Dpc.DeferredRoutine)();
          v0->Vpb = 0LL;
        }
        v0 = v0->NextDevice;
      }
    }
    else if ( *((_DWORD *)&WPP_MAIN_CB.Dpc.0 + 1) == 2 )
    {
      IoWMIRegistrationControl(WPP_GLOBAL_Control, 0x80000002);
    }
    WppAutoLogStop(WPP_GLOBAL_Control, v1);
    WPP_GLOBAL_Control = (PDEVICE_OBJECT)&WPP_GLOBAL_Control;
  }
}
