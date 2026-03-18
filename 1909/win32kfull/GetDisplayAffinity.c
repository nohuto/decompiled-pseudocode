/*
 * XREFs of GetDisplayAffinity @ 0x1C0244468
 * Callers:
 *     NtUserGetWindowDisplayAffinity @ 0x1C022F100 (NtUserGetWindowDisplayAffinity.c)
 *     SetDisplayAffinity @ 0x1C02444BC (SetDisplayAffinity.c)
 * Callees:
 *     _IsTopLevelWindow @ 0x1C0068C9C (_IsTopLevelWindow.c)
 *     _GetProp @ 0x1C00692EC (_GetProp.c)
 */

__int64 __fastcall GetDisplayAffinity(__int64 a1, _DWORD *a2)
{
  unsigned int v2; // ebx
  __int64 v4; // r9

  v2 = 0;
  *a2 = 0;
  if ( (unsigned int)IsTopLevelWindow(a1) && (*(_BYTE *)(*(_QWORD *)(v4 + 40) + 26LL) & 8) != 0 )
  {
    v2 = 1;
    *a2 = GetProp(v4, (unsigned __int16)atomDispAffinity, 1LL);
  }
  return v2;
}
