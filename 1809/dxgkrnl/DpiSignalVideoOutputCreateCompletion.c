/*
 * XREFs of DpiSignalVideoOutputCreateCompletion @ 0x1C0044F74
 * Callers:
 *     DpiPdoIsChildConnected @ 0x1C0144E00 (DpiPdoIsChildConnected.c)
 *     DpiPdoAddPdo @ 0x1C027449C (DpiPdoAddPdo.c)
 * Callees:
 *     <none>
 */

LONG __fastcall DpiSignalVideoOutputCreateCompletion(__int64 a1)
{
  __int64 v1; // rcx
  LONG result; // eax

  v1 = *(_QWORD *)(a1 + 64);
  result = _InterlockedExchangeAdd((volatile signed __int32 *)(v1 + 3584), 0xFFFFFFFF);
  if ( result == 1 )
    return KeSetEvent((PRKEVENT)(v1 + 3592), 0, 0);
  return result;
}
