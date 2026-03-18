/*
 * XREFs of RIMIsLegacyDevice @ 0x1C0090990
 * Callers:
 *     RIMAllocateAndLinkHidTLCInfo @ 0x1C0090848 (RIMAllocateAndLinkHidTLCInfo.c)
 *     RIMSearchHidTLCInfo @ 0x1C0090924 (RIMSearchHidTLCInfo.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMIsLegacyDevice(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  int v4; // eax

  v3 = 0;
  v4 = 1;
  if ( (_WORD)a1 != 1 )
    goto LABEL_2;
  if ( (_WORD)a2 == 2 || (_WORD)a2 == 6 )
    v3 = 1;
  if ( (_WORD)a2 != 6 && (_WORD)a2 != 2 )
LABEL_2:
    v4 = 0;
  if ( v3 != v4 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  return v3;
}
