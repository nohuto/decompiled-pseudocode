/*
 * XREFs of __scrt_uninitialize_crt @ 0x1400164CC
 * Callers:
 *     __scrt_common_main_seh @ 0x140015CE0 (__scrt_common_main_seh.c)
 * Callees:
 *     __scrt_stub_for_acrt_uninitialize @ 0x1400150B0 (__scrt_stub_for_acrt_uninitialize.c)
 */

char __fastcall _scrt_uninitialize_crt(__int64 a1, char a2)
{
  if ( !byte_140085CE1 || !a2 )
  {
    _scrt_stub_for_acrt_uninitialize();
    _scrt_stub_for_acrt_uninitialize();
  }
  return 1;
}
