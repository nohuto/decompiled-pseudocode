/*
 * XREFs of MmStoreCheckPagefiles @ 0x14074CF5C
 * Callers:
 *     ?SmFirstTimeInit@@YAJKK@Z @ 0x1400E3E88 (-SmFirstTimeInit@@YAJKK@Z.c)
 *     MmStoreRegister @ 0x14074BD2C (MmStoreRegister.c)
 * Callees:
 *     <none>
 */

__int64 MmStoreCheckPagefiles()
{
  int v0; // r8d
  __int64 result; // rax
  _QWORD *i; // r10

  v0 = 0;
  if ( Count )
  {
    result = 1LL;
    for ( i = qword_14043E520; (*(_WORD *)(*i + 204LL) & 0x400) == 0; ++i )
    {
      if ( ++v0 >= Count )
        return result;
    }
  }
  return 0LL;
}
