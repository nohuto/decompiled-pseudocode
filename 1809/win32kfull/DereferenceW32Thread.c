/*
 * XREFs of DereferenceW32Thread @ 0x1C00F91E0
 * Callers:
 *     FreeW32Thread @ 0x1C00F9158 (FreeW32Thread.c)
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
