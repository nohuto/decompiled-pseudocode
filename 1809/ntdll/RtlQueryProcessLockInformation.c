/*
 * XREFs of RtlQueryProcessLockInformation @ 0x1800D99E0
 * Callers:
 *     RtlQueryProcessDebugInformation @ 0x18007D750 (RtlQueryProcessDebugInformation.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x180009E40 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180009F00 (RtlAcquireSRWLockShared.c)
 *     RtlpCommitQueryDebugInfo @ 0x18007DD5C (RtlpCommitQueryDebugInfo.c)
 *     memset @ 0x1800A7100 (memset.c)
 *     RtlpDeCommitQueryDebugInfo @ 0x1800DA06C (RtlpDeCommitQueryDebugInfo.c)
 *     RtlIsAnyDebuggerPresent @ 0x1800FB37C (RtlIsAnyDebuggerPresent.c)
 */

__int64 __fastcall RtlQueryProcessLockInformation(_QWORD *a1)
{
  char *DebugInfo; // rax
  char *v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  char *v6; // r14
  _QWORD *v8; // rsi
  _UNKNOWN **v9; // r15
  _UNKNOWN **v10; // r12
  char *v11; // rax
  char *v12; // rdi
  _QWORD *v13; // rcx
  _QWORD *v14; // rcx
  _UNKNOWN **v15; // [rsp+20h] [rbp-78h]
  _QWORD *v16; // [rsp+28h] [rbp-70h]
  bool v17; // [rsp+A8h] [rbp+10h]
  int v18; // [rsp+B0h] [rbp+18h]
  char *v19; // [rsp+B8h] [rbp+20h]

  v18 = 0;
  DebugInfo = RtlpCommitQueryDebugInfo(a1, 8u);
  v6 = DebugInfo;
  if ( !DebugInfo )
    return 3221225495LL;
  *(_DWORD *)DebugInfo = 0;
  v17 = 0;
  RtlAcquireSRWLockShared(&RtlCriticalSectionLock, v3, v4, v5);
  v8 = RtlCriticalSectionList;
  v16 = RtlCriticalSectionList;
  v9 = (_UNKNOWN **)RtlCriticalSectionList;
  v15 = (_UNKNOWN **)RtlCriticalSectionList;
  while ( v9 != &RtlCriticalSectionList )
  {
    v10 = v9 - 2;
    v11 = RtlpCommitQueryDebugInfo(a1, 0x30u);
    v12 = v11;
    v19 = v11;
    if ( !v11 )
    {
      v18 = -1073741801;
      break;
    }
    memset(v11, 0, 0x30uLL);
    *(_QWORD *)v12 = v10[1];
    *((_WORD *)v12 + 4) = *(_WORD *)v10;
    *((_WORD *)v12 + 5) = *((_WORD *)v10 + 1);
    if ( *((_WORD *)v12 + 4) )
    {
      if ( *((_WORD *)v12 + 4) == 1 )
      {
        v14 = v10[1];
        *((_DWORD *)v12 + 7) = *(_DWORD *)(v14[11] + 36LL);
        *((_QWORD *)v12 + 2) = v14[9];
        *((_DWORD *)v19 + 6) = *((_DWORD *)v14 + 17);
        *((_DWORD *)v19 + 10) = *((_DWORD *)v14 + 12);
        *((_DWORD *)v19 + 11) = *((_DWORD *)v14 + 16);
        v9 = v15;
        v8 = v16;
      }
      else if ( (unsigned __int8)RtlIsAnyDebuggerPresent() )
      {
        __debugbreak();
      }
    }
    else
    {
      v13 = v10[1];
      *((_QWORD *)v12 + 2) = v13[2];
      *((_DWORD *)v12 + 6) = *((_DWORD *)v13 + 2);
      *((_DWORD *)v12 + 9) = *((_DWORD *)v13 + 3);
      *((_DWORD *)v12 + 7) = *((_DWORD *)v10 + 9);
      *((_DWORD *)v12 + 8) = *((_DWORD *)v10 + 8);
    }
    ++*(_DWORD *)v6;
    v9 = (_UNKNOWN **)*v9;
    v15 = v9;
    if ( v9 == v8 )
    {
      v18 = -1073741595;
      break;
    }
    if ( v17 )
    {
      v8 = (_QWORD *)*v8;
      v16 = v8;
    }
    v17 = !v17;
  }
  RtlReleaseSRWLockShared(&RtlCriticalSectionLock);
  if ( v18 < 0 )
    RtlpDeCommitQueryDebugInfo(a1, v6, 8LL);
  else
    a1[15] = v6;
  return (unsigned int)v18;
}
