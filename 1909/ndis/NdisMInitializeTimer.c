/*
 * XREFs of NdisMInitializeTimer @ 0x1C003E740
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall NdisMInitializeTimer(
        PNDIS_MINIPORT_TIMER Timer,
        NDIS_HANDLE MiniportAdapterHandle,
        PNDIS_TIMER_FUNCTION TimerFunction,
        PVOID FunctionContext)
{
  void (__fastcall *v8)(__int64, __int64); // rdx

  KeInitializeTimer(&Timer->Timer);
  Timer->Miniport = (_NDIS_MINIPORT_BLOCK *)MiniportAdapterHandle;
  Timer->MiniportTimerFunction = (void (__fastcall *)(void *, void *, void *, void *))TimerFunction;
  v8 = ndisMTimerDpcX;
  Timer->MiniportTimerContext = FunctionContext;
  if ( (*((_DWORD *)MiniportAdapterHandle + 30) & 0x40000) == 0 )
    v8 = (void (__fastcall *)(__int64, __int64))ndisMTimerDpc;
  KeInitializeDpc(&Timer->Dpc, (PKDEFERRED_ROUTINE)v8, Timer);
}
