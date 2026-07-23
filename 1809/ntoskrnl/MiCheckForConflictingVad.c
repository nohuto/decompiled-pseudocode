/*
 * XREFs of MiCheckForConflictingVad @ 0x140088500
 * Callers:
 *     MiCheckForConflictingVadExistence @ 0x1400884D8 (MiCheckForConflictingVadExistence.c)
 *     MiLocateLowestConflictingVad @ 0x1400F2F88 (MiLocateLowestConflictingVad.c)
 *     MmGetImageBase @ 0x1406BB644 (MmGetImageBase.c)
 * Callees:
 *     <none>
 */

__int64 **__fastcall MiCheckForConflictingVad(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  __int64 **result; // rax
  unsigned __int64 v4; // r8

  result = *(__int64 ***)(a1 + 1576);
  v4 = a3 >> 12;
  while ( result )
  {
    if ( v4 < (*((unsigned int *)result + 6) | ((unsigned __int64)*((unsigned __int8 *)result + 32) << 32)) )
    {
      result = (__int64 **)*result;
    }
    else
    {
      if ( a2 >> 12 <= (*((unsigned int *)result + 7) | ((unsigned __int64)*((unsigned __int8 *)result + 33) << 32)) )
        return result;
      result = (__int64 **)result[1];
    }
  }
  return 0LL;
}
