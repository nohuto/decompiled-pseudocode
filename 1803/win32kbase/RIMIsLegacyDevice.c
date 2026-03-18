/*
 * XREFs of RIMIsLegacyDevice @ 0x1C00F1568
 * Callers:
 *     RIMAllocateAndLinkHidTLCInfo @ 0x1C00F136C (RIMAllocateAndLinkHidTLCInfo.c)
 *     RIMSearchHidTLCInfo @ 0x1C00F15C0 (RIMSearchHidTLCInfo.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMIsLegacyDevice(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  int v3; // eax

  v2 = 0;
  v3 = 1;
  if ( (_WORD)a1 != 1 )
    goto LABEL_7;
  if ( (unsigned __int16)a2 == 2 || (unsigned __int16)a2 == 6 )
    v2 = 1;
  if ( (_WORD)a2 != 6 && (_WORD)a2 != 2 )
LABEL_7:
    v3 = 0;
  if ( v2 != v3 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2);
  return v2;
}
