/*
 * XREFs of __scrt_uninitialize_crt @ 0x180039CF0
 * Callers:
 *     ?dllmain_crt_process_detach@@YAH_N@Z @ 0x1800394A4 (-dllmain_crt_process_detach@@YAH_N@Z.c)
 * Callees:
 *     sub_18003ABDC @ 0x18003ABDC (sub_18003ABDC.c)
 */

char __fastcall _scrt_uninitialize_crt(__int64 a1, char a2)
{
  char v2; // bl
  __int64 v3; // rcx

  v2 = a1;
  if ( !byte_18004FC11 || !a2 )
  {
    sub_18003ABDC(a1);
    LOBYTE(v3) = v2;
    sub_18003ABDC(v3);
  }
  return 1;
}
