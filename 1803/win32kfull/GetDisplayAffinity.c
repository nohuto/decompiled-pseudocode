/*
 * XREFs of GetDisplayAffinity @ 0x1C0203174
 * Callers:
 *     NtUserGetWindowDisplayAffinity @ 0x1C01F0540 (NtUserGetWindowDisplayAffinity.c)
 *     SetDisplayAffinity @ 0x1C02031CC (SetDisplayAffinity.c)
 * Callees:
 *     _IsTopLevelWindow @ 0x1C002DEA4 (_IsTopLevelWindow.c)
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
    *a2 = RealGetProp(*(_QWORD *)(v4 + 120), (unsigned __int16)atomDispAffinity, 1LL);
  }
  return v2;
}
