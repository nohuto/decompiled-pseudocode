/*
 * XREFs of _CrmActivityRequest@4 @ 0x1000C260
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __stdcall CrmActivityRequest(int a1)
{
  int result; // eax

  result = RtlSubscribeWnfStateChangeNotification(
             a1 + 36,
             *(_DWORD *)(a1 + 28),
             *(_DWORD *)(a1 + 32),
             0,
             CrmpActivityWNFCallback,
             a1,
             0,
             0,
             0);
  if ( result >= 0 )
    return 0;
  return result;
}
