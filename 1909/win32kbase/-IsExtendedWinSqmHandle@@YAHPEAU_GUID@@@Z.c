/*
 * XREFs of ?IsExtendedWinSqmHandle@@YAHPEAU_GUID@@@Z @ 0x1C00646BC
 * Callers:
 *     ?_WinSqmDWORDEvent@@YAXPEBU_EVENT_DESCRIPTOR@@PEAU_GUID@@KK@Z @ 0x1C00645E4 (-_WinSqmDWORDEvent@@YAXPEBU_EVENT_DESCRIPTOR@@PEAU_GUID@@KK@Z.c)
 *     WinSqmEndSession @ 0x1C00B5298 (WinSqmEndSession.c)
 *     WinSqmAddToStream @ 0x1C011E1B0 (WinSqmAddToStream.c)
 *     WinSqmAddToStreamEx @ 0x1C011E3A0 (WinSqmAddToStreamEx.c)
 *     WinSqmSetString @ 0x1C011E70C (WinSqmSetString.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsExtendedWinSqmHandle(struct _GUID *a1)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( (unsigned __int64)&a1[-1].Data4[7] <= 0xFFFFFFFFFFFFFFFDuLL
    && RtlCompareMemory(a1, &xmmword_1C020D498, 0x10uLL) == 16 )
  {
    return a1[1].Data1 == 40;
  }
  return v1;
}
