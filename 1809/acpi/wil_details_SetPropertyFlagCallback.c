/*
 * XREFs of wil_details_SetPropertyFlagCallback @ 0x1C0030830
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall wil_details_SetPropertyFlagCallback(_DWORD *a1, __int64 a2)
{
  __int64 result; // rax

  **(_DWORD **)a2 = 0;
  if ( (*(_DWORD *)(a2 + 8) & *a1) == *(_DWORD *)(a2 + 8) )
    return 0LL;
  *a1 |= *(_DWORD *)(a2 + 8);
  result = 1LL;
  if ( !*(_DWORD *)(a2 + 12) && (*a1 & 8) == 0 )
  {
    *a1 |= 8u;
    **(_DWORD **)a2 = 1;
  }
  return result;
}
