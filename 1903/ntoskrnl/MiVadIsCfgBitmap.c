/*
 * XREFs of MiVadIsCfgBitmap @ 0x14069506C
 * Callers:
 *     MiLockVadRange @ 0x140694EA0 (MiLockVadRange.c)
 *     NtAreMappedFilesTheSame @ 0x14072B6B0 (NtAreMappedFilesTheSame.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiVadIsCfgBitmap(__int64 a1)
{
  int v1; // r8d
  _QWORD *i; // rax

  v1 = 0;
  for ( i = (_QWORD *)(*(_QWORD *)&KeGetCurrentThread()->ApcState.Process[1].IdealNode[14] + 456LL); *i != a1; i += 4 )
  {
    if ( (unsigned int)++v1 >= 2 )
      return 0LL;
  }
  return 1LL;
}
