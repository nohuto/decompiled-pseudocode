/*
 * XREFs of wil_details_SetEnabledAndHasNotificationStateCallback @ 0x1402A3740
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall wil_details_SetEnabledAndHasNotificationStateCallback(unsigned int *a1, int a2)
{
  unsigned int v2; // r8d
  __int64 result; // rax

  v2 = *a1;
  if ( (*a1 & 3) == (unsigned __int8)a2 && ((v2 >> 4) & 3) == BYTE1(a2) && ((*a1 & 4) != 0) == BYTE2(a2) )
    return 0LL;
  result = 1LL;
  *a1 = v2 & 0xFFFFFFC8 | a2 & 3 | (4 * (BYTE2(a2) & 1 | (4 * (BYTE1(a2) & 3))));
  return result;
}
