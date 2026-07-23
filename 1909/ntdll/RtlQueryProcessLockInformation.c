/*
 * XREFs of RtlQueryProcessLockInformation @ 0x1800D7930
 * Callers:
 *     RtlQueryProcessDebugInformation @ 0x180075580 (RtlQueryProcessDebugInformation.c)
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x18001A940 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x18001AAF0 (RtlReleaseSRWLockShared.c)
 *     RtlpCommitQueryDebugInfo @ 0x180075B88 (RtlpCommitQueryDebugInfo.c)
 *     memset @ 0x1800A3DC0 (memset.c)
 *     RtlpDeCommitQueryDebugInfo @ 0x1800D7FBC (RtlpDeCommitQueryDebugInfo.c)
 *     RtlIsAnyDebuggerPresent @ 0x1800F901C (RtlIsAnyDebuggerPresent.c)
 */

__int64 __fastcall RtlQueryProcessLockInformation(_QWORD *a1)
{
  char *DebugInfo; // rax
  char *v3; // r14
  _QWORD *v5; // rsi
  _UNKNOWN **v6; // r15
  _UNKNOWN **v7; // r12
  char *v8; // rax
  char *v9; // rdi
  _QWORD *v10; // rcx
  _QWORD *v11; // rcx
  _UNKNOWN **v12; // [rsp+20h] [rbp-78h]
  _QWORD *v13; // [rsp+28h] [rbp-70h]
  bool v14; // [rsp+A8h] [rbp+10h]
  int v15; // [rsp+B0h] [rbp+18h]
  char *v16; // [rsp+B8h] [rbp+20h]

  v15 = 0;
  DebugInfo = RtlpCommitQueryDebugInfo(a1, 8u);
  v3 = DebugInfo;
  if ( !DebugInfo )
    return 3221225495LL;
  *(_DWORD *)DebugInfo = 0;
  v14 = 0;
  RtlAcquireSRWLockShared(&RtlCriticalSectionLock);
  v5 = RtlCriticalSectionList;
  v13 = RtlCriticalSectionList;
  v6 = (_UNKNOWN **)RtlCriticalSectionList;
  v12 = (_UNKNOWN **)RtlCriticalSectionList;
  while ( v6 != &RtlCriticalSectionList )
  {
    v7 = v6 - 2;
    v8 = RtlpCommitQueryDebugInfo(a1, 0x30u);
    v9 = v8;
    v16 = v8;
    if ( !v8 )
    {
      v15 = -1073741801;
      break;
    }
    memset(v8, 0, 0x30uLL);
    *(_QWORD *)v9 = v7[1];
    *((_WORD *)v9 + 4) = *(_WORD *)v7;
    *((_WORD *)v9 + 5) = *((_WORD *)v7 + 1);
    if ( *((_WORD *)v9 + 4) )
    {
      if ( *((_WORD *)v9 + 4) == 1 )
      {
        v11 = v7[1];
        *((_DWORD *)v9 + 7) = *(_DWORD *)(v11[11] + 36LL);
        *((_QWORD *)v9 + 2) = v11[9];
        *((_DWORD *)v16 + 6) = *((_DWORD *)v11 + 17);
        *((_DWORD *)v16 + 10) = *((_DWORD *)v11 + 12);
        *((_DWORD *)v16 + 11) = *((_DWORD *)v11 + 16);
        v6 = v12;
        v5 = v13;
      }
      else if ( RtlIsAnyDebuggerPresent() )
      {
        __debugbreak();
      }
    }
    else
    {
      v10 = v7[1];
      *((_QWORD *)v9 + 2) = v10[2];
      *((_DWORD *)v9 + 6) = *((_DWORD *)v10 + 2);
      *((_DWORD *)v9 + 9) = *((_DWORD *)v10 + 3);
      *((_DWORD *)v9 + 7) = *((_DWORD *)v7 + 9);
      *((_DWORD *)v9 + 8) = *((_DWORD *)v7 + 8);
    }
    ++*(_DWORD *)v3;
    v6 = (_UNKNOWN **)*v6;
    v12 = v6;
    if ( v6 == v5 )
    {
      v15 = -1073741595;
      break;
    }
    if ( v14 )
    {
      v5 = (_QWORD *)*v5;
      v13 = v5;
    }
    v14 = !v14;
  }
  RtlReleaseSRWLockShared(&RtlCriticalSectionLock);
  if ( v15 < 0 )
    RtlpDeCommitQueryDebugInfo(a1, v3, 8LL);
  else
    a1[15] = v3;
  return (unsigned int)v15;
}
