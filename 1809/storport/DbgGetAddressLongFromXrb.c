/*
 * XREFs of DbgGetAddressLongFromXrb @ 0x1C0006148
 * Callers:
 *     RaidAdapterPostScatterGatherExecute @ 0x1C00049A0 (RaidAdapterPostScatterGatherExecute.c)
 *     RaidLogMiniportCompletion @ 0x1C0005F9C (RaidLogMiniportCompletion.c)
 *     RaidCompleteMiniportRequestCallback @ 0x1C0045DB8 (RaidCompleteMiniportRequestCallback.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DbgGetAddressLongFromXrb(__int64 a1)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 224);
  if ( result )
    return (unsigned __int8)BYTE2(*(_DWORD *)(result + 96)) | ((((unsigned __int8)*(_DWORD *)(result + 96) << 8) | (unsigned int)(unsigned __int8)BYTE1(*(_DWORD *)(result + 96))) << 8);
  return result;
}
