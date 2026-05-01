/*
 * XREFs of _RmpClientCallbackCompareToPayload@8 @ 0x10011CB0
 * Callers:
 *     <none>
 * Callees:
 *     _RmpClientCallbackHandleCompare@16 @ 0x10011D3B (_RmpClientCallbackHandleCompare@16.c)
 */

int __stdcall RmpClientCallbackCompareToPayload(_DWORD *a1, int a2)
{
  int v2; // ecx
  int v3; // edx

  if ( *a1 )
  {
    v2 = a1[4];
    v3 = a1[5];
  }
  else
  {
    v2 = a1[2];
    v3 = a1[3];
  }
  return RmpClientCallbackHandleCompare(v2, v3, *(_DWORD *)(a2 + 24), *(_DWORD *)(a2 + 28));
}
