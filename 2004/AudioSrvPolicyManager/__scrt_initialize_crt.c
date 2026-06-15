/*
 * XREFs of __scrt_initialize_crt @ 0x180039B1C
 * Callers:
 *     ?dllmain_crt_process_attach@@YAHQEAUHINSTANCE__@@QEAX@Z @ 0x180039388 (-dllmain_crt_process_attach@@YAHQEAUHINSTANCE__@@QEAX@Z.c)
 * Callees:
 *     __isa_available_init @ 0x18003A4DC (__isa_available_init.c)
 *     sub_18003ABDC @ 0x18003ABDC (sub_18003ABDC.c)
 */

char __fastcall _scrt_initialize_crt(int a1)
{
  char v1; // al
  __int64 v2; // rcx
  __int64 v3; // rcx

  v1 = byte_18004FC11;
  if ( !a1 )
    v1 = 1;
  byte_18004FC11 = v1;
  _isa_available_init();
  if ( !(unsigned __int8)sub_18003ABDC(v2) )
    return 0;
  if ( !(unsigned __int8)sub_18003ABDC(v3) )
  {
    sub_18003ABDC(0LL);
    return 0;
  }
  return 1;
}
