/*
 * XREFs of TpCallbackSetEventOnCompletion @ 0x1800844E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __cdecl TpCallbackSetEventOnCompletion(PTP_CALLBACK_INSTANCE Instance, HANDLE Event)
{
  __int64 v2; // r8

  if ( !Instance || (char *)Event - 1 > (char *)0xFFFFFFFFFFFFFFFDLL || *((_DWORD *)Instance + 37) )
  {
    sub_18010EFC8(Instance, Event, v2);
  }
  else
  {
    *((_DWORD *)Instance + 36) |= 4u;
    *((_DWORD *)Instance + 37) = (_DWORD)Event;
  }
}
