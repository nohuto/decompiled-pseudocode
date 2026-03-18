/*
 * XREFs of WinSqmEventEnabled @ 0x1C0061FB4
 * Callers:
 *     ?_WinSqmDWORDEvent@@YAXPEBU_EVENT_DESCRIPTOR@@PEAU_GUID@@KK@Z @ 0x1C0061F34 (-_WinSqmDWORDEvent@@YAXPEBU_EVENT_DESCRIPTOR@@PEAU_GUID@@KK@Z.c)
 *     WinSqmEndSession @ 0x1C00B7D78 (WinSqmEndSession.c)
 *     WinSqmAddToStream @ 0x1C0120B20 (WinSqmAddToStream.c)
 *     WinSqmAddToStreamEx @ 0x1C0120D10 (WinSqmAddToStreamEx.c)
 *     WinSqmSetString @ 0x1C012107C (WinSqmSetString.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WinSqmEventEnabled(PCEVENT_DESCRIPTOR EventDescriptor, void *Source1)
{
  unsigned int v2; // ebx
  char v4; // al
  bool v6; // zf

  v2 = 0;
  if ( RegHandle )
  {
    v4 = dword_1C0215B38;
    if ( !dword_1C0215B38 )
      return EtwEventEnabled(RegHandle, EventDescriptor);
    if ( Source1 )
    {
      if ( RtlCompareMemory(Source1, &unk_1C01D98B0, 0x10uLL) != 16 )
      {
        v6 = (dword_1C0215B38 & 2) == 0;
        goto LABEL_10;
      }
      v4 = dword_1C0215B38;
    }
    v6 = (v4 & 1) == 0;
LABEL_10:
    if ( !v6 )
      return v2;
    return EtwEventEnabled(RegHandle, EventDescriptor);
  }
  return v2;
}
