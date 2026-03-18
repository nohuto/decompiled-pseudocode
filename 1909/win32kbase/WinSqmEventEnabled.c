/*
 * XREFs of WinSqmEventEnabled @ 0x1C0064664
 * Callers:
 *     ?_WinSqmDWORDEvent@@YAXPEBU_EVENT_DESCRIPTOR@@PEAU_GUID@@KK@Z @ 0x1C00645E4 (-_WinSqmDWORDEvent@@YAXPEBU_EVENT_DESCRIPTOR@@PEAU_GUID@@KK@Z.c)
 *     WinSqmEndSession @ 0x1C00B5298 (WinSqmEndSession.c)
 *     WinSqmAddToStream @ 0x1C011E1B0 (WinSqmAddToStream.c)
 *     WinSqmAddToStreamEx @ 0x1C011E3A0 (WinSqmAddToStreamEx.c)
 *     WinSqmSetString @ 0x1C011E70C (WinSqmSetString.c)
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
    v4 = dword_1C0212B38;
    if ( !dword_1C0212B38 )
      return EtwEventEnabled(RegHandle, EventDescriptor);
    if ( Source1 )
    {
      if ( RtlCompareMemory(Source1, &unk_1C01D7DA0, 0x10uLL) != 16 )
      {
        v6 = (dword_1C0212B38 & 2) == 0;
        goto LABEL_10;
      }
      v4 = dword_1C0212B38;
    }
    v6 = (v4 & 1) == 0;
LABEL_10:
    if ( !v6 )
      return v2;
    return EtwEventEnabled(RegHandle, EventDescriptor);
  }
  return v2;
}
