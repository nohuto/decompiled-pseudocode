/*
 * XREFs of DereferenceW32Thread @ 0x1C001F180
 * Callers:
 *     W32pThreadCallout @ 0x1C001E640 (W32pThreadCallout.c)
 * Callees:
 *     <none>
 */

LONG_PTR __fastcall DereferenceW32Thread(__int64 a1)
{
  void *v1; // rbx

  v1 = *(void **)a1;
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 8), 0xFFFFFFFF) == 1 )
    UserDeleteW32Thread();
  return ObfDereferenceObject(v1);
}
