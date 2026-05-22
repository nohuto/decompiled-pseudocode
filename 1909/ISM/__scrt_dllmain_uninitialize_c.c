/*
 * XREFs of __scrt_dllmain_uninitialize_c @ 0x18002B98C
 * Callers:
 *     dllmain_crt_process_detach @ 0x18002B4F8 (dllmain_crt_process_detach.c)
 * Callees:
 *     ?OnStubConnected@BamoInputDeliveryServerPrincipal@@MEAAJPEAVBamoInputDeliveryServerStub@@@Z @ 0x18000E300 (-OnStubConnected@BamoInputDeliveryServerPrincipal@@MEAAJPEAVBamoInputDeliveryServerStub@@@Z.c)
 *     __scrt_is_ucrt_dll_in_use @ 0x18002C044 (__scrt_is_ucrt_dll_in_use.c)
 *     _o__cexit_0 @ 0x18002C0F2 (_o__cexit_0.c)
 */

int _scrt_dllmain_uninitialize_c()
{
  struct BamoInputDeliveryServerStub *v0; // rdx
  BamoInputDeliveryServerPrincipal *v1; // rcx
  int result; // eax

  if ( (unsigned int)_scrt_is_ucrt_dll_in_use() )
    return execute_onexit_table(&Table);
  result = BamoInputDeliveryServerPrincipal::OnStubConnected(v1, v0);
  if ( !result )
    return o__cexit_0();
  return result;
}
