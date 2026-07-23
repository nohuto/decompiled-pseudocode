/*
 * XREFs of TpWaitForAlpcCompletion @ 0x180078640
 * Callers:
 *     <none>
 * Callees:
 *     sub_180066BBC @ 0x180066BBC (sub_180066BBC.c)
 *     sub_18007874C @ 0x18007874C (sub_18007874C.c)
 *     ZwAlpcQueryInformation @ 0x18009D7B0 (ZwAlpcQueryInformation.c)
 */

void __cdecl TpWaitForAlpcCompletion(PTP_ALPC Alpc)
{
  int PortInformation; // [rsp+48h] [rbp+10h] BYREF

  if ( (unsigned int)sub_18007874C(Alpc, 0LL, 0LL) )
  {
    PortInformation = *((_DWORD *)Alpc + 70);
    if ( PortInformation )
      ZwAlpcQueryInformation(*((HANDLE *)Alpc + 34), AlpcWaitForPortReferences, &PortInformation, 4u, 0LL);
    sub_180066BBC((_RTL_SRWLOCK *)Alpc + 16, 0, 1);
  }
}
