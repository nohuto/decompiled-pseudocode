/*
 * XREFs of GetJournallingQueue @ 0x1C00B1840
 * Callers:
 *     zzzSetDesktop @ 0x1C00B11B0 (zzzSetDesktop.c)
 * Callees:
 *     PhkFirstGlobalValid @ 0x1C00B189C (PhkFirstGlobalValid.c)
 */

__int64 __fastcall GetJournallingQueue(__int64 a1)
{
  __int64 GlobalValid; // rax
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 v4; // r8

  if ( (*(_DWORD *)(a1 + 488) & 0x80u) != 0 || !*(_QWORD *)(a1 + 456) )
    return 0LL;
  GlobalValid = PhkFirstGlobalValid(a1, 1LL, 0LL);
  if ( GlobalValid )
    return *(_QWORD *)(*(_QWORD *)(GlobalValid + 16) + 432LL);
  GlobalValid = PhkFirstGlobalValid(v3, 0LL, v2);
  if ( GlobalValid )
    return *(_QWORD *)(*(_QWORD *)(GlobalValid + 16) + 432LL);
  return v4;
}
