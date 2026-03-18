/*
 * XREFs of UserCommitDesktopMemory @ 0x1C0100F90
 * Callers:
 *     <none>
 * Callees:
 *     MapDesktop @ 0x1C0011B90 (MapDesktop.c)
 *     GetDesktopView @ 0x1C0011D20 (GetDesktopView.c)
 */

__int64 __fastcall UserCommitDesktopMemory(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v7; // rcx
  __int64 v8; // rdx
  _QWORD *v9; // rcx
  __int64 result; // rax
  __int64 v11; // rdx
  _QWORD *i; // rcx
  __int64 v13; // rcx
  __int64 j; // rbx
  __int64 v15; // rcx
  __int64 CurrentProcessWin32Process; // rax
  int v17; // [rsp+20h] [rbp-28h] BYREF
  __int64 CurrentProcess; // [rsp+28h] [rbp-20h]
  __int64 v19; // [rsp+30h] [rbp-18h]
  int v20; // [rsp+38h] [rbp-10h]
  int v21; // [rsp+3Ch] [rbp-Ch]
  int v22; // [rsp+50h] [rbp+8h] BYREF

  CurrentThread = KeGetCurrentThread();
  if ( *a2 < (unsigned __int64)(a1 + 0x4000) )
    return 0LL;
  if ( PsIsSystemThread(CurrentThread) )
  {
    v11 = grpWinStaList;
    if ( !grpWinStaList )
      return 3221225495LL;
    do
    {
      for ( i = *(_QWORD **)(v11 + 16); i; i = (_QWORD *)i[4] )
      {
        if ( i[2] == a1 )
          goto LABEL_15;
      }
      v11 = *(_QWORD *)(v11 + 8);
    }
    while ( v11 );
LABEL_15:
    if ( !v11 )
      return 3221225495LL;
    result = CommitReadOnlyMemory(i[15], a3, (unsigned int)(*(_DWORD *)a2 - a1), &v22);
    if ( (int)result >= 0 )
      *a2 += v22;
  }
  else
  {
    v9 = *(_QWORD **)(PsGetCurrentProcessWin32Process(v7) + 696);
    if ( !v9 )
      goto LABEL_32;
    do
    {
      if ( *(_QWORD *)(v9[1] + 16LL) == a1 )
        break;
      v9 = (_QWORD *)*v9;
    }
    while ( v9 );
    if ( !v9 )
    {
LABEL_32:
      v13 = grpWinStaList;
      if ( !grpWinStaList )
        return 3221225495LL;
      do
      {
        for ( j = *(_QWORD *)(v13 + 16); j; j = *(_QWORD *)(j + 32) )
        {
          if ( *(_QWORD *)(j + 16) == a1 )
            goto LABEL_26;
        }
        v13 = *(_QWORD *)(v13 + 8);
      }
      while ( v13 );
LABEL_26:
      if ( !v13 )
        return 3221225495LL;
      v17 = 1;
      v20 = 0;
      CurrentProcess = PsGetCurrentProcess(v13, v8);
      v19 = j;
      v21 = 1;
      if ( (int)MapDesktop((__int64)&v17) < 0 )
        return 3221225495LL;
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v15);
      if ( !GetDesktopView(CurrentProcessWin32Process, j) )
        return 3221225495LL;
    }
    return MmCommitSessionMappedView(*a2, *a3);
  }
  return result;
}
