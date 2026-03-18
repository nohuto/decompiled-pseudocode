/*
 * XREFs of rimAnySecondaryRimUsagesMatchingUsages @ 0x1C00DEA4C
 * Callers:
 *     RIMCreateHidDesc @ 0x1C00EE898 (RIMCreateHidDesc.c)
 *     RIMIDECreateHIDDesc @ 0x1C00F2D44 (RIMIDECreateHIDDesc.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimAnySecondaryRimUsagesMatchingUsages(_WORD *a1, __int64 a2)
{
  struct _LIST_ENTRY *Flink; // rdi
  struct _LIST_ENTRY *v4; // rbx
  __int64 Flink_low; // rcx
  struct _LIST_ENTRY *Blink; // r9

  Flink = gObRimList.Flink;
  while ( 1 )
  {
LABEL_12:
    if ( Flink == &gObRimList )
      return 0LL;
    v4 = Flink - 1;
    Flink = Flink->Flink;
    if ( HIDWORD(v4[53].Flink) && !BYTE1(v4[4].Blink) && !LOBYTE(v4[4].Blink) )
    {
      Flink_low = LODWORD(v4[5].Flink);
      if ( !(_DWORD)Flink_low )
      {
        MicrosoftTelemetryAssertTriggeredNoArgsKM(Flink_low, a2);
        LODWORD(Flink_low) = v4[5].Flink;
      }
      a2 = 0LL;
      if ( (_DWORD)Flink_low )
        break;
    }
  }
  Blink = v4[5].Blink;
  while ( *((_WORD *)&Blink->Flink + 2 * a2) != *a1 || *((_WORD *)&Blink->Flink + 2 * a2 + 1) != a1[1] )
  {
    a2 = (unsigned int)(a2 + 1);
    if ( (unsigned int)a2 >= (unsigned int)Flink_low )
      goto LABEL_12;
  }
  return 1LL;
}
