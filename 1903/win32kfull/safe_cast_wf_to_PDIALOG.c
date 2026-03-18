/*
 * XREFs of safe_cast_wf_to_PDIALOG @ 0x1C0100A8C
 * Callers:
 *     xxxSetWindowLong @ 0x1C01007C4 (xxxSetWindowLong.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall safe_cast_wf_to_PDIALOG(__int64 a1)
{
  __int64 v1; // rdx

  if ( !a1 )
    return 0LL;
  v1 = *(_QWORD *)(a1 + 40);
  if ( (*(_BYTE *)(v1 + 18) & 1) == 0 )
    return 0LL;
  if ( *(_DWORD *)(v1 + 252) )
    return *(_QWORD *)(a1 + 280);
  return *(_QWORD *)(v1 + 296);
}
