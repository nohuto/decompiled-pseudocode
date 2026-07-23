/*
 * XREFs of EtwpCovSampModuleDereference @ 0x1408C7FD4
 * Callers:
 *     EtwpCovSampImageNotify @ 0x1408C7D70 (EtwpCovSampImageNotify.c)
 *     EtwpCovSampProcessCleanup @ 0x1408C83F0 (EtwpCovSampProcessCleanup.c)
 *     EtwpCovSampProcessRemoveModule @ 0x1408C872C (EtwpCovSampProcessRemoveModule.c)
 * Callees:
 *     <none>
 */

signed __int64 __fastcall EtwpCovSampModuleDereference(__int64 a1, __int64 a2)
{
  signed __int64 v2; // rax
  bool v3; // cc
  signed __int64 result; // rax

  v2 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 64), 0xFFFFFFFFFFFFFFFFuLL);
  v3 = v2 <= 1;
  result = v2 - 1;
  if ( v3 )
  {
    if ( result )
      __fastfail(0xEu);
  }
  else if ( result == 1 && !*(_DWORD *)(a2 + 132) )
  {
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 1108));
  }
  return result;
}
