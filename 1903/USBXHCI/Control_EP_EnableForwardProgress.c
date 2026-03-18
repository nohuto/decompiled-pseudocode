/*
 * XREFs of Control_EP_EnableForwardProgress @ 0x1C0029F10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Control_EP_EnableForwardProgress(__int64 a1)
{
  *(_DWORD *)(a1 + 24) = 0;
  *(_BYTE *)(a1 + 320) = 0;
  return 0LL;
}
