/*
 * XREFs of SmpMarkThreadBusy @ 0x14000447C
 * Callers:
 *     SmpApiCallback @ 0x140003880 (SmpApiCallback.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SmpMarkThreadBusy(__int64 a1)
{
  int v2; // esi
  unsigned int v3; // edi

  v2 = 0;
  RtlAcquireSRWLockExclusive(a1);
  if ( (unsigned int)(++*(_DWORD *)(a1 + 20) + 1) > *(_DWORD *)(a1 + 16) )
  {
    v3 = *(_DWORD *)(a1 + 20) + 1;
    v2 = TpSetPoolMinThreads(*(_QWORD *)(a1 + 8), v3);
    if ( v2 < 0 )
      --*(_DWORD *)(a1 + 20);
    else
      *(_DWORD *)(a1 + 16) = v3;
  }
  RtlReleaseSRWLockExclusive(a1);
  return (unsigned int)v2;
}
