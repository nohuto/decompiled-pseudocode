/*
 * XREFs of ?IsExtendedWinSqmHandle@@YAHPEAU_GUID@@@Z @ 0x1C0098678
 * Callers:
 *     WinSqmEndSession @ 0x1C0098260 (WinSqmEndSession.c)
 *     ?_WinSqmDWORDEvent@@YAXPEBU_EVENT_DESCRIPTOR@@PEAU_GUID@@KK@Z @ 0x1C0098594 (-_WinSqmDWORDEvent@@YAXPEBU_EVENT_DESCRIPTOR@@PEAU_GUID@@KK@Z.c)
 *     WinSqmAddToStream @ 0x1C00F4C10 (WinSqmAddToStream.c)
 *     WinSqmAddToStreamEx @ 0x1C00F4E10 (WinSqmAddToStreamEx.c)
 *     WinSqmSetString @ 0x1C00F517C (WinSqmSetString.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsExtendedWinSqmHandle(struct _GUID *a1)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( (unsigned __int64)&a1[-1].Data4[7] <= 0xFFFFFFFFFFFFFFFDuLL
    && RtlCompareMemory(a1, &xmmword_1C01C8788, 0x10uLL) == 16 )
  {
    return a1[1].Data1 == 40;
  }
  return v1;
}
