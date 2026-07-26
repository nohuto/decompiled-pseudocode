/*
 * XREFs of NdisGetReceivedPacket @ 0x1C0097E70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NdisGetReceivedPacket(__int64 a1, __int64 a2)
{
  __int64 v2; // r9

  v2 = 0LL;
  if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 1600LL) + 8LL * KeGetPcr()->Prcb.Number) == a2 && a2 )
    return *(_QWORD *)(*(unsigned __int16 *)(a2 + 42) + a2 + 96);
  return v2;
}
