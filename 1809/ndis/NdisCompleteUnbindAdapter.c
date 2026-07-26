/*
 * XREFs of NdisCompleteUnbindAdapter @ 0x1C00EA3D0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 */

void __fastcall NdisCompleteUnbindAdapter(__int64 a1, int a2)
{
  if ( (unsigned __int8)byte_1C00A0255 >= 4u )
    WPP_SF_q(0x2Bu, &WPP_5d6c07f306e13ea2a30515e9b6bd8675_Traceguids, a1);
  *(_DWORD *)(a1 + 88) = a2;
  KeSetEvent((PRKEVENT)(a1 + 96), 0, 0);
  if ( (unsigned __int8)byte_1C00A0255 >= 4u )
    WPP_SF_q(0x2Cu, &WPP_5d6c07f306e13ea2a30515e9b6bd8675_Traceguids, a1);
}
