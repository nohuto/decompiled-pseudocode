/*
 * XREFs of EtwEventEnabled @ 0x180068890
 * Callers:
 *     EtwEventWriteEndScenario @ 0x180068760 (EtwEventWriteEndScenario.c)
 *     EtwEventWriteStartScenario @ 0x18008F140 (EtwEventWriteStartScenario.c)
 * Callees:
 *     <none>
 */

BOOLEAN __cdecl EtwEventEnabled(REGHANDLE RegHandle, PCEVENT_DESCRIPTOR EventDescriptor)
{
  REGHANDLE v2; // rax
  REGHANDLE v3; // rcx
  unsigned __int64 Keyword; // r9
  BOOLEAN result; // al
  unsigned __int8 v6; // al
  unsigned __int8 v7; // al

  result = 0;
  if ( EventDescriptor )
  {
    v2 = HIWORD(RegHandle);
    if ( HIWORD(RegHandle) )
    {
      v3 = RegHandle & 0xFFFFFFFFFFFFLL;
      if ( (v3 & 1) == 0 && (_WORD)v2 == *(_WORD *)(v3 + 96) )
      {
        Keyword = EventDescriptor->Keyword;
        if ( *(_BYTE *)(v3 + 124) )
        {
          v6 = *(_BYTE *)(v3 + 125);
          if ( (EventDescriptor->Level <= v6 || !v6)
            && ((*(_BYTE *)(v3 + 120) & 0x40) != 0 && !Keyword
             || (Keyword & *(_QWORD *)(v3 + 112)) != 0 && (Keyword & *(_QWORD *)(v3 + 104)) == *(_QWORD *)(v3 + 104)) )
          {
            return 1;
          }
        }
        if ( *(_BYTE *)(v3 + 244) )
        {
          v7 = *(_BYTE *)(v3 + 245);
          if ( (EventDescriptor->Level <= v7 || !v7)
            && ((*(_BYTE *)(v3 + 240) & 0x40) != 0 && !Keyword
             || (Keyword & *(_QWORD *)(v3 + 232)) != 0 && (Keyword & *(_QWORD *)(v3 + 224)) == *(_QWORD *)(v3 + 224)) )
          {
            return 1;
          }
        }
      }
    }
  }
  return result;
}
