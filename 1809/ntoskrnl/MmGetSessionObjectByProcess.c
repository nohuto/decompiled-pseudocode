/*
 * XREFs of MmGetSessionObjectByProcess @ 0x1402B55F8
 * Callers:
 *     PspEstablishDfssHierarchy @ 0x14088AD70 (PspEstablishDfssHierarchy.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetSessionObjectByProcess(__int64 a1)
{
  __int64 v1; // rax

  v1 = *(_QWORD *)(a1 + 1024);
  if ( !v1 || (*(_DWORD *)(a1 + 1740) & 0x1000) != 0 )
    return 0LL;
  else
    return *(_QWORD *)(v1 + 72);
}
