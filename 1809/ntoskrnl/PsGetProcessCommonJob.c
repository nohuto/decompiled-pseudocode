/*
 * XREFs of PsGetProcessCommonJob @ 0x14013F7C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetProcessCommonJob(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  __int64 v3; // rcx

  v2 = *(_QWORD *)(a1 + 944);
  if ( v2 && (v3 = *(_QWORD *)(a2 + 944)) != 0 && *(_QWORD *)(v2 + 1080) == *(_QWORD *)(v3 + 1080) )
    return *(_QWORD *)(v2 + 1080);
  else
    return 0LL;
}
