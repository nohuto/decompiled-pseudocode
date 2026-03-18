/*
 * XREFs of WinSqmEventEnabled @ 0x1C0098620
 * Callers:
 *     WinSqmEndSession @ 0x1C0098260 (WinSqmEndSession.c)
 *     ?_WinSqmDWORDEvent@@YAXPEBU_EVENT_DESCRIPTOR@@PEAU_GUID@@KK@Z @ 0x1C0098594 (-_WinSqmDWORDEvent@@YAXPEBU_EVENT_DESCRIPTOR@@PEAU_GUID@@KK@Z.c)
 *     WinSqmAddToStream @ 0x1C00F4C10 (WinSqmAddToStream.c)
 *     WinSqmAddToStreamEx @ 0x1C00F4E10 (WinSqmAddToStreamEx.c)
 *     WinSqmSetString @ 0x1C00F517C (WinSqmSetString.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WinSqmEventEnabled(PCEVENT_DESCRIPTOR EventDescriptor, void *Source1)
{
  unsigned int v2; // ebx
  char v4; // al
  bool v6; // zf

  v2 = 0;
  if ( qword_1C01CD5A8 )
  {
    v4 = dword_1C01CD5A0;
    if ( !dword_1C01CD5A0 )
      return EtwEventEnabled(qword_1C01CD5A8, EventDescriptor);
    if ( Source1 )
    {
      if ( RtlCompareMemory(Source1, &unk_1C0194C08, 0x10uLL) != 16 )
      {
        v6 = (dword_1C01CD5A0 & 2) == 0;
        goto LABEL_10;
      }
      v4 = dword_1C01CD5A0;
    }
    v6 = (v4 & 1) == 0;
LABEL_10:
    if ( !v6 )
      return v2;
    return EtwEventEnabled(qword_1C01CD5A8, EventDescriptor);
  }
  return v2;
}
