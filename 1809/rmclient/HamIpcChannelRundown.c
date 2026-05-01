/*
 * XREFs of HamIpcChannelRundown @ 0x180005BA8
 * Callers:
 *     HampConnectionDestroy @ 0x180005B58 (HampConnectionDestroy.c)
 *     RmpClientConnectionCleanup @ 0x18000E428 (RmpClientConnectionCleanup.c)
 * Callees:
 *     RmpClientWnfDestroySubscription @ 0x180005C6C (RmpClientWnfDestroySubscription.c)
 *     HampIpcChannelObjectMakeZombieUnsafe @ 0x180010274 (HampIpcChannelObjectMakeZombieUnsafe.c)
 */

__int64 __fastcall HamIpcChannelRundown(__int64 a1)
{
  DWORD CurrentThreadId; // eax
  __int64 v3; // rax
  _QWORD *v4; // rbx
  _QWORD **v5; // rcx
  _QWORD *v6; // rax
  _QWORD *i; // rcx
  __int64 result; // rax

  RtlAcquireSRWLockExclusive(a1 + 8);
  CurrentThreadId = GetCurrentThreadId();
  *(_DWORD *)(a1 + 20) |= 1u;
  *(_DWORD *)(a1 + 16) = CurrentThreadId;
  v3 = *(_QWORD *)(a1 + 32);
  if ( (v3 & 1) != 0 )
  {
    if ( v3 == 1 )
      goto LABEL_13;
    v4 = (_QWORD *)(v3 ^ ((a1 + 24) | 1));
  }
  else
  {
    v4 = *(_QWORD **)(a1 + 32);
  }
  while ( v4 )
  {
    HampIpcChannelObjectMakeZombieUnsafe(v4, a1);
    v5 = (_QWORD **)v4[1];
    v6 = v4;
    if ( v5 )
    {
      v4 = (_QWORD *)v4[1];
      for ( i = *v5; i; i = (_QWORD *)*i )
        v4 = i;
    }
    else
    {
      while ( 1 )
      {
        v4 = (_QWORD *)(v4[2] & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !v4 || (_QWORD *)*v4 == v6 )
          break;
        v6 = v4;
      }
    }
  }
LABEL_13:
  *(_DWORD *)(a1 + 16) = 0;
  result = RtlReleaseSRWLockExclusive(a1 + 8);
  if ( *(_QWORD *)a1 )
    return RmpClientWnfDestroySubscription(*(PVOID *)a1);
  return result;
}
