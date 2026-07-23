/*
 * XREFs of MiCloneNoChange @ 0x14085061C
 * Callers:
 *     MiAllocateChildVads @ 0x14085EC58 (MiAllocateChildVads.c)
 * Callees:
 *     MiAddSecureEntry @ 0x1405F4490 (MiAddSecureEntry.c)
 */

__int64 __fastcall MiCloneNoChange(__int64 a1, __int64 a2)
{
  __int64 *i; // r8
  unsigned int v4; // edx
  int v5; // r9d
  int v7; // eax
  char v8; // cl

  for ( i = *(__int64 **)(a1 + 56); ; i = (__int64 *)*i )
  {
    if ( !i )
      return 0LL;
    if ( *((_DWORD *)i + 16) == 2 )
    {
      v4 = *((_DWORD *)i + 2);
      if ( (v4 & 0x80u) == 0 )
      {
        v5 = (i[1] & 4) != 0 ? 0x80000000 : 0;
        if ( (v4 & 8) == 0 )
          goto LABEL_8;
        if ( (v4 & 4) != 0 || (v4 & 3) == 0 )
          break;
      }
    }
LABEL_9:
    ;
  }
  v5 |= 1u;
LABEL_8:
  if ( !v5 )
    goto LABEL_9;
  v7 = (v4 >> 5) & 1;
  v8 = v7 | 4;
  if ( (v4 & 0x40) == 0 )
    v8 = v7;
  if ( MiAddSecureEntry(
         a2,
         (*(unsigned int *)(a2 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a2 + 32) << 32)) << 12,
         ((*(unsigned int *)(a2 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a2 + 33) << 32)) << 12) | 0xFFF,
         v5,
         v8) )
  {
    return 0LL;
  }
  return 3221225626LL;
}
