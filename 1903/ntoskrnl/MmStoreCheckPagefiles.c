/*
 * XREFs of MmStoreCheckPagefiles @ 0x14077163C
 * Callers:
 *     ?SmFirstTimeInit@@YAJKK@Z @ 0x140107C6C (-SmFirstTimeInit@@YAJKK@Z.c)
 *     MmStoreRegister @ 0x140770384 (MmStoreRegister.c)
 * Callees:
 *     <none>
 */

__int64 MmStoreCheckPagefiles()
{
  int v0; // r8d
  __int64 result; // rax
  char *i; // r10

  v0 = 0;
  if ( Count )
  {
    result = 1LL;
    for ( i = (char *)&unk_14046A360; (*(_WORD *)(*(_QWORD *)i + 204LL) & 0x400) == 0; i += 8 )
    {
      if ( ++v0 >= Count )
        return result;
    }
  }
  return 0LL;
}
