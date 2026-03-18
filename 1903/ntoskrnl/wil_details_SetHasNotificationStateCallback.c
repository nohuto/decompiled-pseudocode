/*
 * XREFs of wil_details_SetHasNotificationStateCallback @ 0x1402A3A60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall wil_details_SetHasNotificationStateCallback(_DWORD *a1, char a2)
{
  __int64 result; // rax

  if ( ((*a1 >> 4) & 3) == a2 )
    return 0LL;
  result = 1LL;
  *a1 ^= ((unsigned __int8)*a1 ^ (unsigned __int8)(16 * a2)) & 0x30;
  return result;
}
