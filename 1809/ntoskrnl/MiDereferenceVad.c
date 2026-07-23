/*
 * XREFs of MiDereferenceVad @ 0x1402CB2B4
 * Callers:
 *     MiUnlockAndDereferenceNestedVad @ 0x1402CB304 (MiUnlockAndDereferenceNestedVad.c)
 *     NtAreMappedFilesTheSame @ 0x140705F40 (NtAreMappedFilesTheSame.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiDereferenceVad(__int64 a1)
{
  __int64 result; // rax

  result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 36), 0xFFFFFFFF);
  if ( (_DWORD)result != 1 || (*(_DWORD *)(a1 + 48) & 0x20000000) == 0 )
    return 0LL;
  return result;
}
