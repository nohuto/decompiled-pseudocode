/*
 * XREFs of DpiIndirectCbNotifyCursorSupportChange @ 0x1C02ABC90
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C0025300 (memset.c)
 */

__int64 __fastcall DpiIndirectCbNotifyCursorSupportChange(__int64 a1)
{
  __int64 v1; // rbx
  _DWORD v3[10]; // [rsp+30h] [rbp-28h] BYREF

  if ( !a1 )
    return 3221225485LL;
  v1 = *(_QWORD *)(a1 + 64);
  if ( !v1 || *(_DWORD *)(v1 + 16) != 1953656900 || *(_DWORD *)(v1 + 20) != 2 || !*(_BYTE *)(v1 + 1159) )
    return 3221225485LL;
  memset(v3, 0, 0x20uLL);
  v3[0] = 13;
  return SMgrGdiCallout(v3, *(_QWORD *)(v1 + 5760), 0LL, 0LL, 0LL, 0LL);
}
