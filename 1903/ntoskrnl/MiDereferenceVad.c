/*
 * XREFs of MiDereferenceVad @ 0x1402E55B0
 * Callers:
 *     MiUnlockAndDereferenceNestedVad @ 0x1402E563C (MiUnlockAndDereferenceNestedVad.c)
 *     NtAreMappedFilesTheSame @ 0x14072B6B0 (NtAreMappedFilesTheSame.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiDereferenceVad(__int64 a1)
{
  return _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 36), 0xFFFFFFFF) == 1
      && (*(_DWORD *)(a1 + 48) & 4) != 0;
}
