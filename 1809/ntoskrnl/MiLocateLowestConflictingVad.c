/*
 * XREFs of MiLocateLowestConflictingVad @ 0x1400F2F88
 * Callers:
 *     MiUpdateVadBits @ 0x14067AFD0 (MiUpdateVadBits.c)
 * Callees:
 *     MiCheckForConflictingVad @ 0x140088500 (MiCheckForConflictingVad.c)
 */

__int64 **__fastcall MiLocateLowestConflictingVad(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  __int64 **result; // rax
  unsigned __int64 v4; // r11
  unsigned __int64 *v5; // r10
  unsigned __int64 v6; // rdx
  unsigned __int64 *v7; // rax
  unsigned __int64 i; // rax
  unsigned __int64 j; // rdx

  result = MiCheckForConflictingVad(a1, a2, a3);
  v5 = (unsigned __int64 *)result;
  if ( result )
  {
    while ( 1 )
    {
      v6 = *v5;
      v7 = v5;
      if ( *v5 )
      {
        for ( i = *(_QWORD *)(v6 + 8); i; i = *(_QWORD *)(i + 8) )
          v6 = i;
      }
      else
      {
        for ( j = v5[2]; ; j = *(_QWORD *)(v6 + 16) )
        {
          v6 = j & 0xFFFFFFFFFFFFFFFCuLL;
          if ( !v6 || *(unsigned __int64 **)(v6 + 8) == v7 )
            break;
          v7 = (unsigned __int64 *)v6;
        }
      }
      if ( !v6
        || (((*(unsigned int *)(v6 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v6 + 33) << 32)) << 12) | 0xFFF) < v4 )
      {
        break;
      }
      v5 = (unsigned __int64 *)v6;
    }
    return (__int64 **)v5;
  }
  return result;
}
