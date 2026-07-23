/*
 * XREFs of TpWaitForAlpcCompletion @ 0x180088150
 * Callers:
 *     <none>
 * Callees:
 *     TppAlpcpValidateAlpc @ 0x1800322A4 (TppAlpcpValidateAlpc.c)
 *     TppBarrierAdjust @ 0x180073CC8 (TppBarrierAdjust.c)
 *     ZwAlpcQueryInformation @ 0x1800A13D0 (ZwAlpcQueryInformation.c)
 */

void __cdecl TpWaitForAlpcCompletion(PTP_ALPC Alpc)
{
  int PortInformation; // [rsp+48h] [rbp+10h] BYREF

  if ( (unsigned int)TppAlpcpValidateAlpc((_PEB_LDR_DATA *)Alpc, 0LL, 0LL) )
  {
    PortInformation = *((_DWORD *)Alpc + 70);
    if ( PortInformation )
      ZwAlpcQueryInformation(*((HANDLE *)Alpc + 34), AlpcWaitForPortReferences, &PortInformation, 4u, 0LL);
    TppBarrierAdjust((_RTL_SRWLOCK *)Alpc + 16, 0, 1);
  }
}
