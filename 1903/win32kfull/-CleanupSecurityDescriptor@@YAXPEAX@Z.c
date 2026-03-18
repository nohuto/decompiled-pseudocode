/*
 * XREFs of ?CleanupSecurityDescriptor@@YAXPEAX@Z @ 0x1C015DE40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CleanupSecurityDescriptor(void *a1, __int64 a2)
{
  if ( a1 )
  {
    LOBYTE(a2) = 1;
    SeReleaseSecurityDescriptor(a1, a2, 0LL);
  }
}
