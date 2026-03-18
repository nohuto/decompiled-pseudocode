/*
 * XREFs of UserCommitDesktopMemory @ 0x1C0121370
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     MapDesktop @ 0x1C00B24C0 (MapDesktop.c)
 *     GetDesktopView @ 0x1C00B2670 (GetDesktopView.c)
 */

__int64 __fastcall UserCommitDesktopMemory(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  __int64 v6; // rdx
  __int64 v7; // r9
  _QWORD *j; // rcx
  __int64 result; // rax
  __int64 v10; // rcx
  __int64 v11; // rdx
  _QWORD *v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rcx
  __int64 i; // rbx
  __int64 v17; // rcx
  __int64 CurrentProcessWin32Process; // rax
  int v19; // [rsp+20h] [rbp-28h] BYREF
  __int64 CurrentProcess; // [rsp+28h] [rbp-20h]
  __int64 v21; // [rsp+30h] [rbp-18h]
  int v22; // [rsp+38h] [rbp-10h]
  int v23; // [rsp+3Ch] [rbp-Ch]
  int v24; // [rsp+68h] [rbp+20h] BYREF

  if ( !PsIsSystemThread(KeGetCurrentThread()) )
  {
    v10 = *(unsigned int *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v6) + 1212);
    if ( (v10 & 2) != 0 )
      return MmCommitSessionMappedView(*a2, *a3);
    v12 = *(_QWORD **)(PsGetCurrentProcessWin32Process(v10) + 704);
    if ( v12 )
    {
      do
      {
        if ( *(_QWORD *)(v12[1] + 16LL) == a1 )
          break;
        v12 = (_QWORD *)*v12;
      }
      while ( v12 );
      if ( v12 )
        return MmCommitSessionMappedView(*a2, *a3);
    }
    v15 = grpWinStaList;
    if ( grpWinStaList )
    {
      do
      {
        for ( i = *(_QWORD *)(v15 + 16); i; i = *(_QWORD *)(i + 32) )
        {
          if ( *(_QWORD *)(i + 16) == a1 )
            goto LABEL_22;
        }
        v15 = *(_QWORD *)(v15 + 8);
      }
      while ( v15 );
LABEL_22:
      if ( v15 )
      {
        v19 = 1;
        v22 = 0;
        CurrentProcess = PsGetCurrentProcess(v15, v11, v13, v14);
        v21 = i;
        v23 = 1;
        if ( (int)MapDesktop((__int64)&v19) >= 0 )
        {
          CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v17);
          if ( GetDesktopView(CurrentProcessWin32Process, i) )
            return MmCommitSessionMappedView(*a2, *a3);
        }
      }
    }
    return 3221225495LL;
  }
  v7 = grpWinStaList;
  if ( !grpWinStaList )
    return 3221225495LL;
  do
  {
    for ( j = *(_QWORD **)(v7 + 16); j; j = (_QWORD *)j[4] )
    {
      if ( j[2] == a1 )
        goto LABEL_8;
    }
    v7 = *(_QWORD *)(v7 + 8);
  }
  while ( v7 );
LABEL_8:
  if ( !v7 )
    return 3221225495LL;
  result = CommitReadOnlyMemory(j[15], a3, (unsigned int)(*(_DWORD *)a2 - a1), &v24);
  if ( (int)result >= 0 )
    *a2 += v24;
  return result;
}
