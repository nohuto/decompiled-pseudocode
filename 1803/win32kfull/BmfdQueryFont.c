/*
 * XREFs of BmfdQueryFont @ 0x1C0224E50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall BmfdQueryFont(__int64 a1, __int64 a2, int a3)
{
  if ( a2 )
    return *(_QWORD *)(88LL * (unsigned int)(a3 - 1) + a2 + 120);
  else
    return 0LL;
}
