/*
 * XREFs of __scrt_uninitialize_crt @ 0x1800874B0
 * Callers:
 *     dllmain_crt_process_detach @ 0x180086958 (dllmain_crt_process_detach.c)
 * Callees:
 *     ?v_SupportsBack@WindowWrapper@@EEAA_NXZ @ 0x180084510 (-v_SupportsBack@WindowWrapper@@EEAA_NXZ.c)
 */

char __fastcall _scrt_uninitialize_crt(WindowWrapper *a1, char a2)
{
  char v2; // bl
  WindowWrapper *v3; // rcx

  v2 = (char)a1;
  if ( !byte_180598F11 || !a2 )
  {
    WindowWrapper::v_SupportsBack(a1);
    LOBYTE(v3) = v2;
    WindowWrapper::v_SupportsBack(v3);
  }
  return 1;
}
