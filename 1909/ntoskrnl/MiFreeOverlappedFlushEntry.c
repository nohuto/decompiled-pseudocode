/*
 * XREFs of MiFreeOverlappedFlushEntry @ 0x1402C9EB4
 * Callers:
 *     MiFlushComplete @ 0x1402C9DA0 (MiFlushComplete.c)
 * Callees:
 *     KeSetEvent @ 0x140067990 (KeSetEvent.c)
 *     MiFlushRelease @ 0x1400717B4 (MiFlushRelease.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

LONG __fastcall MiFreeOverlappedFlushEntry(__int64 **P)
{
  struct _KEVENT *v1; // rdi
  __int64 *v3; // rcx

  v1 = (struct _KEVENT *)P[4];
  MiFlushRelease(**P, (ULONG_PTR)*P, (ULONG_PTR)P[1]);
  v3 = P[5];
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
  *(_DWORD *)P[3] = *((_DWORD *)P + 5);
  if ( *((int *)P + 5) < 0 )
    P[3][1] = 0LL;
  ExFreePoolWithTag(P, 0);
  return KeSetEvent(v1, 0, 0);
}
