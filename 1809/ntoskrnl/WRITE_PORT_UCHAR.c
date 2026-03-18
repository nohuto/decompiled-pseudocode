/*
 * XREFs of WRITE_PORT_UCHAR @ 0x14013E0A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall WRITE_PORT_UCHAR(PUCHAR Port, UCHAR Value)
{
  __outbyte((unsigned __int16)Port, Value);
}
