/*
 * XREFs of ?IsWindowInHighZOrderBand@ApplicationViewHelpers@@YA_NPEAUHWND__@@@Z @ 0x18042E8AC
 * Callers:
 *     ?IsOperableWindow@TabletModePositionerHelpers@@YA_NPEAUHWND__@@@Z @ 0x18037D970 (-IsOperableWindow@TabletModePositionerHelpers@@YA_NPEAUHWND__@@@Z.c)
 *     ?IsOperableView@Win32ViewOperationPolicy@@QEAA_NPEAUIApplicationView@@@Z @ 0x1803BCB84 (-IsOperableView@Win32ViewOperationPolicy@@QEAA_NPEAUIApplicationView@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall ApplicationViewHelpers::IsWindowInHighZOrderBand(ApplicationViewHelpers *this, HWND a2)
{
  char v2; // bl
  int v4; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0;
  if ( (unsigned int)GetWindowBand(this, &v4) && (v4 == 2 || v4 == 16) )
    return 1;
  return v2;
}
