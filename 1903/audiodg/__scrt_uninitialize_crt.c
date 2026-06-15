/*
 * XREFs of __scrt_uninitialize_crt @ 0x1400160BC
 * Callers:
 *     __scrt_common_main_seh @ 0x1400158D0 (__scrt_common_main_seh.c)
 * Callees:
 *     __scrt_stub_for_acrt_uninitialize @ 0x140014CA0 (__scrt_stub_for_acrt_uninitialize.c)
 */

char __fastcall _scrt_uninitialize_crt(__int64 a1, char a2)
{
  if ( !byte_140086CE1 || !a2 )
  {
    _scrt_stub_for_acrt_uninitialize();
    _scrt_stub_for_acrt_uninitialize();
  }
  return 1;
}
