/*
 * XREFs of VidSchIsContextFlushable @ 0x1C00CB3D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall VidSchIsContextFlushable(__int64 a1)
{
  return !*(_DWORD *)(a1 + 788)
      && (!*(_DWORD *)(a1 + 792) || !*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 104) + 32LL) + 736LL));
}
