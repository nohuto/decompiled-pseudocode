/*
 * XREFs of InImmersiveApplicationBand @ 0x1C0240630
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C0060288 (xxxRealDefWindowProc.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall InImmersiveApplicationBand(__int64 a1)
{
  return (unsigned int)(*(_DWORD *)(*(_QWORD *)(a1 + 40) + 236LL) - 8) <= 3;
}
