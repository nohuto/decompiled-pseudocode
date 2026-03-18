/*
 * XREFs of MmGetSessionObjectByProcess @ 0x1402CAA74
 * Callers:
 *     PspEstablishDfssHierarchy @ 0x1408C7A50 (PspEstablishDfssHierarchy.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetSessionObjectByProcess(__int64 a1)
{
  __int64 v1; // rax

  v1 = *(_QWORD *)(a1 + 1024);
  if ( !v1 || (*(_DWORD *)(a1 + 1788) & 0x1000) != 0 )
    return 0LL;
  else
    return *(_QWORD *)(v1 + 72);
}
