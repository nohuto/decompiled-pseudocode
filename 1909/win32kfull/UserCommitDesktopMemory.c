/*
 * XREFs of UserCommitDesktopMemory @ 0x1C0104300
 * Callers:
 *     <none>
 * Callees:
 *     MapDesktop @ 0x1C0021C00 (MapDesktop.c)
 *     GetDesktopView @ 0x1C0021DE0 (GetDesktopView.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall UserCommitDesktopMemory(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdx
  _QWORD *v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 result; // rax
  __int64 v15; // r9
  _QWORD *i; // rcx
  __int64 v17; // rcx
  __int64 j; // rbx
  int v19; // edx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 CurrentProcessWin32Process; // rax
  _DWORD v23[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 CurrentProcess; // [rsp+28h] [rbp-20h]
  __int64 v25; // [rsp+30h] [rbp-18h]
  int v26; // [rsp+38h] [rbp-10h]
  int v27; // [rsp+3Ch] [rbp-Ch]
  int v28; // [rsp+68h] [rbp+20h] BYREF

  if ( PsIsSystemThread(KeGetCurrentThread()) )
  {
    v15 = grpWinStaList;
    if ( !grpWinStaList )
      return 3221225495LL;
    do
    {
      for ( i = *(_QWORD **)(v15 + 16); i; i = (_QWORD *)i[4] )
      {
        if ( i[2] == a1 )
          goto LABEL_14;
      }
      v15 = *(_QWORD *)(v15 + 8);
    }
    while ( v15 );
LABEL_14:
    if ( !v15 )
      return 3221225495LL;
    result = CommitReadOnlyMemory(i[15], a3, (unsigned int)(*(_DWORD *)a2 - a1), &v28);
    if ( (int)result >= 0 )
      *a2 += v28;
  }
  else
  {
    v9 = *(unsigned int *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v6, v7) + 1224);
    if ( (v9 & 0x40) == 0 )
    {
      v11 = *(_QWORD **)(PsGetCurrentProcessWin32Process(v9, v8) + 696);
      if ( !v11 )
        goto LABEL_19;
      do
      {
        if ( *(_QWORD *)(v11[1] + 16LL) == a1 )
          break;
        v11 = (_QWORD *)*v11;
      }
      while ( v11 );
      if ( !v11 )
      {
LABEL_19:
        v17 = grpWinStaList;
        if ( !grpWinStaList )
          return 3221225495LL;
        do
        {
          for ( j = *(_QWORD *)(v17 + 16); j; j = *(_QWORD *)(j + 32) )
          {
            if ( *(_QWORD *)(j + 16) == a1 )
              goto LABEL_25;
          }
          v17 = *(_QWORD *)(v17 + 8);
        }
        while ( v17 );
LABEL_25:
        if ( !v17 )
          return 3221225495LL;
        v23[1] = 0;
        v23[0] = 1;
        v26 = 0;
        CurrentProcess = PsGetCurrentProcess(v17, v10, v12, v13);
        v25 = j;
        v27 = 1;
        if ( (int)MapDesktop((__int64)v23, v19) < 0 )
          return 3221225495LL;
        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v21, v20);
        if ( !GetDesktopView(CurrentProcessWin32Process, j) )
          return 3221225495LL;
      }
    }
    return MmCommitSessionMappedView(*a2, *a3);
  }
  return result;
}
