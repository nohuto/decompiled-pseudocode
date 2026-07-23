/*
 * XREFs of MiUpdateVadBits @ 0x14067AFD0
 * Callers:
 *     MiExpandVadBitMap @ 0x14067AE8C (MiExpandVadBitMap.c)
 *     MiExpandVadBitMapDown @ 0x140859C74 (MiExpandVadBitMapDown.c)
 * Callees:
 *     MiLocateLowestConflictingVad @ 0x1400F2F88 (MiLocateLowestConflictingVad.c)
 *     MiSetVadBits @ 0x140859D74 (MiSetVadBits.c)
 */

unsigned __int64 __fastcall MiUpdateVadBits(unsigned __int64 a1, unsigned __int64 a2)
{
  bool v2; // cf
  struct _KTHREAD *CurrentThread; // rcx
  unsigned __int64 v5; // rdi
  unsigned __int64 result; // rax
  unsigned __int64 v7; // rbx
  __int64 ****v8; // rcx
  __int64 ***v9; // rcx

  v2 = a2 < a1;
  CurrentThread = KeGetCurrentThread();
  v5 = 0x7FFFFFFEFFFFLL;
  if ( !v2 )
    v5 = a2;
  result = (unsigned __int64)MiLocateLowestConflictingVad((__int64)CurrentThread->ApcState.Process, a1, v5 - 1);
  v7 = result;
  if ( result )
  {
    do
    {
      MiSetVadBits(v7);
      v8 = *(__int64 *****)(v7 + 8);
      result = v7;
      if ( v8 )
      {
        v7 = *(_QWORD *)(v7 + 8);
        v9 = *v8;
        if ( v9 )
        {
          do
          {
            result = (unsigned __int64)*v9;
            v7 = (unsigned __int64)v9;
            v9 = (__int64 ***)result;
          }
          while ( result );
        }
      }
      else
      {
        while ( 1 )
        {
          v7 = *(_QWORD *)(v7 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
          if ( !v7 || *(_QWORD *)v7 == result )
            break;
          result = v7;
        }
      }
      if ( !v7 )
        break;
      result = *(unsigned int *)(v7 + 24);
    }
    while ( (result | ((unsigned __int64)*(unsigned __int8 *)(v7 + 32) << 32)) << 12 < v5 );
  }
  return result;
}
