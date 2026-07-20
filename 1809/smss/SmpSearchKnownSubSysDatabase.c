/*
 * XREFs of SmpSearchKnownSubSysDatabase @ 0x140004250
 * Callers:
 *     SmpExecPgm @ 0x140002850 (SmpExecPgm.c)
 *     SmpSbCreateSession @ 0x140002BB0 (SmpSbCreateSession.c)
 *     wmain @ 0x1400031DC (wmain.c)
 *     SmpHandleConnectionRequest @ 0x140003DC0 (SmpHandleConnectionRequest.c)
 * Callees:
 *     SmpUnlockKnownSubSysList @ 0x140004318 (SmpUnlockKnownSubSysList.c)
 */

volatile signed __int32 *__fastcall SmpSearchKnownSubSysDatabase(int a1, __int64 a2)
{
  volatile signed __int32 *v3; // rbx
  int *v4; // rcx
  _QWORD **v6; // r9
  _QWORD *i; // rdx
  volatile signed __int32 *v9; // r8
  int v10; // [rsp+20h] [rbp-18h] BYREF
  __int64 v11; // [rsp+28h] [rbp-10h]

  v3 = 0LL;
  v4 = *(int **)(a2 + 8);
  if ( !v4 )
  {
    v10 = 1;
    v11 = SmpKnownSubSysTable + 24LL * (a1 & 0x1F);
    RtlAcquireSRWLockShared(v11 + 16);
    v4 = &v10;
  }
  v6 = (_QWORD **)*((_QWORD *)v4 + 1);
  for ( i = *v6; i != v6; i = (_QWORD *)*i )
  {
    v9 = (volatile signed __int32 *)(i - 9);
    if ( *((_DWORD *)i - 2) == a1 )
    {
      if ( *(_DWORD *)a2 )
      {
        if ( *(_DWORD *)a2 == 1 )
        {
          if ( *((_DWORD *)v9 + 6) != *(_DWORD *)(a2 + 16) )
            v9 = v3;
          v3 = v9;
        }
      }
      else if ( *((_QWORD *)v9 + 6) == *(_QWORD *)(a2 + 16) )
      {
        v3 = (volatile signed __int32 *)(i - 9);
      }
      if ( v3 )
      {
        _InterlockedIncrement(v3);
        break;
      }
    }
  }
  if ( v4 == &v10 )
    SmpUnlockKnownSubSysList(v4);
  return v3;
}
