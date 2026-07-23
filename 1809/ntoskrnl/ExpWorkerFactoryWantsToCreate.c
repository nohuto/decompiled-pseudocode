/*
 * XREFs of ExpWorkerFactoryWantsToCreate @ 0x14012B948
 * Callers:
 *     NtWaitForWorkViaWorkerFactory @ 0x140059B50 (NtWaitForWorkViaWorkerFactory.c)
 * Callees:
 *     <none>
 */

bool __fastcall ExpWorkerFactoryWantsToCreate(__int64 a1, int a2)
{
  BOOL v2; // r8d
  __int64 v3; // rdx
  bool result; // al

  result = 0;
  if ( !*(_DWORD *)(a1 + 144) )
  {
    v2 = a2 == 1;
    if ( *(_DWORD *)(a1 + 128) < (unsigned int)(v2 + *(_DWORD *)(a1 + 124)) )
    {
      v3 = *(_QWORD *)(a1 + 16);
      if ( *(_DWORD *)(v3 + 28) <= (unsigned int)v2 && (*(_DWORD *)(*(_QWORD *)(v3 + 8) + 4LL) || *(_DWORD *)(v3 + 24)) )
        return 1;
    }
  }
  return result;
}
