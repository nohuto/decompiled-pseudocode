/*
 * XREFs of ?GetEffectiveButtonRoutingPolicy@PenEventsDispatcherPrincipal@@AEAA?AW4RoutingPolicy@Input@Devices@Internal@Windows@@XZ @ 0x180032138
 * Callers:
 *     ?OnPenEventsKernelMessage@PenEventsDispatcherPrincipal@@AEAAXPEBU_MIT_PEN_EVENT_MESSAGE@@@Z @ 0x180032A14 (-OnPenEventsKernelMessage@PenEventsDispatcherPrincipal@@AEAAXPEBU_MIT_PEN_EVENT_MESSAGE@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PenEventsDispatcherPrincipal::GetEffectiveButtonRoutingPolicy(__int64 a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( *(_BYTE *)(a1 + 188) )
    return *(unsigned int *)(a1 + 192);
  return result;
}
