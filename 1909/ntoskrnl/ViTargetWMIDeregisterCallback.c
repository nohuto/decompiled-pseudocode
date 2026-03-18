/*
 * XREFs of ViTargetWMIDeregisterCallback @ 0x1409749F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ViTargetWMIDeregisterCallback(__int64 a1, __int64 a2)
{
  __int64 v2; // rax

  v2 = *(_QWORD *)(a1 + 56);
  if ( !v2 || *(_QWORD *)(v2 + 8) != a2 )
    return 1LL;
  *(_QWORD *)(v2 + 8) = 0LL;
  ++dword_1409C933C;
  return 0LL;
}
